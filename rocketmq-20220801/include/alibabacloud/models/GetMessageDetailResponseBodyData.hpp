// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEDETAILRESPONSEBODYDATA_HPP_
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
  class GetMessageDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(bodySize, bodySize_);
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
      DARABONBA_PTR_TO_JSON(systemProperties, systemProperties_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
      DARABONBA_PTR_TO_JSON(userProperties, userProperties_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(bodySize, bodySize_);
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
      DARABONBA_PTR_FROM_JSON(systemProperties, systemProperties_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
      DARABONBA_PTR_FROM_JSON(userProperties, userProperties_);
    };
    GetMessageDetailResponseBodyData() = default ;
    GetMessageDetailResponseBodyData(const GetMessageDetailResponseBodyData &) = default ;
    GetMessageDetailResponseBodyData(GetMessageDetailResponseBodyData &&) = default ;
    GetMessageDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageDetailResponseBodyData() = default ;
    GetMessageDetailResponseBodyData& operator=(const GetMessageDetailResponseBodyData &) = default ;
    GetMessageDetailResponseBodyData& operator=(GetMessageDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->bodySize_ != nullptr && this->bornHost_ != nullptr && this->bornTime_ != nullptr && this->instanceId_ != nullptr && this->messageGroup_ != nullptr
        && this->messageId_ != nullptr && this->messageKeys_ != nullptr && this->messageTag_ != nullptr && this->messageType_ != nullptr && this->regionId_ != nullptr
        && this->storeHost_ != nullptr && this->storeTime_ != nullptr && this->systemProperties_ != nullptr && this->topicName_ != nullptr && this->userProperties_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline GetMessageDetailResponseBodyData& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // bodySize Field Functions 
    bool hasBodySize() const { return this->bodySize_ != nullptr;};
    void deleteBodySize() { this->bodySize_ = nullptr;};
    inline int32_t bodySize() const { DARABONBA_PTR_GET_DEFAULT(bodySize_, 0) };
    inline GetMessageDetailResponseBodyData& setBodySize(int32_t bodySize) { DARABONBA_PTR_SET_VALUE(bodySize_, bodySize) };


    // bornHost Field Functions 
    bool hasBornHost() const { return this->bornHost_ != nullptr;};
    void deleteBornHost() { this->bornHost_ = nullptr;};
    inline string bornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
    inline GetMessageDetailResponseBodyData& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


    // bornTime Field Functions 
    bool hasBornTime() const { return this->bornTime_ != nullptr;};
    void deleteBornTime() { this->bornTime_ = nullptr;};
    inline string bornTime() const { DARABONBA_PTR_GET_DEFAULT(bornTime_, "") };
    inline GetMessageDetailResponseBodyData& setBornTime(string bornTime) { DARABONBA_PTR_SET_VALUE(bornTime_, bornTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetMessageDetailResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageGroup Field Functions 
    bool hasMessageGroup() const { return this->messageGroup_ != nullptr;};
    void deleteMessageGroup() { this->messageGroup_ = nullptr;};
    inline string messageGroup() const { DARABONBA_PTR_GET_DEFAULT(messageGroup_, "") };
    inline GetMessageDetailResponseBodyData& setMessageGroup(string messageGroup) { DARABONBA_PTR_SET_VALUE(messageGroup_, messageGroup) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetMessageDetailResponseBodyData& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messageKeys Field Functions 
    bool hasMessageKeys() const { return this->messageKeys_ != nullptr;};
    void deleteMessageKeys() { this->messageKeys_ = nullptr;};
    inline const vector<string> & messageKeys() const { DARABONBA_PTR_GET_CONST(messageKeys_, vector<string>) };
    inline vector<string> messageKeys() { DARABONBA_PTR_GET(messageKeys_, vector<string>) };
    inline GetMessageDetailResponseBodyData& setMessageKeys(const vector<string> & messageKeys) { DARABONBA_PTR_SET_VALUE(messageKeys_, messageKeys) };
    inline GetMessageDetailResponseBodyData& setMessageKeys(vector<string> && messageKeys) { DARABONBA_PTR_SET_RVALUE(messageKeys_, messageKeys) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline GetMessageDetailResponseBodyData& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetMessageDetailResponseBodyData& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMessageDetailResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storeHost Field Functions 
    bool hasStoreHost() const { return this->storeHost_ != nullptr;};
    void deleteStoreHost() { this->storeHost_ = nullptr;};
    inline string storeHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
    inline GetMessageDetailResponseBodyData& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


    // storeTime Field Functions 
    bool hasStoreTime() const { return this->storeTime_ != nullptr;};
    void deleteStoreTime() { this->storeTime_ = nullptr;};
    inline string storeTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
    inline GetMessageDetailResponseBodyData& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


    // systemProperties Field Functions 
    bool hasSystemProperties() const { return this->systemProperties_ != nullptr;};
    void deleteSystemProperties() { this->systemProperties_ = nullptr;};
    inline const map<string, string> & systemProperties() const { DARABONBA_PTR_GET_CONST(systemProperties_, map<string, string>) };
    inline map<string, string> systemProperties() { DARABONBA_PTR_GET(systemProperties_, map<string, string>) };
    inline GetMessageDetailResponseBodyData& setSystemProperties(const map<string, string> & systemProperties) { DARABONBA_PTR_SET_VALUE(systemProperties_, systemProperties) };
    inline GetMessageDetailResponseBodyData& setSystemProperties(map<string, string> && systemProperties) { DARABONBA_PTR_SET_RVALUE(systemProperties_, systemProperties) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetMessageDetailResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // userProperties Field Functions 
    bool hasUserProperties() const { return this->userProperties_ != nullptr;};
    void deleteUserProperties() { this->userProperties_ = nullptr;};
    inline const map<string, string> & userProperties() const { DARABONBA_PTR_GET_CONST(userProperties_, map<string, string>) };
    inline map<string, string> userProperties() { DARABONBA_PTR_GET(userProperties_, map<string, string>) };
    inline GetMessageDetailResponseBodyData& setUserProperties(const map<string, string> & userProperties) { DARABONBA_PTR_SET_VALUE(userProperties_, userProperties) };
    inline GetMessageDetailResponseBodyData& setUserProperties(map<string, string> && userProperties) { DARABONBA_PTR_SET_RVALUE(userProperties_, userProperties) };


  protected:
    // The message body.
    std::shared_ptr<string> body_ = nullptr;
    // The size of the message body.
    std::shared_ptr<int32_t> bodySize_ = nullptr;
    // The client on which the message was produced.
    std::shared_ptr<string> bornHost_ = nullptr;
    // The time when the message was generated.
    std::shared_ptr<string> bornTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The sharding key. This parameter is returned only for ordered messages.
    std::shared_ptr<string> messageGroup_ = nullptr;
    // The message ID.
    std::shared_ptr<string> messageId_ = nullptr;
    // The message keys.
    std::shared_ptr<vector<string>> messageKeys_ = nullptr;
    // The tags.
    std::shared_ptr<string> messageTag_ = nullptr;
    // The message type.
    std::shared_ptr<string> messageType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The broker on which the message was stored.
    std::shared_ptr<string> storeHost_ = nullptr;
    // The time when the message was stored.
    std::shared_ptr<string> storeTime_ = nullptr;
    // The default system attributes.
    std::shared_ptr<map<string, string>> systemProperties_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
    // The user attributes.
    std::shared_ptr<map<string, string>> userProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
