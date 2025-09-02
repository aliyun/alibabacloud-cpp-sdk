// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODECHILDRENRESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_GETNODECHILDRENRESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeChildrenResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeChildrenResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_TO_JSON(StepType, stepType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeChildrenResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
      DARABONBA_PTR_FROM_JSON(StepType, stepType_);
    };
    GetNodeChildrenResponseBodyDataNodes() = default ;
    GetNodeChildrenResponseBodyDataNodes(const GetNodeChildrenResponseBodyDataNodes &) = default ;
    GetNodeChildrenResponseBodyDataNodes(GetNodeChildrenResponseBodyDataNodes &&) = default ;
    GetNodeChildrenResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeChildrenResponseBodyDataNodes() = default ;
    GetNodeChildrenResponseBodyDataNodes& operator=(const GetNodeChildrenResponseBodyDataNodes &) = default ;
    GetNodeChildrenResponseBodyDataNodes& operator=(GetNodeChildrenResponseBodyDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->cronExpress_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->ownerId_ != nullptr && this->priority_ != nullptr
        && this->programType_ != nullptr && this->projectId_ != nullptr && this->repeatability_ != nullptr && this->schedulerType_ != nullptr && this->stepType_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetNodeChildrenResponseBodyDataNodes& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline GetNodeChildrenResponseBodyDataNodes& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetNodeChildrenResponseBodyDataNodes& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetNodeChildrenResponseBodyDataNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetNodeChildrenResponseBodyDataNodes& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetNodeChildrenResponseBodyDataNodes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline GetNodeChildrenResponseBodyDataNodes& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetNodeChildrenResponseBodyDataNodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline bool repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
    inline GetNodeChildrenResponseBodyDataNodes& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline GetNodeChildrenResponseBodyDataNodes& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline GetNodeChildrenResponseBodyDataNodes& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The CRON expression. CRON expressions are used to run auto triggered nodes.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The priority. Valid values: 1 to 8. A large value indicates a high priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The type of the node.
    std::shared_ptr<string> programType_ = nullptr;
    // The ID of the workspace to which the node belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Indicates whether the node can be rerun if the node fails to run. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> repeatability_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL: The node is an auto triggered node.
    // *   MANUAL: The node is a manually triggered node. Manually triggered nodes cannot be automatically triggered.
    // *   PAUSE: The node is a paused node. Paused nodes are started as scheduled but the system sets the status of the nodes to failed when it starts to run them.
    // *   SKIP: The node is a dry-run node. Dry-run nodes are started as scheduled but the system sets the status of the nodes to successful when it starts to run them.
    std::shared_ptr<string> schedulerType_ = nullptr;
    // The scheduling dependency type. Valid values:
    // 
    // *   **0**: same-cycle scheduling dependency
    // *   **3**: cross-cycle scheduling dependency
    std::shared_ptr<string> stepType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
