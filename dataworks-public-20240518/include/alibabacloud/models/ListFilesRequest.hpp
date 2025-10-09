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
    virtual bool empty() const override { this->commitStatus_ != nullptr
        && this->exactFileName_ != nullptr && this->fileFolderPath_ != nullptr && this->fileIdIn_ != nullptr && this->fileTypes_ != nullptr && this->keyword_ != nullptr
        && this->lastEditUser_ != nullptr && this->needAbsoluteFolderPath_ != nullptr && this->needContent_ != nullptr && this->nodeId_ != nullptr && this->owner_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->useType_ != nullptr; };
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
    std::shared_ptr<int32_t> commitStatus_ = nullptr;
    std::shared_ptr<string> exactFileName_ = nullptr;
    std::shared_ptr<string> fileFolderPath_ = nullptr;
    std::shared_ptr<string> fileIdIn_ = nullptr;
    std::shared_ptr<string> fileTypes_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> lastEditUser_ = nullptr;
    std::shared_ptr<bool> needAbsoluteFolderPath_ = nullptr;
    std::shared_ptr<bool> needContent_ = nullptr;
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
