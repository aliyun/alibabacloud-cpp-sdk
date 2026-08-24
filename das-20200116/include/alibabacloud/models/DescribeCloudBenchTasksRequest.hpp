// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDBENCHTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCloudBenchTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudBenchTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudBenchTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeCloudBenchTasksRequest() = default ;
    DescribeCloudBenchTasksRequest(const DescribeCloudBenchTasksRequest &) = default ;
    DescribeCloudBenchTasksRequest(DescribeCloudBenchTasksRequest &&) = default ;
    DescribeCloudBenchTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudBenchTasksRequest() = default ;
    DescribeCloudBenchTasksRequest& operator=(const DescribeCloudBenchTasksRequest &) = default ;
    DescribeCloudBenchTasksRequest& operator=(DescribeCloudBenchTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskType_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCloudBenchTasksRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline DescribeCloudBenchTasksRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeCloudBenchTasksRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCloudBenchTasksRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudBenchTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeCloudBenchTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The end time of the query task. Specify the value as a UNIX timestamp. Unit: milliseconds.
    // >The end time of the query task must be later than the start time.
    shared_ptr<string> endTime_ {};
    // The page number. The value must be greater than 0 and cannot exceed the maximum value of the Integer data type. Default value: 1.
    shared_ptr<string> pageNo_ {};
    // The maximum number of records per page. The value must be greater than 0 and cannot exceed the maximum value of the Integer data type. Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The start time of the query task. Specify the value as a UNIX timestamp. Unit: milliseconds.
    shared_ptr<string> startTime_ {};
    // The running status of the task. Valid values:
    // 
    // - **SUCCESS**: Successful.
    // - **IGNORED**: Ignored.
    // - **RUNNING**: Running.
    // - **EXCEPTION**: Exception.
    shared_ptr<string> status_ {};
    // The type of the stress testing task. Valid values:
    // - **pressure test** (default): intelligent stress testing. Traffic captured from the target instance is replayed on the destination instance at the maximum speed supported by the destination instance specifications.
    // - **smart pressure test**: generated stress testing. By analyzing and learning from traffic captured from the target instance within a short period, traffic that is consistent with the business model and traffic distribution of the original traffic is generated for continuous stress testing. This reduces the time required to collect data from the target instance and lowers storage costs and performance overhead.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
