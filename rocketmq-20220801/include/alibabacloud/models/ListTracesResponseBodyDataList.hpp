// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTracesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTracesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(bornTime, bornTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(messageKeys, messageKeys_);
      DARABONBA_PTR_TO_JSON(messageTag, messageTag_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTracesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(bornTime, bornTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(messageKeys, messageKeys_);
      DARABONBA_PTR_FROM_JSON(messageTag, messageTag_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ListTracesResponseBodyDataList() = default ;
    ListTracesResponseBodyDataList(const ListTracesResponseBodyDataList &) = default ;
    ListTracesResponseBodyDataList(ListTracesResponseBodyDataList &&) = default ;
    ListTracesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTracesResponseBodyDataList() = default ;
    ListTracesResponseBodyDataList& operator=(const ListTracesResponseBodyDataList &) = default ;
    ListTracesResponseBodyDataList& operator=(ListTracesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bornTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->messageId_ == nullptr && return this->messageKeys_ == nullptr && return this->messageTag_ == nullptr && return this->regionId_ == nullptr
        && return this->topicName_ == nullptr; };
    // bornTime Field Functions 
    bool hasBornTime() const { return this->bornTime_ != nullptr;};
    void deleteBornTime() { this->bornTime_ = nullptr;};
    inline string bornTime() const { DARABONBA_PTR_GET_DEFAULT(bornTime_, "") };
    inline ListTracesResponseBodyDataList& setBornTime(string bornTime) { DARABONBA_PTR_SET_VALUE(bornTime_, bornTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTracesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ListTracesResponseBodyDataList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messageKeys Field Functions 
    bool hasMessageKeys() const { return this->messageKeys_ != nullptr;};
    void deleteMessageKeys() { this->messageKeys_ = nullptr;};
    inline const vector<string> & messageKeys() const { DARABONBA_PTR_GET_CONST(messageKeys_, vector<string>) };
    inline vector<string> messageKeys() { DARABONBA_PTR_GET(messageKeys_, vector<string>) };
    inline ListTracesResponseBodyDataList& setMessageKeys(const vector<string> & messageKeys) { DARABONBA_PTR_SET_VALUE(messageKeys_, messageKeys) };
    inline ListTracesResponseBodyDataList& setMessageKeys(vector<string> && messageKeys) { DARABONBA_PTR_SET_RVALUE(messageKeys_, messageKeys) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline ListTracesResponseBodyDataList& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTracesResponseBodyDataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListTracesResponseBodyDataList& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // Message born time.
    std::shared_ptr<string> bornTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Message id.
    std::shared_ptr<string> messageId_ = nullptr;
    // Message keys.
    std::shared_ptr<vector<string>> messageKeys_ = nullptr;
    // Message tag.
    std::shared_ptr<string> messageTag_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
