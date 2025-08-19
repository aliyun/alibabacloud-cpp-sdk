// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYAUTOSCALING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYAUTOSCALING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyAutoScaling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyAutoScaling& obj) { 
      DARABONBA_PTR_TO_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_TO_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_TO_JSON(min_instances, minInstances_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyAutoScaling& obj) { 
      DARABONBA_PTR_FROM_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_FROM_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_FROM_JSON(min_instances, minInstances_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeClusterNodePoolDetailResponseBodyAutoScaling() = default ;
    DescribeClusterNodePoolDetailResponseBodyAutoScaling(const DescribeClusterNodePoolDetailResponseBodyAutoScaling &) = default ;
    DescribeClusterNodePoolDetailResponseBodyAutoScaling(DescribeClusterNodePoolDetailResponseBodyAutoScaling &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyAutoScaling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyAutoScaling() = default ;
    DescribeClusterNodePoolDetailResponseBodyAutoScaling& operator=(const DescribeClusterNodePoolDetailResponseBodyAutoScaling &) = default ;
    DescribeClusterNodePoolDetailResponseBodyAutoScaling& operator=(DescribeClusterNodePoolDetailResponseBodyAutoScaling &&) = default ;
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
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setEipBandwidth(int64_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // eipInternetChargeType Field Functions 
    bool hasEipInternetChargeType() const { return this->eipInternetChargeType_ != nullptr;};
    void deleteEipInternetChargeType() { this->eipInternetChargeType_ = nullptr;};
    inline string eipInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(eipInternetChargeType_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setEipInternetChargeType(string eipInternetChargeType) { DARABONBA_PTR_SET_VALUE(eipInternetChargeType_, eipInternetChargeType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isBondEip Field Functions 
    bool hasIsBondEip() const { return this->isBondEip_ != nullptr;};
    void deleteIsBondEip() { this->isBondEip_ = nullptr;};
    inline bool isBondEip() const { DARABONBA_PTR_GET_DEFAULT(isBondEip_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setIsBondEip(bool isBondEip) { DARABONBA_PTR_SET_VALUE(isBondEip_, isBondEip) };


    // maxInstances Field Functions 
    bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
    void deleteMaxInstances() { this->maxInstances_ = nullptr;};
    inline int64_t maxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyAutoScaling& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The maximum bandwidth of the elastic IP address (EIP).
    std::shared_ptr<int64_t> eipBandwidth_ = nullptr;
    // The metering method of the EIP. Valid values:
    // 
    // *   `PayByBandwidth`: pay-by-bandwidth.
    // *   `PayByTraffic`: pay-by-data-transfer.
    std::shared_ptr<string> eipInternetChargeType_ = nullptr;
    // Indicates whether auto scaling is enabled. Valid values:
    // 
    // *   `true`: auto scaling is enabled.
    // *   `false`: auto scaling is disabled. If this parameter is set to false, other parameters in the `auto_scaling` section do not take effect.
    std::shared_ptr<bool> enable_ = nullptr;
    // Indicates whether an EIP is associated with the node pool. Valid values:
    // 
    // *   `true`: An EIP is associated with the node pool.
    // *   `false`: No EIP is associated with the node pool.
    std::shared_ptr<bool> isBondEip_ = nullptr;
    // The maximum number of Elastic Compute Service (ECS) instances that can be created in the node pool.
    std::shared_ptr<int64_t> maxInstances_ = nullptr;
    // The minimum number of ECS instances that must be kept in the node pool.
    std::shared_ptr<int64_t> minInstances_ = nullptr;
    // The instance types that can be used for the auto scaling of the node pool. Valid values:
    // 
    // *   `cpu`: regular instance.
    // *   `gpu`: GPU-accelerated instance.
    // *   `gpushare`: shared GPU-accelerated instance.
    // *   `spot`: preemptible instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
