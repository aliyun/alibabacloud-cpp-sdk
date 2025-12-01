// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPOSESERVICEWORKORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISPOSESERVICEWORKORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class DisposeServiceWorkOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisposeServiceWorkOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ForwardOwnerId, forwardOwnerId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsAttachment, isAttachment_);
      DARABONBA_PTR_TO_JSON(IsWorkOrderNotify, isWorkOrderNotify_);
      DARABONBA_PTR_TO_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_TO_JSON(OperateRemark, operateRemark_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpgradeOwnerId, upgradeOwnerId_);
      DARABONBA_PTR_TO_JSON(WorkOrderDetail, workOrderDetail_);
      DARABONBA_PTR_TO_JSON(WorkOrderName, workOrderName_);
      DARABONBA_PTR_TO_JSON(WorkOrderStatus, workOrderStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DisposeServiceWorkOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ForwardOwnerId, forwardOwnerId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsAttachment, isAttachment_);
      DARABONBA_PTR_FROM_JSON(IsWorkOrderNotify, isWorkOrderNotify_);
      DARABONBA_PTR_FROM_JSON(NotifyId, notifyId_);
      DARABONBA_PTR_FROM_JSON(OperateRemark, operateRemark_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpgradeOwnerId, upgradeOwnerId_);
      DARABONBA_PTR_FROM_JSON(WorkOrderDetail, workOrderDetail_);
      DARABONBA_PTR_FROM_JSON(WorkOrderName, workOrderName_);
      DARABONBA_PTR_FROM_JSON(WorkOrderStatus, workOrderStatus_);
    };
    DisposeServiceWorkOrderRequest() = default ;
    DisposeServiceWorkOrderRequest(const DisposeServiceWorkOrderRequest &) = default ;
    DisposeServiceWorkOrderRequest(DisposeServiceWorkOrderRequest &&) = default ;
    DisposeServiceWorkOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisposeServiceWorkOrderRequest() = default ;
    DisposeServiceWorkOrderRequest& operator=(const DisposeServiceWorkOrderRequest &) = default ;
    DisposeServiceWorkOrderRequest& operator=(DisposeServiceWorkOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentName_ == nullptr
        && return this->endTime_ == nullptr && return this->forwardOwnerId_ == nullptr && return this->id_ == nullptr && return this->isAttachment_ == nullptr && return this->isWorkOrderNotify_ == nullptr
        && return this->notifyId_ == nullptr && return this->operateRemark_ == nullptr && return this->operateType_ == nullptr && return this->operator_ == nullptr && return this->startTime_ == nullptr
        && return this->upgradeOwnerId_ == nullptr && return this->workOrderDetail_ == nullptr && return this->workOrderName_ == nullptr && return this->workOrderStatus_ == nullptr; };
    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline DisposeServiceWorkOrderRequest& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DisposeServiceWorkOrderRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // forwardOwnerId Field Functions 
    bool hasForwardOwnerId() const { return this->forwardOwnerId_ != nullptr;};
    void deleteForwardOwnerId() { this->forwardOwnerId_ = nullptr;};
    inline string forwardOwnerId() const { DARABONBA_PTR_GET_DEFAULT(forwardOwnerId_, "") };
    inline DisposeServiceWorkOrderRequest& setForwardOwnerId(string forwardOwnerId) { DARABONBA_PTR_SET_VALUE(forwardOwnerId_, forwardOwnerId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DisposeServiceWorkOrderRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAttachment Field Functions 
    bool hasIsAttachment() const { return this->isAttachment_ != nullptr;};
    void deleteIsAttachment() { this->isAttachment_ = nullptr;};
    inline string isAttachment() const { DARABONBA_PTR_GET_DEFAULT(isAttachment_, "") };
    inline DisposeServiceWorkOrderRequest& setIsAttachment(string isAttachment) { DARABONBA_PTR_SET_VALUE(isAttachment_, isAttachment) };


    // isWorkOrderNotify Field Functions 
    bool hasIsWorkOrderNotify() const { return this->isWorkOrderNotify_ != nullptr;};
    void deleteIsWorkOrderNotify() { this->isWorkOrderNotify_ = nullptr;};
    inline string isWorkOrderNotify() const { DARABONBA_PTR_GET_DEFAULT(isWorkOrderNotify_, "") };
    inline DisposeServiceWorkOrderRequest& setIsWorkOrderNotify(string isWorkOrderNotify) { DARABONBA_PTR_SET_VALUE(isWorkOrderNotify_, isWorkOrderNotify) };


    // notifyId Field Functions 
    bool hasNotifyId() const { return this->notifyId_ != nullptr;};
    void deleteNotifyId() { this->notifyId_ = nullptr;};
    inline int64_t notifyId() const { DARABONBA_PTR_GET_DEFAULT(notifyId_, 0L) };
    inline DisposeServiceWorkOrderRequest& setNotifyId(int64_t notifyId) { DARABONBA_PTR_SET_VALUE(notifyId_, notifyId) };


    // operateRemark Field Functions 
    bool hasOperateRemark() const { return this->operateRemark_ != nullptr;};
    void deleteOperateRemark() { this->operateRemark_ = nullptr;};
    inline string operateRemark() const { DARABONBA_PTR_GET_DEFAULT(operateRemark_, "") };
    inline DisposeServiceWorkOrderRequest& setOperateRemark(string operateRemark) { DARABONBA_PTR_SET_VALUE(operateRemark_, operateRemark) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline DisposeServiceWorkOrderRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DisposeServiceWorkOrderRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DisposeServiceWorkOrderRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // upgradeOwnerId Field Functions 
    bool hasUpgradeOwnerId() const { return this->upgradeOwnerId_ != nullptr;};
    void deleteUpgradeOwnerId() { this->upgradeOwnerId_ = nullptr;};
    inline string upgradeOwnerId() const { DARABONBA_PTR_GET_DEFAULT(upgradeOwnerId_, "") };
    inline DisposeServiceWorkOrderRequest& setUpgradeOwnerId(string upgradeOwnerId) { DARABONBA_PTR_SET_VALUE(upgradeOwnerId_, upgradeOwnerId) };


    // workOrderDetail Field Functions 
    bool hasWorkOrderDetail() const { return this->workOrderDetail_ != nullptr;};
    void deleteWorkOrderDetail() { this->workOrderDetail_ = nullptr;};
    inline string workOrderDetail() const { DARABONBA_PTR_GET_DEFAULT(workOrderDetail_, "") };
    inline DisposeServiceWorkOrderRequest& setWorkOrderDetail(string workOrderDetail) { DARABONBA_PTR_SET_VALUE(workOrderDetail_, workOrderDetail) };


    // workOrderName Field Functions 
    bool hasWorkOrderName() const { return this->workOrderName_ != nullptr;};
    void deleteWorkOrderName() { this->workOrderName_ = nullptr;};
    inline string workOrderName() const { DARABONBA_PTR_GET_DEFAULT(workOrderName_, "") };
    inline DisposeServiceWorkOrderRequest& setWorkOrderName(string workOrderName) { DARABONBA_PTR_SET_VALUE(workOrderName_, workOrderName) };


    // workOrderStatus Field Functions 
    bool hasWorkOrderStatus() const { return this->workOrderStatus_ != nullptr;};
    void deleteWorkOrderStatus() { this->workOrderStatus_ = nullptr;};
    inline string workOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(workOrderStatus_, "") };
    inline DisposeServiceWorkOrderRequest& setWorkOrderStatus(string workOrderStatus) { DARABONBA_PTR_SET_VALUE(workOrderStatus_, workOrderStatus) };


  protected:
    // Attachment name.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // End time.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Forward to owner.
    std::shared_ptr<string> forwardOwnerId_ = nullptr;
    // Work order ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Attachment requirement.
    std::shared_ptr<string> isAttachment_ = nullptr;
    // Work order notification.
    std::shared_ptr<string> isWorkOrderNotify_ = nullptr;
    // Notification ID.
    std::shared_ptr<int64_t> notifyId_ = nullptr;
    // Operation remarks.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateRemark_ = nullptr;
    // Processing type.
    // 
    // This parameter is required.
    std::shared_ptr<string> operateType_ = nullptr;
    // Operator.
    // 
    // This parameter is required.
    std::shared_ptr<string> operator_ = nullptr;
    // Start time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Upgrade owner.
    std::shared_ptr<string> upgradeOwnerId_ = nullptr;
    // Work order details.
    std::shared_ptr<string> workOrderDetail_ = nullptr;
    // Work order name.
    // 
    // This parameter is required.
    std::shared_ptr<string> workOrderName_ = nullptr;
    // Work order status.
    std::shared_ptr<string> workOrderStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
