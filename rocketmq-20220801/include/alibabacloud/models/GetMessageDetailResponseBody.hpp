// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetMessageDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMessageDetailResponseBody() = default ;
    GetMessageDetailResponseBody(const GetMessageDetailResponseBody &) = default ;
    GetMessageDetailResponseBody(GetMessageDetailResponseBody &&) = default ;
    GetMessageDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageDetailResponseBody() = default ;
    GetMessageDetailResponseBody& operator=(const GetMessageDetailResponseBody &) = default ;
    GetMessageDetailResponseBody& operator=(GetMessageDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(body, body_);
        DARABONBA_PTR_TO_JSON(bodySize, bodySize_);
        DARABONBA_PTR_TO_JSON(bornHost, bornHost_);
        DARABONBA_PTR_TO_JSON(bornTime, bornTime_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(liteTopicName, liteTopicName_);
        DARABONBA_PTR_TO_JSON(messageGroup, messageGroup_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(messageKeys, messageKeys_);
        DARABONBA_PTR_TO_JSON(messageTag, messageTag_);
        DARABONBA_PTR_TO_JSON(messageType, messageType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(storeHost, storeHost_);
        DARABONBA_PTR_TO_JSON(storeTime, storeTime_);
        DARABONBA_PTR_TO_JSON(systemProperties, systemProperties_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
        DARABONBA_PTR_TO_JSON(userProperties, userProperties_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(body, body_);
        DARABONBA_PTR_FROM_JSON(bodySize, bodySize_);
        DARABONBA_PTR_FROM_JSON(bornHost, bornHost_);
        DARABONBA_PTR_FROM_JSON(bornTime, bornTime_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(liteTopicName, liteTopicName_);
        DARABONBA_PTR_FROM_JSON(messageGroup, messageGroup_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(messageKeys, messageKeys_);
        DARABONBA_PTR_FROM_JSON(messageTag, messageTag_);
        DARABONBA_PTR_FROM_JSON(messageType, messageType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(storeHost, storeHost_);
        DARABONBA_PTR_FROM_JSON(storeTime, storeTime_);
        DARABONBA_PTR_FROM_JSON(systemProperties, systemProperties_);
        DARABONBA_PTR_FROM_JSON(topicName, topicName_);
        DARABONBA_PTR_FROM_JSON(userProperties, userProperties_);
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
      virtual bool empty() const override { return this->body_ == nullptr
        && this->bodySize_ == nullptr && this->bornHost_ == nullptr && this->bornTime_ == nullptr && this->instanceId_ == nullptr && this->liteTopicName_ == nullptr
        && this->messageGroup_ == nullptr && this->messageId_ == nullptr && this->messageKeys_ == nullptr && this->messageTag_ == nullptr && this->messageType_ == nullptr
        && this->regionId_ == nullptr && this->storeHost_ == nullptr && this->storeTime_ == nullptr && this->systemProperties_ == nullptr && this->topicName_ == nullptr
        && this->userProperties_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline Data& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // bodySize Field Functions 
      bool hasBodySize() const { return this->bodySize_ != nullptr;};
      void deleteBodySize() { this->bodySize_ = nullptr;};
      inline int32_t getBodySize() const { DARABONBA_PTR_GET_DEFAULT(bodySize_, 0) };
      inline Data& setBodySize(int32_t bodySize) { DARABONBA_PTR_SET_VALUE(bodySize_, bodySize) };


      // bornHost Field Functions 
      bool hasBornHost() const { return this->bornHost_ != nullptr;};
      void deleteBornHost() { this->bornHost_ = nullptr;};
      inline string getBornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
      inline Data& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


      // bornTime Field Functions 
      bool hasBornTime() const { return this->bornTime_ != nullptr;};
      void deleteBornTime() { this->bornTime_ = nullptr;};
      inline string getBornTime() const { DARABONBA_PTR_GET_DEFAULT(bornTime_, "") };
      inline Data& setBornTime(string bornTime) { DARABONBA_PTR_SET_VALUE(bornTime_, bornTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // liteTopicName Field Functions 
      bool hasLiteTopicName() const { return this->liteTopicName_ != nullptr;};
      void deleteLiteTopicName() { this->liteTopicName_ = nullptr;};
      inline string getLiteTopicName() const { DARABONBA_PTR_GET_DEFAULT(liteTopicName_, "") };
      inline Data& setLiteTopicName(string liteTopicName) { DARABONBA_PTR_SET_VALUE(liteTopicName_, liteTopicName) };


      // messageGroup Field Functions 
      bool hasMessageGroup() const { return this->messageGroup_ != nullptr;};
      void deleteMessageGroup() { this->messageGroup_ = nullptr;};
      inline string getMessageGroup() const { DARABONBA_PTR_GET_DEFAULT(messageGroup_, "") };
      inline Data& setMessageGroup(string messageGroup) { DARABONBA_PTR_SET_VALUE(messageGroup_, messageGroup) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Data& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // messageKeys Field Functions 
      bool hasMessageKeys() const { return this->messageKeys_ != nullptr;};
      void deleteMessageKeys() { this->messageKeys_ = nullptr;};
      inline const vector<string> & getMessageKeys() const { DARABONBA_PTR_GET_CONST(messageKeys_, vector<string>) };
      inline vector<string> getMessageKeys() { DARABONBA_PTR_GET(messageKeys_, vector<string>) };
      inline Data& setMessageKeys(const vector<string> & messageKeys) { DARABONBA_PTR_SET_VALUE(messageKeys_, messageKeys) };
      inline Data& setMessageKeys(vector<string> && messageKeys) { DARABONBA_PTR_SET_RVALUE(messageKeys_, messageKeys) };


      // messageTag Field Functions 
      bool hasMessageTag() const { return this->messageTag_ != nullptr;};
      void deleteMessageTag() { this->messageTag_ = nullptr;};
      inline string getMessageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
      inline Data& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline Data& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // storeHost Field Functions 
      bool hasStoreHost() const { return this->storeHost_ != nullptr;};
      void deleteStoreHost() { this->storeHost_ = nullptr;};
      inline string getStoreHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
      inline Data& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


      // storeTime Field Functions 
      bool hasStoreTime() const { return this->storeTime_ != nullptr;};
      void deleteStoreTime() { this->storeTime_ = nullptr;};
      inline string getStoreTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
      inline Data& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


      // systemProperties Field Functions 
      bool hasSystemProperties() const { return this->systemProperties_ != nullptr;};
      void deleteSystemProperties() { this->systemProperties_ = nullptr;};
      inline const map<string, string> & getSystemProperties() const { DARABONBA_PTR_GET_CONST(systemProperties_, map<string, string>) };
      inline map<string, string> getSystemProperties() { DARABONBA_PTR_GET(systemProperties_, map<string, string>) };
      inline Data& setSystemProperties(const map<string, string> & systemProperties) { DARABONBA_PTR_SET_VALUE(systemProperties_, systemProperties) };
      inline Data& setSystemProperties(map<string, string> && systemProperties) { DARABONBA_PTR_SET_RVALUE(systemProperties_, systemProperties) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // userProperties Field Functions 
      bool hasUserProperties() const { return this->userProperties_ != nullptr;};
      void deleteUserProperties() { this->userProperties_ = nullptr;};
      inline const map<string, string> & getUserProperties() const { DARABONBA_PTR_GET_CONST(userProperties_, map<string, string>) };
      inline map<string, string> getUserProperties() { DARABONBA_PTR_GET(userProperties_, map<string, string>) };
      inline Data& setUserProperties(const map<string, string> & userProperties) { DARABONBA_PTR_SET_VALUE(userProperties_, userProperties) };
      inline Data& setUserProperties(map<string, string> && userProperties) { DARABONBA_PTR_SET_RVALUE(userProperties_, userProperties) };


    protected:
      // The message body.
      shared_ptr<string> body_ {};
      // The size of the message body.
      shared_ptr<int32_t> bodySize_ {};
      // The client on which the message was produced.
      shared_ptr<string> bornHost_ {};
      // The time when the message was generated.
      shared_ptr<string> bornTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> liteTopicName_ {};
      // The sharding key. This parameter is returned only for ordered messages.
      shared_ptr<string> messageGroup_ {};
      // The message ID.
      shared_ptr<string> messageId_ {};
      // The message keys.
      shared_ptr<vector<string>> messageKeys_ {};
      // The tags.
      shared_ptr<string> messageTag_ {};
      // The message type.
      shared_ptr<string> messageType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The broker on which the message was stored.
      shared_ptr<string> storeHost_ {};
      // The time when the message was stored.
      shared_ptr<string> storeTime_ {};
      // The default system attributes.
      shared_ptr<map<string, string>> systemProperties_ {};
      // The topic name.
      shared_ptr<string> topicName_ {};
      // The user attributes.
      shared_ptr<map<string, string>> userProperties_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMessageDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMessageDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMessageDetailResponseBody::Data) };
    inline GetMessageDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMessageDetailResponseBody::Data) };
    inline GetMessageDetailResponseBody& setData(const GetMessageDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMessageDetailResponseBody& setData(GetMessageDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetMessageDetailResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetMessageDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMessageDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMessageDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMessageDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetMessageDetailResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
