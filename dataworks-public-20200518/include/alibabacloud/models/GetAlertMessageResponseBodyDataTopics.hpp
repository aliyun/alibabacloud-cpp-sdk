// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODYDATATOPICS_HPP_
#define ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODYDATATOPICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetAlertMessageResponseBodyDataTopics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertMessageResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(TopicOwner, topicOwner_);
      DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertMessageResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(TopicOwner, topicOwner_);
      DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
    };
    GetAlertMessageResponseBodyDataTopics() = default ;
    GetAlertMessageResponseBodyDataTopics(const GetAlertMessageResponseBodyDataTopics &) = default ;
    GetAlertMessageResponseBodyDataTopics(GetAlertMessageResponseBodyDataTopics &&) = default ;
    GetAlertMessageResponseBodyDataTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertMessageResponseBodyDataTopics() = default ;
    GetAlertMessageResponseBodyDataTopics& operator=(const GetAlertMessageResponseBodyDataTopics &) = default ;
    GetAlertMessageResponseBodyDataTopics& operator=(GetAlertMessageResponseBodyDataTopics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->nodeId_ != nullptr && this->topicId_ != nullptr && this->topicName_ != nullptr && this->topicOwner_ != nullptr && this->topicStatus_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetAlertMessageResponseBodyDataTopics& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetAlertMessageResponseBodyDataTopics& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetAlertMessageResponseBodyDataTopics& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetAlertMessageResponseBodyDataTopics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // topicOwner Field Functions 
    bool hasTopicOwner() const { return this->topicOwner_ != nullptr;};
    void deleteTopicOwner() { this->topicOwner_ = nullptr;};
    inline string topicOwner() const { DARABONBA_PTR_GET_DEFAULT(topicOwner_, "") };
    inline GetAlertMessageResponseBodyDataTopics& setTopicOwner(string topicOwner) { DARABONBA_PTR_SET_VALUE(topicOwner_, topicOwner) };


    // topicStatus Field Functions 
    bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
    void deleteTopicStatus() { this->topicStatus_ = nullptr;};
    inline string topicStatus() const { DARABONBA_PTR_GET_DEFAULT(topicStatus_, "") };
    inline GetAlertMessageResponseBodyDataTopics& setTopicStatus(string topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };


  protected:
    // The ID of the instance that triggered the event.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The ID of the node that triggered the event.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The event ID.
    std::shared_ptr<int64_t> topicId_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> topicName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the event owner.
    std::shared_ptr<string> topicOwner_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   IGNORE
    // *   NEW
    // *   FIXING
    // *   RECOVER
    std::shared_ptr<string> topicStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
