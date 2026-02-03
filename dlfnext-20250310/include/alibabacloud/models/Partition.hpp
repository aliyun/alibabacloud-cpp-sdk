// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITION_HPP_
#define ALIBABACLOUD_MODELS_PARTITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Partition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Partition& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(done, done_);
      DARABONBA_PTR_TO_JSON(fileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(fileSizeInBytes, fileSizeInBytes_);
      DARABONBA_PTR_TO_JSON(lastFileCreationTime, lastFileCreationTime_);
      DARABONBA_PTR_TO_JSON(recordCount, recordCount_);
      DARABONBA_ANY_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(storageAction, storageAction_);
      DARABONBA_PTR_TO_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_TO_JSON(storageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(totalBuckets, totalBuckets_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, Partition& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(done, done_);
      DARABONBA_PTR_FROM_JSON(fileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(fileSizeInBytes, fileSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(lastFileCreationTime, lastFileCreationTime_);
      DARABONBA_PTR_FROM_JSON(recordCount, recordCount_);
      DARABONBA_ANY_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(storageAction, storageAction_);
      DARABONBA_PTR_FROM_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_FROM_JSON(storageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(totalBuckets, totalBuckets_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    Partition() = default ;
    Partition(const Partition &) = default ;
    Partition(Partition &&) = default ;
    Partition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Partition() = default ;
    Partition& operator=(const Partition &) = default ;
    Partition& operator=(Partition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->createdBy_ == nullptr && this->done_ == nullptr && this->fileCount_ == nullptr && this->fileSizeInBytes_ == nullptr && this->lastFileCreationTime_ == nullptr
        && this->recordCount_ == nullptr && this->spec_ == nullptr && this->storageAction_ == nullptr && this->storageActionTimestamp_ == nullptr && this->storageClass_ == nullptr
        && this->totalBuckets_ == nullptr && this->updatedAt_ == nullptr && this->updatedBy_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Partition& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Partition& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline Partition& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
    inline Partition& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // fileSizeInBytes Field Functions 
    bool hasFileSizeInBytes() const { return this->fileSizeInBytes_ != nullptr;};
    void deleteFileSizeInBytes() { this->fileSizeInBytes_ = nullptr;};
    inline int64_t getFileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(fileSizeInBytes_, 0L) };
    inline Partition& setFileSizeInBytes(int64_t fileSizeInBytes) { DARABONBA_PTR_SET_VALUE(fileSizeInBytes_, fileSizeInBytes) };


    // lastFileCreationTime Field Functions 
    bool hasLastFileCreationTime() const { return this->lastFileCreationTime_ != nullptr;};
    void deleteLastFileCreationTime() { this->lastFileCreationTime_ = nullptr;};
    inline int64_t getLastFileCreationTime() const { DARABONBA_PTR_GET_DEFAULT(lastFileCreationTime_, 0L) };
    inline Partition& setLastFileCreationTime(int64_t lastFileCreationTime) { DARABONBA_PTR_SET_VALUE(lastFileCreationTime_, lastFileCreationTime) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
    inline Partition& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline     const Darabonba::Json & getSpec() const { DARABONBA_GET(spec_) };
    Darabonba::Json & getSpec() { DARABONBA_GET(spec_) };
    inline Partition& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
    inline Partition& setSpec(Darabonba::Json && spec) { DARABONBA_SET_RVALUE(spec_, spec) };


    // storageAction Field Functions 
    bool hasStorageAction() const { return this->storageAction_ != nullptr;};
    void deleteStorageAction() { this->storageAction_ = nullptr;};
    inline string getStorageAction() const { DARABONBA_PTR_GET_DEFAULT(storageAction_, "") };
    inline Partition& setStorageAction(string storageAction) { DARABONBA_PTR_SET_VALUE(storageAction_, storageAction) };


    // storageActionTimestamp Field Functions 
    bool hasStorageActionTimestamp() const { return this->storageActionTimestamp_ != nullptr;};
    void deleteStorageActionTimestamp() { this->storageActionTimestamp_ = nullptr;};
    inline int64_t getStorageActionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storageActionTimestamp_, 0L) };
    inline Partition& setStorageActionTimestamp(int64_t storageActionTimestamp) { DARABONBA_PTR_SET_VALUE(storageActionTimestamp_, storageActionTimestamp) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline Partition& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // totalBuckets Field Functions 
    bool hasTotalBuckets() const { return this->totalBuckets_ != nullptr;};
    void deleteTotalBuckets() { this->totalBuckets_ = nullptr;};
    inline int32_t getTotalBuckets() const { DARABONBA_PTR_GET_DEFAULT(totalBuckets_, 0) };
    inline Partition& setTotalBuckets(int32_t totalBuckets) { DARABONBA_PTR_SET_VALUE(totalBuckets_, totalBuckets) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline Partition& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline Partition& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> createdBy_ {};
    shared_ptr<bool> done_ {};
    shared_ptr<int64_t> fileCount_ {};
    shared_ptr<int64_t> fileSizeInBytes_ {};
    shared_ptr<int64_t> lastFileCreationTime_ {};
    shared_ptr<int64_t> recordCount_ {};
    Darabonba::Json spec_ {};
    shared_ptr<string> storageAction_ {};
    shared_ptr<int64_t> storageActionTimestamp_ {};
    shared_ptr<string> storageClass_ {};
    shared_ptr<int32_t> totalBuckets_ {};
    shared_ptr<int64_t> updatedAt_ {};
    shared_ptr<string> updatedBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
