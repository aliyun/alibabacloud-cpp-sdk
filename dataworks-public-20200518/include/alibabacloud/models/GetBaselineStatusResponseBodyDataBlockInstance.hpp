// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINESTATUSRESPONSEBODYDATABLOCKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINESTATUSRESPONSEBODYDATABLOCKINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineStatusResponseBodyDataBlockInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineStatusResponseBodyDataBlockInstance& obj) { 
      DARABONBA_PTR_TO_JSON(EndCast, endCast_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineStatusResponseBodyDataBlockInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetBaselineStatusResponseBodyDataBlockInstance() = default ;
    GetBaselineStatusResponseBodyDataBlockInstance(const GetBaselineStatusResponseBodyDataBlockInstance &) = default ;
    GetBaselineStatusResponseBodyDataBlockInstance(GetBaselineStatusResponseBodyDataBlockInstance &&) = default ;
    GetBaselineStatusResponseBodyDataBlockInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineStatusResponseBodyDataBlockInstance() = default ;
    GetBaselineStatusResponseBodyDataBlockInstance& operator=(const GetBaselineStatusResponseBodyDataBlockInstance &) = default ;
    GetBaselineStatusResponseBodyDataBlockInstance& operator=(GetBaselineStatusResponseBodyDataBlockInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endCast_ != nullptr
        && this->finishTime_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr
        && this->projectId_ != nullptr && this->status_ != nullptr; };
    // endCast Field Functions 
    bool hasEndCast() const { return this->endCast_ != nullptr;};
    void deleteEndCast() { this->endCast_ = nullptr;};
    inline int64_t endCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBaselineStatusResponseBodyDataBlockInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp of the predicted time when the instance finished running.
    std::shared_ptr<int64_t> endCast_ = nullptr;
    // The timestamp of the actual time when the instance finished running.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the workspace to which the node belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the instance. Valid values: NOT_RUN, WAIT_TIME, WAIT_RESOURCE, RUNNING, CHECKING, CHECKING_CONDITION, FAILURE, and SUCCESS. The value NOT_RUN indicates that the instance is not run. The value WAIT_TIME indicates that the instance is waiting to be run. The value WAIT_RESOURCE indicates that the instance is waiting for resources. The value RUNNING indicates that the instance is running. The value CHECKING indicates that data quality is being checked for the instance. The value CHECKING_CONDITION indicates that branch conditions are being checked for the instance. The value FAILURE indicates that the instance fails to run. The value SUCCESS indicates that the instance is run.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
