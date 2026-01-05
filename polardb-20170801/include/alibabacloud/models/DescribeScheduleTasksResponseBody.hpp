// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeScheduleTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScheduleTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScheduleTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeScheduleTasksResponseBody() = default ;
    DescribeScheduleTasksResponseBody(const DescribeScheduleTasksResponseBody &) = default ;
    DescribeScheduleTasksResponseBody(DescribeScheduleTasksResponseBody &&) = default ;
    DescribeScheduleTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScheduleTasksResponseBody() = default ;
    DescribeScheduleTasksResponseBody& operator=(const DescribeScheduleTasksResponseBody &) = default ;
    DescribeScheduleTasksResponseBody& operator=(DescribeScheduleTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TimerInfos, timerInfos_);
        DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TimerInfos, timerInfos_);
        DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimerInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimerInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(CrontabJobId, crontabJobId_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DbClusterDescription, dbClusterDescription_);
          DARABONBA_PTR_TO_JSON(DbClusterStatus, dbClusterStatus_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
          DARABONBA_PTR_TO_JSON(PlannedFlashingOffTime, plannedFlashingOffTime_);
          DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
          DARABONBA_PTR_TO_JSON(PlannedTime, plannedTime_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskCancel, taskCancel_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, TimerInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(CrontabJobId, crontabJobId_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DbClusterDescription, dbClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DbClusterStatus, dbClusterStatus_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
          DARABONBA_PTR_FROM_JSON(PlannedFlashingOffTime, plannedFlashingOffTime_);
          DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
          DARABONBA_PTR_FROM_JSON(PlannedTime, plannedTime_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskCancel, taskCancel_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        TimerInfos() = default ;
        TimerInfos(const TimerInfos &) = default ;
        TimerInfos(TimerInfos &&) = default ;
        TimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimerInfos() = default ;
        TimerInfos& operator=(const TimerInfos &) = default ;
        TimerInfos& operator=(TimerInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->crontabJobId_ == nullptr && this->DBClusterId_ == nullptr && this->dbClusterDescription_ == nullptr && this->dbClusterStatus_ == nullptr && this->orderId_ == nullptr
        && this->plannedEndTime_ == nullptr && this->plannedFlashingOffTime_ == nullptr && this->plannedStartTime_ == nullptr && this->plannedTime_ == nullptr && this->region_ == nullptr
        && this->status_ == nullptr && this->taskCancel_ == nullptr && this->taskId_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline TimerInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // crontabJobId Field Functions 
        bool hasCrontabJobId() const { return this->crontabJobId_ != nullptr;};
        void deleteCrontabJobId() { this->crontabJobId_ = nullptr;};
        inline string getCrontabJobId() const { DARABONBA_PTR_GET_DEFAULT(crontabJobId_, "") };
        inline TimerInfos& setCrontabJobId(string crontabJobId) { DARABONBA_PTR_SET_VALUE(crontabJobId_, crontabJobId) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline TimerInfos& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // dbClusterDescription Field Functions 
        bool hasDbClusterDescription() const { return this->dbClusterDescription_ != nullptr;};
        void deleteDbClusterDescription() { this->dbClusterDescription_ = nullptr;};
        inline string getDbClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(dbClusterDescription_, "") };
        inline TimerInfos& setDbClusterDescription(string dbClusterDescription) { DARABONBA_PTR_SET_VALUE(dbClusterDescription_, dbClusterDescription) };


        // dbClusterStatus Field Functions 
        bool hasDbClusterStatus() const { return this->dbClusterStatus_ != nullptr;};
        void deleteDbClusterStatus() { this->dbClusterStatus_ = nullptr;};
        inline string getDbClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(dbClusterStatus_, "") };
        inline TimerInfos& setDbClusterStatus(string dbClusterStatus) { DARABONBA_PTR_SET_VALUE(dbClusterStatus_, dbClusterStatus) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline TimerInfos& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // plannedEndTime Field Functions 
        bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
        void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
        inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
        inline TimerInfos& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


        // plannedFlashingOffTime Field Functions 
        bool hasPlannedFlashingOffTime() const { return this->plannedFlashingOffTime_ != nullptr;};
        void deletePlannedFlashingOffTime() { this->plannedFlashingOffTime_ = nullptr;};
        inline string getPlannedFlashingOffTime() const { DARABONBA_PTR_GET_DEFAULT(plannedFlashingOffTime_, "") };
        inline TimerInfos& setPlannedFlashingOffTime(string plannedFlashingOffTime) { DARABONBA_PTR_SET_VALUE(plannedFlashingOffTime_, plannedFlashingOffTime) };


        // plannedStartTime Field Functions 
        bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
        void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
        inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
        inline TimerInfos& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


        // plannedTime Field Functions 
        bool hasPlannedTime() const { return this->plannedTime_ != nullptr;};
        void deletePlannedTime() { this->plannedTime_ = nullptr;};
        inline string getPlannedTime() const { DARABONBA_PTR_GET_DEFAULT(plannedTime_, "") };
        inline TimerInfos& setPlannedTime(string plannedTime) { DARABONBA_PTR_SET_VALUE(plannedTime_, plannedTime) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline TimerInfos& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TimerInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskCancel Field Functions 
        bool hasTaskCancel() const { return this->taskCancel_ != nullptr;};
        void deleteTaskCancel() { this->taskCancel_ = nullptr;};
        inline bool getTaskCancel() const { DARABONBA_PTR_GET_DEFAULT(taskCancel_, false) };
        inline TimerInfos& setTaskCancel(bool taskCancel) { DARABONBA_PTR_SET_VALUE(taskCancel_, taskCancel) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline TimerInfos& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The type of the scheduled tasks.
        shared_ptr<string> action_ {};
        // The ID of the scheduled task.
        shared_ptr<string> crontabJobId_ {};
        // The cluster ID.
        shared_ptr<string> DBClusterId_ {};
        // The description of the cluster.
        shared_ptr<string> dbClusterDescription_ {};
        // The state of the cluster.
        shared_ptr<string> dbClusterStatus_ {};
        // The ID of the order.
        // 
        // >  This parameter is returned only when you set the `Action` parameter to **CreateDBNodes** or **ModifyDBNodeClass**.
        shared_ptr<string> orderId_ {};
        // The latest start time of the task that you specified when you created the scheduled task. The time is displayed in UTC.
        shared_ptr<string> plannedEndTime_ {};
        shared_ptr<string> plannedFlashingOffTime_ {};
        // The earliest start time of the task that you specified when you created the scheduled task. The time is displayed in UTC.
        shared_ptr<string> plannedStartTime_ {};
        // The expected start time of the task. The time is displayed in UTC.
        shared_ptr<string> plannedTime_ {};
        // The ID of the region in which the scheduled task runs.
        shared_ptr<string> region_ {};
        // The state of the scheduled task.
        shared_ptr<string> status_ {};
        // Indicates whether the scheduled task can be canceled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> taskCancel_ {};
        // The ID of the task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->timerInfos_ == nullptr && this->totalRecordCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // timerInfos Field Functions 
      bool hasTimerInfos() const { return this->timerInfos_ != nullptr;};
      void deleteTimerInfos() { this->timerInfos_ = nullptr;};
      inline const vector<Data::TimerInfos> & getTimerInfos() const { DARABONBA_PTR_GET_CONST(timerInfos_, vector<Data::TimerInfos>) };
      inline vector<Data::TimerInfos> getTimerInfos() { DARABONBA_PTR_GET(timerInfos_, vector<Data::TimerInfos>) };
      inline Data& setTimerInfos(const vector<Data::TimerInfos> & timerInfos) { DARABONBA_PTR_SET_VALUE(timerInfos_, timerInfos) };
      inline Data& setTimerInfos(vector<Data::TimerInfos> && timerInfos) { DARABONBA_PTR_SET_RVALUE(timerInfos_, timerInfos) };


      // totalRecordCount Field Functions 
      bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
      void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
      inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
      inline Data& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


    protected:
      // The page number of the page returned.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The details of the scheduled tasks.
      shared_ptr<vector<Data::TimerInfos>> timerInfos_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalRecordCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeScheduleTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeScheduleTasksResponseBody::Data) };
    inline DescribeScheduleTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeScheduleTasksResponseBody::Data) };
    inline DescribeScheduleTasksResponseBody& setData(const DescribeScheduleTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeScheduleTasksResponseBody& setData(DescribeScheduleTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScheduleTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScheduleTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeScheduleTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result data.
    shared_ptr<DescribeScheduleTasksResponseBody::Data> data_ {};
    // The message that is returned for the request.
    // 
    // >  If the request is successful, **Successful** is returned. If the request fails, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
