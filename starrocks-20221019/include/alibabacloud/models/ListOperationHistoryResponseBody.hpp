// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ListOperationHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListOperationHistoryResponseBody() = default ;
    ListOperationHistoryResponseBody(const ListOperationHistoryResponseBody &) = default ;
    ListOperationHistoryResponseBody(ListOperationHistoryResponseBody &&) = default ;
    ListOperationHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationHistoryResponseBody() = default ;
    ListOperationHistoryResponseBody& operator=(const ListOperationHistoryResponseBody &) = default ;
    ListOperationHistoryResponseBody& operator=(ListOperationHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AfterValue, afterValue_);
        DARABONBA_PTR_TO_JSON(BeforeValue, beforeValue_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtEnd, gmtEnd_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OperationDetail, operationDetail_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterValue, afterValue_);
        DARABONBA_PTR_FROM_JSON(BeforeValue, beforeValue_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtEnd, gmtEnd_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OperationDetail, operationDetail_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
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
      virtual bool empty() const override { return this->afterValue_ == nullptr
        && this->beforeValue_ == nullptr && this->gmtCreate_ == nullptr && this->gmtEnd_ == nullptr && this->instanceId_ == nullptr && this->operationDetail_ == nullptr
        && this->operationId_ == nullptr && this->operationStatus_ == nullptr && this->operationType_ == nullptr && this->progress_ == nullptr; };
      // afterValue Field Functions 
      bool hasAfterValue() const { return this->afterValue_ != nullptr;};
      void deleteAfterValue() { this->afterValue_ = nullptr;};
      inline string getAfterValue() const { DARABONBA_PTR_GET_DEFAULT(afterValue_, "") };
      inline Data& setAfterValue(string afterValue) { DARABONBA_PTR_SET_VALUE(afterValue_, afterValue) };


      // beforeValue Field Functions 
      bool hasBeforeValue() const { return this->beforeValue_ != nullptr;};
      void deleteBeforeValue() { this->beforeValue_ = nullptr;};
      inline string getBeforeValue() const { DARABONBA_PTR_GET_DEFAULT(beforeValue_, "") };
      inline Data& setBeforeValue(string beforeValue) { DARABONBA_PTR_SET_VALUE(beforeValue_, beforeValue) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtEnd Field Functions 
      bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
      void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
      inline int64_t getGmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
      inline Data& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // operationDetail Field Functions 
      bool hasOperationDetail() const { return this->operationDetail_ != nullptr;};
      void deleteOperationDetail() { this->operationDetail_ = nullptr;};
      inline string getOperationDetail() const { DARABONBA_PTR_GET_DEFAULT(operationDetail_, "") };
      inline Data& setOperationDetail(string operationDetail) { DARABONBA_PTR_SET_VALUE(operationDetail_, operationDetail) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline Data& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // operationStatus Field Functions 
      bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
      void deleteOperationStatus() { this->operationStatus_ = nullptr;};
      inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
      inline Data& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Data& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline Data& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      // Value after the operation.
      shared_ptr<string> afterValue_ {};
      // Value before the operation.
      shared_ptr<string> beforeValue_ {};
      // Start time of the operation.
      shared_ptr<int64_t> gmtCreate_ {};
      // End time of the operation.
      shared_ptr<int64_t> gmtEnd_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Operation details.
      shared_ptr<string> operationDetail_ {};
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
      // Operation progress.
      shared_ptr<int32_t> progress_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListOperationHistoryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOperationHistoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOperationHistoryResponseBody::Data>) };
    inline vector<ListOperationHistoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOperationHistoryResponseBody::Data>) };
    inline ListOperationHistoryResponseBody& setData(const vector<ListOperationHistoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOperationHistoryResponseBody& setData(vector<ListOperationHistoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListOperationHistoryResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListOperationHistoryResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOperationHistoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOperationHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListOperationHistoryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Details about access denied errors.
    shared_ptr<string> accessDeniedDetail_ {};
    // Returned data.
    shared_ptr<vector<ListOperationHistoryResponseBody::Data>> data_ {};
    // Error code.
    shared_ptr<string> errCode_ {};
    // Error message.
    shared_ptr<string> errMessage_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded.
    shared_ptr<bool> success_ {};
    // Total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
