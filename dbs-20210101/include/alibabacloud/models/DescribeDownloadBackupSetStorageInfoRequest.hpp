// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADBACKUPSETSTORAGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADBACKUPSETSTORAGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeDownloadBackupSetStorageInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadBackupSetStorageInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadBackupSetStorageInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeDownloadBackupSetStorageInfoRequest() = default ;
    DescribeDownloadBackupSetStorageInfoRequest(const DescribeDownloadBackupSetStorageInfoRequest &) = default ;
    DescribeDownloadBackupSetStorageInfoRequest(DescribeDownloadBackupSetStorageInfoRequest &&) = default ;
    DescribeDownloadBackupSetStorageInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadBackupSetStorageInfoRequest() = default ;
    DescribeDownloadBackupSetStorageInfoRequest& operator=(const DescribeDownloadBackupSetStorageInfoRequest &) = default ;
    DescribeDownloadBackupSetStorageInfoRequest& operator=(DescribeDownloadBackupSetStorageInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && this->clusterName_ == nullptr && this->duration_ == nullptr && this->instanceName_ == nullptr && this->regionCode_ == nullptr && this->taskId_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeDownloadBackupSetStorageInfoRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeDownloadBackupSetStorageInfoRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline DescribeDownloadBackupSetStorageInfoRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeDownloadBackupSetStorageInfoRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeDownloadBackupSetStorageInfoRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDownloadBackupSetStorageInfoRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the backup set.
    shared_ptr<string> backupSetId_ {};
    shared_ptr<string> clusterName_ {};
    // The validity period of the URL that is used as the download destination. Take note of the following items:
    // 
    // *   Default value: 7200. This means that the URL is valid for 2 hours by default.
    // *   Valid values: 300 to 86400. Unit: seconds. This means that you can specify a validity period in the range of 5 minutes to 1 day.
    // *   Before you specify this parameter, convert the validity period to seconds. For example, if you want to set the validity period of the URL to 5 minutes, enter 300.
    // 
    // This parameter is required.
    shared_ptr<string> duration_ {};
    // The ID of the instance.
    // 
    // > The **BackupSetId** parameter is required if you specify the **InstanceName** parameter.
    shared_ptr<string> instanceName_ {};
    // The ID of the region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionCode_ {};
    // The download task ID.
    // 
    // *   The **BackupSetId** and **InstanceName** parameters are required if you do not specify the **TaskId** parameter.
    // *   To view the download task ID, go to the instance details page in the console and click **Backup and Restoration** in the left-side navigation pane. On the **Backup Download** tab, view the task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
