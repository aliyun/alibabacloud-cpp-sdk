// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodesResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(Connection, connection_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_TO_JSON(DeployDate, deployDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_TO_JSON(ResGroupIdentifier, resGroupIdentifier_);
      DARABONBA_PTR_TO_JSON(ResGroupName, resGroupName_);
      DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(Connection, connection_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
      DARABONBA_PTR_FROM_JSON(DeployDate, deployDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
      DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowId, relatedFlowId_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
      DARABONBA_PTR_FROM_JSON(ResGroupIdentifier, resGroupIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResGroupName, resGroupName_);
      DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
    };
    ListNodesResponseBodyDataNodes() = default ;
    ListNodesResponseBodyDataNodes(const ListNodesResponseBodyDataNodes &) = default ;
    ListNodesResponseBodyDataNodes(ListNodesResponseBodyDataNodes &&) = default ;
    ListNodesResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyDataNodes() = default ;
    ListNodesResponseBodyDataNodes& operator=(const ListNodesResponseBodyDataNodes &) = default ;
    ListNodesResponseBodyDataNodes& operator=(ListNodesResponseBodyDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineId_ != nullptr
        && this->businessId_ != nullptr && this->connection_ != nullptr && this->createTime_ != nullptr && this->cronExpress_ != nullptr && this->deployDate_ != nullptr
        && this->description_ != nullptr && this->dqcDescription_ != nullptr && this->dqcType_ != nullptr && this->fileId_ != nullptr && this->fileType_ != nullptr
        && this->fileVersion_ != nullptr && this->modifyTime_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->ownerId_ != nullptr
        && this->paramValues_ != nullptr && this->priority_ != nullptr && this->programType_ != nullptr && this->projectId_ != nullptr && this->relatedFlowId_ != nullptr
        && this->repeatInterval_ != nullptr && this->repeatMode_ != nullptr && this->repeatability_ != nullptr && this->resGroupIdentifier_ != nullptr && this->resGroupName_ != nullptr
        && this->schedulerType_ != nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListNodesResponseBodyDataNodes& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline ListNodesResponseBodyDataNodes& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline string connection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
    inline ListNodesResponseBodyDataNodes& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNodesResponseBodyDataNodes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline ListNodesResponseBodyDataNodes& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // deployDate Field Functions 
    bool hasDeployDate() const { return this->deployDate_ != nullptr;};
    void deleteDeployDate() { this->deployDate_ = nullptr;};
    inline int64_t deployDate() const { DARABONBA_PTR_GET_DEFAULT(deployDate_, 0L) };
    inline ListNodesResponseBodyDataNodes& setDeployDate(int64_t deployDate) { DARABONBA_PTR_SET_VALUE(deployDate_, deployDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNodesResponseBodyDataNodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dqcDescription Field Functions 
    bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
    void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
    inline string dqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
    inline ListNodesResponseBodyDataNodes& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


    // dqcType Field Functions 
    bool hasDqcType() const { return this->dqcType_ != nullptr;};
    void deleteDqcType() { this->dqcType_ = nullptr;};
    inline int32_t dqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
    inline ListNodesResponseBodyDataNodes& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline ListNodesResponseBodyDataNodes& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline ListNodesResponseBodyDataNodes& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int32_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
    inline ListNodesResponseBodyDataNodes& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListNodesResponseBodyDataNodes& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListNodesResponseBodyDataNodes& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListNodesResponseBodyDataNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListNodesResponseBodyDataNodes& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline ListNodesResponseBodyDataNodes& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListNodesResponseBodyDataNodes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline ListNodesResponseBodyDataNodes& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodesResponseBodyDataNodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // relatedFlowId Field Functions 
    bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
    void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
    inline int64_t relatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
    inline ListNodesResponseBodyDataNodes& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline ListNodesResponseBodyDataNodes& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline int32_t repeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, 0) };
    inline ListNodesResponseBodyDataNodes& setRepeatMode(int32_t repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline bool repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
    inline ListNodesResponseBodyDataNodes& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // resGroupIdentifier Field Functions 
    bool hasResGroupIdentifier() const { return this->resGroupIdentifier_ != nullptr;};
    void deleteResGroupIdentifier() { this->resGroupIdentifier_ = nullptr;};
    inline string resGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resGroupIdentifier_, "") };
    inline ListNodesResponseBodyDataNodes& setResGroupIdentifier(string resGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resGroupIdentifier_, resGroupIdentifier) };


    // resGroupName Field Functions 
    bool hasResGroupName() const { return this->resGroupName_ != nullptr;};
    void deleteResGroupName() { this->resGroupName_ = nullptr;};
    inline string resGroupName() const { DARABONBA_PTR_GET_DEFAULT(resGroupName_, "") };
    inline ListNodesResponseBodyDataNodes& setResGroupName(string resGroupName) { DARABONBA_PTR_SET_VALUE(resGroupName_, resGroupName) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline ListNodesResponseBodyDataNodes& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The number of the page to return. Minimum value: 1. Maximum value: 100.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The operation that you want to perform. Set the value to **ListNodes**.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> connection_ = nullptr;
    // The timestamp when the node was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The timestamp when the node was deployed. Unit: milliseconds.
    std::shared_ptr<int64_t> deployDate_ = nullptr;
    // The priority for running the node. Valid values: 1, 3, 5, 7, and 8.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the owner.
    std::shared_ptr<string> dqcDescription_ = nullptr;
    // The connection string.
    std::shared_ptr<int32_t> dqcType_ = nullptr;
    // The file ID. You can call the ListFiles operation to query the ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // Different file types have different codes. For more information, see [DataWorks node collection](https://help.aliyun.com/document_detail/600169.html).
    // You can also call the [ListFileType](https://help.aliyun.com/document_detail/212428.html) interface to query the code type of the file.
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // The latest version number of the file.
    std::shared_ptr<int32_t> fileVersion_ = nullptr;
    // The timestamp when the node was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The types of the nodes. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the type of the node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The total number of nodes returned.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The additional parameters.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The type of the node.
    std::shared_ptr<string> paramValues_ = nullptr;
    // The ID of the owner.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> programType_ = nullptr;
    // The information about the nodes.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The table and partition filter expression in Data Quality that are associated with the node.
    std::shared_ptr<int64_t> relatedFlowId_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // The rerun mode. The value 0 indicates that rerun can be performed only if a failure occurs. The value 1 indicates that rerun can be performed in all cases. The value 2 indicates that rerun cannot be performed in all cases.
    std::shared_ptr<int32_t> repeatMode_ = nullptr;
    // The name of the node.
    std::shared_ptr<bool> repeatability_ = nullptr;
    // The identifier of the resource group.
    std::shared_ptr<string> resGroupIdentifier_ = nullptr;
    // The ID of the workflow.
    std::shared_ptr<string> resGroupName_ = nullptr;
    // The types of the nodes. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the type of the node.
    std::shared_ptr<string> schedulerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
