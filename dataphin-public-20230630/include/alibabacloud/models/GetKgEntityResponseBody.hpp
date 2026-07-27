// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKGENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetKgEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EntityInfo, entityInfo_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKgEntityResponseBody() = default ;
    GetKgEntityResponseBody(const GetKgEntityResponseBody &) = default ;
    GetKgEntityResponseBody(GetKgEntityResponseBody &&) = default ;
    GetKgEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgEntityResponseBody() = default ;
    GetKgEntityResponseBody& operator=(const GetKgEntityResponseBody &) = default ;
    GetKgEntityResponseBody& operator=(GetKgEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntityInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
      };
      friend void from_json(const Darabonba::Json& j, EntityInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
      };
      EntityInfo() = default ;
      EntityInfo(const EntityInfo &) = default ;
      EntityInfo(EntityInfo &&) = default ;
      EntityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityInfo() = default ;
      EntityInfo& operator=(const EntityInfo &) = default ;
      EntityInfo& operator=(EntityInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PropertyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        PropertyList() = default ;
        PropertyList(const PropertyList &) = default ;
        PropertyList(PropertyList &&) = default ;
        PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PropertyList() = default ;
        PropertyList& operator=(const PropertyList &) = default ;
        PropertyList& operator=(PropertyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->dataType_ == nullptr && this->value_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline PropertyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline PropertyList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> dataType_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr && this->propertyList_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline EntityInfo& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline EntityInfo& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<EntityInfo::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<EntityInfo::PropertyList>) };
      inline vector<EntityInfo::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<EntityInfo::PropertyList>) };
      inline EntityInfo& setPropertyList(const vector<EntityInfo::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline EntityInfo& setPropertyList(vector<EntityInfo::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


    protected:
      shared_ptr<string> entityId_ {};
      shared_ptr<string> entityType_ {};
      shared_ptr<vector<EntityInfo::PropertyList>> propertyList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->entityInfo_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKgEntityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // entityInfo Field Functions 
    bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
    void deleteEntityInfo() { this->entityInfo_ = nullptr;};
    inline const GetKgEntityResponseBody::EntityInfo & getEntityInfo() const { DARABONBA_PTR_GET_CONST(entityInfo_, GetKgEntityResponseBody::EntityInfo) };
    inline GetKgEntityResponseBody::EntityInfo getEntityInfo() { DARABONBA_PTR_GET(entityInfo_, GetKgEntityResponseBody::EntityInfo) };
    inline GetKgEntityResponseBody& setEntityInfo(const GetKgEntityResponseBody::EntityInfo & entityInfo) { DARABONBA_PTR_SET_VALUE(entityInfo_, entityInfo) };
    inline GetKgEntityResponseBody& setEntityInfo(GetKgEntityResponseBody::EntityInfo && entityInfo) { DARABONBA_PTR_SET_RVALUE(entityInfo_, entityInfo) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetKgEntityResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKgEntityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKgEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKgEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetKgEntityResponseBody::EntityInfo> entityInfo_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
