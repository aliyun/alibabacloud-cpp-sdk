// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESREQUEST_HPP_
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
  class ListDeploymentPackageFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackageFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(CommitFrom, commitFrom_);
      DARABONBA_PTR_TO_JSON(CommitTo, commitTo_);
      DARABONBA_PTR_TO_JSON(CommitUserId, commitUserId_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackageFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(CommitFrom, commitFrom_);
      DARABONBA_PTR_FROM_JSON(CommitTo, commitTo_);
      DARABONBA_PTR_FROM_JSON(CommitUserId, commitUserId_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    ListDeploymentPackageFilesRequest() = default ;
    ListDeploymentPackageFilesRequest(const ListDeploymentPackageFilesRequest &) = default ;
    ListDeploymentPackageFilesRequest(ListDeploymentPackageFilesRequest &&) = default ;
    ListDeploymentPackageFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackageFilesRequest() = default ;
    ListDeploymentPackageFilesRequest& operator=(const ListDeploymentPackageFilesRequest &) = default ;
    ListDeploymentPackageFilesRequest& operator=(ListDeploymentPackageFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessId_ == nullptr
        && return this->changeType_ == nullptr && return this->commitFrom_ == nullptr && return this->commitTo_ == nullptr && return this->commitUserId_ == nullptr && return this->fileIds_ == nullptr
        && return this->fileName_ == nullptr && return this->fileType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->projectId_ == nullptr
        && return this->solutionId_ == nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline ListDeploymentPackageFilesRequest& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline ListDeploymentPackageFilesRequest& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // commitFrom Field Functions 
    bool hasCommitFrom() const { return this->commitFrom_ != nullptr;};
    void deleteCommitFrom() { this->commitFrom_ = nullptr;};
    inline string commitFrom() const { DARABONBA_PTR_GET_DEFAULT(commitFrom_, "") };
    inline ListDeploymentPackageFilesRequest& setCommitFrom(string commitFrom) { DARABONBA_PTR_SET_VALUE(commitFrom_, commitFrom) };


    // commitTo Field Functions 
    bool hasCommitTo() const { return this->commitTo_ != nullptr;};
    void deleteCommitTo() { this->commitTo_ = nullptr;};
    inline string commitTo() const { DARABONBA_PTR_GET_DEFAULT(commitTo_, "") };
    inline ListDeploymentPackageFilesRequest& setCommitTo(string commitTo) { DARABONBA_PTR_SET_VALUE(commitTo_, commitTo) };


    // commitUserId Field Functions 
    bool hasCommitUserId() const { return this->commitUserId_ != nullptr;};
    void deleteCommitUserId() { this->commitUserId_ = nullptr;};
    inline string commitUserId() const { DARABONBA_PTR_GET_DEFAULT(commitUserId_, "") };
    inline ListDeploymentPackageFilesRequest& setCommitUserId(string commitUserId) { DARABONBA_PTR_SET_VALUE(commitUserId_, commitUserId) };


    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline const vector<string> & fileIds() const { DARABONBA_PTR_GET_CONST(fileIds_, vector<string>) };
    inline vector<string> fileIds() { DARABONBA_PTR_GET(fileIds_, vector<string>) };
    inline ListDeploymentPackageFilesRequest& setFileIds(const vector<string> & fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };
    inline ListDeploymentPackageFilesRequest& setFileIds(vector<string> && fileIds) { DARABONBA_PTR_SET_RVALUE(fileIds_, fileIds) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListDeploymentPackageFilesRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline ListDeploymentPackageFilesRequest& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDeploymentPackageFilesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeploymentPackageFilesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDeploymentPackageFilesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline int64_t solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
    inline ListDeploymentPackageFilesRequest& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // The workflow ID. You can call the [ListBusiness](https://help.aliyun.com/document_detail/173945.html) operation to query the workflow ID by name.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The change type. Valid values:
    // 
    // *   0: addition
    // *   1: update
    // *   2: deletion
    std::shared_ptr<int32_t> changeType_ = nullptr;
    // The start date for committing. Specify the date in the yyyy-MM-dd format.
    std::shared_ptr<string> commitFrom_ = nullptr;
    // The end date (included) for committing. Specify the date in the yyyy-MM-dd format.
    std::shared_ptr<string> commitTo_ = nullptr;
    // The ID of the user who commits the file.
    std::shared_ptr<string> commitUserId_ = nullptr;
    // The IDs of the files to be queried.
    std::shared_ptr<vector<string>> fileIds_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The type of the code for the file.
    // 
    // The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html). You can call the [ListFileType](https://help.aliyun.com/document_detail/212428.html) operation to query the type of the code for the file.
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The solution ID.
    std::shared_ptr<int64_t> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
