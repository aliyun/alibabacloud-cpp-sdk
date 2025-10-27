// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTimeQuery, endTimeQuery_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTimeQuery, startTimeQuery_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTimeQuery, endTimeQuery_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTimeQuery, startTimeQuery_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeOnceTaskRequest() = default ;
    DescribeOnceTaskRequest(const DescribeOnceTaskRequest &) = default ;
    DescribeOnceTaskRequest(DescribeOnceTaskRequest &&) = default ;
    DescribeOnceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskRequest() = default ;
    DescribeOnceTaskRequest& operator=(const DescribeOnceTaskRequest &) = default ;
    DescribeOnceTaskRequest& operator=(DescribeOnceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTimeQuery_ == nullptr && return this->pageSize_ == nullptr && return this->rootTaskId_ == nullptr && return this->source_ == nullptr && return this->startTimeQuery_ == nullptr
        && return this->taskId_ == nullptr && return this->taskType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOnceTaskRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTimeQuery Field Functions 
    bool hasEndTimeQuery() const { return this->endTimeQuery_ != nullptr;};
    void deleteEndTimeQuery() { this->endTimeQuery_ = nullptr;};
    inline int64_t endTimeQuery() const { DARABONBA_PTR_GET_DEFAULT(endTimeQuery_, 0L) };
    inline DescribeOnceTaskRequest& setEndTimeQuery(int64_t endTimeQuery) { DARABONBA_PTR_SET_VALUE(endTimeQuery_, endTimeQuery) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOnceTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string rootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline DescribeOnceTaskRequest& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeOnceTaskRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTimeQuery Field Functions 
    bool hasStartTimeQuery() const { return this->startTimeQuery_ != nullptr;};
    void deleteStartTimeQuery() { this->startTimeQuery_ = nullptr;};
    inline int64_t startTimeQuery() const { DARABONBA_PTR_GET_DEFAULT(startTimeQuery_, 0L) };
    inline DescribeOnceTaskRequest& setStartTimeQuery(int64_t startTimeQuery) { DARABONBA_PTR_SET_VALUE(startTimeQuery_, startTimeQuery) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeOnceTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeOnceTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The timestamp when the root task ends. Unit: milliseconds.
    std::shared_ptr<int64_t> endTimeQuery_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the root task.
    // 
    // > You must specify at least one of the **TaskType** and **RootTaskId** parameters.
    std::shared_ptr<string> rootTaskId_ = nullptr;
    // The source of the task. Valid values include the following values:
    // 
    // *   **schedule**: automatic scheduling of Cloud Security Scanner.
    // *   **console**: one-click detection in the Cloud Security Scanner console.
    std::shared_ptr<string> source_ = nullptr;
    // The timestamp when the root task starts. Unit: milliseconds.
    std::shared_ptr<int64_t> startTimeQuery_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **CLIENT_PROBLEM_CHECK**: a task of the Security Center agent
    // *   **CLIENT_DEV_OPS**: an O\\&M task of Cloud Assistant
    // *   **ASSET_SECURITY_CHECK**: a task of asset information collection
    // 
    // > You must specify at least one of the **TaskType** and **RootTaskId** parameters.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
