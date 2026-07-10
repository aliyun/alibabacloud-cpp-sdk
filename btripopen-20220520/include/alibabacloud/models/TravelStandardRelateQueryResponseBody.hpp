// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEQUERYRESPONSEBODY_HPP_
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
  class TravelStandardRelateQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TravelStandardRelateQueryResponseBody() = default ;
    TravelStandardRelateQueryResponseBody(const TravelStandardRelateQueryResponseBody &) = default ;
    TravelStandardRelateQueryResponseBody(TravelStandardRelateQueryResponseBody &&) = default ;
    TravelStandardRelateQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateQueryResponseBody() = default ;
    TravelStandardRelateQueryResponseBody& operator=(const TravelStandardRelateQueryResponseBody &) = default ;
    TravelStandardRelateQueryResponseBody& operator=(TravelStandardRelateQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(reserve_bind_entity_list, reserveBindEntityList_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(reserve_bind_entity_list, reserveBindEntityList_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class ReserveBindEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReserveBindEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(entity_id, entityId_);
          DARABONBA_PTR_TO_JSON(entity_name, entityName_);
          DARABONBA_PTR_TO_JSON(entity_type, entityType_);
        };
        friend void from_json(const Darabonba::Json& j, ReserveBindEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
          DARABONBA_PTR_FROM_JSON(entity_name, entityName_);
          DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
        };
        ReserveBindEntityList() = default ;
        ReserveBindEntityList(const ReserveBindEntityList &) = default ;
        ReserveBindEntityList(ReserveBindEntityList &&) = default ;
        ReserveBindEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReserveBindEntityList() = default ;
        ReserveBindEntityList& operator=(const ReserveBindEntityList &) = default ;
        ReserveBindEntityList& operator=(ReserveBindEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityName_ == nullptr && this->entityType_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline ReserveBindEntityList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityName Field Functions 
        bool hasEntityName() const { return this->entityName_ != nullptr;};
        void deleteEntityName() { this->entityName_ = nullptr;};
        inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
        inline ReserveBindEntityList& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline ReserveBindEntityList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      protected:
        shared_ptr<string> entityId_ {};
        shared_ptr<string> entityName_ {};
        shared_ptr<string> entityType_ {};
      };

      virtual bool empty() const override { return this->reserveBindEntityList_ == nullptr
        && this->total_ == nullptr; };
      // reserveBindEntityList Field Functions 
      bool hasReserveBindEntityList() const { return this->reserveBindEntityList_ != nullptr;};
      void deleteReserveBindEntityList() { this->reserveBindEntityList_ = nullptr;};
      inline const vector<Module::ReserveBindEntityList> & getReserveBindEntityList() const { DARABONBA_PTR_GET_CONST(reserveBindEntityList_, vector<Module::ReserveBindEntityList>) };
      inline vector<Module::ReserveBindEntityList> getReserveBindEntityList() { DARABONBA_PTR_GET(reserveBindEntityList_, vector<Module::ReserveBindEntityList>) };
      inline Module& setReserveBindEntityList(const vector<Module::ReserveBindEntityList> & reserveBindEntityList) { DARABONBA_PTR_SET_VALUE(reserveBindEntityList_, reserveBindEntityList) };
      inline Module& setReserveBindEntityList(vector<Module::ReserveBindEntityList> && reserveBindEntityList) { DARABONBA_PTR_SET_RVALUE(reserveBindEntityList_, reserveBindEntityList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Module& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Module::ReserveBindEntityList>> reserveBindEntityList_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TravelStandardRelateQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TravelStandardRelateQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TravelStandardRelateQueryResponseBody::Module) };
    inline TravelStandardRelateQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TravelStandardRelateQueryResponseBody::Module) };
    inline TravelStandardRelateQueryResponseBody& setModule(const TravelStandardRelateQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TravelStandardRelateQueryResponseBody& setModule(TravelStandardRelateQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TravelStandardRelateQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline int32_t getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
    inline TravelStandardRelateQueryResponseBody& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TravelStandardRelateQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TravelStandardRelateQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<TravelStandardRelateQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> resultCode_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
