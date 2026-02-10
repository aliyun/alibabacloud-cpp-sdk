// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMALICIOUSFILEWHITELISTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMALICIOUSFILEWHITELISTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateMaliciousFileWhitelistConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaliciousFileWhitelistConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaliciousFileWhitelistConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateMaliciousFileWhitelistConfigResponseBody() = default ;
    CreateMaliciousFileWhitelistConfigResponseBody(const CreateMaliciousFileWhitelistConfigResponseBody &) = default ;
    CreateMaliciousFileWhitelistConfigResponseBody(CreateMaliciousFileWhitelistConfigResponseBody &&) = default ;
    CreateMaliciousFileWhitelistConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaliciousFileWhitelistConfigResponseBody() = default ;
    CreateMaliciousFileWhitelistConfigResponseBody& operator=(const CreateMaliciousFileWhitelistConfigResponseBody &) = default ;
    CreateMaliciousFileWhitelistConfigResponseBody& operator=(CreateMaliciousFileWhitelistConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->eventName_ == nullptr && this->field_ == nullptr && this->fieldValue_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->operator_ == nullptr && this->source_ == nullptr && this->targetType_ == nullptr && this->targetValue_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline Data& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Data& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline Data& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Data& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // targetValue Field Functions 
      bool hasTargetValue() const { return this->targetValue_ != nullptr;};
      void deleteTargetValue() { this->targetValue_ = nullptr;};
      inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
      inline Data& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    protected:
      // Number of effective assets.
      // > This field has a value when targetType is SELECTION_KEY
      shared_ptr<string> count_ {};
      // Alert name:
      // - ALL: All alert types
      shared_ptr<string> eventName_ {};
      // Whitelisted field.
      shared_ptr<string> field_ {};
      // Whitelisted field value.
      shared_ptr<string> fieldValue_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Rule ID.
      shared_ptr<string> id_ {};
      // Rule judgment operator:
      // - strEqual: String equals
      shared_ptr<string> operator_ {};
      // Business source:
      // - agentless: Agentless detection
      shared_ptr<string> source_ {};
      // Effective target type:
      // - ALL: All assets
      // - SELECTION_KEY: Assets selected via the asset selection component
      shared_ptr<string> targetType_ {};
      // Target effective scope:
      // - ALL: All assets
      // - Other: Key of the asset range selected by the asset selection component
      shared_ptr<string> targetValue_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMaliciousFileWhitelistConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateMaliciousFileWhitelistConfigResponseBody::Data) };
    inline CreateMaliciousFileWhitelistConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateMaliciousFileWhitelistConfigResponseBody::Data) };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setData(const CreateMaliciousFileWhitelistConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setData(CreateMaliciousFileWhitelistConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateMaliciousFileWhitelistConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API status code.
    shared_ptr<string> code_ {};
    // Returned data.
    shared_ptr<CreateMaliciousFileWhitelistConfigResponseBody::Data> data_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Prompt message for the returned result.
    shared_ptr<string> message_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Whether the API call was successful. Values:
    // - **true**: Success
    // - **false**: Failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
