// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetNodeResponseBodyData& obj) { 
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
    GetNodeResponseBodyData() = default ;
    GetNodeResponseBodyData(const GetNodeResponseBodyData &) = default ;
    GetNodeResponseBodyData(GetNodeResponseBodyData &&) = default ;
    GetNodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeResponseBodyData() = default ;
    GetNodeResponseBodyData& operator=(const GetNodeResponseBodyData &) = default ;
    GetNodeResponseBodyData& operator=(GetNodeResponseBodyData &&) = default ;
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
    inline GetNodeResponseBodyData& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline GetNodeResponseBodyData& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline string connection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
    inline GetNodeResponseBodyData& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetNodeResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cronExpress Field Functions 
    bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
    void deleteCronExpress() { this->cronExpress_ = nullptr;};
    inline string cronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
    inline GetNodeResponseBodyData& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


    // deployDate Field Functions 
    bool hasDeployDate() const { return this->deployDate_ != nullptr;};
    void deleteDeployDate() { this->deployDate_ = nullptr;};
    inline int64_t deployDate() const { DARABONBA_PTR_GET_DEFAULT(deployDate_, 0L) };
    inline GetNodeResponseBodyData& setDeployDate(int64_t deployDate) { DARABONBA_PTR_SET_VALUE(deployDate_, deployDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetNodeResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dqcDescription Field Functions 
    bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
    void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
    inline string dqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
    inline GetNodeResponseBodyData& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


    // dqcType Field Functions 
    bool hasDqcType() const { return this->dqcType_ != nullptr;};
    void deleteDqcType() { this->dqcType_ = nullptr;};
    inline int32_t dqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
    inline GetNodeResponseBodyData& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetNodeResponseBodyData& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline GetNodeResponseBodyData& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int32_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
    inline GetNodeResponseBodyData& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetNodeResponseBodyData& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetNodeResponseBodyData& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetNodeResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetNodeResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paramValues Field Functions 
    bool hasParamValues() const { return this->paramValues_ != nullptr;};
    void deleteParamValues() { this->paramValues_ = nullptr;};
    inline string paramValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
    inline GetNodeResponseBodyData& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetNodeResponseBodyData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline GetNodeResponseBodyData& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetNodeResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // relatedFlowId Field Functions 
    bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
    void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
    inline int64_t relatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
    inline GetNodeResponseBodyData& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline GetNodeResponseBodyData& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline int32_t repeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, 0) };
    inline GetNodeResponseBodyData& setRepeatMode(int32_t repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // repeatability Field Functions 
    bool hasRepeatability() const { return this->repeatability_ != nullptr;};
    void deleteRepeatability() { this->repeatability_ = nullptr;};
    inline string repeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, "") };
    inline GetNodeResponseBodyData& setRepeatability(string repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


    // resGroupIdentifier Field Functions 
    bool hasResGroupIdentifier() const { return this->resGroupIdentifier_ != nullptr;};
    void deleteResGroupIdentifier() { this->resGroupIdentifier_ = nullptr;};
    inline string resGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resGroupIdentifier_, "") };
    inline GetNodeResponseBodyData& setResGroupIdentifier(string resGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resGroupIdentifier_, resGroupIdentifier) };


    // resGroupName Field Functions 
    bool hasResGroupName() const { return this->resGroupName_ != nullptr;};
    void deleteResGroupName() { this->resGroupName_ = nullptr;};
    inline string resGroupName() const { DARABONBA_PTR_GET_DEFAULT(resGroupName_, "") };
    inline GetNodeResponseBodyData& setResGroupName(string resGroupName) { DARABONBA_PTR_SET_VALUE(resGroupName_, resGroupName) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline GetNodeResponseBodyData& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


  protected:
    // The description of the node.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The operation that you want to perform. Set the value to **GetNode**.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV.
    std::shared_ptr<string> connection_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV.
    std::shared_ptr<string> cronExpress_ = nullptr;
    // The deployment date.
    std::shared_ptr<int64_t> deployDate_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the node ID.
    std::shared_ptr<string> dqcDescription_ = nullptr;
    // The error message returned.
    std::shared_ptr<int32_t> dqcType_ = nullptr;
    // The ID of the file.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The file type. Different file types have different codes. For more information, see [DataWorks node collection](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // The version of the file.
    std::shared_ptr<int32_t> fileVersion_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The scheduling type of the node. Valid values:
    // 
    // *   NORMAL: The node is an auto triggered node.
    // *   MANUAL: The node is a manually triggered node. Manually triggered nodes cannot be automatically triggered.
    // *   PAUSE: The node is a paused node.
    // *   SKIP: The node is a dry-run node. Dry-run nodes are started as scheduled but the system sets the status of the nodes to successful when it starts to run them.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The CRON expression returned.
    std::shared_ptr<string> paramValues_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the owner of the node.
    std::shared_ptr<string> programType_ = nullptr;
    // Indicates whether the node can be rerun.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Indicates whether the node is associated with Data Quality. Valid values: 0 and 1. A value of 0 indicates that the node is associated with Data Quality. A value of 1 indicates that the node is not associated with Data Quality.
    std::shared_ptr<int64_t> relatedFlowId_ = nullptr;
    // The ID of the workflow to which the node belongs.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // Rerun mode. 0 indicates that you can rerun only if you fail, 1 indicates that you can rerun in all cases, and 2 indicates that you cannot rerun in all cases.
    std::shared_ptr<int32_t> repeatMode_ = nullptr;
    // The type of the node.
    std::shared_ptr<string> repeatability_ = nullptr;
    // The unique identifier of the resource group.
    std::shared_ptr<string> resGroupIdentifier_ = nullptr;
    // The ID of the request. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> resGroupName_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<string> schedulerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
