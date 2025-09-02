// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINNERNODESRESPONSEBODYPAGINGNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTINNERNODESRESPONSEBODYPAGINGNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInnerNodesResponseBodyPagingNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInnerNodesResponseBodyPagingNodes& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(Connection, connection_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_TO_JSON(ResGroupName, resGroupName_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInnerNodesResponseBodyPagingNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(Connection, connection_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_FROM_JSON(ResGroupName, resGroupName_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
    };
    ListInnerNodesResponseBodyPagingNodes() = default ;
    ListInnerNodesResponseBodyPagingNodes(const ListInnerNodesResponseBodyPagingNodes &) = default ;
    ListInnerNodesResponseBodyPagingNodes(ListInnerNodesResponseBodyPagingNodes &&) = default ;
    ListInnerNodesResponseBodyPagingNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInnerNodesResponseBodyPagingNodes() = default ;
    ListInnerNodesResponseBodyPagingNodes& operator=(const ListInnerNodesResponseBodyPagingNodes &) = default ;
    ListInnerNodesResponseBodyPagingNodes& operator=(ListInnerNodesResponseBodyPagingNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->businessId_ != nullptr && this->connection_ != nullptr && this->cronExpress_ != nullptr && this->description_ != nullptr && this->dqcDescription_ != nullptr
        && this->dqcType_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->ownerId_ != nullptr && this->paramValues_ != nullptr
        && this->priority_ != nullptr && this->programType_ != nullptr && this->projectId_ != nullptr && this->repeatInterval_ != nullptr && this->repeatability_ != nullptr
        && this->resGroupName_ != nullptr && this->schedulerType_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListInnerNodesResponseBodyPagingNodes& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline ListInnerNodesResponseBodyPagingNodes& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline string connection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dqcDescription Field Functions 
    bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
    void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
    inline string dqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


    // dqcType Field Functions 
    bool hasDqcType() const { return this->dqcType_ != nullptr;};
    void deleteDqcType() { this->dqcType_ = nullptr;};
    inline string dqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setDqcType(string dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListInnerNodesResponseBodyPagingNodes& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListInnerNodesResponseBodyPagingNodes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListInnerNodesResponseBodyPagingNodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline ListInnerNodesResponseBodyPagingNodes& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline bool repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
    inline ListInnerNodesResponseBodyPagingNodes& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // resGroupName Field Functions 
    bool hasResGroupName() const { return this->resGroupName_ != nullptr;};
    void deleteResGroupName() { this->resGroupName_ = nullptr;};
    inline string resGroupName() const { DARABONBA_PTR_GET_DEFAULT(resGroupName_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setResGroupName(string resGroupName) { DARABONBA_PTR_SET_VALUE(resGroupName_, resGroupName) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline ListInnerNodesResponseBodyPagingNodes& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The connection string.
    std::shared_ptr<string> connection_ = nullptr;
    // The CRON expression.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The description of the inner node.
    std::shared_ptr<string> description_ = nullptr;
    // The table and partition filter expression in Data Quality that are associated with the inner node.
    std::shared_ptr<string> dqcDescription_ = nullptr;
    // Indicates whether the inner node is associated with a monitoring rule in Data Quality. Valid values: 0 and 1. The value 0 indicates that the inner node is associated with a monitoring rule in Data Quality. The value 1 indicates that the inner node is not associated with a monitoring rule in Data Quality.
    std::shared_ptr<string> dqcType_ = nullptr;
    // The inner node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the inner node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The owner ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The additional parameters.
    std::shared_ptr<string> paramValues_ = nullptr;
    // The priority of the inner node. Valid values: 1, 3, 5, 7, and 8.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The type of the inner node.
    std::shared_ptr<string> programType_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The interval at which the inner node is rerun after the inner node fails to run.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // Indicates whether the inner node can be rerun.
    std::shared_ptr<bool> repeatability_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resGroupName_ = nullptr;
    // The scheduling type of the inner node. Valid values:
    // 
    // *   NORMAL: The inner node is an auto triggered node.
    // *   MANUAL: The inner node is a manually triggered node. The scheduling system does not run the node on a regular basis.
    // *   PAUSE: The inner node is a paused node.
    // *   SKIP: The inner node is a dry-run node. Dry-run nodes are started as scheduled, but the scheduling system sets the status of the nodes to successful when it starts to run them.
    std::shared_ptr<string> schedulerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
