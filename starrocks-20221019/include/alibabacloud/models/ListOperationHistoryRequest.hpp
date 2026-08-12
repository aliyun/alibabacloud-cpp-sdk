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
    // End time of the operation.
    shared_ptr<int64_t> endTime_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Operation ID.
    shared_ptr<string> operationId_ {};
    // Operation status:
    // 
    // - COMPLETED: completed
    // 
    // - TERMINATED: terminated
    // 
    // - HUMAN_PROCESSING: pending manual processing
    shared_ptr<string> operationStatus_ {};
    // Operation type. Valid values:
    // 
    // - trial_to_official: upgrade from Trial Edition to Standard Edition
    // 
    // - upgrade_version: upgrade version
    // 
    // - update_configuration: update configuration
    // 
    // - update_public_network_status: update public network status
    // 
    // - create_cluster: create cluster
    // 
    // - delete_cluster: delete cluster
    // 
    // - disable_cluster: stop cluster
    // 
    // - enable_cluster: resume cluster
    // 
    // - restart_cluster: restart cluster
    // 
    // - migrate_cluster: migrate cluster
    // 
    // - renew_cluster: renew cluster
    // 
    // - modify_charge_type: change billing method
    // 
    // - UPGRADE: upgrade cluster
    // 
    // - DOWNGRADE: downgrade cluster
    // 
    // - create_node_group: create node group
    // 
    // - delete_node_group: delete node group
    // 
    // - disable_node_group: stop node group
    // 
    // - enable_node_group: resume node group
    // 
    // - sre_operation: O\\&M cluster
    // 
    // - resource_change: resource change
    // 
    // - disable_postpaid_resource: disable pay-as-you-go resources
    // 
    // - enable_postpaid_resource: enable pay-as-you-go resources
    // 
    // - restart_node_group: restart compute group
    // 
    // - enable_ha_cluster: enable high availability (HA) for cluster
    // 
    // - restart_node: restart node
    // 
    // - backup: data backup
    // 
    // - delete_backup: delete data backup
    // 
    // - cancel_backup_task: cancel data backup
    // 
    // - modify_timezone: modify system time zone
    // 
    // - restore: data restoration
    // 
    // - switch_az: switch primary and secondary zones
    // 
    // - rollback_upgrade_version: roll back version upgrade
    // 
    // - scale_out_fe: scale out FE
    // 
    // - scale_in_fe: scale in FE
    // 
    // - upgrade_fe_cu: upgrade FE CU specification
    // 
    // - downgrade_fe_cu: downgrade FE CU specification
    // 
    // - increase_fe_disk_size: increase FE disk size
    // 
    // - decrease_fe_disk_size: decrease FE disk size
    // 
    // - increase_fe_disk_number: increase FE disk count
    // 
    // - decrease_fe_disk_number: decrease FE disk count
    // 
    // - upgrade_fe_disk_performance_level: upgrade FE disk performance level
    // 
    // - downgrade_fe_disk_performance_level: downgrade FE disk performance level
    // 
    // - create_agent: create Agent
    // 
    // - upgrade_agent_cu: upgrade Agent CU specification
    // 
    // - scale_out_be: scale out BE
    // 
    // - scale_in_be: scale in BE
    // 
    // - upgrade_be_cu: upgrade BE CU specification
    // 
    // - downgrade_be_cu: downgrade BE CU specification
    // 
    // - increase_be_disk_size: increase BE disk size
    // 
    // - decrease_be_disk_size: decrease BE disk size
    // 
    // - increase_be_disk_number: increase BE disk count
    // 
    // - decrease_be_disk_number: decrease BE disk count
    // 
    // - upgrade_be_disk_performance_level: upgrade BE disk performance level
    // 
    // - downgrade_be_disk_performance_level: downgrade BE disk performance level
    // 
    // - upgrade_be_spec_type: upgrade BE specification type
    // 
    // - downgrade_be_spec_type: downgrade BE specification type
    // 
    // - scale_out_cn: scale out CN
    // 
    // - scale_in_cn: scale in CN
    // 
    // - upgrade_cn_cu: upgrade CN CU specification
    // 
    // - downgrade_cn_cu: downgrade CN CU specification
    // 
    // - increase_cn_disk_size: increase CN disk size
    // 
    // - decrease_cn_disk_size: decrease CN disk size
    // 
    // - increase_cn_disk_number: increase CN disk count
    // 
    // - decrease_cn_disk_number: decrease CN disk count
    // 
    // - upgrade_cn_disk_performance: upgrade CN disk performance level
    // 
    // - downgrade_cn_disk_performance: downgrade CN disk performance level
    // 
    // - upgrade_cn_spec_type: upgrade CN specification type
    // 
    // - downgrade_cn_spec_type: downgrade CN specification type
    // 
    // - elastic_scale_out_cn: elastically scale out CN
    // 
    // - elastic_scale_in_cn: elastically scale in CN
    shared_ptr<string> operationType_ {};
    // Page number of the current page. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of entries per page for paged queries. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Start time of the operation.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
