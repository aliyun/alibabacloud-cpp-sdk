// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupHistories, autoProvisioningGroupHistories_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupHistories, autoProvisioningGroupHistories_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoProvisioningGroupHistoryResponseBody() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(const DescribeAutoProvisioningGroupHistoryResponseBody &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(DescribeAutoProvisioningGroupHistoryResponseBody &&) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupHistoryResponseBody() = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody& operator=(const DescribeAutoProvisioningGroupHistoryResponseBody &) = default ;
    DescribeAutoProvisioningGroupHistoryResponseBody& operator=(DescribeAutoProvisioningGroupHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoProvisioningGroupHistories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoProvisioningGroupHistories& obj) { 
        DARABONBA_PTR_TO_JSON(AutoProvisioningGroupHistory, autoProvisioningGroupHistory_);
      };
      friend void from_json(const Darabonba::Json& j, AutoProvisioningGroupHistories& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupHistory, autoProvisioningGroupHistory_);
      };
      AutoProvisioningGroupHistories() = default ;
      AutoProvisioningGroupHistories(const AutoProvisioningGroupHistories &) = default ;
      AutoProvisioningGroupHistories(AutoProvisioningGroupHistories &&) = default ;
      AutoProvisioningGroupHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoProvisioningGroupHistories() = default ;
      AutoProvisioningGroupHistories& operator=(const AutoProvisioningGroupHistories &) = default ;
      AutoProvisioningGroupHistories& operator=(AutoProvisioningGroupHistories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoProvisioningGroupHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoProvisioningGroupHistory& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityDetails, activityDetails_);
          DARABONBA_PTR_TO_JSON(LastEventTime, lastEventTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, AutoProvisioningGroupHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityDetails, activityDetails_);
          DARABONBA_PTR_FROM_JSON(LastEventTime, lastEventTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        AutoProvisioningGroupHistory() = default ;
        AutoProvisioningGroupHistory(const AutoProvisioningGroupHistory &) = default ;
        AutoProvisioningGroupHistory(AutoProvisioningGroupHistory &&) = default ;
        AutoProvisioningGroupHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoProvisioningGroupHistory() = default ;
        AutoProvisioningGroupHistory& operator=(const AutoProvisioningGroupHistory &) = default ;
        AutoProvisioningGroupHistory& operator=(AutoProvisioningGroupHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ActivityDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActivityDetails& obj) { 
            DARABONBA_PTR_TO_JSON(ActivityDetail, activityDetail_);
          };
          friend void from_json(const Darabonba::Json& j, ActivityDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(ActivityDetail, activityDetail_);
          };
          ActivityDetails() = default ;
          ActivityDetails(const ActivityDetails &) = default ;
          ActivityDetails(ActivityDetails &&) = default ;
          ActivityDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActivityDetails() = default ;
          ActivityDetails& operator=(const ActivityDetails &) = default ;
          ActivityDetails& operator=(ActivityDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ActivityDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ActivityDetail& obj) { 
              DARABONBA_PTR_TO_JSON(Detail, detail_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, ActivityDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(Detail, detail_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            ActivityDetail() = default ;
            ActivityDetail(const ActivityDetail &) = default ;
            ActivityDetail(ActivityDetail &&) = default ;
            ActivityDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ActivityDetail() = default ;
            ActivityDetail& operator=(const ActivityDetail &) = default ;
            ActivityDetail& operator=(ActivityDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->detail_ == nullptr
        && this->status_ == nullptr; };
            // detail Field Functions 
            bool hasDetail() const { return this->detail_ != nullptr;};
            void deleteDetail() { this->detail_ = nullptr;};
            inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
            inline ActivityDetail& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline ActivityDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The execution details of instance creation performed by the single scheduling task.
            shared_ptr<string> detail_ {};
            // The execution status of instance creation performed by the single scheduling task. Valid values:
            // 
            // *   Successful: Instances are created.
            // *   Failed: Instances failed to be created.
            // *   InProgress: Instances are being created.
            // *   Warning: Some instances are created.
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->activityDetail_ == nullptr; };
          // activityDetail Field Functions 
          bool hasActivityDetail() const { return this->activityDetail_ != nullptr;};
          void deleteActivityDetail() { this->activityDetail_ = nullptr;};
          inline const vector<ActivityDetails::ActivityDetail> & getActivityDetail() const { DARABONBA_PTR_GET_CONST(activityDetail_, vector<ActivityDetails::ActivityDetail>) };
          inline vector<ActivityDetails::ActivityDetail> getActivityDetail() { DARABONBA_PTR_GET(activityDetail_, vector<ActivityDetails::ActivityDetail>) };
          inline ActivityDetails& setActivityDetail(const vector<ActivityDetails::ActivityDetail> & activityDetail) { DARABONBA_PTR_SET_VALUE(activityDetail_, activityDetail) };
          inline ActivityDetails& setActivityDetail(vector<ActivityDetails::ActivityDetail> && activityDetail) { DARABONBA_PTR_SET_RVALUE(activityDetail_, activityDetail) };


        protected:
          shared_ptr<vector<ActivityDetails::ActivityDetail>> activityDetail_ {};
        };

        virtual bool empty() const override { return this->activityDetails_ == nullptr
        && this->lastEventTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
        // activityDetails Field Functions 
        bool hasActivityDetails() const { return this->activityDetails_ != nullptr;};
        void deleteActivityDetails() { this->activityDetails_ = nullptr;};
        inline const AutoProvisioningGroupHistory::ActivityDetails & getActivityDetails() const { DARABONBA_PTR_GET_CONST(activityDetails_, AutoProvisioningGroupHistory::ActivityDetails) };
        inline AutoProvisioningGroupHistory::ActivityDetails getActivityDetails() { DARABONBA_PTR_GET(activityDetails_, AutoProvisioningGroupHistory::ActivityDetails) };
        inline AutoProvisioningGroupHistory& setActivityDetails(const AutoProvisioningGroupHistory::ActivityDetails & activityDetails) { DARABONBA_PTR_SET_VALUE(activityDetails_, activityDetails) };
        inline AutoProvisioningGroupHistory& setActivityDetails(AutoProvisioningGroupHistory::ActivityDetails && activityDetails) { DARABONBA_PTR_SET_RVALUE(activityDetails_, activityDetails) };


        // lastEventTime Field Functions 
        bool hasLastEventTime() const { return this->lastEventTime_ != nullptr;};
        void deleteLastEventTime() { this->lastEventTime_ = nullptr;};
        inline string getLastEventTime() const { DARABONBA_PTR_GET_DEFAULT(lastEventTime_, "") };
        inline AutoProvisioningGroupHistory& setLastEventTime(string lastEventTime) { DARABONBA_PTR_SET_VALUE(lastEventTime_, lastEventTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline AutoProvisioningGroupHistory& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AutoProvisioningGroupHistory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline AutoProvisioningGroupHistory& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // An array consisting of ActivityDetail data.
        shared_ptr<AutoProvisioningGroupHistory::ActivityDetails> activityDetails_ {};
        // The execution time of the last instance creation performed by the single scheduling task.
        shared_ptr<string> lastEventTime_ {};
        // The start time of executing the single scheduling task.
        shared_ptr<string> startTime_ {};
        // The execution status of the single scheduling task. Valid values:
        // 
        // *   prepare: The scheduling task is being executed.
        // *   success: The scheduling task is executed.
        // *   failed: The scheduling task failed to be executed.
        shared_ptr<string> status_ {};
        // The ID of the scheduling task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->autoProvisioningGroupHistory_ == nullptr; };
      // autoProvisioningGroupHistory Field Functions 
      bool hasAutoProvisioningGroupHistory() const { return this->autoProvisioningGroupHistory_ != nullptr;};
      void deleteAutoProvisioningGroupHistory() { this->autoProvisioningGroupHistory_ = nullptr;};
      inline const vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> & getAutoProvisioningGroupHistory() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupHistory_, vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory>) };
      inline vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> getAutoProvisioningGroupHistory() { DARABONBA_PTR_GET(autoProvisioningGroupHistory_, vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory>) };
      inline AutoProvisioningGroupHistories& setAutoProvisioningGroupHistory(const vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> & autoProvisioningGroupHistory) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupHistory_, autoProvisioningGroupHistory) };
      inline AutoProvisioningGroupHistories& setAutoProvisioningGroupHistory(vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory> && autoProvisioningGroupHistory) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupHistory_, autoProvisioningGroupHistory) };


    protected:
      shared_ptr<vector<AutoProvisioningGroupHistories::AutoProvisioningGroupHistory>> autoProvisioningGroupHistory_ {};
    };

    virtual bool empty() const override { return this->autoProvisioningGroupHistories_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoProvisioningGroupHistories Field Functions 
    bool hasAutoProvisioningGroupHistories() const { return this->autoProvisioningGroupHistories_ != nullptr;};
    void deleteAutoProvisioningGroupHistories() { this->autoProvisioningGroupHistories_ = nullptr;};
    inline const DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories & getAutoProvisioningGroupHistories() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupHistories_, DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories getAutoProvisioningGroupHistories() { DARABONBA_PTR_GET(autoProvisioningGroupHistories_, DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setAutoProvisioningGroupHistories(const DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories & autoProvisioningGroupHistories) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupHistories_, autoProvisioningGroupHistories) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setAutoProvisioningGroupHistories(DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories && autoProvisioningGroupHistories) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupHistories_, autoProvisioningGroupHistories) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoProvisioningGroupHistoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array consisting of AutoProvisioningGroupHistory data.
    shared_ptr<DescribeAutoProvisioningGroupHistoryResponseBody::AutoProvisioningGroupHistories> autoProvisioningGroupHistories_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of queried scheduling tasks in the auto provisioning group.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
