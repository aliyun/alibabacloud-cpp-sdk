// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCIBEIMPORTSFROMDATABASERESPONSEBODYITEMSIMPORTRESULTFROMDB_HPP_
#define ALIBABACLOUD_MODELS_DESCIBEIMPORTSFROMDATABASERESPONSEBODYITEMSIMPORTRESULTFROMDB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& obj) { 
      DARABONBA_PTR_TO_JSON(ImportDataStatus, importDataStatus_);
      DARABONBA_PTR_TO_JSON(ImportDataStatusDescription, importDataStatusDescription_);
      DARABONBA_PTR_TO_JSON(ImportDataType, importDataType_);
      DARABONBA_PTR_TO_JSON(ImportId, importId_);
      DARABONBA_PTR_TO_JSON(IncrementalImportingTime, incrementalImportingTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportDataStatus, importDataStatus_);
      DARABONBA_PTR_FROM_JSON(ImportDataStatusDescription, importDataStatusDescription_);
      DARABONBA_PTR_FROM_JSON(ImportDataType, importDataType_);
      DARABONBA_PTR_FROM_JSON(ImportId, importId_);
      DARABONBA_PTR_FROM_JSON(IncrementalImportingTime, incrementalImportingTime_);
    };
    DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB() = default ;
    DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB(const DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB &) = default ;
    DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB(DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB &&) = default ;
    DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB() = default ;
    DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& operator=(const DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB &) = default ;
    DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& operator=(DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importDataStatus_ == nullptr
        && return this->importDataStatusDescription_ == nullptr && return this->importDataType_ == nullptr && return this->importId_ == nullptr && return this->incrementalImportingTime_ == nullptr; };
    // importDataStatus Field Functions 
    bool hasImportDataStatus() const { return this->importDataStatus_ != nullptr;};
    void deleteImportDataStatus() { this->importDataStatus_ = nullptr;};
    inline string importDataStatus() const { DARABONBA_PTR_GET_DEFAULT(importDataStatus_, "") };
    inline DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& setImportDataStatus(string importDataStatus) { DARABONBA_PTR_SET_VALUE(importDataStatus_, importDataStatus) };


    // importDataStatusDescription Field Functions 
    bool hasImportDataStatusDescription() const { return this->importDataStatusDescription_ != nullptr;};
    void deleteImportDataStatusDescription() { this->importDataStatusDescription_ = nullptr;};
    inline string importDataStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(importDataStatusDescription_, "") };
    inline DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& setImportDataStatusDescription(string importDataStatusDescription) { DARABONBA_PTR_SET_VALUE(importDataStatusDescription_, importDataStatusDescription) };


    // importDataType Field Functions 
    bool hasImportDataType() const { return this->importDataType_ != nullptr;};
    void deleteImportDataType() { this->importDataType_ = nullptr;};
    inline string importDataType() const { DARABONBA_PTR_GET_DEFAULT(importDataType_, "") };
    inline DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& setImportDataType(string importDataType) { DARABONBA_PTR_SET_VALUE(importDataType_, importDataType) };


    // importId Field Functions 
    bool hasImportId() const { return this->importId_ != nullptr;};
    void deleteImportId() { this->importId_ = nullptr;};
    inline int32_t importId() const { DARABONBA_PTR_GET_DEFAULT(importId_, 0) };
    inline DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& setImportId(int32_t importId) { DARABONBA_PTR_SET_VALUE(importId_, importId) };


    // incrementalImportingTime Field Functions 
    bool hasIncrementalImportingTime() const { return this->incrementalImportingTime_ != nullptr;};
    void deleteIncrementalImportingTime() { this->incrementalImportingTime_ = nullptr;};
    inline string incrementalImportingTime() const { DARABONBA_PTR_GET_DEFAULT(incrementalImportingTime_, "") };
    inline DescibeImportsFromDatabaseResponseBodyItemsImportResultFromDB& setIncrementalImportingTime(string incrementalImportingTime) { DARABONBA_PTR_SET_VALUE(incrementalImportingTime_, incrementalImportingTime) };


  protected:
    // The status of the migration task. Valid values:
    // 
    // *   **NotStart**: The migration task has not started.
    // *   **FullExporting**: The migration task is exporting full data.
    // *   **FullImporting**: The migration task is importing full data.
    // *   **Success**: The migration task is successful.
    // *   **Failed**: The migration task failed.
    // *   **Canceled**: The migration task is canceled.
    // *   **Canceling**: The migration task is being canceled.
    // *   **IncrementalWaiting**: The migration task is waiting to synchronize incremental data.
    // *   **IncrementalImporting**: The migration task is synchronizing incremental data.
    // *   **StopSyncing**: The migration task stops synchronizing data.
    std::shared_ptr<string> importDataStatus_ = nullptr;
    // The description of the migration task.
    std::shared_ptr<string> importDataStatusDescription_ = nullptr;
    // The type of the migration task. Valid values:
    // 
    // *   **Full**: full migration
    // *   **Incremental:**: incremental migration
    std::shared_ptr<string> importDataType_ = nullptr;
    // The ID of the migration task.
    std::shared_ptr<int32_t> importId_ = nullptr;
    // The time when the migration task synchronized incremental data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> incrementalImportingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
