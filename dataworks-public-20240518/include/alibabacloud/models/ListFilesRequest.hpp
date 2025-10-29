// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommitStatus, commitStatus_);
      DARABONBA_PTR_TO_JSON(ExactFileName, exactFileName_);
      DARABONBA_PTR_TO_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_TO_JSON(FileIdIn, fileIdIn_);
      DARABONBA_PTR_TO_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(LastEditUser, lastEditUser_);
      DARABONBA_PTR_TO_JSON(NeedAbsoluteFolderPath, needAbsoluteFolderPath_);
      DARABONBA_PTR_TO_JSON(NeedContent, needContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommitStatus, commitStatus_);
      DARABONBA_PTR_FROM_JSON(ExactFileName, exactFileName_);
      DARABONBA_PTR_FROM_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_FROM_JSON(FileIdIn, fileIdIn_);
      DARABONBA_PTR_FROM_JSON(FileTypes, fileTypes_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(LastEditUser, lastEditUser_);
      DARABONBA_PTR_FROM_JSON(NeedAbsoluteFolderPath, needAbsoluteFolderPath_);
      DARABONBA_PTR_FROM_JSON(NeedContent, needContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    ListFilesRequest() = default ;
    ListFilesRequest(const ListFilesRequest &) = default ;
    ListFilesRequest(ListFilesRequest &&) = default ;
    ListFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilesRequest() = default ;
    ListFilesRequest& operator=(const ListFilesRequest &) = default ;
    ListFilesRequest& operator=(ListFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commitStatus_ == nullptr
        && return this->exactFileName_ == nullptr && return this->fileFolderPath_ == nullptr && return this->fileIdIn_ == nullptr && return this->fileTypes_ == nullptr && return this->keyword_ == nullptr
        && return this->lastEditUser_ == nullptr && return this->needAbsoluteFolderPath_ == nullptr && return this->needContent_ == nullptr && return this->nodeId_ == nullptr && return this->owner_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->projectId_ == nullptr && return this->projectIdentifier_ == nullptr && return this->useType_ == nullptr; };
    // commitStatus Field Functions 
    bool hasCommitStatus() const { return this->commitStatus_ != nullptr;};
    void deleteCommitStatus() { this->commitStatus_ = nullptr;};
    inline int32_t commitStatus() const { DARABONBA_PTR_GET_DEFAULT(commitStatus_, 0) };
    inline ListFilesRequest& setCommitStatus(int32_t commitStatus) { DARABONBA_PTR_SET_VALUE(commitStatus_, commitStatus) };


    // exactFileName Field Functions 
    bool hasExactFileName() const { return this->exactFileName_ != nullptr;};
    void deleteExactFileName() { this->exactFileName_ = nullptr;};
    inline string exactFileName() const { DARABONBA_PTR_GET_DEFAULT(exactFileName_, "") };
    inline ListFilesRequest& setExactFileName(string exactFileName) { DARABONBA_PTR_SET_VALUE(exactFileName_, exactFileName) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string fileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline ListFilesRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileIdIn Field Functions 
    bool hasFileIdIn() const { return this->fileIdIn_ != nullptr;};
    void deleteFileIdIn() { this->fileIdIn_ = nullptr;};
    inline string fileIdIn() const { DARABONBA_PTR_GET_DEFAULT(fileIdIn_, "") };
    inline ListFilesRequest& setFileIdIn(string fileIdIn) { DARABONBA_PTR_SET_VALUE(fileIdIn_, fileIdIn) };


    // fileTypes Field Functions 
    bool hasFileTypes() const { return this->fileTypes_ != nullptr;};
    void deleteFileTypes() { this->fileTypes_ = nullptr;};
    inline string fileTypes() const { DARABONBA_PTR_GET_DEFAULT(fileTypes_, "") };
    inline ListFilesRequest& setFileTypes(string fileTypes) { DARABONBA_PTR_SET_VALUE(fileTypes_, fileTypes) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListFilesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lastEditUser Field Functions 
    bool hasLastEditUser() const { return this->lastEditUser_ != nullptr;};
    void deleteLastEditUser() { this->lastEditUser_ = nullptr;};
    inline string lastEditUser() const { DARABONBA_PTR_GET_DEFAULT(lastEditUser_, "") };
    inline ListFilesRequest& setLastEditUser(string lastEditUser) { DARABONBA_PTR_SET_VALUE(lastEditUser_, lastEditUser) };


    // needAbsoluteFolderPath Field Functions 
    bool hasNeedAbsoluteFolderPath() const { return this->needAbsoluteFolderPath_ != nullptr;};
    void deleteNeedAbsoluteFolderPath() { this->needAbsoluteFolderPath_ = nullptr;};
    inline bool needAbsoluteFolderPath() const { DARABONBA_PTR_GET_DEFAULT(needAbsoluteFolderPath_, false) };
    inline ListFilesRequest& setNeedAbsoluteFolderPath(bool needAbsoluteFolderPath) { DARABONBA_PTR_SET_VALUE(needAbsoluteFolderPath_, needAbsoluteFolderPath) };


    // needContent Field Functions 
    bool hasNeedContent() const { return this->needContent_ != nullptr;};
    void deleteNeedContent() { this->needContent_ = nullptr;};
    inline bool needContent() const { DARABONBA_PTR_GET_DEFAULT(needContent_, false) };
    inline ListFilesRequest& setNeedContent(bool needContent) { DARABONBA_PTR_SET_VALUE(needContent_, needContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListFilesRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFilesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFilesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFilesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListFilesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline ListFilesRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ListFilesRequest& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The current commit status of the file. Valid values: 0 (the latest code is not committed) and 1 (the latest code is committed).
    std::shared_ptr<int32_t> commitStatus_ = nullptr;
    // The exact file name. The file name in the query result must exactly match this parameter.
    std::shared_ptr<string> exactFileName_ = nullptr;
    // The path to the folder where the file is located.
    std::shared_ptr<string> fileFolderPath_ = nullptr;
    // The list of file IDs. The file IDs in the query result must be a subset of this list. You can specify up to 50 file IDs at a time.
    std::shared_ptr<string> fileIdIn_ = nullptr;
    // The code type of the file.
    // 
    // The code type of the file. Common code types and their corresponding file types include: 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 97 (PAI), 98 (Combined node), 99 (Virtual node), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (Real-time sync), 1002 (PAI internal node), 1089 (Cross-tenant node), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (Assignment node), 1106 (ForEach node), 1221 (PyODPS 3).
    std::shared_ptr<string> fileTypes_ = nullptr;
    // The keyword for the file name. Fuzzy match is supported. You can enter a keyword to query all files that contain the keyword.
    std::shared_ptr<string> keyword_ = nullptr;
    // The Alibaba Cloud account ID of the user who last updated the file.
    std::shared_ptr<string> lastEditUser_ = nullptr;
    // Specifies whether the query result includes the path to the folder where the file is located.
    std::shared_ptr<bool> needAbsoluteFolderPath_ = nullptr;
    // Specifies whether the query result includes the file content. For files with large content, network transmission delays may occur.
    std::shared_ptr<bool> needContent_ = nullptr;
    // The ID of the scheduling node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to obtain the node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The ID of the file owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The page number for pagination.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // You must configure either this parameter or the ProjectIdentifier parameter to determine the DataWorks workspace to which the operation is applied.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The DataWorks workspace name. To obtain the workspace name, log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and navigate to the workspace configuration page.
    // 
    // You must specify either this parameter or ProjectId to identify the target DataWorks workspace for this API call.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // The functional module to which the file belongs. Valid values:
    // 
    // *   NORMAL: Data Studio
    // *   MANUAL: Manually triggered node
    // *   MANUAL_BIZ: Manually triggered workflow
    // *   SKIP: Dry-run scheduling in Data Studio
    // *   ADHOCQUERY: Ad hoc query
    // *   COMPONENT: Component management
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
