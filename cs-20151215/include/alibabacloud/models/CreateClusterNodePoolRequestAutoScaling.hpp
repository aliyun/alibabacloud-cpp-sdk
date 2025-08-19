// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTAUTOSCALING_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTAUTOSCALING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestAutoScaling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestAutoScaling& obj) { 
      DARABONBA_PTR_TO_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_TO_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_TO_JSON(min_instances, minInstances_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestAutoScaling& obj) { 
      DARABONBA_PTR_FROM_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_FROM_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_FROM_JSON(min_instances, minInstances_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateClusterNodePoolRequestAutoScaling() = default ;
    CreateClusterNodePoolRequestAutoScaling(const CreateClusterNodePoolRequestAutoScaling &) = default ;
    CreateClusterNodePoolRequestAutoScaling(CreateClusterNodePoolRequestAutoScaling &&) = default ;
    CreateClusterNodePoolRequestAutoScaling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestAutoScaling() = default ;
    CreateClusterNodePoolRequestAutoScaling& operator=(const CreateClusterNodePoolRequestAutoScaling &) = default ;
    CreateClusterNodePoolRequestAutoScaling& operator=(CreateClusterNodePoolRequestAutoScaling &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipBandwidth_ != nullptr
        && this->eipInternetChargeType_ != nullptr && this->enable_ != nullptr && this->isBondEip_ != nullptr && this->maxInstances_ != nullptr && this->minInstances_ != nullptr
        && this->type_ != nullptr; };
    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int64_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0L) };
    inline CreateClusterNodePoolRequestAutoScaling& setEipBandwidth(int64_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // eipInternetChargeType Field Functions 
    bool hasEipInternetChargeType() const { return this->eipInternetChargeType_ != nullptr;};
    void deleteEipInternetChargeType() { this->eipInternetChargeType_ = nullptr;};
    inline string eipInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(eipInternetChargeType_, "") };
    inline CreateClusterNodePoolRequestAutoScaling& setEipInternetChargeType(string eipInternetChargeType) { DARABONBA_PTR_SET_VALUE(eipInternetChargeType_, eipInternetChargeType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateClusterNodePoolRequestAutoScaling& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isBondEip Field Functions 
    bool hasIsBondEip() const { return this->isBondEip_ != nullptr;};
    void deleteIsBondEip() { this->isBondEip_ = nullptr;};
    inline bool isBondEip() const { DARABONBA_PTR_GET_DEFAULT(isBondEip_, false) };
    inline CreateClusterNodePoolRequestAutoScaling& setIsBondEip(bool isBondEip) { DARABONBA_PTR_SET_VALUE(isBondEip_, isBondEip) };


    // maxInstances Field Functions 
    bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
    void deleteMaxInstances() { this->maxInstances_ = nullptr;};
    inline int64_t maxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
    inline CreateClusterNodePoolRequestAutoScaling& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline CreateClusterNodePoolRequestAutoScaling& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateClusterNodePoolRequestAutoScaling& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is deprecated.
    // 
    // The maximum bandwidth of the EIP. Unit: Mbit/s.
    // 
    // **
    // 
    // **Important** This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
    std::shared_ptr<int64_t> eipBandwidth_ = nullptr;
    // This parameter is deprecated.
    // 
    // The metering method of the EIP. Valid values:
    // 
    // *   `PayByBandwidth`: pay-by-bandwidth.
    // *   `PayByTraffic`: pay-by-data-transfer.
    // 
    // Default value: `PayByBandwidth`.
    // 
    // **
    // 
    // **Important** This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
    std::shared_ptr<string> eipInternetChargeType_ = nullptr;
    // Specifies whether to enable auto scaling for the node pool. Valid values:
    // 
    // *   `true`: enables auto scaling.
    // *   `false`: disables auto scaling. If you set this parameter to false, other parameters in the `auto_scaling` section do not take effect.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enable_ = nullptr;
    // This parameter is deprecated.
    // 
    // Specifies whether to associate an elastic IP address (EIP) with the node pool. Valid values:
    // 
    // *   `true`: associates an EIP with the node pool.
    // *   `false`: does not associate an EIP with the node pool.
    // 
    // Default value: `false`.
    // 
    // **
    // 
    // **Important** This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
    std::shared_ptr<bool> isBondEip_ = nullptr;
    // The maximum number to which the Elastic Compute Service (ECS) instances in the node pool can be scaled. The number of nodes in the node pool cannot be greater than this value. This parameter takes effect only when `enable` is set to true. Valid values: [min_instances, 2000]. Default value: 0.
    std::shared_ptr<int64_t> maxInstances_ = nullptr;
    // The minimum number to which the ECS instances in the node pool can be scaled. The number of nodes in the node pool cannot be smaller than this value. This parameter takes effect only when `enable` is set to true. Valid values: [0, max_instances]. Default value: 0.
    std::shared_ptr<int64_t> minInstances_ = nullptr;
    // The instance type that is used for auto scaling. This parameter takes effect only when `enable` is set to true. Valid values:
    // 
    // *   `cpu`: regular instance.
    // *   `gpu`: GPU-accelerated instance.
    // *   `gpushare`: shared GPU-accelerated instance.
    // *   `spot`: preemptible instance.
    // 
    // Default value: `cpu`.
    // 
    // >  You cannot modify this parameter after the node pool is created.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
