// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetStorageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageInfoList, storageInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageInfoList, storageInfoList_);
    };
    GetStorageListResponseBody() = default ;
    GetStorageListResponseBody(const GetStorageListResponseBody &) = default ;
    GetStorageListResponseBody(GetStorageListResponseBody &&) = default ;
    GetStorageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageListResponseBody() = default ;
    GetStorageListResponseBody& operator=(const GetStorageListResponseBody &) = default ;
    GetStorageListResponseBody& operator=(GetStorageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageInfoList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, StorageInfoList& obj) { 
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
      StorageInfoList() = default ;
      StorageInfoList(const StorageInfoList &) = default ;
      StorageInfoList(StorageInfoList &&) = default ;
      StorageInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageInfoList() = default ;
      StorageInfoList& operator=(const StorageInfoList &) = default ;
      StorageInfoList& operator=(StorageInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->defaultStorage_ == nullptr && this->editingTempFileStorage_ == nullptr && this->modifiedTime_ == nullptr && this->path_ == nullptr
        && this->status_ == nullptr && this->storageLocation_ == nullptr && this->storageType_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline StorageInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline StorageInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // defaultStorage Field Functions 
      bool hasDefaultStorage() const { return this->defaultStorage_ != nullptr;};
      void deleteDefaultStorage() { this->defaultStorage_ = nullptr;};
      inline bool getDefaultStorage() const { DARABONBA_PTR_GET_DEFAULT(defaultStorage_, false) };
      inline StorageInfoList& setDefaultStorage(bool defaultStorage) { DARABONBA_PTR_SET_VALUE(defaultStorage_, defaultStorage) };


      // editingTempFileStorage Field Functions 
      bool hasEditingTempFileStorage() const { return this->editingTempFileStorage_ != nullptr;};
      void deleteEditingTempFileStorage() { this->editingTempFileStorage_ = nullptr;};
      inline bool getEditingTempFileStorage() const { DARABONBA_PTR_GET_DEFAULT(editingTempFileStorage_, false) };
      inline StorageInfoList& setEditingTempFileStorage(bool editingTempFileStorage) { DARABONBA_PTR_SET_VALUE(editingTempFileStorage_, editingTempFileStorage) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline StorageInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline StorageInfoList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StorageInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageLocation Field Functions 
      bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
      void deleteStorageLocation() { this->storageLocation_ = nullptr;};
      inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
      inline StorageInfoList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline StorageInfoList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The time when the configuration was created.
      shared_ptr<string> creationTime_ {};
      // Indicates whether it is the default storage location.
      shared_ptr<bool> defaultStorage_ {};
      // Indicates whether temporary files created during editing processes are stored in this location.
      shared_ptr<bool> editingTempFileStorage_ {};
      // The time when the configuration was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The file path.
      shared_ptr<string> path_ {};
      // The OSS storage status.
      shared_ptr<string> status_ {};
      // The bucket.
      shared_ptr<string> storageLocation_ {};
      // The storage type.
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->storageInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageInfoList Field Functions 
    bool hasStorageInfoList() const { return this->storageInfoList_ != nullptr;};
    void deleteStorageInfoList() { this->storageInfoList_ = nullptr;};
    inline const vector<GetStorageListResponseBody::StorageInfoList> & getStorageInfoList() const { DARABONBA_PTR_GET_CONST(storageInfoList_, vector<GetStorageListResponseBody::StorageInfoList>) };
    inline vector<GetStorageListResponseBody::StorageInfoList> getStorageInfoList() { DARABONBA_PTR_GET(storageInfoList_, vector<GetStorageListResponseBody::StorageInfoList>) };
    inline GetStorageListResponseBody& setStorageInfoList(const vector<GetStorageListResponseBody::StorageInfoList> & storageInfoList) { DARABONBA_PTR_SET_VALUE(storageInfoList_, storageInfoList) };
    inline GetStorageListResponseBody& setStorageInfoList(vector<GetStorageListResponseBody::StorageInfoList> && storageInfoList) { DARABONBA_PTR_SET_RVALUE(storageInfoList_, storageInfoList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The storage configurations.
    shared_ptr<vector<GetStorageListResponseBody::StorageInfoList>> storageInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
