// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetTopicResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(Assigner, assigner_);
      DARABONBA_PTR_TO_JSON(BaselineBuffer, baselineBuffer_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineInGroupId, baselineInGroupId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineStatus, baselineStatus_);
      DARABONBA_PTR_TO_JSON(Buffer, buffer_);
      DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
      DARABONBA_PTR_TO_JSON(DealUser, dealUser_);
      DARABONBA_PTR_TO_JSON(FixTime, fixTime_);
      DARABONBA_PTR_TO_JSON(HappenTime, happenTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextAlertTime, nextAlertTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
      DARABONBA_PTR_TO_JSON(TopicType, topicType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(Assigner, assigner_);
      DARABONBA_PTR_FROM_JSON(BaselineBuffer, baselineBuffer_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineInGroupId, baselineInGroupId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineStatus, baselineStatus_);
      DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
      DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
      DARABONBA_PTR_FROM_JSON(DealUser, dealUser_);
      DARABONBA_PTR_FROM_JSON(FixTime, fixTime_);
      DARABONBA_PTR_FROM_JSON(HappenTime, happenTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextAlertTime, nextAlertTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
      DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
    };
    GetTopicResponseBodyData() = default ;
    GetTopicResponseBodyData(const GetTopicResponseBodyData &) = default ;
    GetTopicResponseBodyData(GetTopicResponseBodyData &&) = default ;
    GetTopicResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicResponseBodyData() = default ;
    GetTopicResponseBodyData& operator=(const GetTopicResponseBodyData &) = default ;
    GetTopicResponseBodyData& operator=(GetTopicResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addTime_ != nullptr
        && this->alertTime_ != nullptr && this->assigner_ != nullptr && this->baselineBuffer_ != nullptr && this->baselineId_ != nullptr && this->baselineInGroupId_ != nullptr
        && this->baselineName_ != nullptr && this->baselineStatus_ != nullptr && this->buffer_ != nullptr && this->dealTime_ != nullptr && this->dealUser_ != nullptr
        && this->fixTime_ != nullptr && this->happenTime_ != nullptr && this->instanceId_ != nullptr && this->nextAlertTime_ != nullptr && this->nodeId_ != nullptr
        && this->nodeName_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->topicId_ != nullptr && this->topicName_ != nullptr
        && this->topicStatus_ != nullptr && this->topicType_ != nullptr; };
    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline int64_t addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
    inline GetTopicResponseBodyData& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline int64_t alertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
    inline GetTopicResponseBodyData& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // assigner Field Functions 
    bool hasAssigner() const { return this->assigner_ != nullptr;};
    void deleteAssigner() { this->assigner_ = nullptr;};
    inline string assigner() const { DARABONBA_PTR_GET_DEFAULT(assigner_, "") };
    inline GetTopicResponseBodyData& setAssigner(string assigner) { DARABONBA_PTR_SET_VALUE(assigner_, assigner) };


    // baselineBuffer Field Functions 
    bool hasBaselineBuffer() const { return this->baselineBuffer_ != nullptr;};
    void deleteBaselineBuffer() { this->baselineBuffer_ = nullptr;};
    inline int64_t baselineBuffer() const { DARABONBA_PTR_GET_DEFAULT(baselineBuffer_, 0L) };
    inline GetTopicResponseBodyData& setBaselineBuffer(int64_t baselineBuffer) { DARABONBA_PTR_SET_VALUE(baselineBuffer_, baselineBuffer) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetTopicResponseBodyData& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineInGroupId Field Functions 
    bool hasBaselineInGroupId() const { return this->baselineInGroupId_ != nullptr;};
    void deleteBaselineInGroupId() { this->baselineInGroupId_ = nullptr;};
    inline int32_t baselineInGroupId() const { DARABONBA_PTR_GET_DEFAULT(baselineInGroupId_, 0) };
    inline GetTopicResponseBodyData& setBaselineInGroupId(int32_t baselineInGroupId) { DARABONBA_PTR_SET_VALUE(baselineInGroupId_, baselineInGroupId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetTopicResponseBodyData& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineStatus Field Functions 
    bool hasBaselineStatus() const { return this->baselineStatus_ != nullptr;};
    void deleteBaselineStatus() { this->baselineStatus_ = nullptr;};
    inline string baselineStatus() const { DARABONBA_PTR_GET_DEFAULT(baselineStatus_, "") };
    inline GetTopicResponseBodyData& setBaselineStatus(string baselineStatus) { DARABONBA_PTR_SET_VALUE(baselineStatus_, baselineStatus) };


    // buffer Field Functions 
    bool hasBuffer() const { return this->buffer_ != nullptr;};
    void deleteBuffer() { this->buffer_ = nullptr;};
    inline int64_t buffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0L) };
    inline GetTopicResponseBodyData& setBuffer(int64_t buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


    // dealTime Field Functions 
    bool hasDealTime() const { return this->dealTime_ != nullptr;};
    void deleteDealTime() { this->dealTime_ = nullptr;};
    inline int64_t dealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
    inline GetTopicResponseBodyData& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


    // dealUser Field Functions 
    bool hasDealUser() const { return this->dealUser_ != nullptr;};
    void deleteDealUser() { this->dealUser_ = nullptr;};
    inline string dealUser() const { DARABONBA_PTR_GET_DEFAULT(dealUser_, "") };
    inline GetTopicResponseBodyData& setDealUser(string dealUser) { DARABONBA_PTR_SET_VALUE(dealUser_, dealUser) };


    // fixTime Field Functions 
    bool hasFixTime() const { return this->fixTime_ != nullptr;};
    void deleteFixTime() { this->fixTime_ = nullptr;};
    inline int64_t fixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, 0L) };
    inline GetTopicResponseBodyData& setFixTime(int64_t fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


    // happenTime Field Functions 
    bool hasHappenTime() const { return this->happenTime_ != nullptr;};
    void deleteHappenTime() { this->happenTime_ = nullptr;};
    inline int64_t happenTime() const { DARABONBA_PTR_GET_DEFAULT(happenTime_, 0L) };
    inline GetTopicResponseBodyData& setHappenTime(int64_t happenTime) { DARABONBA_PTR_SET_VALUE(happenTime_, happenTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetTopicResponseBodyData& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextAlertTime Field Functions 
    bool hasNextAlertTime() const { return this->nextAlertTime_ != nullptr;};
    void deleteNextAlertTime() { this->nextAlertTime_ = nullptr;};
    inline int64_t nextAlertTime() const { DARABONBA_PTR_GET_DEFAULT(nextAlertTime_, 0L) };
    inline GetTopicResponseBodyData& setNextAlertTime(int64_t nextAlertTime) { DARABONBA_PTR_SET_VALUE(nextAlertTime_, nextAlertTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetTopicResponseBodyData& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetTopicResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetTopicResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetTopicResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline GetTopicResponseBodyData& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // topicStatus Field Functions 
    bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
    void deleteTopicStatus() { this->topicStatus_ = nullptr;};
    inline string topicStatus() const { DARABONBA_PTR_GET_DEFAULT(topicStatus_, "") };
    inline GetTopicResponseBodyData& setTopicStatus(string topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };


    // topicType Field Functions 
    bool hasTopicType() const { return this->topicType_ != nullptr;};
    void deleteTopicType() { this->topicType_ = nullptr;};
    inline string topicType() const { DARABONBA_PTR_GET_DEFAULT(topicType_, "") };
    inline GetTopicResponseBodyData& setTopicType(string topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };


  protected:
    // The timestamp when the event was found.
    std::shared_ptr<int64_t> addTime_ = nullptr;
    // The timestamp when the first alert was reported.
    std::shared_ptr<int64_t> alertTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the alert recipient.
    std::shared_ptr<string> assigner_ = nullptr;
    // The margin of the worst baseline instance. Unit: seconds.
    std::shared_ptr<int64_t> baselineBuffer_ = nullptr;
    // The ID of the baseline to which the worst baseline instance belongs.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The ID of the cycle of the worst baseline instance.
    std::shared_ptr<int32_t> baselineInGroupId_ = nullptr;
    // The name of the baseline to which the worst baseline instance belongs.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The status of the baseline. Valid values: ERROR, SAFE, DANGROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes are run before the alert duration begins. The value DANGROUS indicates that nodes are still running after the alert duration ends but the committed completion time does not arrive. The value OVER indicates that nodes are still running after the committed completion time.
    std::shared_ptr<string> baselineStatus_ = nullptr;
    // The margin of the event. Unit: seconds.
    std::shared_ptr<int64_t> buffer_ = nullptr;
    // The timestamp when the event was last processed.
    std::shared_ptr<int64_t> dealTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who last processed the event.
    std::shared_ptr<string> dealUser_ = nullptr;
    // The timestamp when the event was processed.
    std::shared_ptr<int64_t> fixTime_ = nullptr;
    // The timestamp when the event occurred. A time difference may exist between the time when the event occurred and the time when the event was found.
    std::shared_ptr<int64_t> happenTime_ = nullptr;
    // The ID of the instance that triggered the event.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The timestamp when the system reports the next alert.
    std::shared_ptr<int64_t> nextAlertTime_ = nullptr;
    // The ID of the node that triggered the event.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node that triggered the event.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the event owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the workspace to which the node that triggered the event belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The event ID.
    std::shared_ptr<int64_t> topicId_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> topicName_ = nullptr;
    // The status of the event. Valid values: IGNORE, NEW, FIXING, and RECOVER.
    std::shared_ptr<string> topicStatus_ = nullptr;
    // The type of the event. Valid values: SLOW and ERROR. The value SLOW indicates that the duration of the task is significantly longer than the average duration of the task in previous cycles. The value ERROR indicates that the task fails to run.
    std::shared_ptr<string> topicType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
