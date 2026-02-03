// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLESNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_TABLESNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Snapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class TableSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(fileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(fileSizeInBytes, fileSizeInBytes_);
      DARABONBA_PTR_TO_JSON(lastFileCreationTime, lastFileCreationTime_);
      DARABONBA_PTR_TO_JSON(recordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(snapshot, snapshot_);
      DARABONBA_PTR_TO_JSON(totalBuckets, totalBuckets_);
    };
    friend void from_json(const Darabonba::Json& j, TableSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(fileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(fileSizeInBytes, fileSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(lastFileCreationTime, lastFileCreationTime_);
      DARABONBA_PTR_FROM_JSON(recordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(snapshot, snapshot_);
      DARABONBA_PTR_FROM_JSON(totalBuckets, totalBuckets_);
    };
    TableSnapshot() = default ;
    TableSnapshot(const TableSnapshot &) = default ;
    TableSnapshot(TableSnapshot &&) = default ;
    TableSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableSnapshot() = default ;
    TableSnapshot& operator=(const TableSnapshot &) = default ;
    TableSnapshot& operator=(TableSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileCount_ == nullptr
        && this->fileSizeInBytes_ == nullptr && this->lastFileCreationTime_ == nullptr && this->recordCount_ == nullptr && this->snapshot_ == nullptr && this->totalBuckets_ == nullptr; };
    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
    inline TableSnapshot& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // fileSizeInBytes Field Functions 
    bool hasFileSizeInBytes() const { return this->fileSizeInBytes_ != nullptr;};
    void deleteFileSizeInBytes() { this->fileSizeInBytes_ = nullptr;};
    inline int64_t getFileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(fileSizeInBytes_, 0L) };
    inline TableSnapshot& setFileSizeInBytes(int64_t fileSizeInBytes) { DARABONBA_PTR_SET_VALUE(fileSizeInBytes_, fileSizeInBytes) };


    // lastFileCreationTime Field Functions 
    bool hasLastFileCreationTime() const { return this->lastFileCreationTime_ != nullptr;};
    void deleteLastFileCreationTime() { this->lastFileCreationTime_ = nullptr;};
    inline int64_t getLastFileCreationTime() const { DARABONBA_PTR_GET_DEFAULT(lastFileCreationTime_, 0L) };
    inline TableSnapshot& setLastFileCreationTime(int64_t lastFileCreationTime) { DARABONBA_PTR_SET_VALUE(lastFileCreationTime_, lastFileCreationTime) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
    inline TableSnapshot& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const Snapshot & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, Snapshot) };
    inline Snapshot getSnapshot() { DARABONBA_PTR_GET(snapshot_, Snapshot) };
    inline TableSnapshot& setSnapshot(const Snapshot & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline TableSnapshot& setSnapshot(Snapshot && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


    // totalBuckets Field Functions 
    bool hasTotalBuckets() const { return this->totalBuckets_ != nullptr;};
    void deleteTotalBuckets() { this->totalBuckets_ = nullptr;};
    inline int32_t getTotalBuckets() const { DARABONBA_PTR_GET_DEFAULT(totalBuckets_, 0) };
    inline TableSnapshot& setTotalBuckets(int32_t totalBuckets) { DARABONBA_PTR_SET_VALUE(totalBuckets_, totalBuckets) };


  protected:
    shared_ptr<int64_t> fileCount_ {};
    shared_ptr<int64_t> fileSizeInBytes_ {};
    shared_ptr<int64_t> lastFileCreationTime_ {};
    shared_ptr<int64_t> recordCount_ {};
    shared_ptr<Snapshot> snapshot_ {};
    shared_ptr<int32_t> totalBuckets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
