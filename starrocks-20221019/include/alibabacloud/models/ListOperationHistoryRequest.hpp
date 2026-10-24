// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ListOperationHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListOperationHistoryRequest() = default ;
    ListOperationHistoryRequest(const ListOperationHistoryRequest &) = default ;
    ListOperationHistoryRequest(ListOperationHistoryRequest &&) = default ;
    ListOperationHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHistoryRequest() = default ;
    ListOperationHistoryRequest& operator=(const ListOperationHistoryRequest &) = default ;
    ListOperationHistoryRequest& operator=(ListOperationHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->operationId_ == nullptr && this->operationStatus_ == nullptr && this->operationType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListOperationHistoryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOperationHistoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ListOperationHistoryRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline ListOperationHistoryRequest& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListOperationHistoryRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOperationHistoryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOperationHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListOperationHistoryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the operation. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The operation ID.
    shared_ptr<string> operationId_ {};
    // The operation status. Valid values:
    // - COMPLETED: Completed.
    // - TERMINATED: Terminated.
    // - HUMAN_PROCESSING: Pending manual processing.
    shared_ptr<string> operationStatus_ {};
    // The operation type. Valid values:
    // - trial_to_official: Upgrades the trial edition to the standard edition.
    // - upgrade_version: Upgrades the version.
    // - update_configuration: Updates the configuration.
    // - update_public_network_status: Updates the public network status.
    // - create_cluster: Creates a cluster.
    // - delete_cluster: Deletes a cluster.
    // - disable_cluster: Stops a cluster.
    // - enable_cluster: Recovers a cluster.
    // - restart_cluster: Restarts a cluster.
    // - migrate_cluster: Migrates a cluster.
    // - renew_cluster: Renews a cluster.
    // - modify_charge_type: Changes the billing method.
    // - UPGRADE: Upgrades a cluster.
    // - DOWNGRADE: Downgrades a cluster.
    // - create_node_group: Creates a node group.
    // - delete_node_group: Deletes a node group.
    // - disable_node_group: Stops a node group.
    // - enable_node_group: Recovers a node group.
    // - sre_operation: Performs O&M on a cluster.
    // - resource_change: Changes resources.
    // - disable_postpaid_resource: Disables pay-as-you-go resources.
    // - enable_postpaid_resource: Recovers pay-as-you-go resources.
    // - restart_node_group: Restarts a compute group.
    // - enable_ha_cluster: Enables high availability (HA) to keep the cluster active.
    // - restart_node: Restarts a node.
    // - backup: Backs up data.
    // - delete_backup: Deletes a data backup.
    // - cancel_backup_task: Cancels a data backup task.
    // - modify_timezone: Modifies the system time zone.
    // - restore: Recovers data.
    // - switch_az: Switches the primary and secondary zones.
    // - rollback_upgrade_version: Rolls back a version upgrade.
    // - scale_out_fe: Scales out FE nodes.
    // - scale_in_fe: Scales in FE nodes.
    // - upgrade_fe_cu: Upgrades the FE CU specifications.
    // - downgrade_fe_cu: Decrease the quota of FE CU specifications.
    // - increase_fe_disk_size: Increases the FE disk size.
    // - decrease_fe_disk_size: Decreases the FE disk size.
    // - increase_fe_disk_number: Increases the number of FE disks.
    // - decrease_fe_disk_number: Decreases the number of FE disks.
    // - upgrade_fe_disk_performance_level: Upgrades the FE disk performance level (PL).
    // - downgrade_fe_disk_performance_level: Decrease the quota of the FE disk performance level (PL).
    // - create_agent: Creates an agent.
    // - upgrade_agent_cu: Upgrades the agent CU specifications.
    // - scale_out_be: Scales out BE nodes.
    // - scale_in_be: Scales in BE nodes.
    // - upgrade_be_cu: Upgrades the BE CU specifications.
    // - downgrade_be_cu: Decrease the quota of BE CU specifications.
    // - increase_be_disk_size: Increases the BE disk size.
    // - decrease_be_disk_size: Decreases the BE disk size.
    // - increase_be_disk_number: Increases the number of BE disks.
    // - decrease_be_disk_number: Decreases the number of BE disks.
    // - upgrade_be_disk_performance_level: Upgrades the BE disk performance level (PL).
    // - downgrade_be_disk_performance_level: Decrease the quota of the BE disk performance level (PL).
    // - upgrade_be_spec_type: Upgrades the BE specification type.
    // - downgrade_be_spec_type: Decrease the quota of the BE specification type.
    // - scale_out_cn: Scales out CN nodes.
    // - scale_in_cn: Scales in CN nodes.
    // - upgrade_cn_cu: Upgrades the CN CU specifications.
    // - downgrade_cn_cu: Decrease the quota of CN CU specifications.
    // - increase_cn_disk_size: Increases the CN disk size.
    // - decrease_cn_disk_size: Decreases the CN disk size.
    // - increase_cn_disk_number: Increases the number of CN disks.
    // - decrease_cn_disk_number: Decreases the number of CN disks.
    // - upgrade_cn_disk_performance: Upgrades the CN disk performance level (PL).
    // - downgrade_cn_disk_performance: Decrease the quota of the CN disk performance level (PL).
    // - upgrade_cn_spec_type: Upgrades the CN specification type.
    // - downgrade_cn_spec_type: Decrease the quota of the CN specification type.
    // - elastic_scale_out_cn: Elastically scales out CN nodes.
    // - elastic_scale_in_cn: Elastically scales in CN nodes.
    shared_ptr<string> operationType_ {};
    // The page number of the current page. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for paging in a paged query. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The start time of the operation. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
