// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONAUDITLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONAUDITLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListOperationAuditLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationAuditLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(OperationFunc, operationFunc_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationAuditLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(OperationFunc, operationFunc_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListOperationAuditLogsRequest() = default ;
    ListOperationAuditLogsRequest(const ListOperationAuditLogsRequest &) = default ;
    ListOperationAuditLogsRequest(ListOperationAuditLogsRequest &&) = default ;
    ListOperationAuditLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationAuditLogsRequest() = default ;
    ListOperationAuditLogsRequest& operator=(const ListOperationAuditLogsRequest &) = default ;
    ListOperationAuditLogsRequest& operator=(ListOperationAuditLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->eventType_ == nullptr && this->operationFunc_ == nullptr && this->operationStatus_ == nullptr && this->operationType_ == nullptr
        && this->operatorId_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListOperationAuditLogsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListOperationAuditLogsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListOperationAuditLogsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // operationFunc Field Functions 
    bool hasOperationFunc() const { return this->operationFunc_ != nullptr;};
    void deleteOperationFunc() { this->operationFunc_ = nullptr;};
    inline string getOperationFunc() const { DARABONBA_PTR_GET_DEFAULT(operationFunc_, "") };
    inline ListOperationAuditLogsRequest& setOperationFunc(string operationFunc) { DARABONBA_PTR_SET_VALUE(operationFunc_, operationFunc) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline ListOperationAuditLogsRequest& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListOperationAuditLogsRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline ListOperationAuditLogsRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOperationAuditLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListOperationAuditLogsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The page number of the current page in paging. The value starts from 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end time of the query. This value is a UNIX timestamp in seconds. The value must be later than StartTime.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The event source type. Valid values:
    // - **console**: console call.
    // - **sdk**: SDK call.
    shared_ptr<string> eventType_ {};
    // The operation function module. The value is the English code of the function module. If other values are specified, no records are returned. Valid values:
    // - **PrivateAccess**: private access.
    // - **OfficeNetworkAccess**: office network access.
    // - **AppAcceleration**: application acceleration.
    // - **InternetAccess**: Internet access.
    // - **OfficeDataProtection**: office data protection.
    // - **IdentityAccessManagement**: identity and access management.
    // - **DeviceManagement**: device management.
    // - **ApprovalCenter**: approval center.
    // - **SoftwareManagement**: software management.
    // - **LogAnalysis**: log analysis.
    // - **Setting**: settings.
    // - **DigitalWatermark**: digital watermarking.
    // - **DynamicDecision**: dynamic decision.
    // - **InternetBehaviorManagement**: Internet behavior management.
    // - **AgentOfficeSecurity**: Agent office security.
    // - **NetworkAccess**: network access.
    // - **RiskManagement**: risk management.
    // - **EndpointProtection**: endpoint protection.
    // - **Overview**: overview page.
    // - **ITManagement**: IT management.
    // - **InstanceManagement**: instance management.
    shared_ptr<string> operationFunc_ {};
    // The operation status. Valid values:
    // - **success**: The operation succeeded. Equivalent values: true, 成功.
    // - **failure**: The operation failed. Equivalent values: fail, failed, false, 失败.
    // 
    // If this parameter is not specified, only successful operation records are returned.
    shared_ptr<string> operationStatus_ {};
    // The operation type. The value must exactly match the original operation type recorded in the log. The OperationType value in the response is localized based on the request language and may differ from this filter value.
    shared_ptr<string> operationType_ {};
    // The Alibaba Cloud account ID (AliUid) of the operator.
    shared_ptr<string> operatorId_ {};
    // The number of entries per page. Settings: 1 to 100. Used in paging.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The start time of the query. This value is a UNIX timestamp in seconds. The value must be earlier than EndTime. The interval between StartTime and EndTime cannot exceed 30 days, and StartTime cannot be more than 31 days before the current time.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
