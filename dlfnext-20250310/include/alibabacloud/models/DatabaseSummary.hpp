// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABASESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DATABASESUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class DatabaseSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatabaseSummary& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(generatedDate, generatedDate_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(objTypeArchiveSize, objTypeArchiveSize_);
      DARABONBA_PTR_TO_JSON(objTypeColdArchiveSize, objTypeColdArchiveSize_);
      DARABONBA_PTR_TO_JSON(objTypeIaSize, objTypeIaSize_);
      DARABONBA_PTR_TO_JSON(objTypeStandardSize, objTypeStandardSize_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(tableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DatabaseSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(generatedDate, generatedDate_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(objTypeArchiveSize, objTypeArchiveSize_);
      DARABONBA_PTR_FROM_JSON(objTypeColdArchiveSize, objTypeColdArchiveSize_);
      DARABONBA_PTR_FROM_JSON(objTypeIaSize, objTypeIaSize_);
      DARABONBA_PTR_FROM_JSON(objTypeStandardSize, objTypeStandardSize_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(tableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
    };
    DatabaseSummary() = default ;
    DatabaseSummary(const DatabaseSummary &) = default ;
    DatabaseSummary(DatabaseSummary &&) = default ;
    DatabaseSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatabaseSummary() = default ;
    DatabaseSummary& operator=(const DatabaseSummary &) = default ;
    DatabaseSummary& operator=(DatabaseSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->databaseName_ != nullptr && this->generatedDate_ != nullptr && this->location_ != nullptr && this->objTypeArchiveSize_ != nullptr && this->objTypeColdArchiveSize_ != nullptr
        && this->objTypeIaSize_ != nullptr && this->objTypeStandardSize_ != nullptr && this->partitionCount_ != nullptr && this->tableCount_ != nullptr && this->totalFileCount_ != nullptr
        && this->totalFileSizeInBytes_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline DatabaseSummary& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DatabaseSummary& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // generatedDate Field Functions 
    bool hasGeneratedDate() const { return this->generatedDate_ != nullptr;};
    void deleteGeneratedDate() { this->generatedDate_ = nullptr;};
    inline string generatedDate() const { DARABONBA_PTR_GET_DEFAULT(generatedDate_, "") };
    inline DatabaseSummary& setGeneratedDate(string generatedDate) { DARABONBA_PTR_SET_VALUE(generatedDate_, generatedDate) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DatabaseSummary& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // objTypeArchiveSize Field Functions 
    bool hasObjTypeArchiveSize() const { return this->objTypeArchiveSize_ != nullptr;};
    void deleteObjTypeArchiveSize() { this->objTypeArchiveSize_ = nullptr;};
    inline int64_t objTypeArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeArchiveSize_, 0L) };
    inline DatabaseSummary& setObjTypeArchiveSize(int64_t objTypeArchiveSize) { DARABONBA_PTR_SET_VALUE(objTypeArchiveSize_, objTypeArchiveSize) };


    // objTypeColdArchiveSize Field Functions 
    bool hasObjTypeColdArchiveSize() const { return this->objTypeColdArchiveSize_ != nullptr;};
    void deleteObjTypeColdArchiveSize() { this->objTypeColdArchiveSize_ = nullptr;};
    inline int64_t objTypeColdArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeColdArchiveSize_, 0L) };
    inline DatabaseSummary& setObjTypeColdArchiveSize(int64_t objTypeColdArchiveSize) { DARABONBA_PTR_SET_VALUE(objTypeColdArchiveSize_, objTypeColdArchiveSize) };


    // objTypeIaSize Field Functions 
    bool hasObjTypeIaSize() const { return this->objTypeIaSize_ != nullptr;};
    void deleteObjTypeIaSize() { this->objTypeIaSize_ = nullptr;};
    inline int64_t objTypeIaSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeIaSize_, 0L) };
    inline DatabaseSummary& setObjTypeIaSize(int64_t objTypeIaSize) { DARABONBA_PTR_SET_VALUE(objTypeIaSize_, objTypeIaSize) };


    // objTypeStandardSize Field Functions 
    bool hasObjTypeStandardSize() const { return this->objTypeStandardSize_ != nullptr;};
    void deleteObjTypeStandardSize() { this->objTypeStandardSize_ = nullptr;};
    inline int64_t objTypeStandardSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeStandardSize_, 0L) };
    inline DatabaseSummary& setObjTypeStandardSize(int64_t objTypeStandardSize) { DARABONBA_PTR_SET_VALUE(objTypeStandardSize_, objTypeStandardSize) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int64_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0L) };
    inline DatabaseSummary& setPartitionCount(int64_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int64_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
    inline DatabaseSummary& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline int64_t totalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0L) };
    inline DatabaseSummary& setTotalFileCount(int64_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


    // totalFileSizeInBytes Field Functions 
    bool hasTotalFileSizeInBytes() const { return this->totalFileSizeInBytes_ != nullptr;};
    void deleteTotalFileSizeInBytes() { this->totalFileSizeInBytes_ = nullptr;};
    inline int64_t totalFileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(totalFileSizeInBytes_, 0L) };
    inline DatabaseSummary& setTotalFileSizeInBytes(int64_t totalFileSizeInBytes) { DARABONBA_PTR_SET_VALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };


  protected:
    // Creation timestamp in milliseconds
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    // 库名 - Database name
    std::shared_ptr<string> databaseName_ = nullptr;
    // Last profile update date in format yyyyMMdd
    std::shared_ptr<string> generatedDate_ = nullptr;
    // Storage location URI
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> objTypeArchiveSize_ = nullptr;
    std::shared_ptr<int64_t> objTypeColdArchiveSize_ = nullptr;
    std::shared_ptr<int64_t> objTypeIaSize_ = nullptr;
    std::shared_ptr<int64_t> objTypeStandardSize_ = nullptr;
    std::shared_ptr<int64_t> partitionCount_ = nullptr;
    // Total storage in bytes
    std::shared_ptr<int64_t> tableCount_ = nullptr;
    std::shared_ptr<int64_t> totalFileCount_ = nullptr;
    // Total file count
    std::shared_ptr<int64_t> totalFileSizeInBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
