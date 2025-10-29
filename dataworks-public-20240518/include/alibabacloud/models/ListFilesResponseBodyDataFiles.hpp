// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESRESPONSEBODYDATAFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESRESPONSEBODYDATAFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFilesResponseBodyDataFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilesResponseBodyDataFiles& obj) { 
      DARABONBA_PTR_TO_JSON(AbsoluteFolderPath, absoluteFolderPath_);
      DARABONBA_PTR_TO_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(CommitStatus, commitStatus_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_TO_JSON(FileFolderId, fileFolderId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(IsMaxCompute, isMaxCompute_);
      DARABONBA_PTR_TO_JSON(LastEditTime, lastEditTime_);
      DARABONBA_PTR_TO_JSON(LastEditUser, lastEditUser_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilesResponseBodyDataFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(AbsoluteFolderPath, absoluteFolderPath_);
      DARABONBA_PTR_FROM_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(CommitStatus, commitStatus_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
      DARABONBA_PTR_FROM_JSON(FileFolderId, fileFolderId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(IsMaxCompute, isMaxCompute_);
      DARABONBA_PTR_FROM_JSON(LastEditTime, lastEditTime_);
      DARABONBA_PTR_FROM_JSON(LastEditUser, lastEditUser_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    ListFilesResponseBodyDataFiles() = default ;
    ListFilesResponseBodyDataFiles(const ListFilesResponseBodyDataFiles &) = default ;
    ListFilesResponseBodyDataFiles(ListFilesResponseBodyDataFiles &&) = default ;
    ListFilesResponseBodyDataFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilesResponseBodyDataFiles() = default ;
    ListFilesResponseBodyDataFiles& operator=(const ListFilesResponseBodyDataFiles &) = default ;
    ListFilesResponseBodyDataFiles& operator=(ListFilesResponseBodyDataFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->absoluteFolderPath_ == nullptr
        && return this->autoParsing_ == nullptr && return this->bizId_ == nullptr && return this->businessId_ == nullptr && return this->commitStatus_ == nullptr && return this->connectionName_ == nullptr
        && return this->content_ == nullptr && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->currentVersion_ == nullptr && return this->fileDescription_ == nullptr
        && return this->fileFolderId_ == nullptr && return this->fileId_ == nullptr && return this->fileName_ == nullptr && return this->fileType_ == nullptr && return this->isMaxCompute_ == nullptr
        && return this->lastEditTime_ == nullptr && return this->lastEditUser_ == nullptr && return this->nodeId_ == nullptr && return this->owner_ == nullptr && return this->parentId_ == nullptr
        && return this->useType_ == nullptr; };
    // absoluteFolderPath Field Functions 
    bool hasAbsoluteFolderPath() const { return this->absoluteFolderPath_ != nullptr;};
    void deleteAbsoluteFolderPath() { this->absoluteFolderPath_ = nullptr;};
    inline string absoluteFolderPath() const { DARABONBA_PTR_GET_DEFAULT(absoluteFolderPath_, "") };
    inline ListFilesResponseBodyDataFiles& setAbsoluteFolderPath(string absoluteFolderPath) { DARABONBA_PTR_SET_VALUE(absoluteFolderPath_, absoluteFolderPath) };


    // autoParsing Field Functions 
    bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
    void deleteAutoParsing() { this->autoParsing_ = nullptr;};
    inline bool autoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
    inline ListFilesResponseBodyDataFiles& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline ListFilesResponseBodyDataFiles& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline ListFilesResponseBodyDataFiles& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // commitStatus Field Functions 
    bool hasCommitStatus() const { return this->commitStatus_ != nullptr;};
    void deleteCommitStatus() { this->commitStatus_ = nullptr;};
    inline int32_t commitStatus() const { DARABONBA_PTR_GET_DEFAULT(commitStatus_, 0) };
    inline ListFilesResponseBodyDataFiles& setCommitStatus(int32_t commitStatus) { DARABONBA_PTR_SET_VALUE(commitStatus_, commitStatus) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListFilesResponseBodyDataFiles& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListFilesResponseBodyDataFiles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListFilesResponseBodyDataFiles& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListFilesResponseBodyDataFiles& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int32_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0) };
    inline ListFilesResponseBodyDataFiles& setCurrentVersion(int32_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string fileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline ListFilesResponseBodyDataFiles& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderId Field Functions 
    bool hasFileFolderId() const { return this->fileFolderId_ != nullptr;};
    void deleteFileFolderId() { this->fileFolderId_ = nullptr;};
    inline string fileFolderId() const { DARABONBA_PTR_GET_DEFAULT(fileFolderId_, "") };
    inline ListFilesResponseBodyDataFiles& setFileFolderId(string fileFolderId) { DARABONBA_PTR_SET_VALUE(fileFolderId_, fileFolderId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline ListFilesResponseBodyDataFiles& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListFilesResponseBodyDataFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline ListFilesResponseBodyDataFiles& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // isMaxCompute Field Functions 
    bool hasIsMaxCompute() const { return this->isMaxCompute_ != nullptr;};
    void deleteIsMaxCompute() { this->isMaxCompute_ = nullptr;};
    inline bool isMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(isMaxCompute_, false) };
    inline ListFilesResponseBodyDataFiles& setIsMaxCompute(bool isMaxCompute) { DARABONBA_PTR_SET_VALUE(isMaxCompute_, isMaxCompute) };


    // lastEditTime Field Functions 
    bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
    void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
    inline int64_t lastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, 0L) };
    inline ListFilesResponseBodyDataFiles& setLastEditTime(int64_t lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


    // lastEditUser Field Functions 
    bool hasLastEditUser() const { return this->lastEditUser_ != nullptr;};
    void deleteLastEditUser() { this->lastEditUser_ = nullptr;};
    inline string lastEditUser() const { DARABONBA_PTR_GET_DEFAULT(lastEditUser_, "") };
    inline ListFilesResponseBodyDataFiles& setLastEditUser(string lastEditUser) { DARABONBA_PTR_SET_VALUE(lastEditUser_, lastEditUser) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListFilesResponseBodyDataFiles& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFilesResponseBodyDataFiles& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline ListFilesResponseBodyDataFiles& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ListFilesResponseBodyDataFiles& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The path to the folder where the file is located.
    std::shared_ptr<string> absoluteFolderPath_ = nullptr;
    // Specifies whether automatic parsing is enabled for the file. Valid values:
    // 
    // *   true: The file automatically parses code.
    // *   false: The file does not automatically parse code.
    // 
    // This parameter corresponds to Analyze Code when you set Dependencies to Same Cycle in the scheduling configuration of a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<bool> autoParsing_ = nullptr;
    // The ID of the workflow to which the file belongs. This parameter is deprecated. Use the BusinessId parameter instead.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The ID of the workflow to which the file belongs.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The current commit status of the file. Valid values: 0 (the latest code is not committed) and 1 (the latest code is committed).
    std::shared_ptr<int32_t> commitStatus_ = nullptr;
    // The data source name used by the task.
    std::shared_ptr<string> connectionName_ = nullptr;
    // This parameter is deprecated. You can call the [GetFile](https://help.aliyun.com/document_detail/173954.html) operation to query this information.
    std::shared_ptr<string> content_ = nullptr;
    // The timestamp (in milliseconds) when the file was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The Alibaba Cloud account ID of the file creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The latest version of the file.
    std::shared_ptr<int32_t> currentVersion_ = nullptr;
    // The description of the file.
    std::shared_ptr<string> fileDescription_ = nullptr;
    // The ID of the folder where the file is located.
    std::shared_ptr<string> fileFolderId_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The file type. Different file types have different code. For more information, see [DataWorks node types](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // If the current file is a MaxCompute resource file, this parameter specifies whether the resource file needs to be uploaded to MaxCompute.
    // 
    // You only need to configure this parameter when the file is a MaxCompute resource file.
    std::shared_ptr<bool> isMaxCompute_ = nullptr;
    // The timestamp (in milliseconds) when the file was last modified.
    std::shared_ptr<int64_t> lastEditTime_ = nullptr;
    // The Alibaba Cloud account ID of the user who last updated the file.
    std::shared_ptr<string> lastEditUser_ = nullptr;
    // The ID of the scheduling task generated in the scheduling system after the file is committed.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The Alibaba Cloud account ID of the file owner.
    std::shared_ptr<string> owner_ = nullptr;
    // If the current file is an internal file of a combined node, this parameter specifies the ID of the corresponding combined node file.
    std::shared_ptr<int64_t> parentId_ = nullptr;
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
