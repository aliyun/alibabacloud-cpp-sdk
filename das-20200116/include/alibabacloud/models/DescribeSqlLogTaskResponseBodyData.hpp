// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSqlLogTaskResponseBodyDataFilters.hpp>
#include <alibabacloud/models/DescribeSqlLogTaskResponseBodyDataQueries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Export, export_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Queries, queries_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Export, export_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Queries, queries_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeSqlLogTaskResponseBodyData() = default ;
    DescribeSqlLogTaskResponseBodyData(const DescribeSqlLogTaskResponseBodyData &) = default ;
    DescribeSqlLogTaskResponseBodyData(DescribeSqlLogTaskResponseBodyData &&) = default ;
    DescribeSqlLogTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogTaskResponseBodyData() = default ;
    DescribeSqlLogTaskResponseBodyData& operator=(const DescribeSqlLogTaskResponseBodyData &) = default ;
    DescribeSqlLogTaskResponseBodyData& operator=(DescribeSqlLogTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->end_ != nullptr && this->expire_ != nullptr && this->export_ != nullptr && this->filters_ != nullptr && this->name_ != nullptr
        && this->queries_ != nullptr && this->start_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr
        && this->total_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSqlLogTaskResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline DescribeSqlLogTaskResponseBodyData& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline bool expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, false) };
    inline DescribeSqlLogTaskResponseBodyData& setExpire(bool expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // export Field Functions 
    bool hasExport() const { return this->export_ != nullptr;};
    void deleteExport() { this->export_ = nullptr;};
    inline string _export() const { DARABONBA_PTR_GET_DEFAULT(export_, "") };
    inline DescribeSqlLogTaskResponseBodyData& setExport(string _export) { DARABONBA_PTR_SET_VALUE(export_, _export) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::DescribeSqlLogTaskResponseBodyDataFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::DescribeSqlLogTaskResponseBodyDataFilters>) };
    inline vector<Models::DescribeSqlLogTaskResponseBodyDataFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::DescribeSqlLogTaskResponseBodyDataFilters>) };
    inline DescribeSqlLogTaskResponseBodyData& setFilters(const vector<Models::DescribeSqlLogTaskResponseBodyDataFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeSqlLogTaskResponseBodyData& setFilters(vector<Models::DescribeSqlLogTaskResponseBodyDataFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSqlLogTaskResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<Models::DescribeSqlLogTaskResponseBodyDataQueries> & queries() const { DARABONBA_PTR_GET_CONST(queries_, vector<Models::DescribeSqlLogTaskResponseBodyDataQueries>) };
    inline vector<Models::DescribeSqlLogTaskResponseBodyDataQueries> queries() { DARABONBA_PTR_GET(queries_, vector<Models::DescribeSqlLogTaskResponseBodyDataQueries>) };
    inline DescribeSqlLogTaskResponseBodyData& setQueries(const vector<Models::DescribeSqlLogTaskResponseBodyDataQueries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline DescribeSqlLogTaskResponseBodyData& setQueries(vector<Models::DescribeSqlLogTaskResponseBodyDataQueries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline DescribeSqlLogTaskResponseBodyData& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSqlLogTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSqlLogTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeSqlLogTaskResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeSqlLogTaskResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The time when the task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The end of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> end_ = nullptr;
    // Indicates whether the task has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> expire_ = nullptr;
    // The download URL of the export task.
    std::shared_ptr<string> export_ = nullptr;
    // The filter parameters.
    std::shared_ptr<vector<Models::DescribeSqlLogTaskResponseBodyDataFilters>> filters_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The results of the offline querying task.
    std::shared_ptr<vector<Models::DescribeSqlLogTaskResponseBodyDataQueries>> queries_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> start_ = nullptr;
    // The task state. Valid values:
    // 
    // *   **INIT**: The task is to be scheduled.
    // *   **RUNNING**: The task is running.
    // *   **FAILED**: The task failed.
    // *   **CANCELED**: The task is canceled.
    // *   **COMPLETED**: The task is complete.
    // 
    // >  If a task is in the **COMPLETED** state, you can view the results of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **Export**
    // *   **Query**
    std::shared_ptr<string> taskType_ = nullptr;
    // The total number of tasks.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
