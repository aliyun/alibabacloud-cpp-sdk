// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKGRELATIONRESPONSEBODY_HPP_
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
  class GetKgRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RelationInfo, relationInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RelationInfo, relationInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKgRelationResponseBody() = default ;
    GetKgRelationResponseBody(const GetKgRelationResponseBody &) = default ;
    GetKgRelationResponseBody(GetKgRelationResponseBody &&) = default ;
    GetKgRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgRelationResponseBody() = default ;
    GetKgRelationResponseBody& operator=(const GetKgRelationResponseBody &) = default ;
    GetKgRelationResponseBody& operator=(GetKgRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelationInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelationInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_TO_JSON(RelationId, relationId_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(SourceEntityId, sourceEntityId_);
        DARABONBA_PTR_TO_JSON(TargetEntityId, targetEntityId_);
      };
      friend void from_json(const Darabonba::Json& j, RelationInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(SourceEntityId, sourceEntityId_);
        DARABONBA_PTR_FROM_JSON(TargetEntityId, targetEntityId_);
      };
      RelationInfo() = default ;
      RelationInfo(const RelationInfo &) = default ;
      RelationInfo(RelationInfo &&) = default ;
      RelationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelationInfo() = default ;
      RelationInfo& operator=(const RelationInfo &) = default ;
      RelationInfo& operator=(RelationInfo &&) = default ;
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

      virtual bool empty() const override { return this->propertyList_ == nullptr
        && this->relationId_ == nullptr && this->relationType_ == nullptr && this->sourceEntityId_ == nullptr && this->targetEntityId_ == nullptr; };
      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<RelationInfo::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<RelationInfo::PropertyList>) };
      inline vector<RelationInfo::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<RelationInfo::PropertyList>) };
      inline RelationInfo& setPropertyList(const vector<RelationInfo::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline RelationInfo& setPropertyList(vector<RelationInfo::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      // relationId Field Functions 
      bool hasRelationId() const { return this->relationId_ != nullptr;};
      void deleteRelationId() { this->relationId_ = nullptr;};
      inline string getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
      inline RelationInfo& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline RelationInfo& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // sourceEntityId Field Functions 
      bool hasSourceEntityId() const { return this->sourceEntityId_ != nullptr;};
      void deleteSourceEntityId() { this->sourceEntityId_ = nullptr;};
      inline string getSourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityId_, "") };
      inline RelationInfo& setSourceEntityId(string sourceEntityId) { DARABONBA_PTR_SET_VALUE(sourceEntityId_, sourceEntityId) };


      // targetEntityId Field Functions 
      bool hasTargetEntityId() const { return this->targetEntityId_ != nullptr;};
      void deleteTargetEntityId() { this->targetEntityId_ = nullptr;};
      inline string getTargetEntityId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityId_, "") };
      inline RelationInfo& setTargetEntityId(string targetEntityId) { DARABONBA_PTR_SET_VALUE(targetEntityId_, targetEntityId) };


    protected:
      shared_ptr<vector<RelationInfo::PropertyList>> propertyList_ {};
      shared_ptr<string> relationId_ {};
      shared_ptr<string> relationType_ {};
      shared_ptr<string> sourceEntityId_ {};
      shared_ptr<string> targetEntityId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->relationInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKgRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetKgRelationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKgRelationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // relationInfo Field Functions 
    bool hasRelationInfo() const { return this->relationInfo_ != nullptr;};
    void deleteRelationInfo() { this->relationInfo_ = nullptr;};
    inline const GetKgRelationResponseBody::RelationInfo & getRelationInfo() const { DARABONBA_PTR_GET_CONST(relationInfo_, GetKgRelationResponseBody::RelationInfo) };
    inline GetKgRelationResponseBody::RelationInfo getRelationInfo() { DARABONBA_PTR_GET(relationInfo_, GetKgRelationResponseBody::RelationInfo) };
    inline GetKgRelationResponseBody& setRelationInfo(const GetKgRelationResponseBody::RelationInfo & relationInfo) { DARABONBA_PTR_SET_VALUE(relationInfo_, relationInfo) };
    inline GetKgRelationResponseBody& setRelationInfo(GetKgRelationResponseBody::RelationInfo && relationInfo) { DARABONBA_PTR_SET_RVALUE(relationInfo_, relationInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKgRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKgRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetKgRelationResponseBody::RelationInfo> relationInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
