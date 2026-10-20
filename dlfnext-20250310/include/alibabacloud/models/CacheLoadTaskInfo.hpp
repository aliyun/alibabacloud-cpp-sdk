// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CACHELOADTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_CACHELOADTASKINFO_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CacheLoadTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CacheLoadTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(completedFiles, completedFiles_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(enumeratedFiles, enumeratedFiles_);
      DARABONBA_PTR_TO_JSON(enumerationDone, enumerationDone_);
      DARABONBA_PTR_TO_JSON(extraOptions, extraOptions_);
      DARABONBA_PTR_TO_JSON(failedFiles, failedFiles_);
      DARABONBA_PTR_TO_JSON(lastError, lastError_);
      DARABONBA_PTR_TO_JSON(loadedBytes, loadedBytes_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskUpdatedAt, taskUpdatedAt_);
      DARABONBA_PTR_TO_JSON(totalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(totalFiles, totalFiles_);
    };
    friend void from_json(const Darabonba::Json& j, CacheLoadTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(completedFiles, completedFiles_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(enumeratedFiles, enumeratedFiles_);
      DARABONBA_PTR_FROM_JSON(enumerationDone, enumerationDone_);
      DARABONBA_PTR_FROM_JSON(extraOptions, extraOptions_);
      DARABONBA_PTR_FROM_JSON(failedFiles, failedFiles_);
      DARABONBA_PTR_FROM_JSON(lastError, lastError_);
      DARABONBA_PTR_FROM_JSON(loadedBytes, loadedBytes_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(table, table_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskUpdatedAt, taskUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(totalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(totalFiles, totalFiles_);
    };
    CacheLoadTaskInfo() = default ;
    CacheLoadTaskInfo(const CacheLoadTaskInfo &) = default ;
    CacheLoadTaskInfo(CacheLoadTaskInfo &&) = default ;
    CacheLoadTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CacheLoadTaskInfo() = default ;
    CacheLoadTaskInfo& operator=(const CacheLoadTaskInfo &) = default ;
    CacheLoadTaskInfo& operator=(CacheLoadTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && this->completedFiles_ == nullptr && this->database_ == nullptr && this->enumeratedFiles_ == nullptr && this->enumerationDone_ == nullptr && this->extraOptions_ == nullptr
        && this->failedFiles_ == nullptr && this->lastError_ == nullptr && this->loadedBytes_ == nullptr && this->path_ == nullptr && this->startedAt_ == nullptr
        && this->status_ == nullptr && this->table_ == nullptr && this->taskId_ == nullptr && this->taskUpdatedAt_ == nullptr && this->totalBytes_ == nullptr
        && this->totalFiles_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string getCatalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline CacheLoadTaskInfo& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // completedFiles Field Functions 
    bool hasCompletedFiles() const { return this->completedFiles_ != nullptr;};
    void deleteCompletedFiles() { this->completedFiles_ = nullptr;};
    inline int64_t getCompletedFiles() const { DARABONBA_PTR_GET_DEFAULT(completedFiles_, 0L) };
    inline CacheLoadTaskInfo& setCompletedFiles(int64_t completedFiles) { DARABONBA_PTR_SET_VALUE(completedFiles_, completedFiles) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CacheLoadTaskInfo& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // enumeratedFiles Field Functions 
    bool hasEnumeratedFiles() const { return this->enumeratedFiles_ != nullptr;};
    void deleteEnumeratedFiles() { this->enumeratedFiles_ = nullptr;};
    inline int64_t getEnumeratedFiles() const { DARABONBA_PTR_GET_DEFAULT(enumeratedFiles_, 0L) };
    inline CacheLoadTaskInfo& setEnumeratedFiles(int64_t enumeratedFiles) { DARABONBA_PTR_SET_VALUE(enumeratedFiles_, enumeratedFiles) };


    // enumerationDone Field Functions 
    bool hasEnumerationDone() const { return this->enumerationDone_ != nullptr;};
    void deleteEnumerationDone() { this->enumerationDone_ = nullptr;};
    inline bool getEnumerationDone() const { DARABONBA_PTR_GET_DEFAULT(enumerationDone_, false) };
    inline CacheLoadTaskInfo& setEnumerationDone(bool enumerationDone) { DARABONBA_PTR_SET_VALUE(enumerationDone_, enumerationDone) };


    // extraOptions Field Functions 
    bool hasExtraOptions() const { return this->extraOptions_ != nullptr;};
    void deleteExtraOptions() { this->extraOptions_ = nullptr;};
    inline const map<string, string> & getExtraOptions() const { DARABONBA_PTR_GET_CONST(extraOptions_, map<string, string>) };
    inline map<string, string> getExtraOptions() { DARABONBA_PTR_GET(extraOptions_, map<string, string>) };
    inline CacheLoadTaskInfo& setExtraOptions(const map<string, string> & extraOptions) { DARABONBA_PTR_SET_VALUE(extraOptions_, extraOptions) };
    inline CacheLoadTaskInfo& setExtraOptions(map<string, string> && extraOptions) { DARABONBA_PTR_SET_RVALUE(extraOptions_, extraOptions) };


    // failedFiles Field Functions 
    bool hasFailedFiles() const { return this->failedFiles_ != nullptr;};
    void deleteFailedFiles() { this->failedFiles_ = nullptr;};
    inline int64_t getFailedFiles() const { DARABONBA_PTR_GET_DEFAULT(failedFiles_, 0L) };
    inline CacheLoadTaskInfo& setFailedFiles(int64_t failedFiles) { DARABONBA_PTR_SET_VALUE(failedFiles_, failedFiles) };


    // lastError Field Functions 
    bool hasLastError() const { return this->lastError_ != nullptr;};
    void deleteLastError() { this->lastError_ = nullptr;};
    inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
    inline CacheLoadTaskInfo& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


    // loadedBytes Field Functions 
    bool hasLoadedBytes() const { return this->loadedBytes_ != nullptr;};
    void deleteLoadedBytes() { this->loadedBytes_ = nullptr;};
    inline int64_t getLoadedBytes() const { DARABONBA_PTR_GET_DEFAULT(loadedBytes_, 0L) };
    inline CacheLoadTaskInfo& setLoadedBytes(int64_t loadedBytes) { DARABONBA_PTR_SET_VALUE(loadedBytes_, loadedBytes) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CacheLoadTaskInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline int64_t getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, 0L) };
    inline CacheLoadTaskInfo& setStartedAt(int64_t startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CacheLoadTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline CacheLoadTaskInfo& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CacheLoadTaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskUpdatedAt Field Functions 
    bool hasTaskUpdatedAt() const { return this->taskUpdatedAt_ != nullptr;};
    void deleteTaskUpdatedAt() { this->taskUpdatedAt_ = nullptr;};
    inline int64_t getTaskUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(taskUpdatedAt_, 0L) };
    inline CacheLoadTaskInfo& setTaskUpdatedAt(int64_t taskUpdatedAt) { DARABONBA_PTR_SET_VALUE(taskUpdatedAt_, taskUpdatedAt) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline CacheLoadTaskInfo& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // totalFiles Field Functions 
    bool hasTotalFiles() const { return this->totalFiles_ != nullptr;};
    void deleteTotalFiles() { this->totalFiles_ = nullptr;};
    inline int64_t getTotalFiles() const { DARABONBA_PTR_GET_DEFAULT(totalFiles_, 0L) };
    inline CacheLoadTaskInfo& setTotalFiles(int64_t totalFiles) { DARABONBA_PTR_SET_VALUE(totalFiles_, totalFiles) };


  protected:
    // The data catalog ID.
    shared_ptr<string> catalogId_ {};
    // The number of files with completed cache loading.
    shared_ptr<int64_t> completedFiles_ {};
    // The database name.
    shared_ptr<string> database_ {};
    // The number of enumerated files.
    shared_ptr<int64_t> enumeratedFiles_ {};
    // The file enumeration completion status.
    shared_ptr<bool> enumerationDone_ {};
    // The additional parameters.
    shared_ptr<map<string, string>> extraOptions_ {};
    // The number of files with failed cache loading.
    shared_ptr<int64_t> failedFiles_ {};
    // The most recent error message, which is empty when the status is normal.
    shared_ptr<string> lastError_ {};
    // The number of bytes loaded into the cache.
    shared_ptr<int64_t> loadedBytes_ {};
    // The storage location.
    shared_ptr<string> path_ {};
    // The start time of the task execution, in milliseconds.
    shared_ptr<int64_t> startedAt_ {};
    // The task execution status.
    shared_ptr<string> status_ {};
    // The table name.
    shared_ptr<string> table_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The task update time, in milliseconds.
    shared_ptr<int64_t> taskUpdatedAt_ {};
    // The total number of bytes.
    shared_ptr<int64_t> totalBytes_ {};
    // The total number of files.
    shared_ptr<int64_t> totalFiles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
