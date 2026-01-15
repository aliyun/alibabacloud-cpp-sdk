// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(CliqueID, cliqueID_);
      DARABONBA_PTR_TO_JSON(FilterByQuotaId, filterByQuotaId_);
      DARABONBA_PTR_TO_JSON(FilterByResourceGroupIds, filterByResourceGroupIds_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(HealthCount, healthCount_);
      DARABONBA_PTR_TO_JSON(HealthRate, healthRate_);
      DARABONBA_PTR_TO_JSON(HyperNode, hyperNode_);
      DARABONBA_PTR_TO_JSON(HyperZone, hyperZone_);
      DARABONBA_PTR_TO_JSON(LayoutMode, layoutMode_);
      DARABONBA_PTR_TO_JSON(MachineGroupIds, machineGroupIds_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(NodeStatuses, nodeStatuses_);
      DARABONBA_PTR_TO_JSON(NodeTypes, nodeTypes_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderInstanceIds, orderInstanceIds_);
      DARABONBA_PTR_TO_JSON(OrderStatuses, orderStatuses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(ReasonCodes, reasonCodes_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(CliqueID, cliqueID_);
      DARABONBA_PTR_FROM_JSON(FilterByQuotaId, filterByQuotaId_);
      DARABONBA_PTR_FROM_JSON(FilterByResourceGroupIds, filterByResourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(HealthCount, healthCount_);
      DARABONBA_PTR_FROM_JSON(HealthRate, healthRate_);
      DARABONBA_PTR_FROM_JSON(HyperNode, hyperNode_);
      DARABONBA_PTR_FROM_JSON(HyperZone, hyperZone_);
      DARABONBA_PTR_FROM_JSON(LayoutMode, layoutMode_);
      DARABONBA_PTR_FROM_JSON(MachineGroupIds, machineGroupIds_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(NodeStatuses, nodeStatuses_);
      DARABONBA_PTR_FROM_JSON(NodeTypes, nodeTypes_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceIds, orderInstanceIds_);
      DARABONBA_PTR_FROM_JSON(OrderStatuses, orderStatuses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(ReasonCodes, reasonCodes_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListNodesRequest() = default ;
    ListNodesRequest(const ListNodesRequest &) = default ;
    ListNodesRequest(ListNodesRequest &&) = default ;
    ListNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequest() = default ;
    ListNodesRequest& operator=(const ListNodesRequest &) = default ;
    ListNodesRequest& operator=(ListNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthRate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthRate& obj) { 
        DARABONBA_PTR_TO_JSON(operation, operation_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, HealthRate& obj) { 
        DARABONBA_PTR_FROM_JSON(operation, operation_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      HealthRate() = default ;
      HealthRate(const HealthRate &) = default ;
      HealthRate(HealthRate &&) = default ;
      HealthRate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthRate() = default ;
      HealthRate& operator=(const HealthRate &) = default ;
      HealthRate& operator=(HealthRate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operation_ == nullptr
        && this->value_ == nullptr; };
      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline HealthRate& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
      inline HealthRate& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> operation_ {};
      shared_ptr<int32_t> value_ {};
    };

    class HealthCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCount& obj) { 
        DARABONBA_PTR_TO_JSON(operation, operation_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCount& obj) { 
        DARABONBA_PTR_FROM_JSON(operation, operation_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      HealthCount() = default ;
      HealthCount(const HealthCount &) = default ;
      HealthCount(HealthCount &&) = default ;
      HealthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCount() = default ;
      HealthCount& operator=(const HealthCount &) = default ;
      HealthCount& operator=(HealthCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operation_ == nullptr
        && this->value_ == nullptr; };
      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline HealthCount& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
      inline HealthCount& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> operation_ {};
      shared_ptr<int32_t> value_ {};
    };

    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->availabilityZone_ == nullptr && this->cliqueID_ == nullptr && this->filterByQuotaId_ == nullptr && this->filterByResourceGroupIds_ == nullptr && this->GPUType_ == nullptr
        && this->healthCount_ == nullptr && this->healthRate_ == nullptr && this->hyperNode_ == nullptr && this->hyperZone_ == nullptr && this->layoutMode_ == nullptr
        && this->machineGroupIds_ == nullptr && this->nodeNames_ == nullptr && this->nodeStatuses_ == nullptr && this->nodeTypes_ == nullptr && this->order_ == nullptr
        && this->orderInstanceIds_ == nullptr && this->orderStatuses_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paymentType_ == nullptr
        && this->quotaId_ == nullptr && this->reasonCodes_ == nullptr && this->resourceGroupIds_ == nullptr && this->sortBy_ == nullptr && this->verbose_ == nullptr
        && this->workspaceId_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListNodesRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline ListNodesRequest& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // cliqueID Field Functions 
    bool hasCliqueID() const { return this->cliqueID_ != nullptr;};
    void deleteCliqueID() { this->cliqueID_ = nullptr;};
    inline string getCliqueID() const { DARABONBA_PTR_GET_DEFAULT(cliqueID_, "") };
    inline ListNodesRequest& setCliqueID(string cliqueID) { DARABONBA_PTR_SET_VALUE(cliqueID_, cliqueID) };


    // filterByQuotaId Field Functions 
    bool hasFilterByQuotaId() const { return this->filterByQuotaId_ != nullptr;};
    void deleteFilterByQuotaId() { this->filterByQuotaId_ = nullptr;};
    inline string getFilterByQuotaId() const { DARABONBA_PTR_GET_DEFAULT(filterByQuotaId_, "") };
    inline ListNodesRequest& setFilterByQuotaId(string filterByQuotaId) { DARABONBA_PTR_SET_VALUE(filterByQuotaId_, filterByQuotaId) };


    // filterByResourceGroupIds Field Functions 
    bool hasFilterByResourceGroupIds() const { return this->filterByResourceGroupIds_ != nullptr;};
    void deleteFilterByResourceGroupIds() { this->filterByResourceGroupIds_ = nullptr;};
    inline string getFilterByResourceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(filterByResourceGroupIds_, "") };
    inline ListNodesRequest& setFilterByResourceGroupIds(string filterByResourceGroupIds) { DARABONBA_PTR_SET_VALUE(filterByResourceGroupIds_, filterByResourceGroupIds) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline ListNodesRequest& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // healthCount Field Functions 
    bool hasHealthCount() const { return this->healthCount_ != nullptr;};
    void deleteHealthCount() { this->healthCount_ = nullptr;};
    inline const ListNodesRequest::HealthCount & getHealthCount() const { DARABONBA_PTR_GET_CONST(healthCount_, ListNodesRequest::HealthCount) };
    inline ListNodesRequest::HealthCount getHealthCount() { DARABONBA_PTR_GET(healthCount_, ListNodesRequest::HealthCount) };
    inline ListNodesRequest& setHealthCount(const ListNodesRequest::HealthCount & healthCount) { DARABONBA_PTR_SET_VALUE(healthCount_, healthCount) };
    inline ListNodesRequest& setHealthCount(ListNodesRequest::HealthCount && healthCount) { DARABONBA_PTR_SET_RVALUE(healthCount_, healthCount) };


    // healthRate Field Functions 
    bool hasHealthRate() const { return this->healthRate_ != nullptr;};
    void deleteHealthRate() { this->healthRate_ = nullptr;};
    inline const ListNodesRequest::HealthRate & getHealthRate() const { DARABONBA_PTR_GET_CONST(healthRate_, ListNodesRequest::HealthRate) };
    inline ListNodesRequest::HealthRate getHealthRate() { DARABONBA_PTR_GET(healthRate_, ListNodesRequest::HealthRate) };
    inline ListNodesRequest& setHealthRate(const ListNodesRequest::HealthRate & healthRate) { DARABONBA_PTR_SET_VALUE(healthRate_, healthRate) };
    inline ListNodesRequest& setHealthRate(ListNodesRequest::HealthRate && healthRate) { DARABONBA_PTR_SET_RVALUE(healthRate_, healthRate) };


    // hyperNode Field Functions 
    bool hasHyperNode() const { return this->hyperNode_ != nullptr;};
    void deleteHyperNode() { this->hyperNode_ = nullptr;};
    inline string getHyperNode() const { DARABONBA_PTR_GET_DEFAULT(hyperNode_, "") };
    inline ListNodesRequest& setHyperNode(string hyperNode) { DARABONBA_PTR_SET_VALUE(hyperNode_, hyperNode) };


    // hyperZone Field Functions 
    bool hasHyperZone() const { return this->hyperZone_ != nullptr;};
    void deleteHyperZone() { this->hyperZone_ = nullptr;};
    inline string getHyperZone() const { DARABONBA_PTR_GET_DEFAULT(hyperZone_, "") };
    inline ListNodesRequest& setHyperZone(string hyperZone) { DARABONBA_PTR_SET_VALUE(hyperZone_, hyperZone) };


    // layoutMode Field Functions 
    bool hasLayoutMode() const { return this->layoutMode_ != nullptr;};
    void deleteLayoutMode() { this->layoutMode_ = nullptr;};
    inline string getLayoutMode() const { DARABONBA_PTR_GET_DEFAULT(layoutMode_, "") };
    inline ListNodesRequest& setLayoutMode(string layoutMode) { DARABONBA_PTR_SET_VALUE(layoutMode_, layoutMode) };


    // machineGroupIds Field Functions 
    bool hasMachineGroupIds() const { return this->machineGroupIds_ != nullptr;};
    void deleteMachineGroupIds() { this->machineGroupIds_ = nullptr;};
    inline string getMachineGroupIds() const { DARABONBA_PTR_GET_DEFAULT(machineGroupIds_, "") };
    inline ListNodesRequest& setMachineGroupIds(string machineGroupIds) { DARABONBA_PTR_SET_VALUE(machineGroupIds_, machineGroupIds) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline string getNodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
    inline ListNodesRequest& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


    // nodeStatuses Field Functions 
    bool hasNodeStatuses() const { return this->nodeStatuses_ != nullptr;};
    void deleteNodeStatuses() { this->nodeStatuses_ = nullptr;};
    inline string getNodeStatuses() const { DARABONBA_PTR_GET_DEFAULT(nodeStatuses_, "") };
    inline ListNodesRequest& setNodeStatuses(string nodeStatuses) { DARABONBA_PTR_SET_VALUE(nodeStatuses_, nodeStatuses) };


    // nodeTypes Field Functions 
    bool hasNodeTypes() const { return this->nodeTypes_ != nullptr;};
    void deleteNodeTypes() { this->nodeTypes_ = nullptr;};
    inline string getNodeTypes() const { DARABONBA_PTR_GET_DEFAULT(nodeTypes_, "") };
    inline ListNodesRequest& setNodeTypes(string nodeTypes) { DARABONBA_PTR_SET_VALUE(nodeTypes_, nodeTypes) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListNodesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderInstanceIds Field Functions 
    bool hasOrderInstanceIds() const { return this->orderInstanceIds_ != nullptr;};
    void deleteOrderInstanceIds() { this->orderInstanceIds_ = nullptr;};
    inline string getOrderInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceIds_, "") };
    inline ListNodesRequest& setOrderInstanceIds(string orderInstanceIds) { DARABONBA_PTR_SET_VALUE(orderInstanceIds_, orderInstanceIds) };


    // orderStatuses Field Functions 
    bool hasOrderStatuses() const { return this->orderStatuses_ != nullptr;};
    void deleteOrderStatuses() { this->orderStatuses_ = nullptr;};
    inline string getOrderStatuses() const { DARABONBA_PTR_GET_DEFAULT(orderStatuses_, "") };
    inline ListNodesRequest& setOrderStatuses(string orderStatuses) { DARABONBA_PTR_SET_VALUE(orderStatuses_, orderStatuses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListNodesRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline ListNodesRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // reasonCodes Field Functions 
    bool hasReasonCodes() const { return this->reasonCodes_ != nullptr;};
    void deleteReasonCodes() { this->reasonCodes_ = nullptr;};
    inline string getReasonCodes() const { DARABONBA_PTR_GET_DEFAULT(reasonCodes_, "") };
    inline ListNodesRequest& setReasonCodes(string reasonCodes) { DARABONBA_PTR_SET_VALUE(reasonCodes_, reasonCodes) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline string getResourceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIds_, "") };
    inline ListNodesRequest& setResourceGroupIds(string resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListNodesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListNodesRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListNodesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> acceleratorType_ {};
    shared_ptr<string> availabilityZone_ {};
    shared_ptr<string> cliqueID_ {};
    shared_ptr<string> filterByQuotaId_ {};
    shared_ptr<string> filterByResourceGroupIds_ {};
    shared_ptr<string> GPUType_ {};
    shared_ptr<ListNodesRequest::HealthCount> healthCount_ {};
    shared_ptr<ListNodesRequest::HealthRate> healthRate_ {};
    shared_ptr<string> hyperNode_ {};
    shared_ptr<string> hyperZone_ {};
    shared_ptr<string> layoutMode_ {};
    shared_ptr<string> machineGroupIds_ {};
    shared_ptr<string> nodeNames_ {};
    shared_ptr<string> nodeStatuses_ {};
    shared_ptr<string> nodeTypes_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> orderInstanceIds_ {};
    shared_ptr<string> orderStatuses_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> quotaId_ {};
    shared_ptr<string> reasonCodes_ {};
    shared_ptr<string> resourceGroupIds_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<bool> verbose_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
