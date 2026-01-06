// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCIBEIMPORTSFROMDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCIBEIMPORTSFROMDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescibeImportsFromDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescibeImportsFromDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescibeImportsFromDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescibeImportsFromDatabaseResponseBody() = default ;
    DescibeImportsFromDatabaseResponseBody(const DescibeImportsFromDatabaseResponseBody &) = default ;
    DescibeImportsFromDatabaseResponseBody(DescibeImportsFromDatabaseResponseBody &&) = default ;
    DescibeImportsFromDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescibeImportsFromDatabaseResponseBody() = default ;
    DescibeImportsFromDatabaseResponseBody& operator=(const DescibeImportsFromDatabaseResponseBody &) = default ;
    DescibeImportsFromDatabaseResponseBody& operator=(DescibeImportsFromDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ImportResultFromDB, importResultFromDB_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ImportResultFromDB, importResultFromDB_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImportResultFromDB : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImportResultFromDB& obj) { 
          DARABONBA_PTR_TO_JSON(ImportDataStatus, importDataStatus_);
          DARABONBA_PTR_TO_JSON(ImportDataStatusDescription, importDataStatusDescription_);
          DARABONBA_PTR_TO_JSON(ImportDataType, importDataType_);
          DARABONBA_PTR_TO_JSON(ImportId, importId_);
          DARABONBA_PTR_TO_JSON(IncrementalImportingTime, incrementalImportingTime_);
        };
        friend void from_json(const Darabonba::Json& j, ImportResultFromDB& obj) { 
          DARABONBA_PTR_FROM_JSON(ImportDataStatus, importDataStatus_);
          DARABONBA_PTR_FROM_JSON(ImportDataStatusDescription, importDataStatusDescription_);
          DARABONBA_PTR_FROM_JSON(ImportDataType, importDataType_);
          DARABONBA_PTR_FROM_JSON(ImportId, importId_);
          DARABONBA_PTR_FROM_JSON(IncrementalImportingTime, incrementalImportingTime_);
        };
        ImportResultFromDB() = default ;
        ImportResultFromDB(const ImportResultFromDB &) = default ;
        ImportResultFromDB(ImportResultFromDB &&) = default ;
        ImportResultFromDB(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImportResultFromDB() = default ;
        ImportResultFromDB& operator=(const ImportResultFromDB &) = default ;
        ImportResultFromDB& operator=(ImportResultFromDB &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->importDataStatus_ == nullptr
        && this->importDataStatusDescription_ == nullptr && this->importDataType_ == nullptr && this->importId_ == nullptr && this->incrementalImportingTime_ == nullptr; };
        // importDataStatus Field Functions 
        bool hasImportDataStatus() const { return this->importDataStatus_ != nullptr;};
        void deleteImportDataStatus() { this->importDataStatus_ = nullptr;};
        inline string getImportDataStatus() const { DARABONBA_PTR_GET_DEFAULT(importDataStatus_, "") };
        inline ImportResultFromDB& setImportDataStatus(string importDataStatus) { DARABONBA_PTR_SET_VALUE(importDataStatus_, importDataStatus) };


        // importDataStatusDescription Field Functions 
        bool hasImportDataStatusDescription() const { return this->importDataStatusDescription_ != nullptr;};
        void deleteImportDataStatusDescription() { this->importDataStatusDescription_ = nullptr;};
        inline string getImportDataStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(importDataStatusDescription_, "") };
        inline ImportResultFromDB& setImportDataStatusDescription(string importDataStatusDescription) { DARABONBA_PTR_SET_VALUE(importDataStatusDescription_, importDataStatusDescription) };


        // importDataType Field Functions 
        bool hasImportDataType() const { return this->importDataType_ != nullptr;};
        void deleteImportDataType() { this->importDataType_ = nullptr;};
        inline string getImportDataType() const { DARABONBA_PTR_GET_DEFAULT(importDataType_, "") };
        inline ImportResultFromDB& setImportDataType(string importDataType) { DARABONBA_PTR_SET_VALUE(importDataType_, importDataType) };


        // importId Field Functions 
        bool hasImportId() const { return this->importId_ != nullptr;};
        void deleteImportId() { this->importId_ = nullptr;};
        inline int32_t getImportId() const { DARABONBA_PTR_GET_DEFAULT(importId_, 0) };
        inline ImportResultFromDB& setImportId(int32_t importId) { DARABONBA_PTR_SET_VALUE(importId_, importId) };


        // incrementalImportingTime Field Functions 
        bool hasIncrementalImportingTime() const { return this->incrementalImportingTime_ != nullptr;};
        void deleteIncrementalImportingTime() { this->incrementalImportingTime_ = nullptr;};
        inline string getIncrementalImportingTime() const { DARABONBA_PTR_GET_DEFAULT(incrementalImportingTime_, "") };
        inline ImportResultFromDB& setIncrementalImportingTime(string incrementalImportingTime) { DARABONBA_PTR_SET_VALUE(incrementalImportingTime_, incrementalImportingTime) };


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
        shared_ptr<string> importDataStatus_ {};
        // The description of the migration task.
        shared_ptr<string> importDataStatusDescription_ {};
        // The type of the migration task. Valid values:
        // 
        // *   **Full**: full migration
        // *   **Incremental:**: incremental migration
        shared_ptr<string> importDataType_ {};
        // The ID of the migration task.
        shared_ptr<int32_t> importId_ {};
        // The time when the migration task synchronized incremental data. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> incrementalImportingTime_ {};
      };

      virtual bool empty() const override { return this->importResultFromDB_ == nullptr; };
      // importResultFromDB Field Functions 
      bool hasImportResultFromDB() const { return this->importResultFromDB_ != nullptr;};
      void deleteImportResultFromDB() { this->importResultFromDB_ = nullptr;};
      inline const vector<Items::ImportResultFromDB> & getImportResultFromDB() const { DARABONBA_PTR_GET_CONST(importResultFromDB_, vector<Items::ImportResultFromDB>) };
      inline vector<Items::ImportResultFromDB> getImportResultFromDB() { DARABONBA_PTR_GET(importResultFromDB_, vector<Items::ImportResultFromDB>) };
      inline Items& setImportResultFromDB(const vector<Items::ImportResultFromDB> & importResultFromDB) { DARABONBA_PTR_SET_VALUE(importResultFromDB_, importResultFromDB) };
      inline Items& setImportResultFromDB(vector<Items::ImportResultFromDB> && importResultFromDB) { DARABONBA_PTR_SET_RVALUE(importResultFromDB_, importResultFromDB) };


    protected:
      shared_ptr<vector<Items::ImportResultFromDB>> importResultFromDB_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescibeImportsFromDatabaseResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescibeImportsFromDatabaseResponseBody::Items) };
    inline DescibeImportsFromDatabaseResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescibeImportsFromDatabaseResponseBody::Items) };
    inline DescibeImportsFromDatabaseResponseBody& setItems(const DescibeImportsFromDatabaseResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescibeImportsFromDatabaseResponseBody& setItems(DescibeImportsFromDatabaseResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescibeImportsFromDatabaseResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescibeImportsFromDatabaseResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescibeImportsFromDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescibeImportsFromDatabaseResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The migration tasks.
    shared_ptr<DescibeImportsFromDatabaseResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
