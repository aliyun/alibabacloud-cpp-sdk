// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusCodes, statusCodes_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusCodes, statusCodes_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
    };
    ListOperationProcessRequest() = default ;
    ListOperationProcessRequest(const ListOperationProcessRequest &) = default ;
    ListOperationProcessRequest(ListOperationProcessRequest &&) = default ;
    ListOperationProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessRequest() = default ;
    ListOperationProcessRequest& operator=(const ListOperationProcessRequest &) = default ;
    ListOperationProcessRequest& operator=(ListOperationProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->startTime_ == nullptr && return this->statusCodes_ == nullptr && return this->taskIds_ == nullptr
        && return this->taskSources_ == nullptr && return this->taskTypes_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListOperationProcessRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListOperationProcessRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOperationProcessRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListOperationProcessRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusCodes Field Functions 
    bool hasStatusCodes() const { return this->statusCodes_ != nullptr;};
    void deleteStatusCodes() { this->statusCodes_ = nullptr;};
    inline const vector<int32_t> & statusCodes() const { DARABONBA_PTR_GET_CONST(statusCodes_, vector<int32_t>) };
    inline vector<int32_t> statusCodes() { DARABONBA_PTR_GET(statusCodes_, vector<int32_t>) };
    inline ListOperationProcessRequest& setStatusCodes(const vector<int32_t> & statusCodes) { DARABONBA_PTR_SET_VALUE(statusCodes_, statusCodes) };
    inline ListOperationProcessRequest& setStatusCodes(vector<int32_t> && statusCodes) { DARABONBA_PTR_SET_RVALUE(statusCodes_, statusCodes) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ListOperationProcessRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListOperationProcessRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & taskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> taskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline ListOperationProcessRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline ListOperationProcessRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


    // taskTypes Field Functions 
    bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
    void deleteTaskTypes() { this->taskTypes_ = nullptr;};
    inline const vector<string> & taskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<string>) };
    inline vector<string> taskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<string>) };
    inline ListOperationProcessRequest& setTaskTypes(const vector<string> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
    inline ListOperationProcessRequest& setTaskTypes(vector<string> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The task status codes.
    std::shared_ptr<vector<int32_t>> statusCodes_ = nullptr;
    // The task IDs.
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
    std::shared_ptr<vector<string>> taskSources_ = nullptr;
    // The task types. Valid values:
    // 
    // *   CHECK_ALL: full check.
    // *   CHECK_POLICY: policy-based check for which check items are configured.
    // *   CHECK_SCHEDULE: scheduled check.
    // *   CHECK_ITEM: specific check item-based check.
    // *   CHECK_INSTANCE: specific check item-based check on specific instances.
    std::shared_ptr<vector<string>> taskTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
