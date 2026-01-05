// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackageFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackageFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackageFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeploymentPackageFilesResponseBody() = default ;
    ListDeploymentPackageFilesResponseBody(const ListDeploymentPackageFilesResponseBody &) = default ;
    ListDeploymentPackageFilesResponseBody(ListDeploymentPackageFilesResponseBody &&) = default ;
    ListDeploymentPackageFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackageFilesResponseBody() = default ;
    ListDeploymentPackageFilesResponseBody& operator=(const ListDeploymentPackageFilesResponseBody &) = default ;
    ListDeploymentPackageFilesResponseBody& operator=(ListDeploymentPackageFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentPackageFiles, deploymentPackageFiles_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentPackageFiles, deploymentPackageFiles_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeploymentPackageFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentPackageFiles& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DeploymentPackageFiles& obj) { 
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
        DeploymentPackageFiles() = default ;
        DeploymentPackageFiles(const DeploymentPackageFiles &) = default ;
        DeploymentPackageFiles(DeploymentPackageFiles &&) = default ;
        DeploymentPackageFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentPackageFiles() = default ;
        DeploymentPackageFiles& operator=(const DeploymentPackageFiles &) = default ;
        DeploymentPackageFiles& operator=(DeploymentPackageFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->comment_ == nullptr && this->commitTime_ == nullptr && this->commitUser_ == nullptr && this->commitUserName_ == nullptr && this->fileId_ == nullptr
        && this->fileName_ == nullptr && this->fileType_ == nullptr && this->fileVersion_ == nullptr && this->id_ == nullptr && this->isSameAsProductionVersion_ == nullptr
        && this->nodeConfiguration_ == nullptr && this->nodeId_ == nullptr && this->projectId_ == nullptr && this->smokeTestStatus_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr && this->useType_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline int32_t getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
        inline DeploymentPackageFiles& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline DeploymentPackageFiles& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // commitTime Field Functions 
        bool hasCommitTime() const { return this->commitTime_ != nullptr;};
        void deleteCommitTime() { this->commitTime_ = nullptr;};
        inline string getCommitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, "") };
        inline DeploymentPackageFiles& setCommitTime(string commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


        // commitUser Field Functions 
        bool hasCommitUser() const { return this->commitUser_ != nullptr;};
        void deleteCommitUser() { this->commitUser_ = nullptr;};
        inline string getCommitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
        inline DeploymentPackageFiles& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


        // commitUserName Field Functions 
        bool hasCommitUserName() const { return this->commitUserName_ != nullptr;};
        void deleteCommitUserName() { this->commitUserName_ = nullptr;};
        inline string getCommitUserName() const { DARABONBA_PTR_GET_DEFAULT(commitUserName_, "") };
        inline DeploymentPackageFiles& setCommitUserName(string commitUserName) { DARABONBA_PTR_SET_VALUE(commitUserName_, commitUserName) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline DeploymentPackageFiles& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline DeploymentPackageFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
        inline DeploymentPackageFiles& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // fileVersion Field Functions 
        bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
        void deleteFileVersion() { this->fileVersion_ = nullptr;};
        inline int64_t getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0L) };
        inline DeploymentPackageFiles& setFileVersion(int64_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DeploymentPackageFiles& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isSameAsProductionVersion Field Functions 
        bool hasIsSameAsProductionVersion() const { return this->isSameAsProductionVersion_ != nullptr;};
        void deleteIsSameAsProductionVersion() { this->isSameAsProductionVersion_ = nullptr;};
        inline bool getIsSameAsProductionVersion() const { DARABONBA_PTR_GET_DEFAULT(isSameAsProductionVersion_, false) };
        inline DeploymentPackageFiles& setIsSameAsProductionVersion(bool isSameAsProductionVersion) { DARABONBA_PTR_SET_VALUE(isSameAsProductionVersion_, isSameAsProductionVersion) };


        // nodeConfiguration Field Functions 
        bool hasNodeConfiguration() const { return this->nodeConfiguration_ != nullptr;};
        void deleteNodeConfiguration() { this->nodeConfiguration_ = nullptr;};
        inline string getNodeConfiguration() const { DARABONBA_PTR_GET_DEFAULT(nodeConfiguration_, "") };
        inline DeploymentPackageFiles& setNodeConfiguration(string nodeConfiguration) { DARABONBA_PTR_SET_VALUE(nodeConfiguration_, nodeConfiguration) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline DeploymentPackageFiles& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DeploymentPackageFiles& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // smokeTestStatus Field Functions 
        bool hasSmokeTestStatus() const { return this->smokeTestStatus_ != nullptr;};
        void deleteSmokeTestStatus() { this->smokeTestStatus_ = nullptr;};
        inline string getSmokeTestStatus() const { DARABONBA_PTR_GET_DEFAULT(smokeTestStatus_, "") };
        inline DeploymentPackageFiles& setSmokeTestStatus(string smokeTestStatus) { DARABONBA_PTR_SET_VALUE(smokeTestStatus_, smokeTestStatus) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline DeploymentPackageFiles& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline DeploymentPackageFiles& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline DeploymentPackageFiles& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The change type, which is an integer. Valid values:
        // 
        // *   0: addition
        // *   1: update
        // *   2: deletion
        shared_ptr<int32_t> changeType_ {};
        // The comment for committing.
        shared_ptr<string> comment_ {};
        // The time for committing.
        shared_ptr<string> commitTime_ {};
        // The ID of the Alibaba Cloud account used by the user who committed the file.
        shared_ptr<string> commitUser_ {};
        // The name of the Alibaba Cloud account used by the user who committed the file.
        shared_ptr<string> commitUserName_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The name of the file of the current version.
        shared_ptr<string> fileName_ {};
        // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
        shared_ptr<int32_t> fileType_ {};
        // The file version.
        shared_ptr<int64_t> fileVersion_ {};
        // The unique ID.
        shared_ptr<int64_t> id_ {};
        // Indicates whether the version is a version in the production environment of the scheduling system.
        shared_ptr<bool> isSameAsProductionVersion_ {};
        // The scheduling property configurations of the node that corresponds to the file, which is a JSON string.
        shared_ptr<string> nodeConfiguration_ {};
        // The ID of the auto triggered node that corresponds to the file.
        shared_ptr<int64_t> nodeId_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The test status in the development environment.
        shared_ptr<string> smokeTestStatus_ {};
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
        shared_ptr<int32_t> status_ {};
        // The DataWorks tenant ID.
        shared_ptr<int64_t> tenantId_ {};
        // The module to which the file belongs. Valid values:
        // 
        // *   NORMAL: The file is used for DataStudio.
        // *   MANUAL: The file is used for a manually triggered node.
        // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
        // *   SKIP: The file is used for a dry-run node in DataStudio.
        // *   ADHOCQUERY: The file is used for an ad hoc query.
        // *   COMPONENT: The file is used for a script template.
        shared_ptr<string> useType_ {};
      };

      virtual bool empty() const override { return this->deploymentPackageFiles_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // deploymentPackageFiles Field Functions 
      bool hasDeploymentPackageFiles() const { return this->deploymentPackageFiles_ != nullptr;};
      void deleteDeploymentPackageFiles() { this->deploymentPackageFiles_ = nullptr;};
      inline const vector<PagingInfo::DeploymentPackageFiles> & getDeploymentPackageFiles() const { DARABONBA_PTR_GET_CONST(deploymentPackageFiles_, vector<PagingInfo::DeploymentPackageFiles>) };
      inline vector<PagingInfo::DeploymentPackageFiles> getDeploymentPackageFiles() { DARABONBA_PTR_GET(deploymentPackageFiles_, vector<PagingInfo::DeploymentPackageFiles>) };
      inline PagingInfo& setDeploymentPackageFiles(const vector<PagingInfo::DeploymentPackageFiles> & deploymentPackageFiles) { DARABONBA_PTR_SET_VALUE(deploymentPackageFiles_, deploymentPackageFiles) };
      inline PagingInfo& setDeploymentPackageFiles(vector<PagingInfo::DeploymentPackageFiles> && deploymentPackageFiles) { DARABONBA_PTR_SET_RVALUE(deploymentPackageFiles_, deploymentPackageFiles) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of files pending deployment.
      shared_ptr<vector<PagingInfo::DeploymentPackageFiles>> deploymentPackageFiles_ {};
      // The page number. Pages start from page 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDeploymentPackageFilesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDeploymentPackageFilesResponseBody::PagingInfo) };
    inline ListDeploymentPackageFilesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDeploymentPackageFilesResponseBody::PagingInfo) };
    inline ListDeploymentPackageFilesResponseBody& setPagingInfo(const ListDeploymentPackageFilesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDeploymentPackageFilesResponseBody& setPagingInfo(ListDeploymentPackageFilesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentPackageFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination details.
    shared_ptr<ListDeploymentPackageFilesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
