// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKSRESPONSEBODY_HPP_
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
  class DescribeMigrateTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrateTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrateTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeMigrateTasksResponseBody() = default ;
    DescribeMigrateTasksResponseBody(const DescribeMigrateTasksResponseBody &) = default ;
    DescribeMigrateTasksResponseBody(DescribeMigrateTasksResponseBody &&) = default ;
    DescribeMigrateTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrateTasksResponseBody() = default ;
    DescribeMigrateTasksResponseBody& operator=(const DescribeMigrateTasksResponseBody &) = default ;
    DescribeMigrateTasksResponseBody& operator=(DescribeMigrateTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(MigrateTask, migrateTask_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(MigrateTask, migrateTask_);
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
      class MigrateTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrateTask& obj) { 
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(IsDBReplaced, isDBReplaced_);
          DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, MigrateTask& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(IsDBReplaced, isDBReplaced_);
          DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        MigrateTask() = default ;
        MigrateTask(const MigrateTask &) = default ;
        MigrateTask(MigrateTask &&) = default ;
        MigrateTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MigrateTask() = default ;
        MigrateTask& operator=(const MigrateTask &) = default ;
        MigrateTask& operator=(MigrateTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupMode_ == nullptr
        && this->createTime_ == nullptr && this->DBName_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->isDBReplaced_ == nullptr
        && this->migrateTaskId_ == nullptr && this->status_ == nullptr; };
        // backupMode Field Functions 
        bool hasBackupMode() const { return this->backupMode_ != nullptr;};
        void deleteBackupMode() { this->backupMode_ = nullptr;};
        inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
        inline MigrateTask& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MigrateTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline MigrateTask& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MigrateTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline MigrateTask& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // isDBReplaced Field Functions 
        bool hasIsDBReplaced() const { return this->isDBReplaced_ != nullptr;};
        void deleteIsDBReplaced() { this->isDBReplaced_ = nullptr;};
        inline string getIsDBReplaced() const { DARABONBA_PTR_GET_DEFAULT(isDBReplaced_, "") };
        inline MigrateTask& setIsDBReplaced(string isDBReplaced) { DARABONBA_PTR_SET_VALUE(isDBReplaced_, isDBReplaced) };


        // migrateTaskId Field Functions 
        bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
        void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
        inline string getMigrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
        inline MigrateTask& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MigrateTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The migration task type. Valid values:
        // 
        // *   **FULL**: The migration task migrates full backup files that can be used to restore the full data of the instance.
        // *   **UPDF**: The migration task migrates incremental or log backup files that can be used to restore the incremental data of the instance.
        shared_ptr<string> backupMode_ {};
        // The time when the migration task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The database name.
        shared_ptr<string> DBName_ {};
        // The description of the migration task.
        shared_ptr<string> description_ {};
        // The time when the migration task was completed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // Indicates whether the imported data overwrites the existing data.
        shared_ptr<string> isDBReplaced_ {};
        // The migration task ID.
        shared_ptr<string> migrateTaskId_ {};
        // The status of the migration task. Valid values:
        // 
        // *   **NoStart**: The task is not started.
        // *   **Running**:The task is in progress.
        // *   **Success**: The task is successful.
        // *   **Failed**: The task failed.
        // *   **Waiting**: The task is waiting for an incremental backup file to be imported.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->migrateTask_ == nullptr; };
      // migrateTask Field Functions 
      bool hasMigrateTask() const { return this->migrateTask_ != nullptr;};
      void deleteMigrateTask() { this->migrateTask_ = nullptr;};
      inline const vector<Items::MigrateTask> & getMigrateTask() const { DARABONBA_PTR_GET_CONST(migrateTask_, vector<Items::MigrateTask>) };
      inline vector<Items::MigrateTask> getMigrateTask() { DARABONBA_PTR_GET(migrateTask_, vector<Items::MigrateTask>) };
      inline Items& setMigrateTask(const vector<Items::MigrateTask> & migrateTask) { DARABONBA_PTR_SET_VALUE(migrateTask_, migrateTask) };
      inline Items& setMigrateTask(vector<Items::MigrateTask> && migrateTask) { DARABONBA_PTR_SET_RVALUE(migrateTask_, migrateTask) };


    protected:
      shared_ptr<vector<Items::MigrateTask>> migrateTask_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeMigrateTasksResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeMigrateTasksResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeMigrateTasksResponseBody::Items) };
    inline DescribeMigrateTasksResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeMigrateTasksResponseBody::Items) };
    inline DescribeMigrateTasksResponseBody& setItems(const DescribeMigrateTasksResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMigrateTasksResponseBody& setItems(DescribeMigrateTasksResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMigrateTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeMigrateTasksResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrateTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeMigrateTasksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The details of the migration task.
    shared_ptr<DescribeMigrateTasksResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
