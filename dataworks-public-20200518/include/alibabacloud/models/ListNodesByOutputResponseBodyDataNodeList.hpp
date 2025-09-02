// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTRESPONSEBODYDATANODELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTRESPONSEBODYDATANODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodesByOutputResponseBodyDataNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesByOutputResponseBodyDataNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(Connection, connection_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_TO_JSON(ResGroupName, resGroupName_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesByOutputResponseBodyDataNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(Connection, connection_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_FROM_JSON(ResGroupName, resGroupName_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
    };
    ListNodesByOutputResponseBodyDataNodeList() = default ;
    ListNodesByOutputResponseBodyDataNodeList(const ListNodesByOutputResponseBodyDataNodeList &) = default ;
    ListNodesByOutputResponseBodyDataNodeList(ListNodesByOutputResponseBodyDataNodeList &&) = default ;
    ListNodesByOutputResponseBodyDataNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesByOutputResponseBodyDataNodeList() = default ;
    ListNodesByOutputResponseBodyDataNodeList& operator=(const ListNodesByOutputResponseBodyDataNodeList &) = default ;
    ListNodesByOutputResponseBodyDataNodeList& operator=(ListNodesByOutputResponseBodyDataNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->connection_ != nullptr && this->cronExpress_ != nullptr && this->description_ != nullptr && this->dqcDescription_ != nullptr && this->dqcType_ != nullptr
        && this->fileType_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->ownerId_ != nullptr && this->paramValues_ != nullptr
        && this->priority_ != nullptr && this->programType_ != nullptr && this->projectId_ != nullptr && this->relatedFlowId_ != nullptr && this->repeatInterval_ != nullptr
        && this->repeatability_ != nullptr && this->resGroupName_ != nullptr && this->schedulerType_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListNodesByOutputResponseBodyDataNodeList& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline string connection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dqcDescription Field Functions 
    bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
    void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
    inline string dqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


    // dqcType Field Functions 
    bool hasDqcType() const { return this->dqcType_ != nullptr;};
    void deleteDqcType() { this->dqcType_ = nullptr;};
    inline int32_t dqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
    inline ListNodesByOutputResponseBodyDataNodeList& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListNodesByOutputResponseBodyDataNodeList& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListNodesByOutputResponseBodyDataNodeList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodesByOutputResponseBodyDataNodeList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // relatedFlowId Field Functions 
    bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
    void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
    inline int64_t relatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
    inline ListNodesByOutputResponseBodyDataNodeList& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int32_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
    inline ListNodesByOutputResponseBodyDataNodeList& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline bool repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
    inline ListNodesByOutputResponseBodyDataNodeList& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // resGroupName Field Functions 
    bool hasResGroupName() const { return this->resGroupName_ != nullptr;};
    void deleteResGroupName() { this->resGroupName_ = nullptr;};
    inline string resGroupName() const { DARABONBA_PTR_GET_DEFAULT(resGroupName_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setResGroupName(string resGroupName) { DARABONBA_PTR_SET_VALUE(resGroupName_, resGroupName) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline ListNodesByOutputResponseBodyDataNodeList& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> connection_ = nullptr;
    // The CRON expression.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The description of the node.
    std::shared_ptr<string> description_ = nullptr;
    // The table and partition filter expression in Data Quality that are associated with the node.
    std::shared_ptr<string> dqcDescription_ = nullptr;
    // Indicates whether the node is associated with a monitoring rule in Data Quality. Valid values: 0 and 1. The value 0 indicates that the node is associated with a monitoring rule in Data Quality. The value 1 indicates that the node is not associated with a monitoring rule in Data Quality.
    std::shared_ptr<int32_t> dqcType_ = nullptr;
    // The node type. Valid values:
    // 
    // 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 99 (zero load), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (real-time synchronization), 1089 (cross-tenant collaboration), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (assignment), and 1221 (PyODPS 3)
    std::shared_ptr<string> fileType_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The owner ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The scheduling parameters of the node.
    std::shared_ptr<string> paramValues_ = nullptr;
    // The priority of the node. Valid values: 1, 3, 5, 7, and 8. A greater value indicates a higher priority. Default value: 1.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The node type. This parameter is deprecated. For more information about node types, see valid values of the FileType parameter.
    std::shared_ptr<string> programType_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The ID of the workflow to which the node belongs.
    std::shared_ptr<int64_t> relatedFlowId_ = nullptr;
    // The interval at which the node is rerun after the node fails to run.
    std::shared_ptr<int32_t> repeatInterval_ = nullptr;
    // Indicates whether the node can be rerun.
    std::shared_ptr<bool> repeatability_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resGroupName_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL: The node is an auto triggered node. The scheduling system regularly runs the node.
    // *   MANUAL: The node is a manually triggered node. The scheduling system does not regularly run the node.
    // *   PAUSE: The node is a frozen node. The scheduling system regularly runs the node but sets the status of the node to failed when the scheduling system starts to run the node.
    // *   SKIP: The node is a dry-run node. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
    std::shared_ptr<string> schedulerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
