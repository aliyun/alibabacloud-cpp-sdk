// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGESRESPONSEBODYDATALIST_HPP_
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
  class ListMessagesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessagesResponseBodyDataList& obj) { 
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
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
      DARABONBA_PTR_TO_JSON(userProperties, userProperties_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessagesResponseBodyDataList& obj) { 
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
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
      DARABONBA_PTR_FROM_JSON(userProperties, userProperties_);
    };
    ListMessagesResponseBodyDataList() = default ;
    ListMessagesResponseBodyDataList(const ListMessagesResponseBodyDataList &) = default ;
    ListMessagesResponseBodyDataList(ListMessagesResponseBodyDataList &&) = default ;
    ListMessagesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessagesResponseBodyDataList() = default ;
    ListMessagesResponseBodyDataList& operator=(const ListMessagesResponseBodyDataList &) = default ;
    ListMessagesResponseBodyDataList& operator=(ListMessagesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->bodySize_ == nullptr && return this->bornHost_ == nullptr && return this->bornTime_ == nullptr && return this->instanceId_ == nullptr && return this->liteTopicName_ == nullptr
        && return this->messageGroup_ == nullptr && return this->messageId_ == nullptr && return this->messageKeys_ == nullptr && return this->messageTag_ == nullptr && return this->messageType_ == nullptr
        && return this->regionId_ == nullptr && return this->storeHost_ == nullptr && return this->storeTime_ == nullptr && return this->topicName_ == nullptr && return this->userProperties_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ListMessagesResponseBodyDataList& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // bodySize Field Functions 
    bool hasBodySize() const { return this->bodySize_ != nullptr;};
    void deleteBodySize() { this->bodySize_ = nullptr;};
    inline int32_t bodySize() const { DARABONBA_PTR_GET_DEFAULT(bodySize_, 0) };
    inline ListMessagesResponseBodyDataList& setBodySize(int32_t bodySize) { DARABONBA_PTR_SET_VALUE(bodySize_, bodySize) };


    // bornHost Field Functions 
    bool hasBornHost() const { return this->bornHost_ != nullptr;};
    void deleteBornHost() { this->bornHost_ = nullptr;};
    inline string bornHost() const { DARABONBA_PTR_GET_DEFAULT(bornHost_, "") };
    inline ListMessagesResponseBodyDataList& setBornHost(string bornHost) { DARABONBA_PTR_SET_VALUE(bornHost_, bornHost) };


    // bornTime Field Functions 
    bool hasBornTime() const { return this->bornTime_ != nullptr;};
    void deleteBornTime() { this->bornTime_ = nullptr;};
    inline string bornTime() const { DARABONBA_PTR_GET_DEFAULT(bornTime_, "") };
    inline ListMessagesResponseBodyDataList& setBornTime(string bornTime) { DARABONBA_PTR_SET_VALUE(bornTime_, bornTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListMessagesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // liteTopicName Field Functions 
    bool hasLiteTopicName() const { return this->liteTopicName_ != nullptr;};
    void deleteLiteTopicName() { this->liteTopicName_ = nullptr;};
    inline string liteTopicName() const { DARABONBA_PTR_GET_DEFAULT(liteTopicName_, "") };
    inline ListMessagesResponseBodyDataList& setLiteTopicName(string liteTopicName) { DARABONBA_PTR_SET_VALUE(liteTopicName_, liteTopicName) };


    // messageGroup Field Functions 
    bool hasMessageGroup() const { return this->messageGroup_ != nullptr;};
    void deleteMessageGroup() { this->messageGroup_ = nullptr;};
    inline string messageGroup() const { DARABONBA_PTR_GET_DEFAULT(messageGroup_, "") };
    inline ListMessagesResponseBodyDataList& setMessageGroup(string messageGroup) { DARABONBA_PTR_SET_VALUE(messageGroup_, messageGroup) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ListMessagesResponseBodyDataList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messageKeys Field Functions 
    bool hasMessageKeys() const { return this->messageKeys_ != nullptr;};
    void deleteMessageKeys() { this->messageKeys_ = nullptr;};
    inline const vector<string> & messageKeys() const { DARABONBA_PTR_GET_CONST(messageKeys_, vector<string>) };
    inline vector<string> messageKeys() { DARABONBA_PTR_GET(messageKeys_, vector<string>) };
    inline ListMessagesResponseBodyDataList& setMessageKeys(const vector<string> & messageKeys) { DARABONBA_PTR_SET_VALUE(messageKeys_, messageKeys) };
    inline ListMessagesResponseBodyDataList& setMessageKeys(vector<string> && messageKeys) { DARABONBA_PTR_SET_RVALUE(messageKeys_, messageKeys) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline ListMessagesResponseBodyDataList& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline ListMessagesResponseBodyDataList& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMessagesResponseBodyDataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storeHost Field Functions 
    bool hasStoreHost() const { return this->storeHost_ != nullptr;};
    void deleteStoreHost() { this->storeHost_ = nullptr;};
    inline string storeHost() const { DARABONBA_PTR_GET_DEFAULT(storeHost_, "") };
    inline ListMessagesResponseBodyDataList& setStoreHost(string storeHost) { DARABONBA_PTR_SET_VALUE(storeHost_, storeHost) };


    // storeTime Field Functions 
    bool hasStoreTime() const { return this->storeTime_ != nullptr;};
    void deleteStoreTime() { this->storeTime_ = nullptr;};
    inline string storeTime() const { DARABONBA_PTR_GET_DEFAULT(storeTime_, "") };
    inline ListMessagesResponseBodyDataList& setStoreTime(string storeTime) { DARABONBA_PTR_SET_VALUE(storeTime_, storeTime) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListMessagesResponseBodyDataList& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // userProperties Field Functions 
    bool hasUserProperties() const { return this->userProperties_ != nullptr;};
    void deleteUserProperties() { this->userProperties_ = nullptr;};
    inline const map<string, string> & userProperties() const { DARABONBA_PTR_GET_CONST(userProperties_, map<string, string>) };
    inline map<string, string> userProperties() { DARABONBA_PTR_GET(userProperties_, map<string, string>) };
    inline ListMessagesResponseBodyDataList& setUserProperties(const map<string, string> & userProperties) { DARABONBA_PTR_SET_VALUE(userProperties_, userProperties) };
    inline ListMessagesResponseBodyDataList& setUserProperties(map<string, string> && userProperties) { DARABONBA_PTR_SET_RVALUE(userProperties_, userProperties) };


  protected:
    // Message body.
    std::shared_ptr<string> body_ = nullptr;
    // Message body size.
    std::shared_ptr<int32_t> bodySize_ = nullptr;
    // The client on which messages are produced.
    std::shared_ptr<string> bornHost_ = nullptr;
    // Message born time.
    std::shared_ptr<string> bornTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> liteTopicName_ = nullptr;
    // The message group. This parameter is returned only for ordered messages.
    std::shared_ptr<string> messageGroup_ = nullptr;
    // Message Id.
    std::shared_ptr<string> messageId_ = nullptr;
    // Message keys.
    std::shared_ptr<vector<string>> messageKeys_ = nullptr;
    // The message tag.
    std::shared_ptr<string> messageTag_ = nullptr;
    // Message type.
    std::shared_ptr<string> messageType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The broker on which messages are stored.
    std::shared_ptr<string> storeHost_ = nullptr;
    // Message store time.
    std::shared_ptr<string> storeTime_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topicName_ = nullptr;
    // Message user properties.
    std::shared_ptr<map<string, string>> userProperties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
