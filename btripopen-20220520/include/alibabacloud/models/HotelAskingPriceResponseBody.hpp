// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELASKINGPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELASKINGPRICERESPONSEBODY_HPP_
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
  class HotelAskingPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelAskingPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelAskingPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelAskingPriceResponseBody() = default ;
    HotelAskingPriceResponseBody(const HotelAskingPriceResponseBody &) = default ;
    HotelAskingPriceResponseBody(HotelAskingPriceResponseBody &&) = default ;
    HotelAskingPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelAskingPriceResponseBody() = default ;
    HotelAskingPriceResponseBody& operator=(const HotelAskingPriceResponseBody &) = default ;
    HotelAskingPriceResponseBody& operator=(HotelAskingPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(hotel_asking_price_details, hotelAskingPriceDetails_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(hotel_asking_price_details, hotelAskingPriceDetails_);
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
      class HotelAskingPriceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelAskingPriceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_TO_JSON(hotel_code, hotelCode_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_TO_JSON(min_price, minPrice_);
          DARABONBA_PTR_TO_JSON(original_min_price, originalMinPrice_);
        };
        friend void from_json(const Darabonba::Json& j, HotelAskingPriceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_FROM_JSON(hotel_code, hotelCode_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_FROM_JSON(min_price, minPrice_);
          DARABONBA_PTR_FROM_JSON(original_min_price, originalMinPrice_);
        };
        HotelAskingPriceDetails() = default ;
        HotelAskingPriceDetails(const HotelAskingPriceDetails &) = default ;
        HotelAskingPriceDetails(HotelAskingPriceDetails &&) = default ;
        HotelAskingPriceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelAskingPriceDetails() = default ;
        HotelAskingPriceDetails& operator=(const HotelAskingPriceDetails &) = default ;
        HotelAskingPriceDetails& operator=(HotelAskingPriceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->hotelAddress_ == nullptr && this->hotelCode_ == nullptr && this->hotelName_ == nullptr && this->isProtocol_ == nullptr && this->minPrice_ == nullptr
        && this->originalMinPrice_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelAskingPriceDetails& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // hotelAddress Field Functions 
        bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
        void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
        inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
        inline HotelAskingPriceDetails& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


        // hotelCode Field Functions 
        bool hasHotelCode() const { return this->hotelCode_ != nullptr;};
        void deleteHotelCode() { this->hotelCode_ = nullptr;};
        inline string getHotelCode() const { DARABONBA_PTR_GET_DEFAULT(hotelCode_, "") };
        inline HotelAskingPriceDetails& setHotelCode(string hotelCode) { DARABONBA_PTR_SET_VALUE(hotelCode_, hotelCode) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelAskingPriceDetails& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // isProtocol Field Functions 
        bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
        void deleteIsProtocol() { this->isProtocol_ = nullptr;};
        inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
        inline HotelAskingPriceDetails& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


        // minPrice Field Functions 
        bool hasMinPrice() const { return this->minPrice_ != nullptr;};
        void deleteMinPrice() { this->minPrice_ = nullptr;};
        inline double getMinPrice() const { DARABONBA_PTR_GET_DEFAULT(minPrice_, 0.0) };
        inline HotelAskingPriceDetails& setMinPrice(double minPrice) { DARABONBA_PTR_SET_VALUE(minPrice_, minPrice) };


        // originalMinPrice Field Functions 
        bool hasOriginalMinPrice() const { return this->originalMinPrice_ != nullptr;};
        void deleteOriginalMinPrice() { this->originalMinPrice_ = nullptr;};
        inline double getOriginalMinPrice() const { DARABONBA_PTR_GET_DEFAULT(originalMinPrice_, 0.0) };
        inline HotelAskingPriceDetails& setOriginalMinPrice(double originalMinPrice) { DARABONBA_PTR_SET_VALUE(originalMinPrice_, originalMinPrice) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> hotelAddress_ {};
        shared_ptr<string> hotelCode_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<bool> isProtocol_ {};
        shared_ptr<double> minPrice_ {};
        shared_ptr<double> originalMinPrice_ {};
      };

      virtual bool empty() const override { return this->hotelAskingPriceDetails_ == nullptr; };
      // hotelAskingPriceDetails Field Functions 
      bool hasHotelAskingPriceDetails() const { return this->hotelAskingPriceDetails_ != nullptr;};
      void deleteHotelAskingPriceDetails() { this->hotelAskingPriceDetails_ = nullptr;};
      inline const vector<Module::HotelAskingPriceDetails> & getHotelAskingPriceDetails() const { DARABONBA_PTR_GET_CONST(hotelAskingPriceDetails_, vector<Module::HotelAskingPriceDetails>) };
      inline vector<Module::HotelAskingPriceDetails> getHotelAskingPriceDetails() { DARABONBA_PTR_GET(hotelAskingPriceDetails_, vector<Module::HotelAskingPriceDetails>) };
      inline Module& setHotelAskingPriceDetails(const vector<Module::HotelAskingPriceDetails> & hotelAskingPriceDetails) { DARABONBA_PTR_SET_VALUE(hotelAskingPriceDetails_, hotelAskingPriceDetails) };
      inline Module& setHotelAskingPriceDetails(vector<Module::HotelAskingPriceDetails> && hotelAskingPriceDetails) { DARABONBA_PTR_SET_RVALUE(hotelAskingPriceDetails_, hotelAskingPriceDetails) };


    protected:
      shared_ptr<vector<Module::HotelAskingPriceDetails>> hotelAskingPriceDetails_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelAskingPriceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelAskingPriceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelAskingPriceResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelAskingPriceResponseBody::Module) };
    inline HotelAskingPriceResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelAskingPriceResponseBody::Module) };
    inline HotelAskingPriceResponseBody& setModule(const HotelAskingPriceResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelAskingPriceResponseBody& setModule(HotelAskingPriceResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelAskingPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelAskingPriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelAskingPriceResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelAskingPriceResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
