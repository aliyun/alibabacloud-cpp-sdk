// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FOLDERITEM_HPP_
#define ALIBABACLOUD_MODELS_FOLDERITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FolderItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class FolderItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FolderItem& obj) { 
      DARABONBA_PTR_TO_JSON(currentLevel, currentLevel_);
      DARABONBA_PTR_TO_JSON(docCount, docCount_);
      DARABONBA_PTR_TO_JSON(folderDefault, folderDefault_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(folderName, folderName_);
      DARABONBA_PTR_TO_JSON(folderNum, folderNum_);
      DARABONBA_PTR_TO_JSON(ossDomain, ossDomain_);
      DARABONBA_PTR_TO_JSON(ossPath, ossPath_);
      DARABONBA_PTR_TO_JSON(ossUpdateBy, ossUpdateBy_);
      DARABONBA_PTR_TO_JSON(parentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(resourcePath, resourcePath_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
      DARABONBA_PTR_TO_JSON(subFolderList, subFolderList_);
      DARABONBA_PTR_TO_JSON(syncParsingStatus, syncParsingStatus_);
      DARABONBA_PTR_TO_JSON(syncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FolderItem& obj) { 
      DARABONBA_PTR_FROM_JSON(currentLevel, currentLevel_);
      DARABONBA_PTR_FROM_JSON(docCount, docCount_);
      DARABONBA_PTR_FROM_JSON(folderDefault, folderDefault_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(folderName, folderName_);
      DARABONBA_PTR_FROM_JSON(folderNum, folderNum_);
      DARABONBA_PTR_FROM_JSON(ossDomain, ossDomain_);
      DARABONBA_PTR_FROM_JSON(ossPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(ossUpdateBy, ossUpdateBy_);
      DARABONBA_PTR_FROM_JSON(parentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(resourcePath, resourcePath_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
      DARABONBA_PTR_FROM_JSON(subFolderList, subFolderList_);
      DARABONBA_PTR_FROM_JSON(syncParsingStatus, syncParsingStatus_);
      DARABONBA_PTR_FROM_JSON(syncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    FolderItem() = default ;
    FolderItem(const FolderItem &) = default ;
    FolderItem(FolderItem &&) = default ;
    FolderItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FolderItem() = default ;
    FolderItem& operator=(const FolderItem &) = default ;
    FolderItem& operator=(FolderItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentLevel_ == nullptr
        && this->docCount_ == nullptr && this->folderDefault_ == nullptr && this->folderId_ == nullptr && this->folderName_ == nullptr && this->folderNum_ == nullptr
        && this->ossDomain_ == nullptr && this->ossPath_ == nullptr && this->ossUpdateBy_ == nullptr && this->parentFolderId_ == nullptr && this->resourcePath_ == nullptr
        && this->storageType_ == nullptr && this->subFolderList_ == nullptr && this->syncParsingStatus_ == nullptr && this->syncStatus_ == nullptr && this->taskId_ == nullptr; };
    // currentLevel Field Functions 
    bool hasCurrentLevel() const { return this->currentLevel_ != nullptr;};
    void deleteCurrentLevel() { this->currentLevel_ = nullptr;};
    inline int32_t getCurrentLevel() const { DARABONBA_PTR_GET_DEFAULT(currentLevel_, 0) };
    inline FolderItem& setCurrentLevel(int32_t currentLevel) { DARABONBA_PTR_SET_VALUE(currentLevel_, currentLevel) };


    // docCount Field Functions 
    bool hasDocCount() const { return this->docCount_ != nullptr;};
    void deleteDocCount() { this->docCount_ = nullptr;};
    inline int32_t getDocCount() const { DARABONBA_PTR_GET_DEFAULT(docCount_, 0) };
    inline FolderItem& setDocCount(int32_t docCount) { DARABONBA_PTR_SET_VALUE(docCount_, docCount) };


    // folderDefault Field Functions 
    bool hasFolderDefault() const { return this->folderDefault_ != nullptr;};
    void deleteFolderDefault() { this->folderDefault_ = nullptr;};
    inline int32_t getFolderDefault() const { DARABONBA_PTR_GET_DEFAULT(folderDefault_, 0) };
    inline FolderItem& setFolderDefault(int32_t folderDefault) { DARABONBA_PTR_SET_VALUE(folderDefault_, folderDefault) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline FolderItem& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline FolderItem& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // folderNum Field Functions 
    bool hasFolderNum() const { return this->folderNum_ != nullptr;};
    void deleteFolderNum() { this->folderNum_ = nullptr;};
    inline int32_t getFolderNum() const { DARABONBA_PTR_GET_DEFAULT(folderNum_, 0) };
    inline FolderItem& setFolderNum(int32_t folderNum) { DARABONBA_PTR_SET_VALUE(folderNum_, folderNum) };


    // ossDomain Field Functions 
    bool hasOssDomain() const { return this->ossDomain_ != nullptr;};
    void deleteOssDomain() { this->ossDomain_ = nullptr;};
    inline string getOssDomain() const { DARABONBA_PTR_GET_DEFAULT(ossDomain_, "") };
    inline FolderItem& setOssDomain(string ossDomain) { DARABONBA_PTR_SET_VALUE(ossDomain_, ossDomain) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline FolderItem& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // ossUpdateBy Field Functions 
    bool hasOssUpdateBy() const { return this->ossUpdateBy_ != nullptr;};
    void deleteOssUpdateBy() { this->ossUpdateBy_ = nullptr;};
    inline string getOssUpdateBy() const { DARABONBA_PTR_GET_DEFAULT(ossUpdateBy_, "") };
    inline FolderItem& setOssUpdateBy(string ossUpdateBy) { DARABONBA_PTR_SET_VALUE(ossUpdateBy_, ossUpdateBy) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string getParentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline FolderItem& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // resourcePath Field Functions 
    bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
    void deleteResourcePath() { this->resourcePath_ = nullptr;};
    inline string getResourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
    inline FolderItem& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline int32_t getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, 0) };
    inline FolderItem& setStorageType(int32_t storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // subFolderList Field Functions 
    bool hasSubFolderList() const { return this->subFolderList_ != nullptr;};
    void deleteSubFolderList() { this->subFolderList_ = nullptr;};
    inline const vector<FolderItem> & getSubFolderList() const { DARABONBA_PTR_GET_CONST(subFolderList_, vector<FolderItem>) };
    inline vector<FolderItem> getSubFolderList() { DARABONBA_PTR_GET(subFolderList_, vector<FolderItem>) };
    inline FolderItem& setSubFolderList(const vector<FolderItem> & subFolderList) { DARABONBA_PTR_SET_VALUE(subFolderList_, subFolderList) };
    inline FolderItem& setSubFolderList(vector<FolderItem> && subFolderList) { DARABONBA_PTR_SET_RVALUE(subFolderList_, subFolderList) };


    // syncParsingStatus Field Functions 
    bool hasSyncParsingStatus() const { return this->syncParsingStatus_ != nullptr;};
    void deleteSyncParsingStatus() { this->syncParsingStatus_ = nullptr;};
    inline int32_t getSyncParsingStatus() const { DARABONBA_PTR_GET_DEFAULT(syncParsingStatus_, 0) };
    inline FolderItem& setSyncParsingStatus(int32_t syncParsingStatus) { DARABONBA_PTR_SET_VALUE(syncParsingStatus_, syncParsingStatus) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline int32_t getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, 0) };
    inline FolderItem& setSyncStatus(int32_t syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline FolderItem& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int32_t> currentLevel_ {};
    shared_ptr<int32_t> docCount_ {};
    shared_ptr<int32_t> folderDefault_ {};
    shared_ptr<string> folderId_ {};
    shared_ptr<string> folderName_ {};
    shared_ptr<int32_t> folderNum_ {};
    shared_ptr<string> ossDomain_ {};
    shared_ptr<string> ossPath_ {};
    shared_ptr<string> ossUpdateBy_ {};
    shared_ptr<string> parentFolderId_ {};
    shared_ptr<string> resourcePath_ {};
    shared_ptr<int32_t> storageType_ {};
    shared_ptr<vector<FolderItem>> subFolderList_ {};
    shared_ptr<int32_t> syncParsingStatus_ {};
    shared_ptr<int32_t> syncStatus_ {};
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
