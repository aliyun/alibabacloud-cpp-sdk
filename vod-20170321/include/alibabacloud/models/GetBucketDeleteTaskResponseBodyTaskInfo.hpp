// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETDELETETASKRESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETDELETETASKRESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetBucketDeleteTaskResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketDeleteTaskResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedMediaRemain, attachedMediaRemain_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteFiles, deleteFiles_);
      DARABONBA_PTR_TO_JSON(ImageRemain, imageRemain_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(VideoRemain, videoRemain_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketDeleteTaskResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedMediaRemain, attachedMediaRemain_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteFiles, deleteFiles_);
      DARABONBA_PTR_FROM_JSON(ImageRemain, imageRemain_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(VideoRemain, videoRemain_);
    };
    GetBucketDeleteTaskResponseBodyTaskInfo() = default ;
    GetBucketDeleteTaskResponseBodyTaskInfo(const GetBucketDeleteTaskResponseBodyTaskInfo &) = default ;
    GetBucketDeleteTaskResponseBodyTaskInfo(GetBucketDeleteTaskResponseBodyTaskInfo &&) = default ;
    GetBucketDeleteTaskResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketDeleteTaskResponseBodyTaskInfo() = default ;
    GetBucketDeleteTaskResponseBodyTaskInfo& operator=(const GetBucketDeleteTaskResponseBodyTaskInfo &) = default ;
    GetBucketDeleteTaskResponseBodyTaskInfo& operator=(GetBucketDeleteTaskResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachedMediaRemain_ != nullptr
        && this->creationTime_ != nullptr && this->deleteFiles_ != nullptr && this->imageRemain_ != nullptr && this->modificationTime_ != nullptr && this->status_ != nullptr
        && this->storageLocation_ != nullptr && this->storageSize_ != nullptr && this->videoRemain_ != nullptr; };
    // attachedMediaRemain Field Functions 
    bool hasAttachedMediaRemain() const { return this->attachedMediaRemain_ != nullptr;};
    void deleteAttachedMediaRemain() { this->attachedMediaRemain_ = nullptr;};
    inline int64_t attachedMediaRemain() const { DARABONBA_PTR_GET_DEFAULT(attachedMediaRemain_, 0L) };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setAttachedMediaRemain(int64_t attachedMediaRemain) { DARABONBA_PTR_SET_VALUE(attachedMediaRemain_, attachedMediaRemain) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteFiles Field Functions 
    bool hasDeleteFiles() const { return this->deleteFiles_ != nullptr;};
    void deleteDeleteFiles() { this->deleteFiles_ = nullptr;};
    inline bool deleteFiles() const { DARABONBA_PTR_GET_DEFAULT(deleteFiles_, false) };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setDeleteFiles(bool deleteFiles) { DARABONBA_PTR_SET_VALUE(deleteFiles_, deleteFiles) };


    // imageRemain Field Functions 
    bool hasImageRemain() const { return this->imageRemain_ != nullptr;};
    void deleteImageRemain() { this->imageRemain_ = nullptr;};
    inline int64_t imageRemain() const { DARABONBA_PTR_GET_DEFAULT(imageRemain_, 0L) };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setImageRemain(int64_t imageRemain) { DARABONBA_PTR_SET_VALUE(imageRemain_, imageRemain) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // videoRemain Field Functions 
    bool hasVideoRemain() const { return this->videoRemain_ != nullptr;};
    void deleteVideoRemain() { this->videoRemain_ = nullptr;};
    inline int64_t videoRemain() const { DARABONBA_PTR_GET_DEFAULT(videoRemain_, 0L) };
    inline GetBucketDeleteTaskResponseBodyTaskInfo& setVideoRemain(int64_t videoRemain) { DARABONBA_PTR_SET_VALUE(videoRemain_, videoRemain) };


  protected:
    std::shared_ptr<int64_t> attachedMediaRemain_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<bool> deleteFiles_ = nullptr;
    std::shared_ptr<int64_t> imageRemain_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageLocation_ = nullptr;
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    std::shared_ptr<int64_t> videoRemain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
