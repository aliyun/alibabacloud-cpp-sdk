// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEWORKORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEWORKORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class CreateServiceWorkOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceWorkOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(DurationDay, durationDay_);
      DARABONBA_PTR_TO_JSON(IsAttachment, isAttachment_);
      DARABONBA_PTR_TO_JSON(IsMilestone, isMilestone_);
      DARABONBA_PTR_TO_JSON(IsWorkOrderNotify, isWorkOrderNotify_);
      DARABONBA_PTR_TO_JSON(NotifyDay, notifyDay_);
      DARABONBA_PTR_TO_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_TO_JSON(OperateRemark, operateRemark_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkOrderDetail, workOrderDetail_);
      DARABONBA_PTR_TO_JSON(WorkOrderName, workOrderName_);
      DARABONBA_PTR_TO_JSON(WorkOrderSource, workOrderSource_);
      DARABONBA_PTR_TO_JSON(WorkOrderStatus, workOrderStatus_);
      DARABONBA_PTR_TO_JSON(WorkOrderType, workOrderType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceWorkOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(DurationDay, durationDay_);
      DARABONBA_PTR_FROM_JSON(IsAttachment, isAttachment_);
      DARABONBA_PTR_FROM_JSON(IsMilestone, isMilestone_);
      DARABONBA_PTR_FROM_JSON(IsWorkOrderNotify, isWorkOrderNotify_);
      DARABONBA_PTR_FROM_JSON(NotifyDay, notifyDay_);
      DARABONBA_PTR_FROM_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_FROM_JSON(OperateRemark, operateRemark_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkOrderDetail, workOrderDetail_);
      DARABONBA_PTR_FROM_JSON(WorkOrderName, workOrderName_);
      DARABONBA_PTR_FROM_JSON(WorkOrderSource, workOrderSource_);
      DARABONBA_PTR_FROM_JSON(WorkOrderStatus, workOrderStatus_);
      DARABONBA_PTR_FROM_JSON(WorkOrderType, workOrderType_);
    };
    CreateServiceWorkOrderRequest() = default ;
    CreateServiceWorkOrderRequest(const CreateServiceWorkOrderRequest &) = default ;
    CreateServiceWorkOrderRequest(CreateServiceWorkOrderRequest &&) = default ;
    CreateServiceWorkOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceWorkOrderRequest() = default ;
    CreateServiceWorkOrderRequest& operator=(const CreateServiceWorkOrderRequest &) = default ;
    CreateServiceWorkOrderRequest& operator=(CreateServiceWorkOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->customerId_ == nullptr && return this->durationDay_ == nullptr && return this->isAttachment_ == nullptr && return this->isMilestone_ == nullptr && return this->isWorkOrderNotify_ == nullptr
        && return this->notifyDay_ == nullptr && return this->notifyId_ == nullptr && return this->operateRemark_ == nullptr && return this->operateType_ == nullptr && return this->operator_ == nullptr
        && return this->ownerId_ == nullptr && return this->priority_ == nullptr && return this->startTime_ == nullptr && return this->workOrderDetail_ == nullptr && return this->workOrderName_ == nullptr
        && return this->workOrderSource_ == nullptr && return this->workOrderStatus_ == nullptr && return this->workOrderType_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline CreateServiceWorkOrderRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline CreateServiceWorkOrderRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // durationDay Field Functions 
    bool hasDurationDay() const { return this->durationDay_ != nullptr;};
    void deleteDurationDay() { this->durationDay_ = nullptr;};
    inline string durationDay() const { DARABONBA_PTR_GET_DEFAULT(durationDay_, "") };
    inline CreateServiceWorkOrderRequest& setDurationDay(string durationDay) { DARABONBA_PTR_SET_VALUE(durationDay_, durationDay) };


    // isAttachment Field Functions 
    bool hasIsAttachment() const { return this->isAttachment_ != nullptr;};
    void deleteIsAttachment() { this->isAttachment_ = nullptr;};
    inline string isAttachment() const { DARABONBA_PTR_GET_DEFAULT(isAttachment_, "") };
    inline CreateServiceWorkOrderRequest& setIsAttachment(string isAttachment) { DARABONBA_PTR_SET_VALUE(isAttachment_, isAttachment) };


    // isMilestone Field Functions 
    bool hasIsMilestone() const { return this->isMilestone_ != nullptr;};
    void deleteIsMilestone() { this->isMilestone_ = nullptr;};
    inline string isMilestone() const { DARABONBA_PTR_GET_DEFAULT(isMilestone_, "") };
    inline CreateServiceWorkOrderRequest& setIsMilestone(string isMilestone) { DARABONBA_PTR_SET_VALUE(isMilestone_, isMilestone) };


    // isWorkOrderNotify Field Functions 
    bool hasIsWorkOrderNotify() const { return this->isWorkOrderNotify_ != nullptr;};
    void deleteIsWorkOrderNotify() { this->isWorkOrderNotify_ = nullptr;};
    inline string isWorkOrderNotify() const { DARABONBA_PTR_GET_DEFAULT(isWorkOrderNotify_, "") };
    inline CreateServiceWorkOrderRequest& setIsWorkOrderNotify(string isWorkOrderNotify) { DARABONBA_PTR_SET_VALUE(isWorkOrderNotify_, isWorkOrderNotify) };


    // notifyDay Field Functions 
    bool hasNotifyDay() const { return this->notifyDay_ != nullptr;};
    void deleteNotifyDay() { this->notifyDay_ = nullptr;};
    inline string notifyDay() const { DARABONBA_PTR_GET_DEFAULT(notifyDay_, "") };
    inline CreateServiceWorkOrderRequest& setNotifyDay(string notifyDay) { DARABONBA_PTR_SET_VALUE(notifyDay_, notifyDay) };


    // notifyId Field Functions 
    bool hasNotifyId() const { return this->notifyId_ != nullptr;};
    void deleteNotifyId() { this->notifyId_ = nullptr;};
    inline int64_t notifyId() const { DARABONBA_PTR_GET_DEFAULT(notifyId_, 0L) };
    inline CreateServiceWorkOrderRequest& setNotifyId(int64_t notifyId) { DARABONBA_PTR_SET_VALUE(notifyId_, notifyId) };


    // operateRemark Field Functions 
    bool hasOperateRemark() const { return this->operateRemark_ != nullptr;};
    void deleteOperateRemark() { this->operateRemark_ = nullptr;};
    inline string operateRemark() const { DARABONBA_PTR_GET_DEFAULT(operateRemark_, "") };
    inline CreateServiceWorkOrderRequest& setOperateRemark(string operateRemark) { DARABONBA_PTR_SET_VALUE(operateRemark_, operateRemark) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline CreateServiceWorkOrderRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateServiceWorkOrderRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateServiceWorkOrderRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateServiceWorkOrderRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateServiceWorkOrderRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workOrderDetail Field Functions 
    bool hasWorkOrderDetail() const { return this->workOrderDetail_ != nullptr;};
    void deleteWorkOrderDetail() { this->workOrderDetail_ = nullptr;};
    inline string workOrderDetail() const { DARABONBA_PTR_GET_DEFAULT(workOrderDetail_, "") };
    inline CreateServiceWorkOrderRequest& setWorkOrderDetail(string workOrderDetail) { DARABONBA_PTR_SET_VALUE(workOrderDetail_, workOrderDetail) };


    // workOrderName Field Functions 
    bool hasWorkOrderName() const { return this->workOrderName_ != nullptr;};
    void deleteWorkOrderName() { this->workOrderName_ = nullptr;};
    inline string workOrderName() const { DARABONBA_PTR_GET_DEFAULT(workOrderName_, "") };
    inline CreateServiceWorkOrderRequest& setWorkOrderName(string workOrderName) { DARABONBA_PTR_SET_VALUE(workOrderName_, workOrderName) };


    // workOrderSource Field Functions 
    bool hasWorkOrderSource() const { return this->workOrderSource_ != nullptr;};
    void deleteWorkOrderSource() { this->workOrderSource_ = nullptr;};
    inline string workOrderSource() const { DARABONBA_PTR_GET_DEFAULT(workOrderSource_, "") };
    inline CreateServiceWorkOrderRequest& setWorkOrderSource(string workOrderSource) { DARABONBA_PTR_SET_VALUE(workOrderSource_, workOrderSource) };


    // workOrderStatus Field Functions 
    bool hasWorkOrderStatus() const { return this->workOrderStatus_ != nullptr;};
    void deleteWorkOrderStatus() { this->workOrderStatus_ = nullptr;};
    inline string workOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(workOrderStatus_, "") };
    inline CreateServiceWorkOrderRequest& setWorkOrderStatus(string workOrderStatus) { DARABONBA_PTR_SET_VALUE(workOrderStatus_, workOrderStatus) };


    // workOrderType Field Functions 
    bool hasWorkOrderType() const { return this->workOrderType_ != nullptr;};
    void deleteWorkOrderType() { this->workOrderType_ = nullptr;};
    inline string workOrderType() const { DARABONBA_PTR_GET_DEFAULT(workOrderType_, "") };
    inline CreateServiceWorkOrderRequest& setWorkOrderType(string workOrderType) { DARABONBA_PTR_SET_VALUE(workOrderType_, workOrderType) };


  protected:
    // Creator.
    // 
    // This parameter is required.
    std::shared_ptr<string> creator_ = nullptr;
    // Customer ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> customerId_ = nullptr;
    // Duration in days.
    // 
    // This parameter is required.
    std::shared_ptr<string> durationDay_ = nullptr;
    // Attachment requirement.
    // 
    // This parameter is required.
    std::shared_ptr<string> isAttachment_ = nullptr;
    // Is milestone.
    std::shared_ptr<string> isMilestone_ = nullptr;
    // Whether a reminder is needed.
    // 
    // This parameter is required.
    std::shared_ptr<string> isWorkOrderNotify_ = nullptr;
    // Number of days for advance notification.
    std::shared_ptr<string> notifyDay_ = nullptr;
    // Notification ID.
    std::shared_ptr<int64_t> notifyId_ = nullptr;
    // Operation remarks.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateRemark_ = nullptr;
    // Operation type.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateType_ = nullptr;
    // Operator.
    // 
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Start time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Work order details.
    // 
    // This parameter is required.
    std::shared_ptr<string> workOrderDetail_ = nullptr;
    // Work order name.
    // 
    // This parameter is required.
    std::shared_ptr<string> workOrderName_ = nullptr;
    // Work order source.
    // 
    // This parameter is required.
    std::shared_ptr<string> workOrderSource_ = nullptr;
    // Work order status.
    // 
    // This parameter is required.
    std::shared_ptr<string> workOrderStatus_ = nullptr;
    // Work order type.
    // 
    // This parameter is required.
    std::shared_ptr<string> workOrderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
