// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLECOMPACTIONHISTORY_HPP_
#define ALIBABACLOUD_MODELS_TABLECOMPACTIONHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class TableCompactionHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableCompactionHistory& obj) { 
      DARABONBA_PTR_TO_JSON(afterFilesCount, afterFilesCount_);
      DARABONBA_PTR_TO_JSON(afterFilesSize, afterFilesSize_);
      DARABONBA_PTR_TO_JSON(beforeFilesCount, beforeFilesCount_);
      DARABONBA_PTR_TO_JSON(beforeFilesLastCreationTime, beforeFilesLastCreationTime_);
      DARABONBA_PTR_TO_JSON(beforeFilesSize, beforeFilesSize_);
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(commitTime, commitTime_);
      DARABONBA_PTR_TO_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, TableCompactionHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(afterFilesCount, afterFilesCount_);
      DARABONBA_PTR_FROM_JSON(afterFilesSize, afterFilesSize_);
      DARABONBA_PTR_FROM_JSON(beforeFilesCount, beforeFilesCount_);
      DARABONBA_PTR_FROM_JSON(beforeFilesLastCreationTime, beforeFilesLastCreationTime_);
      DARABONBA_PTR_FROM_JSON(beforeFilesSize, beforeFilesSize_);
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(commitTime, commitTime_);
      DARABONBA_PTR_FROM_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    TableCompactionHistory() = default ;
    TableCompactionHistory(const TableCompactionHistory &) = default ;
    TableCompactionHistory(TableCompactionHistory &&) = default ;
    TableCompactionHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableCompactionHistory() = default ;
    TableCompactionHistory& operator=(const TableCompactionHistory &) = default ;
    TableCompactionHistory& operator=(TableCompactionHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterFilesCount_ != nullptr
        && this->afterFilesSize_ != nullptr && this->beforeFilesCount_ != nullptr && this->beforeFilesLastCreationTime_ != nullptr && this->beforeFilesSize_ != nullptr && this->catalogId_ != nullptr
        && this->commitTime_ != nullptr && this->snapshotId_ != nullptr && this->tableId_ != nullptr && this->updatedAt_ != nullptr && this->updatedBy_ != nullptr; };
    // afterFilesCount Field Functions 
    bool hasAfterFilesCount() const { return this->afterFilesCount_ != nullptr;};
    void deleteAfterFilesCount() { this->afterFilesCount_ = nullptr;};
    inline int64_t afterFilesCount() const { DARABONBA_PTR_GET_DEFAULT(afterFilesCount_, 0L) };
    inline TableCompactionHistory& setAfterFilesCount(int64_t afterFilesCount) { DARABONBA_PTR_SET_VALUE(afterFilesCount_, afterFilesCount) };


    // afterFilesSize Field Functions 
    bool hasAfterFilesSize() const { return this->afterFilesSize_ != nullptr;};
    void deleteAfterFilesSize() { this->afterFilesSize_ = nullptr;};
    inline int64_t afterFilesSize() const { DARABONBA_PTR_GET_DEFAULT(afterFilesSize_, 0L) };
    inline TableCompactionHistory& setAfterFilesSize(int64_t afterFilesSize) { DARABONBA_PTR_SET_VALUE(afterFilesSize_, afterFilesSize) };


    // beforeFilesCount Field Functions 
    bool hasBeforeFilesCount() const { return this->beforeFilesCount_ != nullptr;};
    void deleteBeforeFilesCount() { this->beforeFilesCount_ = nullptr;};
    inline int64_t beforeFilesCount() const { DARABONBA_PTR_GET_DEFAULT(beforeFilesCount_, 0L) };
    inline TableCompactionHistory& setBeforeFilesCount(int64_t beforeFilesCount) { DARABONBA_PTR_SET_VALUE(beforeFilesCount_, beforeFilesCount) };


    // beforeFilesLastCreationTime Field Functions 
    bool hasBeforeFilesLastCreationTime() const { return this->beforeFilesLastCreationTime_ != nullptr;};
    void deleteBeforeFilesLastCreationTime() { this->beforeFilesLastCreationTime_ = nullptr;};
    inline int64_t beforeFilesLastCreationTime() const { DARABONBA_PTR_GET_DEFAULT(beforeFilesLastCreationTime_, 0L) };
    inline TableCompactionHistory& setBeforeFilesLastCreationTime(int64_t beforeFilesLastCreationTime) { DARABONBA_PTR_SET_VALUE(beforeFilesLastCreationTime_, beforeFilesLastCreationTime) };


    // beforeFilesSize Field Functions 
    bool hasBeforeFilesSize() const { return this->beforeFilesSize_ != nullptr;};
    void deleteBeforeFilesSize() { this->beforeFilesSize_ = nullptr;};
    inline int64_t beforeFilesSize() const { DARABONBA_PTR_GET_DEFAULT(beforeFilesSize_, 0L) };
    inline TableCompactionHistory& setBeforeFilesSize(int64_t beforeFilesSize) { DARABONBA_PTR_SET_VALUE(beforeFilesSize_, beforeFilesSize) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline TableCompactionHistory& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // commitTime Field Functions 
    bool hasCommitTime() const { return this->commitTime_ != nullptr;};
    void deleteCommitTime() { this->commitTime_ = nullptr;};
    inline int64_t commitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, 0L) };
    inline TableCompactionHistory& setCommitTime(int64_t commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline int64_t snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, 0L) };
    inline TableCompactionHistory& setSnapshotId(int64_t snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline TableCompactionHistory& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline TableCompactionHistory& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline TableCompactionHistory& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    std::shared_ptr<int64_t> afterFilesCount_ = nullptr;
    std::shared_ptr<int64_t> afterFilesSize_ = nullptr;
    std::shared_ptr<int64_t> beforeFilesCount_ = nullptr;
    std::shared_ptr<int64_t> beforeFilesLastCreationTime_ = nullptr;
    std::shared_ptr<int64_t> beforeFilesSize_ = nullptr;
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<int64_t> commitTime_ = nullptr;
    std::shared_ptr<int64_t> snapshotId_ = nullptr;
    std::shared_ptr<string> tableId_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
    std::shared_ptr<string> updatedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
