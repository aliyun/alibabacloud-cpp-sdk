// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESRESPONSEBODYPAGINGINFODEPLOYMENTPACKAGEFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESRESPONSEBODYPAGINGINFODEPLOYMENTPACKAGEFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CommitTime, commitTime_);
      DARABONBA_PTR_TO_JSON(CommitUser, commitUser_);
      DARABONBA_PTR_TO_JSON(CommitUserName, commitUserName_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsSameAsProductionVersion, isSameAsProductionVersion_);
      DARABONBA_PTR_TO_JSON(NodeConfiguration, nodeConfiguration_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SmokeTestStatus, smokeTestStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CommitTime, commitTime_);
      DARABONBA_PTR_FROM_JSON(CommitUser, commitUser_);
      DARABONBA_PTR_FROM_JSON(CommitUserName, commitUserName_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsSameAsProductionVersion, isSameAsProductionVersion_);
      DARABONBA_PTR_FROM_JSON(NodeConfiguration, nodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SmokeTestStatus, smokeTestStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles() = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles(const ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles &) = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles(ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles &&) = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles() = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& operator=(const ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles &) = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& operator=(ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeType_ != nullptr
        && this->comment_ != nullptr && this->commitTime_ != nullptr && this->commitUser_ != nullptr && this->commitUserName_ != nullptr && this->fileId_ != nullptr
        && this->fileName_ != nullptr && this->fileType_ != nullptr && this->fileVersion_ != nullptr && this->id_ != nullptr && this->isSameAsProductionVersion_ != nullptr
        && this->nodeConfiguration_ != nullptr && this->nodeId_ != nullptr && this->projectId_ != nullptr && this->smokeTestStatus_ != nullptr && this->status_ != nullptr
        && this->tenantId_ != nullptr && this->useType_ != nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // commitTime Field Functions 
    bool hasCommitTime() const { return this->commitTime_ != nullptr;};
    void deleteCommitTime() { this->commitTime_ = nullptr;};
    inline string commitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setCommitTime(string commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


    // commitUser Field Functions 
    bool hasCommitUser() const { return this->commitUser_ != nullptr;};
    void deleteCommitUser() { this->commitUser_ = nullptr;};
    inline string commitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


    // commitUserName Field Functions 
    bool hasCommitUserName() const { return this->commitUserName_ != nullptr;};
    void deleteCommitUserName() { this->commitUserName_ = nullptr;};
    inline string commitUserName() const { DARABONBA_PTR_GET_DEFAULT(commitUserName_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setCommitUserName(string commitUserName) { DARABONBA_PTR_SET_VALUE(commitUserName_, commitUserName) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int64_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0L) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setFileVersion(int64_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isSameAsProductionVersion Field Functions 
    bool hasIsSameAsProductionVersion() const { return this->isSameAsProductionVersion_ != nullptr;};
    void deleteIsSameAsProductionVersion() { this->isSameAsProductionVersion_ = nullptr;};
    inline bool isSameAsProductionVersion() const { DARABONBA_PTR_GET_DEFAULT(isSameAsProductionVersion_, false) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setIsSameAsProductionVersion(bool isSameAsProductionVersion) { DARABONBA_PTR_SET_VALUE(isSameAsProductionVersion_, isSameAsProductionVersion) };


    // nodeConfiguration Field Functions 
    bool hasNodeConfiguration() const { return this->nodeConfiguration_ != nullptr;};
    void deleteNodeConfiguration() { this->nodeConfiguration_ = nullptr;};
    inline string nodeConfiguration() const { DARABONBA_PTR_GET_DEFAULT(nodeConfiguration_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setNodeConfiguration(string nodeConfiguration) { DARABONBA_PTR_SET_VALUE(nodeConfiguration_, nodeConfiguration) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // smokeTestStatus Field Functions 
    bool hasSmokeTestStatus() const { return this->smokeTestStatus_ != nullptr;};
    void deleteSmokeTestStatus() { this->smokeTestStatus_ = nullptr;};
    inline string smokeTestStatus() const { DARABONBA_PTR_GET_DEFAULT(smokeTestStatus_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setSmokeTestStatus(string smokeTestStatus) { DARABONBA_PTR_SET_VALUE(smokeTestStatus_, smokeTestStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The change type, which is an integer. Valid values:
    // 
    // *   0: addition
    // *   1: update
    // *   2: deletion
    std::shared_ptr<int32_t> changeType_ = nullptr;
    // The comment for committing.
    std::shared_ptr<string> comment_ = nullptr;
    // The time for committing.
    std::shared_ptr<string> commitTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who committed the file.
    std::shared_ptr<string> commitUser_ = nullptr;
    // The name of the Alibaba Cloud account used by the user who committed the file.
    std::shared_ptr<string> commitUserName_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the file of the current version.
    std::shared_ptr<string> fileName_ = nullptr;
    // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // The file version.
    std::shared_ptr<int64_t> fileVersion_ = nullptr;
    // The unique ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the version is a version in the production environment of the scheduling system.
    std::shared_ptr<bool> isSameAsProductionVersion_ = nullptr;
    // The scheduling property configurations of the node that corresponds to the file, which is a JSON string.
    std::shared_ptr<string> nodeConfiguration_ = nullptr;
    // The ID of the auto triggered node that corresponds to the file.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The test status in the development environment.
    std::shared_ptr<string> smokeTestStatus_ = nullptr;
    // The status of the code file of the current version. Valid values:
    // 
    // *   2: Commit check in progress.
    // *   3: Commit check passed.
    // *   4: Commit check failed.
    // *   10: Committing.
    // *   11: Committed.
    // *   20: Approved.
    // *   21: Rejected.
    // *   22: Warning detected during checking.
    // *   23: Under code review.
    // *   24: Code review rejected.
    // *   80: Deployment package created.
    // *   100: Deploying.
    // *   101: Deployed to the production environment.
    // *   200: Cancelled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The DataWorks tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The module to which the file belongs. Valid values:
    // 
    // *   NORMAL: The file is used for DataStudio.
    // *   MANUAL: The file is used for a manually triggered node.
    // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
    // *   SKIP: The file is used for a dry-run node in DataStudio.
    // *   ADHOCQUERY: The file is used for an ad hoc query.
    // *   COMPONENT: The file is used for a script template.
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
