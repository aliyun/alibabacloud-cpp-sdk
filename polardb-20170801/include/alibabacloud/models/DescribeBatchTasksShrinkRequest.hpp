// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBatchTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, statusShrink_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, statusShrink_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeBatchTasksShrinkRequest() = default ;
    DescribeBatchTasksShrinkRequest(const DescribeBatchTasksShrinkRequest &) = default ;
    DescribeBatchTasksShrinkRequest(DescribeBatchTasksShrinkRequest &&) = default ;
    DescribeBatchTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchTasksShrinkRequest() = default ;
    DescribeBatchTasksShrinkRequest& operator=(const DescribeBatchTasksShrinkRequest &) = default ;
    DescribeBatchTasksShrinkRequest& operator=(DescribeBatchTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr && this->statusShrink_ == nullptr && this->taskType_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBatchTasksShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBatchTasksShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBatchTasksShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBatchTasksShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string getStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline DescribeBatchTasksShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeBatchTasksShrinkRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The end time of the query range. Specify the time in UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> endTime_ {};
    // The page number. The value must be a positive integer. The default is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The start time of the query range. Specify the time in UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> startTime_ {};
    // The task statuses.
    // 
    // > If you omit this parameter, the operation returns tasks of all statuses.
    shared_ptr<string> statusShrink_ {};
    // The type of the batch task.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
