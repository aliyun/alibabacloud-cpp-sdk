// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSAUTOSCALING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSAUTOSCALING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& obj) { 
      DARABONBA_PTR_TO_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_TO_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_TO_JSON(min_instances, minInstances_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& obj) { 
      DARABONBA_PTR_FROM_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_FROM_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_FROM_JSON(min_instances, minInstances_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling(const DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling(DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling &&) = default ;
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
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setEipBandwidth(int64_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // eipInternetChargeType Field Functions 
    bool hasEipInternetChargeType() const { return this->eipInternetChargeType_ != nullptr;};
    void deleteEipInternetChargeType() { this->eipInternetChargeType_ = nullptr;};
    inline string eipInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(eipInternetChargeType_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setEipInternetChargeType(string eipInternetChargeType) { DARABONBA_PTR_SET_VALUE(eipInternetChargeType_, eipInternetChargeType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isBondEip Field Functions 
    bool hasIsBondEip() const { return this->isBondEip_ != nullptr;};
    void deleteIsBondEip() { this->isBondEip_ = nullptr;};
    inline bool isBondEip() const { DARABONBA_PTR_GET_DEFAULT(isBondEip_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setIsBondEip(bool isBondEip) { DARABONBA_PTR_SET_VALUE(isBondEip_, isBondEip) };


    // maxInstances Field Functions 
    bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
    void deleteMaxInstances() { this->maxInstances_ = nullptr;};
    inline int64_t maxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The maximum bandwidth of the elastic IP address (EIP).
    // 
    // Valid values: 1 to 100. Unit: Mbit/s.
    std::shared_ptr<int64_t> eipBandwidth_ = nullptr;
    // The billing method of the EIP. Valid values:
    // 
    // *   `PayByBandwidth`: pay-by-bandwidth.
    // *   `PayByTraffic`: pay-by-data-transfer.
    std::shared_ptr<string> eipInternetChargeType_ = nullptr;
    // Indicates whether auto scaling is enabled. Valid values:
    // 
    // *   `true`: Auto scaling is enabled for the node pool. When the capacity planning of the cluster cannot meet the requirements of pod scheduling, ACK automatically scales out nodes based on the configured minimum and maximum number of instances. Node instant scaling is enabled by default for clusters that run Kubernetes 1.24 or later. Node auto scaling is enabled for clusters that run Kubernetes 1.24 and earlier. For more information, see [Node auto scaling](https://help.aliyun.com/document_detail/2746785.html).
    // *   `false`: does not enable auto scaling. ACK adjusts the number of nodes in the node pool based on the value of the Expected Nodes parameter. The number of nodes is always the same as the value of the Expected Nodes parameter.
    // 
    // If you set this parameter to false, other parameters of `auto_scaling` do not take effect.
    std::shared_ptr<bool> enable_ = nullptr;
    // Specifies whether to associate an EIP with the node pool. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> isBondEip_ = nullptr;
    // The maximum number of scalable instances in the node pool. Your existing instances are not included.
    std::shared_ptr<int64_t> maxInstances_ = nullptr;
    // The minimum number of scalable instances in the node pool, excluding your existing instances.
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
