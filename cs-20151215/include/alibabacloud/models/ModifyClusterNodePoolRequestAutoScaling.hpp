// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTAUTOSCALING_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTAUTOSCALING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestAutoScaling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestAutoScaling& obj) { 
      DARABONBA_PTR_TO_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_TO_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_TO_JSON(min_instances, minInstances_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestAutoScaling& obj) { 
      DARABONBA_PTR_FROM_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_FROM_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_FROM_JSON(min_instances, minInstances_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModifyClusterNodePoolRequestAutoScaling() = default ;
    ModifyClusterNodePoolRequestAutoScaling(const ModifyClusterNodePoolRequestAutoScaling &) = default ;
    ModifyClusterNodePoolRequestAutoScaling(ModifyClusterNodePoolRequestAutoScaling &&) = default ;
    ModifyClusterNodePoolRequestAutoScaling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestAutoScaling() = default ;
    ModifyClusterNodePoolRequestAutoScaling& operator=(const ModifyClusterNodePoolRequestAutoScaling &) = default ;
    ModifyClusterNodePoolRequestAutoScaling& operator=(ModifyClusterNodePoolRequestAutoScaling &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipBandwidth_ == nullptr
        && return this->eipInternetChargeType_ == nullptr && return this->enable_ == nullptr && return this->isBondEip_ == nullptr && return this->maxInstances_ == nullptr && return this->minInstances_ == nullptr
        && return this->type_ == nullptr; };
    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int64_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0L) };
    inline ModifyClusterNodePoolRequestAutoScaling& setEipBandwidth(int64_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // eipInternetChargeType Field Functions 
    bool hasEipInternetChargeType() const { return this->eipInternetChargeType_ != nullptr;};
    void deleteEipInternetChargeType() { this->eipInternetChargeType_ = nullptr;};
    inline string eipInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(eipInternetChargeType_, "") };
    inline ModifyClusterNodePoolRequestAutoScaling& setEipInternetChargeType(string eipInternetChargeType) { DARABONBA_PTR_SET_VALUE(eipInternetChargeType_, eipInternetChargeType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyClusterNodePoolRequestAutoScaling& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isBondEip Field Functions 
    bool hasIsBondEip() const { return this->isBondEip_ != nullptr;};
    void deleteIsBondEip() { this->isBondEip_ = nullptr;};
    inline bool isBondEip() const { DARABONBA_PTR_GET_DEFAULT(isBondEip_, false) };
    inline ModifyClusterNodePoolRequestAutoScaling& setIsBondEip(bool isBondEip) { DARABONBA_PTR_SET_VALUE(isBondEip_, isBondEip) };


    // maxInstances Field Functions 
    bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
    void deleteMaxInstances() { this->maxInstances_ = nullptr;};
    inline int64_t maxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
    inline ModifyClusterNodePoolRequestAutoScaling& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline ModifyClusterNodePoolRequestAutoScaling& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyClusterNodePoolRequestAutoScaling& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead. The maximum bandwidth of the EIP.
    // 
    // Valid values: 1 to 100. Unit: Mbit/s.
    std::shared_ptr<int64_t> eipBandwidth_ = nullptr;
    // This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
    // 
    // The metering method of the EIP. Valid values:
    // 
    // *   `PayByBandwidth`: pay-by-bandwidth.
    // *   `PayByTraffic`: pay-by-data-transfer.
    // 
    // Default value: `PayByBandwidth`.
    std::shared_ptr<string> eipInternetChargeType_ = nullptr;
    // Specifies whether to enable auto scaling. Valid values:
    // 
    // *   `true`: enables auto scaling for the node pool. When the capacity planning of the cluster cannot meet the requirements of pod scheduling, ACK automatically scales out nodes based on the configured minimum and maximum number of instances. By default, node instant scaling is enabled for clusters that run Kubernetes 1.24. By default, node auto scaling is enabled for clusters that run Kubernetes versions earlier than 1.24. For more information, see [Auto scaling of nodes](https://help.aliyun.com/document_detail/2746785.html).
    // *   `false`: disables auto scaling. Container Service for Kubernetes (ACK) adjusts the number of nodes in the node pool based on the value of the Expected Nodes parameter. The number of nodes is always the same as the value of the Expected Nodes parameter.
    // 
    // If you set this parameter to false, other parameters in the `auto_scaling` section do not take effect.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enable_ = nullptr;
    // This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
    // 
    // *   `true`: associates an elastic IP address (EIP) with the node pool.
    // *   `false`: does not associate an EIP with the node pool.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> isBondEip_ = nullptr;
    // The maximum number of nodes that can be created in the node pool. Existing instances are excluded. This parameter takes effect only when `enable=true` is specified.
    // 
    // The value must be at least the value of min_instances and cannot exceed 2000. Default value: 0.
    std::shared_ptr<int64_t> maxInstances_ = nullptr;
    // The minimum number of nodes that must be kept in the node pool. Existing instances are excluded. This parameter takes effect only when `enable=true` is specified.
    // 
    // The value must be at least 0 and cannot exceed the value of max_instances. Default value: 0.
    // 
    // > 
    // 
    // *   When the minimum number of instances is greater than 0 and a scaling group is set up, ECS instances are automatically created based on the minimum number.
    // 
    // *   We recommend that the value of max_instances is equal to or larger than the current number of nodes in the node pool. If the value of max_instances is less than the current number of nodes in the node pool, the node pool will be scaled in after you enable auto scaling for the node pool.
    std::shared_ptr<int64_t> minInstances_ = nullptr;
    // The instance type that is used for auto scaling. Valid values:
    // 
    // *   `cpu`: regular instance.
    // *   `gpu`: GPU-accelerated instance.
    // *   `gpushare`: shared GPU-accelerated instance.
    // *   `spot`: preemptible instance.
    // 
    // Default value: `cpu`.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
