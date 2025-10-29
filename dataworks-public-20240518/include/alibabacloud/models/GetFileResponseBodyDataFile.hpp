// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATAFILE_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATAFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyDataFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyDataFile& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_TO_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(CommitStatus, commitStatus_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(DeletedStatus, deletedStatus_);
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
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyDataFile& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_FROM_JSON(AutoParsing, autoParsing_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(CommitStatus, commitStatus_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(DeletedStatus, deletedStatus_);
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
    GetFileResponseBodyDataFile() = default ;
    GetFileResponseBodyDataFile(const GetFileResponseBodyDataFile &) = default ;
    GetFileResponseBodyDataFile(GetFileResponseBodyDataFile &&) = default ;
    GetFileResponseBodyDataFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyDataFile() = default ;
    GetFileResponseBodyDataFile& operator=(const GetFileResponseBodyDataFile &) = default ;
    GetFileResponseBodyDataFile& operator=(GetFileResponseBodyDataFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedSettings_ == nullptr
        && return this->autoParsing_ == nullptr && return this->bizId_ == nullptr && return this->businessId_ == nullptr && return this->commitStatus_ == nullptr && return this->connectionName_ == nullptr
        && return this->content_ == nullptr && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->currentVersion_ == nullptr && return this->deletedStatus_ == nullptr
        && return this->fileDescription_ == nullptr && return this->fileFolderId_ == nullptr && return this->fileId_ == nullptr && return this->fileName_ == nullptr && return this->fileType_ == nullptr
        && return this->isMaxCompute_ == nullptr && return this->lastEditTime_ == nullptr && return this->lastEditUser_ == nullptr && return this->nodeId_ == nullptr && return this->owner_ == nullptr
        && return this->parentId_ == nullptr && return this->useType_ == nullptr; };
    // advancedSettings Field Functions 
    bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
    void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
    inline string advancedSettings() const { DARABONBA_PTR_GET_DEFAULT(advancedSettings_, "") };
    inline GetFileResponseBodyDataFile& setAdvancedSettings(string advancedSettings) { DARABONBA_PTR_SET_VALUE(advancedSettings_, advancedSettings) };


    // autoParsing Field Functions 
    bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
    void deleteAutoParsing() { this->autoParsing_ = nullptr;};
    inline bool autoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
    inline GetFileResponseBodyDataFile& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline GetFileResponseBodyDataFile& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline GetFileResponseBodyDataFile& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // commitStatus Field Functions 
    bool hasCommitStatus() const { return this->commitStatus_ != nullptr;};
    void deleteCommitStatus() { this->commitStatus_ = nullptr;};
    inline int32_t commitStatus() const { DARABONBA_PTR_GET_DEFAULT(commitStatus_, 0) };
    inline GetFileResponseBodyDataFile& setCommitStatus(int32_t commitStatus) { DARABONBA_PTR_SET_VALUE(commitStatus_, commitStatus) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline GetFileResponseBodyDataFile& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetFileResponseBodyDataFile& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetFileResponseBodyDataFile& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetFileResponseBodyDataFile& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int32_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0) };
    inline GetFileResponseBodyDataFile& setCurrentVersion(int32_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // deletedStatus Field Functions 
    bool hasDeletedStatus() const { return this->deletedStatus_ != nullptr;};
    void deleteDeletedStatus() { this->deletedStatus_ = nullptr;};
    inline string deletedStatus() const { DARABONBA_PTR_GET_DEFAULT(deletedStatus_, "") };
    inline GetFileResponseBodyDataFile& setDeletedStatus(string deletedStatus) { DARABONBA_PTR_SET_VALUE(deletedStatus_, deletedStatus) };


    // fileDescription Field Functions 
    bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
    void deleteFileDescription() { this->fileDescription_ = nullptr;};
    inline string fileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
    inline GetFileResponseBodyDataFile& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


    // fileFolderId Field Functions 
    bool hasFileFolderId() const { return this->fileFolderId_ != nullptr;};
    void deleteFileFolderId() { this->fileFolderId_ = nullptr;};
    inline string fileFolderId() const { DARABONBA_PTR_GET_DEFAULT(fileFolderId_, "") };
    inline GetFileResponseBodyDataFile& setFileFolderId(string fileFolderId) { DARABONBA_PTR_SET_VALUE(fileFolderId_, fileFolderId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetFileResponseBodyDataFile& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetFileResponseBodyDataFile& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int32_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
    inline GetFileResponseBodyDataFile& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // isMaxCompute Field Functions 
    bool hasIsMaxCompute() const { return this->isMaxCompute_ != nullptr;};
    void deleteIsMaxCompute() { this->isMaxCompute_ = nullptr;};
    inline bool isMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(isMaxCompute_, false) };
    inline GetFileResponseBodyDataFile& setIsMaxCompute(bool isMaxCompute) { DARABONBA_PTR_SET_VALUE(isMaxCompute_, isMaxCompute) };


    // lastEditTime Field Functions 
    bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
    void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
    inline int64_t lastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, 0L) };
    inline GetFileResponseBodyDataFile& setLastEditTime(int64_t lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


    // lastEditUser Field Functions 
    bool hasLastEditUser() const { return this->lastEditUser_ != nullptr;};
    void deleteLastEditUser() { this->lastEditUser_ = nullptr;};
    inline string lastEditUser() const { DARABONBA_PTR_GET_DEFAULT(lastEditUser_, "") };
    inline GetFileResponseBodyDataFile& setLastEditUser(string lastEditUser) { DARABONBA_PTR_SET_VALUE(lastEditUser_, lastEditUser) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetFileResponseBodyDataFile& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetFileResponseBodyDataFile& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline GetFileResponseBodyDataFile& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline GetFileResponseBodyDataFile& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The advanced configurations of the node.
    // 
    // This parameter is valid for an EMR node. This parameter corresponds to the Advanced Settings tab in the right-side navigation pane on the configuration tab of the node in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // 
    // >  You cannot configure advanced parameters for EMR Shell nodes.
    // 
    // For information about the advanced parameters of each type of EMR node, see [Develop EMR tasks](https://help.aliyun.com/document_detail/473077.html).
    std::shared_ptr<string> advancedSettings_ = nullptr;
    // Indicates whether the automatic parsing feature is enabled for the file. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter corresponds to the Automatic Parsing From Code Before Node Committing parameter that is displayed after you select Same Cycle in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    std::shared_ptr<bool> autoParsing_ = nullptr;
    // The ID of the workflow to which the file belongs. This parameter is deprecated and replaced by the BusinessId parameter.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The ID of the workflow to which the file belongs.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // Indicates whether the latest code in the file is committed. Valid values: 0 and 1. The value 0 indicates that the latest code in the file is not committed. The value 1 indicates that the latest code in the file is committed.
    std::shared_ptr<int32_t> commitStatus_ = nullptr;
    // The name of the data source that is used to run the node that corresponds to the file.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The code in the file.
    std::shared_ptr<string> content_ = nullptr;
    // The time when the file was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Alibaba Cloud account used to create the file.
    std::shared_ptr<string> createUser_ = nullptr;
    // The latest version number of the file.
    std::shared_ptr<int32_t> currentVersion_ = nullptr;
    // The status of the file. Valid values:
    // 
    // *   NORMAL: The file is not deleted.
    // *   RECYCLE_BIN: The file is stored in the recycle bin.
    // *   DELETED: The file is deleted.
    std::shared_ptr<string> deletedStatus_ = nullptr;
    // The description of the file.
    std::shared_ptr<string> fileDescription_ = nullptr;
    // The ID of the folder to which the file belongs.
    std::shared_ptr<string> fileFolderId_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The type of the code for the file. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int32_t> fileType_ = nullptr;
    // Indicates whether the resource file needs to be uploaded to MaxCompute. This parameter is returned only if the file is a MaxCompute resource file.
    std::shared_ptr<bool> isMaxCompute_ = nullptr;
    // The time when the file was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastEditTime_ = nullptr;
    // The ID of the Alibaba Cloud account used to last modify the file.
    std::shared_ptr<string> lastEditUser_ = nullptr;
    // The ID of the auto triggered node that is generated in the scheduling system after the file is committed.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The ID of the Alibaba Cloud account used by the file owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the node group file to which the current file belongs. This parameter is returned only if the current file is an inner file of the node group file.
    std::shared_ptr<int64_t> parentId_ = nullptr;
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
