// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODYDATATOPICS_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODYDATATOPICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTopicsResponseBodyDataTopics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicsResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(FixTime, fixTime_);
      DARABONBA_PTR_TO_JSON(HappenTime, happenTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeOwner, nodeOwner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicsResponseBodyDataTopics& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(FixTime, fixTime_);
      DARABONBA_PTR_FROM_JSON(HappenTime, happenTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeOwner, nodeOwner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    ListTopicsResponseBodyDataTopics() = default ;
    ListTopicsResponseBodyDataTopics(const ListTopicsResponseBodyDataTopics &) = default ;
    ListTopicsResponseBodyDataTopics(ListTopicsResponseBodyDataTopics &&) = default ;
    ListTopicsResponseBodyDataTopics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicsResponseBodyDataTopics() = default ;
    ListTopicsResponseBodyDataTopics& operator=(const ListTopicsResponseBodyDataTopics &) = default ;
    ListTopicsResponseBodyDataTopics& operator=(ListTopicsResponseBodyDataTopics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addTime_ != nullptr
        && this->fixTime_ != nullptr && this->happenTime_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr
        && this->nodeOwner_ != nullptr && this->projectId_ != nullptr && this->topicId_ != nullptr && this->topicName_ != nullptr && this->topicStatus_ != nullptr
        && this->topicType_ != nullptr; };
    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline int64_t addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // fixTime Field Functions 
    bool hasFixTime() const { return this->fixTime_ != nullptr;};
    void deleteFixTime() { this->fixTime_ = nullptr;};
    inline int64_t fixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setFixTime(int64_t fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


    // happenTime Field Functions 
    bool hasHappenTime() const { return this->happenTime_ != nullptr;};
    void deleteHappenTime() { this->happenTime_ = nullptr;};
    inline int64_t happenTime() const { DARABONBA_PTR_GET_DEFAULT(happenTime_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setHappenTime(int64_t happenTime) { DARABONBA_PTR_SET_VALUE(happenTime_, happenTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListTopicsResponseBodyDataTopics& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeOwner Field Functions 
    bool hasNodeOwner() const { return this->nodeOwner_ != nullptr;};
    void deleteNodeOwner() { this->nodeOwner_ = nullptr;};
    inline string nodeOwner() const { DARABONBA_PTR_GET_DEFAULT(nodeOwner_, "") };
    inline ListTopicsResponseBodyDataTopics& setNodeOwner(string nodeOwner) { DARABONBA_PTR_SET_VALUE(nodeOwner_, nodeOwner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline ListTopicsResponseBodyDataTopics& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListTopicsResponseBodyDataTopics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // topicStatus Field Functions 
    bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
    void deleteTopicStatus() { this->topicStatus_ = nullptr;};
    inline string topicStatus() const { DARABONBA_PTR_GET_DEFAULT(topicStatus_, "") };
    inline ListTopicsResponseBodyDataTopics& setTopicStatus(string topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline string topicType() const { DARABONBA_PTR_GET_DEFAULT(topicType_, "") };
    inline ListTopicsResponseBodyDataTopics& setTopicType(string topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };


  protected:
    // The timestamp when the event was found.
    std::shared_ptr<int64_t> addTime_ = nullptr;
    // The timestamp when the event was processed.
    std::shared_ptr<int64_t> fixTime_ = nullptr;
    // The timestamp when the event occurred. A time difference may exist between the time when the event occurred and the time when the event was found.
    std::shared_ptr<int64_t> happenTime_ = nullptr;
    // The ID of the node instance that triggers the event.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The ID of the node that triggers the event.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account that is used by the node owner.
    std::shared_ptr<string> nodeOwner_ = nullptr;
    // The ID of the workspace to which the node belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The ID of the event.
    std::shared_ptr<int64_t> topicId_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> topicName_ = nullptr;
    // The status of the event. Valid values: IGNORE, NEW, FIXING, and RECOVER. The value IGNORE indicates that the event is ignored. The value NEW indicates that the event is a new event. The value FIXING indicates that the event is being processed. The value RECOVER indicates that the event is processed.
    std::shared_ptr<string> topicStatus_ = nullptr;
    // The type of the event. Valid values: SLOW and ERROR. The value SLOW indicates that the running duration of the node in the current scheduling cycle is significantly longer than the average running duration of the node in previous scheduling cycles. The value ERROR indicates that the node fails to run.
    std::shared_ptr<string> topicType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
