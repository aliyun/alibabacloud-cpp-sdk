// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELINDEXINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELINDEXINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelIndexInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelIndexInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelIndexInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelIndexInfoResponseBody() = default ;
    HotelIndexInfoResponseBody(const HotelIndexInfoResponseBody &) = default ;
    HotelIndexInfoResponseBody(HotelIndexInfoResponseBody &&) = default ;
    HotelIndexInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelIndexInfoResponseBody() = default ;
    HotelIndexInfoResponseBody& operator=(const HotelIndexInfoResponseBody &) = default ;
    HotelIndexInfoResponseBody& operator=(HotelIndexInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(page_token, pageToken_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_TO_JSON(hotel_status, hotelStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_FROM_JSON(hotel_status, hotelStatus_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->hotelStatus_ == nullptr; };
        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline Items& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // hotelStatus Field Functions 
        bool hasHotelStatus() const { return this->hotelStatus_ != nullptr;};
        void deleteHotelStatus() { this->hotelStatus_ = nullptr;};
        inline string getHotelStatus() const { DARABONBA_PTR_GET_DEFAULT(hotelStatus_, "") };
        inline Items& setHotelStatus(string hotelStatus) { DARABONBA_PTR_SET_VALUE(hotelStatus_, hotelStatus) };


      protected:
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> hotelStatus_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageSize_ == nullptr && this->pageToken_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pageToken Field Functions 
      bool hasPageToken() const { return this->pageToken_ != nullptr;};
      void deletePageToken() { this->pageToken_ = nullptr;};
      inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
      inline Module& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    protected:
      shared_ptr<vector<Module::Items>> items_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> pageToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelIndexInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelIndexInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelIndexInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelIndexInfoResponseBody::Module) };
    inline HotelIndexInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelIndexInfoResponseBody::Module) };
    inline HotelIndexInfoResponseBody& setModule(const HotelIndexInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelIndexInfoResponseBody& setModule(HotelIndexInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelIndexInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelIndexInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelIndexInfoResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelIndexInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
