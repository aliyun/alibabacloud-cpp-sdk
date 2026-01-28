// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAlarmEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmChannel, alarmChannel_);
      DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmChannel, alarmChannel_);
      DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAlarmEventRequest() = default ;
    ListAlarmEventRequest(const ListAlarmEventRequest &) = default ;
    ListAlarmEventRequest(ListAlarmEventRequest &&) = default ;
    ListAlarmEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmEventRequest() = default ;
    ListAlarmEventRequest& operator=(const ListAlarmEventRequest &) = default ;
    ListAlarmEventRequest& operator=(ListAlarmEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmChannel_ == nullptr
        && this->alarmStatus_ == nullptr && this->alarmType_ == nullptr && this->appName_ == nullptr && this->clusterId_ == nullptr && this->endTime_ == nullptr
        && this->jobName_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->reverse_ == nullptr && this->startTime_ == nullptr; };
    // alarmChannel Field Functions 
    bool hasAlarmChannel() const { return this->alarmChannel_ != nullptr;};
    void deleteAlarmChannel() { this->alarmChannel_ = nullptr;};
    inline string getAlarmChannel() const { DARABONBA_PTR_GET_DEFAULT(alarmChannel_, "") };
    inline ListAlarmEventRequest& setAlarmChannel(string alarmChannel) { DARABONBA_PTR_SET_VALUE(alarmChannel_, alarmChannel) };


    // alarmStatus Field Functions 
    bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
    void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
    inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
    inline ListAlarmEventRequest& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
    inline ListAlarmEventRequest& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAlarmEventRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListAlarmEventRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAlarmEventRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListAlarmEventRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline ListAlarmEventRequest& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAlarmEventRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListAlarmEventRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAlarmEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> alarmChannel_ {};
    shared_ptr<string> alarmStatus_ {};
    shared_ptr<string> alarmType_ {};
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> jobName_ {};
    shared_ptr<string> pageNum_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<bool> reverse_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
