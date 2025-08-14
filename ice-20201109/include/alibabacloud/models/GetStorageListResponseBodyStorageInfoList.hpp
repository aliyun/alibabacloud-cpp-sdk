// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODYSTORAGEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODYSTORAGEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetStorageListResponseBodyStorageInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageListResponseBodyStorageInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DefaultStorage, defaultStorage_);
      DARABONBA_PTR_TO_JSON(EditingTempFileStorage, editingTempFileStorage_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageListResponseBodyStorageInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DefaultStorage, defaultStorage_);
      DARABONBA_PTR_FROM_JSON(EditingTempFileStorage, editingTempFileStorage_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    GetStorageListResponseBodyStorageInfoList() = default ;
    GetStorageListResponseBodyStorageInfoList(const GetStorageListResponseBodyStorageInfoList &) = default ;
    GetStorageListResponseBodyStorageInfoList(GetStorageListResponseBodyStorageInfoList &&) = default ;
    GetStorageListResponseBodyStorageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageListResponseBodyStorageInfoList() = default ;
    GetStorageListResponseBodyStorageInfoList& operator=(const GetStorageListResponseBodyStorageInfoList &) = default ;
    GetStorageListResponseBodyStorageInfoList& operator=(GetStorageListResponseBodyStorageInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->creationTime_ != nullptr && this->defaultStorage_ != nullptr && this->editingTempFileStorage_ != nullptr && this->modifiedTime_ != nullptr && this->path_ != nullptr
        && this->status_ != nullptr && this->storageLocation_ != nullptr && this->storageType_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // defaultStorage Field Functions 
    bool hasDefaultStorage() const { return this->defaultStorage_ != nullptr;};
    void deleteDefaultStorage() { this->defaultStorage_ = nullptr;};
    inline bool defaultStorage() const { DARABONBA_PTR_GET_DEFAULT(defaultStorage_, false) };
    inline GetStorageListResponseBodyStorageInfoList& setDefaultStorage(bool defaultStorage) { DARABONBA_PTR_SET_VALUE(defaultStorage_, defaultStorage) };


    // editingTempFileStorage Field Functions 
    bool hasEditingTempFileStorage() const { return this->editingTempFileStorage_ != nullptr;};
    void deleteEditingTempFileStorage() { this->editingTempFileStorage_ = nullptr;};
    inline bool editingTempFileStorage() const { DARABONBA_PTR_GET_DEFAULT(editingTempFileStorage_, false) };
    inline GetStorageListResponseBodyStorageInfoList& setEditingTempFileStorage(bool editingTempFileStorage) { DARABONBA_PTR_SET_VALUE(editingTempFileStorage_, editingTempFileStorage) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetStorageListResponseBodyStorageInfoList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<bool> defaultStorage_ = nullptr;
    std::shared_ptr<bool> editingTempFileStorage_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageLocation_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
