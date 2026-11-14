// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeExportTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeExportTasksRequest() = default ;
    DescribeExportTasksRequest(const DescribeExportTasksRequest &) = default ;
    DescribeExportTasksRequest(DescribeExportTasksRequest &&) = default ;
    DescribeExportTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportTasksRequest() = default ;
    DescribeExportTasksRequest& operator=(const DescribeExportTasksRequest &) = default ;
    DescribeExportTasksRequest& operator=(DescribeExportTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExportTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExportTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeExportTasksRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeExportTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The page number for a paged query. Pages start from 1. If this parameter is not specified or is set to a value less than 1, the first page is returned. The query results are sorted in descending order of task creation time, with the most recently created tasks listed first. When polling a single task by TaskId, explicitly set this parameter to 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of tasks to return per page. If this parameter is not specified, the default value 200 is used. If a value less than 1 is specified, 10 is used. When polling a single task by TaskId, set this parameter to 1 to avoid returning redundant tasks.
    shared_ptr<int32_t> pageSize_ {};
    // Filters tasks by export task ID. The value is the TaskId returned by CreateExportTask, which is a 32-character UUID string without hyphens. This parameter requires an exact match and does not support fuzzy queries. If this parameter is not specified, all tasks under the current account that meet other conditions are returned.
    shared_ptr<string> taskId_ {};
    // Filters tasks by export task type. The value is case-sensitive and must be one of the following enumerated values:
    // - WUYING_SERVER_LIST: Wuying host list.
    // - USER_USAGE_REPORT: User usage report.
    // - BROWSER_BOOKMARK_LIST: Cloud browser bookmark list.
    // - BROWSER_RESTRICTED_URL_LIST: Cloud browser URL whitelist.
    // 
    // If this parameter is not specified, tasks are not filtered by type, and all tasks under the current account that meet other conditions are returned. If an unrecognized value is specified, the server does not return a parameter error but cancels type filtering. Therefore, you must specify one of the exact enumerated values above. When querying a single task by TaskId, omit this parameter.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
