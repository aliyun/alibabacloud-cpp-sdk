// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMACHINEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMACHINEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListResourceGroupMachineGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMachineGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(MachineGroupIDs, machineGroupIDs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMachineGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(MachineGroupIDs, machineGroupIDs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListResourceGroupMachineGroupsRequest() = default ;
    ListResourceGroupMachineGroupsRequest(const ListResourceGroupMachineGroupsRequest &) = default ;
    ListResourceGroupMachineGroupsRequest(ListResourceGroupMachineGroupsRequest &&) = default ;
    ListResourceGroupMachineGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMachineGroupsRequest() = default ;
    ListResourceGroupMachineGroupsRequest& operator=(const ListResourceGroupMachineGroupsRequest &) = default ;
    ListResourceGroupMachineGroupsRequest& operator=(ListResourceGroupMachineGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorID_ == nullptr
        && this->ecsSpec_ == nullptr && this->machineGroupIDs_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->orderInstanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paymentDuration_ == nullptr && this->paymentDurationUnit_ == nullptr && this->paymentType_ == nullptr
        && this->sortBy_ == nullptr && this->status_ == nullptr; };
    // creatorID Field Functions 
    bool hasCreatorID() const { return this->creatorID_ != nullptr;};
    void deleteCreatorID() { this->creatorID_ = nullptr;};
    inline string getCreatorID() const { DARABONBA_PTR_GET_DEFAULT(creatorID_, "") };
    inline ListResourceGroupMachineGroupsRequest& setCreatorID(string creatorID) { DARABONBA_PTR_SET_VALUE(creatorID_, creatorID) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline ListResourceGroupMachineGroupsRequest& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // machineGroupIDs Field Functions 
    bool hasMachineGroupIDs() const { return this->machineGroupIDs_ != nullptr;};
    void deleteMachineGroupIDs() { this->machineGroupIDs_ = nullptr;};
    inline string getMachineGroupIDs() const { DARABONBA_PTR_GET_DEFAULT(machineGroupIDs_, "") };
    inline ListResourceGroupMachineGroupsRequest& setMachineGroupIDs(string machineGroupIDs) { DARABONBA_PTR_SET_VALUE(machineGroupIDs_, machineGroupIDs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupMachineGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListResourceGroupMachineGroupsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline ListResourceGroupMachineGroupsRequest& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceGroupMachineGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceGroupMachineGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline string getPaymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, "") };
    inline ListResourceGroupMachineGroupsRequest& setPaymentDuration(string paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline ListResourceGroupMachineGroupsRequest& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListResourceGroupMachineGroupsRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListResourceGroupMachineGroupsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupMachineGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> creatorID_ {};
    shared_ptr<string> ecsSpec_ {};
    shared_ptr<string> machineGroupIDs_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderInstanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> paymentDuration_ {};
    shared_ptr<string> paymentDurationUnit_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
