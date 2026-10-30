// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGPUCLUSTERLISTALARMRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGPUCLUSTERLISTALARMRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetGpuClusterListAlarmRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGpuClusterListAlarmRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alarmCluster, alarmCluster_);
      DARABONBA_PTR_TO_JSON(alarmExtInfo, alarmExtInfo_);
      DARABONBA_PTR_TO_JSON(alarmTask, alarmTask_);
      DARABONBA_PTR_TO_JSON(alarmTime, alarmTime_);
      DARABONBA_PTR_TO_JSON(alarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGpuClusterListAlarmRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alarmCluster, alarmCluster_);
      DARABONBA_PTR_FROM_JSON(alarmExtInfo, alarmExtInfo_);
      DARABONBA_PTR_FROM_JSON(alarmTask, alarmTask_);
      DARABONBA_PTR_FROM_JSON(alarmTime, alarmTime_);
      DARABONBA_PTR_FROM_JSON(alarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetGpuClusterListAlarmRecordRequest() = default ;
    GetGpuClusterListAlarmRecordRequest(const GetGpuClusterListAlarmRecordRequest &) = default ;
    GetGpuClusterListAlarmRecordRequest(GetGpuClusterListAlarmRecordRequest &&) = default ;
    GetGpuClusterListAlarmRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGpuClusterListAlarmRecordRequest() = default ;
    GetGpuClusterListAlarmRecordRequest& operator=(const GetGpuClusterListAlarmRecordRequest &) = default ;
    GetGpuClusterListAlarmRecordRequest& operator=(GetGpuClusterListAlarmRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCluster_ == nullptr
        && this->alarmExtInfo_ == nullptr && this->alarmTask_ == nullptr && this->alarmTime_ == nullptr && this->alarmType_ == nullptr && this->current_ == nullptr
        && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // alarmCluster Field Functions 
    bool hasAlarmCluster() const { return this->alarmCluster_ != nullptr;};
    void deleteAlarmCluster() { this->alarmCluster_ = nullptr;};
    inline string getAlarmCluster() const { DARABONBA_PTR_GET_DEFAULT(alarmCluster_, "") };
    inline GetGpuClusterListAlarmRecordRequest& setAlarmCluster(string alarmCluster) { DARABONBA_PTR_SET_VALUE(alarmCluster_, alarmCluster) };


    // alarmExtInfo Field Functions 
    bool hasAlarmExtInfo() const { return this->alarmExtInfo_ != nullptr;};
    void deleteAlarmExtInfo() { this->alarmExtInfo_ = nullptr;};
    inline string getAlarmExtInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmExtInfo_, "") };
    inline GetGpuClusterListAlarmRecordRequest& setAlarmExtInfo(string alarmExtInfo) { DARABONBA_PTR_SET_VALUE(alarmExtInfo_, alarmExtInfo) };


    // alarmTask Field Functions 
    bool hasAlarmTask() const { return this->alarmTask_ != nullptr;};
    void deleteAlarmTask() { this->alarmTask_ = nullptr;};
    inline string getAlarmTask() const { DARABONBA_PTR_GET_DEFAULT(alarmTask_, "") };
    inline GetGpuClusterListAlarmRecordRequest& setAlarmTask(string alarmTask) { DARABONBA_PTR_SET_VALUE(alarmTask_, alarmTask) };


    // alarmTime Field Functions 
    bool hasAlarmTime() const { return this->alarmTime_ != nullptr;};
    void deleteAlarmTime() { this->alarmTime_ = nullptr;};
    inline string getAlarmTime() const { DARABONBA_PTR_GET_DEFAULT(alarmTime_, "") };
    inline GetGpuClusterListAlarmRecordRequest& setAlarmTime(string alarmTime) { DARABONBA_PTR_SET_VALUE(alarmTime_, alarmTime) };


    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
    inline GetGpuClusterListAlarmRecordRequest& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline GetGpuClusterListAlarmRecordRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetGpuClusterListAlarmRecordRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGpuClusterListAlarmRecordRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cluster to query. Specify a cluster, such as "cluster1". To query multiple clusters, separate them with commas, such as "cluster1,cluster2,cluster3".
    shared_ptr<string> alarmCluster_ {};
    // The instance ID or container used to filter anomalies.
    shared_ptr<string> alarmExtInfo_ {};
    // The task to query. Specify a task, such as "task1". To query multiple tasks, separate them with commas, such as "task1,task2,task3".
    shared_ptr<string> alarmTask_ {};
    // The specific time or time range to query. Specify a specific time, such as "2025-08-22 18:16:25". To specify a time range, use the "start,end" format, such as "2025-08-22 18:16:25,2025-08-23 18:16:25".
    shared_ptr<string> alarmTime_ {};
    // The anomaly type used to filter results, such as GPU memory access out of bounds or task hang.
    shared_ptr<string> alarmType_ {};
    // The current page number for pagination.
    // 
    // This parameter is required.
    shared_ptr<int64_t> current_ {};
    // The number of entries per page for pagination.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The task status used to filter results. Valid values: blocking, running, exited, and restart.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
