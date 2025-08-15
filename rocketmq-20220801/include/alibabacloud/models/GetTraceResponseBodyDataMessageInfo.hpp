// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATAMESSAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATAMESSAGEINFO_HPP_
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
  class GetTraceResponseBodyDataMessageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataMessageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(bornHost, bornHost_);
      DARABONBA_PTR_TO_JSON(bornTime, bornTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(messageGroup, messageGroup_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(messageKeys, messageKeys_);
      DARABONBA_PTR_TO_JSON(messageTag, messageTag_);
      DARABONBA_PTR_TO_JSON(messageType, messageType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(storeHost, storeHost_);
      DARABONBA_PTR_TO_JSON(storeTime, storeTime_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
      DARABONBA_PTR_TO_JSON(transactionId, transactionId_);
      DARABONBA_PTR_TO_JSON(userProperties, userProperties_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataMessageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(bornHost, bornHost_);
      DARABONBA_PTR_FROM_JSON(bornTime, bornTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(messageGroup, messageGroup_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(messageKeys, messageKeys_);
      DARABONBA_PTR_FROM_JSON(messageTag, messageTag_);
      DARABONBA_PTR_FROM_JSON(messageType, messageType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(storeHost, storeHost_);
      DARABONBA_PTR_FROM_JSON(storeTime, storeTime_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
      DARABONBA_PTR_FROM_JSON(transactionId, transactionId_);
      DARABONBA_PTR_FROM_JSON(userProperties, userProperties_);
    };
    GetTraceResponseBodyDataMessageInfo() = default ;
    GetTraceResponseBodyDataMessageInfo(const GetTraceResponseBodyDataMessageInfo &) = default ;
    GetTraceResponseBodyDataMessageInfo(GetTraceResponseBodyDataMessageInfo &&) = default ;
    GetTraceResponseBodyDataMessageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataMessageInfo() = default ;
    GetTraceResponseBodyDataMessageInfo& operator=(const GetTraceResponseBodyDataMessageInfo &) = default ;
    GetTraceResponseBodyDataMessageInfo& operator=(GetTraceResponseBodyDataMessageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->bornHost_ != nullptr && this->bornTime_ != nullptr && this->instanceId_ != nullptr && this->messageGroup_ != nullptr && this->messageId_ != nullptr
        && this->messageKeys_ != nullptr && this->messageTag_ != nullptr && this->messageType_ != nullptr && this->regionId_ != nullptr && this->storeHost_ != nullptr
        && this->storeTime_ != nullptr && this->topicName_ != nullptr && this->transactionId_ != nullptr && this->userProperties_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // bornHost Field Functions 
    bool hasBornHost() const { return this->bornHost_ != nullptr;};
    void deleteBornHost() { this->bornHost_ = nullptr;};
    inline string bornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


    // bornTime Field Functions 
    bool hasBornTime() const { return this->bornTime_ != nullptr;};
    void deleteBornTime() { this->bornTime_ = nullptr;};
    inline string bornTime() const { DARABONBA_PTR_GET_DEFAULT(bornTime_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setBornTime(string bornTime) { DARABONBA_PTR_SET_VALUE(bornTime_, bornTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageGroup Field Functions 
    bool hasMessageGroup() const { return this->messageGroup_ != nullptr;};
    void deleteMessageGroup() { this->messageGroup_ = nullptr;};
    inline string messageGroup() const { DARABONBA_PTR_GET_DEFAULT(messageGroup_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setMessageGroup(string messageGroup) { DARABONBA_PTR_SET_VALUE(messageGroup_, messageGroup) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messageKeys Field Functions 
    bool hasMessageKeys() const { return this->messageKeys_ != nullptr;};
    void deleteMessageKeys() { this->messageKeys_ = nullptr;};
    inline const vector<string> & messageKeys() const { DARABONBA_PTR_GET_CONST(messageKeys_, vector<string>) };
    inline vector<string> messageKeys() { DARABONBA_PTR_GET(messageKeys_, vector<string>) };
    inline GetTraceResponseBodyDataMessageInfo& setMessageKeys(const vector<string> & messageKeys) { DARABONBA_PTR_SET_VALUE(messageKeys_, messageKeys) };
    inline GetTraceResponseBodyDataMessageInfo& setMessageKeys(vector<string> && messageKeys) { DARABONBA_PTR_SET_RVALUE(messageKeys_, messageKeys) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storeHost Field Functions 
    bool hasStoreHost() const { return this->storeHost_ != nullptr;};
    void deleteStoreHost() { this->storeHost_ = nullptr;};
    inline string storeHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


    // storeTime Field Functions 
    bool hasStoreTime() const { return this->storeTime_ != nullptr;};
    void deleteStoreTime() { this->storeTime_ = nullptr;};
    inline string storeTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline GetTraceResponseBodyDataMessageInfo& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    // userProperties Field Functions 
    bool hasUserProperties() const { return this->userProperties_ != nullptr;};
    void deleteUserProperties() { this->userProperties_ = nullptr;};
    inline const map<string, string> & userProperties() const { DARABONBA_PTR_GET_CONST(userProperties_, map<string, string>) };
    inline map<string, string> userProperties() { DARABONBA_PTR_GET(userProperties_, map<string, string>) };
    inline GetTraceResponseBodyDataMessageInfo& setUserProperties(const map<string, string> & userProperties) { DARABONBA_PTR_SET_VALUE(userProperties_, userProperties) };
    inline GetTraceResponseBodyDataMessageInfo& setUserProperties(map<string, string> && userProperties) { DARABONBA_PTR_SET_RVALUE(userProperties_, userProperties) };


  protected:
    // Message body.
    std::shared_ptr<string> body_ = nullptr;
    // Message born host.
    std::shared_ptr<string> bornHost_ = nullptr;
    // Message born time.
    std::shared_ptr<string> bornTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Message grpup.
    std::shared_ptr<string> messageGroup_ = nullptr;
    // The message ID.
    std::shared_ptr<string> messageId_ = nullptr;
    // Message keys.
    std::shared_ptr<vector<string>> messageKeys_ = nullptr;
    // Message tag.
    std::shared_ptr<string> messageTag_ = nullptr;
    // Message type.
    std::shared_ptr<string> messageType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Message store host.
    std::shared_ptr<string> storeHost_ = nullptr;
    // Message store time.
    std::shared_ptr<string> storeTime_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
    // Message transaction id.
    std::shared_ptr<string> transactionId_ = nullptr;
    // Message user properties.
    std::shared_ptr<map<string, string>> userProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
