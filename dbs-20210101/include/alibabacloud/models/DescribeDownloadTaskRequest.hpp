// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeDownloadTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderDirect, orderDirect_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderDirect, orderDirect_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeDownloadTaskRequest() = default ;
    DescribeDownloadTaskRequest(const DescribeDownloadTaskRequest &) = default ;
    DescribeDownloadTaskRequest(DescribeDownloadTaskRequest &&) = default ;
    DescribeDownloadTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadTaskRequest() = default ;
    DescribeDownloadTaskRequest& operator=(const DescribeDownloadTaskRequest &) = default ;
    DescribeDownloadTaskRequest& operator=(DescribeDownloadTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && this->clusterName_ == nullptr && this->currentPage_ == nullptr && this->datasourceId_ == nullptr && this->endTime_ == nullptr && this->instanceName_ == nullptr
        && this->orderColumn_ == nullptr && this->orderDirect_ == nullptr && this->pageSize_ == nullptr && this->regionCode_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr && this->taskType_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeDownloadTaskRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeDownloadTaskRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeDownloadTaskRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline DescribeDownloadTaskRequest& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDownloadTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDownloadTaskRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline DescribeDownloadTaskRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderDirect Field Functions 
    bool hasOrderDirect() const { return this->orderDirect_ != nullptr;};
    void deleteOrderDirect() { this->orderDirect_ = nullptr;};
    inline string getOrderDirect() const { DARABONBA_PTR_GET_DEFAULT(orderDirect_, "") };
    inline DescribeDownloadTaskRequest& setOrderDirect(string orderDirect) { DARABONBA_PTR_SET_VALUE(orderDirect_, orderDirect) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDownloadTaskRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeDownloadTaskRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDownloadTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDownloadTaskRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeDownloadTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The ID of the backup set generated when you create a download task. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the ID.
    shared_ptr<string> backupSetId_ {};
    shared_ptr<string> clusterName_ {};
    // The page number of the page to return.
    shared_ptr<string> currentPage_ {};
    // The ID of the Database Backup (DBS) data source. Specify the parameter in the format of *ds-${Instance ID}_${regionId}*.
    shared_ptr<string> datasourceId_ {};
    // The end of the time range to query. Specify this parameter as a timestamp of the LONG type. Unit: milliseconds.
    shared_ptr<string> endTime_ {};
    // The ID of the instance.
    // 
    // > This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The column based on which the entries are sorted. By default, the entries are sorted by the time when the download task was created. Set the value to **gmt_create**.
    shared_ptr<string> orderColumn_ {};
    // The order in which you want to sort the entries. Valid values:
    // 
    // *   **asc**: the ascending order.
    // *   **desc**: the descending order. This is the default value.
    shared_ptr<string> orderDirect_ {};
    // The number of entries to return on each page.
    shared_ptr<string> pageSize_ {};
    // The ID of the region in which the instance resides. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/26231.html) operation to query the region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionCode_ {};
    // The beginning of the time range to query. Specify this parameter as a timestamp of the LONG type. Unit: milliseconds.
    shared_ptr<string> startTime_ {};
    // The state of the download task. Valid values:
    // 
    // *   **Initializing**: The download task is being initialized.
    // *   **queueing**: The download task is queuing.
    // *   **running**: The download task is running.
    // *   **failed**: The download task fails.
    // *   **finished**: The download task is complete.
    // *   **expired**: The download task expires.
    shared_ptr<string> state_ {};
    // The type of the download task. Valid values:
    // 
    // *   **full**: downloads a full backup set.
    // *   **pitr**: downloads a backup set at a specific point in time.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
