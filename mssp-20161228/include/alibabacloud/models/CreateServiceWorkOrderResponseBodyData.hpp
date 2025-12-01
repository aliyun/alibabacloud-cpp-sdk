// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEWORKORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEWORKORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class CreateServiceWorkOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceWorkOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkOrderDetail, workOrderDetail_);
      DARABONBA_PTR_TO_JSON(WorkOrderName, workOrderName_);
      DARABONBA_PTR_TO_JSON(WorkOrderSource, workOrderSource_);
      DARABONBA_PTR_TO_JSON(WorkOrderStatus, workOrderStatus_);
      DARABONBA_PTR_TO_JSON(WorkOrderType, workOrderType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceWorkOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkOrderDetail, workOrderDetail_);
      DARABONBA_PTR_FROM_JSON(WorkOrderName, workOrderName_);
      DARABONBA_PTR_FROM_JSON(WorkOrderSource, workOrderSource_);
      DARABONBA_PTR_FROM_JSON(WorkOrderStatus, workOrderStatus_);
      DARABONBA_PTR_FROM_JSON(WorkOrderType, workOrderType_);
    };
    CreateServiceWorkOrderResponseBodyData() = default ;
    CreateServiceWorkOrderResponseBodyData(const CreateServiceWorkOrderResponseBodyData &) = default ;
    CreateServiceWorkOrderResponseBodyData(CreateServiceWorkOrderResponseBodyData &&) = default ;
    CreateServiceWorkOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceWorkOrderResponseBodyData() = default ;
    CreateServiceWorkOrderResponseBodyData& operator=(const CreateServiceWorkOrderResponseBodyData &) = default ;
    CreateServiceWorkOrderResponseBodyData& operator=(CreateServiceWorkOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->customerId_ == nullptr && return this->endTime_ == nullptr && return this->id_ == nullptr
        && return this->ownerId_ == nullptr && return this->startTime_ == nullptr && return this->workOrderDetail_ == nullptr && return this->workOrderName_ == nullptr && return this->workOrderSource_ == nullptr
        && return this->workOrderStatus_ == nullptr && return this->workOrderType_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline CreateServiceWorkOrderResponseBodyData& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateServiceWorkOrderResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateServiceWorkOrderResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateServiceWorkOrderResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateServiceWorkOrderResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workOrderDetail Field Functions 
    bool hasWorkOrderDetail() const { return this->workOrderDetail_ != nullptr;};
    void deleteWorkOrderDetail() { this->workOrderDetail_ = nullptr;};
    inline string workOrderDetail() const { DARABONBA_PTR_GET_DEFAULT(workOrderDetail_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setWorkOrderDetail(string workOrderDetail) { DARABONBA_PTR_SET_VALUE(workOrderDetail_, workOrderDetail) };


    // workOrderName Field Functions 
    bool hasWorkOrderName() const { return this->workOrderName_ != nullptr;};
    void deleteWorkOrderName() { this->workOrderName_ = nullptr;};
    inline string workOrderName() const { DARABONBA_PTR_GET_DEFAULT(workOrderName_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setWorkOrderName(string workOrderName) { DARABONBA_PTR_SET_VALUE(workOrderName_, workOrderName) };


    // workOrderSource Field Functions 
    bool hasWorkOrderSource() const { return this->workOrderSource_ != nullptr;};
    void deleteWorkOrderSource() { this->workOrderSource_ = nullptr;};
    inline string workOrderSource() const { DARABONBA_PTR_GET_DEFAULT(workOrderSource_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setWorkOrderSource(string workOrderSource) { DARABONBA_PTR_SET_VALUE(workOrderSource_, workOrderSource) };


    // workOrderStatus Field Functions 
    bool hasWorkOrderStatus() const { return this->workOrderStatus_ != nullptr;};
    void deleteWorkOrderStatus() { this->workOrderStatus_ = nullptr;};
    inline string workOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(workOrderStatus_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setWorkOrderStatus(string workOrderStatus) { DARABONBA_PTR_SET_VALUE(workOrderStatus_, workOrderStatus) };


    // workOrderType Field Functions 
    bool hasWorkOrderType() const { return this->workOrderType_ != nullptr;};
    void deleteWorkOrderType() { this->workOrderType_ = nullptr;};
    inline string workOrderType() const { DARABONBA_PTR_GET_DEFAULT(workOrderType_, "") };
    inline CreateServiceWorkOrderResponseBodyData& setWorkOrderType(string workOrderType) { DARABONBA_PTR_SET_VALUE(workOrderType_, workOrderType) };


  protected:
    // Completion time.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Creator.
    std::shared_ptr<string> creator_ = nullptr;
    // Customer ID.
    std::shared_ptr<string> customerId_ = nullptr;
    // End time.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Primary key.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Owner.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Start time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Work order details.
    std::shared_ptr<string> workOrderDetail_ = nullptr;
    // Work order name.
    std::shared_ptr<string> workOrderName_ = nullptr;
    // Work order source.
    std::shared_ptr<string> workOrderSource_ = nullptr;
    // Work order status.
    std::shared_ptr<string> workOrderStatus_ = nullptr;
    // Work order type.
    std::shared_ptr<string> workOrderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
