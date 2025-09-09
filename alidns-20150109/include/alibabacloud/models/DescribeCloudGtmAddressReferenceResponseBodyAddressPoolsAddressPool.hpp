// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODYADDRESSPOOLSADDRESSPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODYADDRESSPOOLSADDRESSPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& obj) { 
      DARABONBA_PTR_TO_JSON(AddressLbStrategy, addressLbStrategy_);
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(AddressPoolName, addressPoolName_);
      DARABONBA_PTR_TO_JSON(AddressPoolType, addressPoolType_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceConfigs, instanceConfigs_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressLbStrategy, addressLbStrategy_);
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(AddressPoolName, addressPoolName_);
      DARABONBA_PTR_FROM_JSON(AddressPoolType, addressPoolType_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceConfigs, instanceConfigs_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
    };
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool() = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool(const DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool &) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool(DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool &&) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool() = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& operator=(const DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool &) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& operator=(DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressLbStrategy_ != nullptr
        && this->addressPoolId_ != nullptr && this->addressPoolName_ != nullptr && this->addressPoolType_ != nullptr && this->availableStatus_ != nullptr && this->enableStatus_ != nullptr
        && this->healthJudgement_ != nullptr && this->healthStatus_ != nullptr && this->instanceConfigs_ != nullptr && this->remark_ != nullptr && this->sequenceLbStrategyMode_ != nullptr; };
    // addressLbStrategy Field Functions 
    bool hasAddressLbStrategy() const { return this->addressLbStrategy_ != nullptr;};
    void deleteAddressLbStrategy() { this->addressLbStrategy_ = nullptr;};
    inline string addressLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressLbStrategy_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setAddressLbStrategy(string addressLbStrategy) { DARABONBA_PTR_SET_VALUE(addressLbStrategy_, addressLbStrategy) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string addressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // addressPoolName Field Functions 
    bool hasAddressPoolName() const { return this->addressPoolName_ != nullptr;};
    void deleteAddressPoolName() { this->addressPoolName_ = nullptr;};
    inline string addressPoolName() const { DARABONBA_PTR_GET_DEFAULT(addressPoolName_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setAddressPoolName(string addressPoolName) { DARABONBA_PTR_SET_VALUE(addressPoolName_, addressPoolName) };


    // addressPoolType Field Functions 
    bool hasAddressPoolType() const { return this->addressPoolType_ != nullptr;};
    void deleteAddressPoolType() { this->addressPoolType_ = nullptr;};
    inline string addressPoolType() const { DARABONBA_PTR_GET_DEFAULT(addressPoolType_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setAddressPoolType(string addressPoolType) { DARABONBA_PTR_SET_VALUE(addressPoolType_, addressPoolType) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string availableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string healthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceConfigs Field Functions 
    bool hasInstanceConfigs() const { return this->instanceConfigs_ != nullptr;};
    void deleteInstanceConfigs() { this->instanceConfigs_ = nullptr;};
    inline const Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs & instanceConfigs() const { DARABONBA_PTR_GET_CONST(instanceConfigs_, Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs) };
    inline Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs instanceConfigs() { DARABONBA_PTR_GET(instanceConfigs_, Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setInstanceConfigs(const Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs & instanceConfigs) { DARABONBA_PTR_SET_VALUE(instanceConfigs_, instanceConfigs) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setInstanceConfigs(Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs && instanceConfigs) { DARABONBA_PTR_SET_RVALUE(instanceConfigs_, instanceConfigs) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string sequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPool& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


  protected:
    // Load balancing policy among addresses in the address pool:
    // - round_robin: Round-robin, for any source of DNS resolution requests, all addresses are returned, with a rotation sort applied to all addresses each time.
    // - sequence: Sequential, for any source of DNS resolution requests, returns the address with the smaller sequence number (the sequence number indicates the priority of address return, with smaller numbers having higher priority). If the address with the smaller sequence number is unavailable, the next address with a smaller sequence number is returned.
    // - weight: Weighted, supports setting different weight values for each address, realizing the return of addresses according to the ratio of weight for DNS query resolutions.
    // - source_nearest: Source-nearest, i.e., intelligent resolution function, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing nearby.
    std::shared_ptr<string> addressLbStrategy_ = nullptr;
    // The ID of the address pool.
    std::shared_ptr<string> addressPoolId_ = nullptr;
    // Address pool name.
    std::shared_ptr<string> addressPoolName_ = nullptr;
    // Address pool type:
    // - IPv4
    // - IPv6
    // - domain
    std::shared_ptr<string> addressPoolType_ = nullptr;
    // Address pool availability status:
    // - available
    // - unavailable
    std::shared_ptr<string> availableStatus_ = nullptr;
    // Address pool status:
    // - enable: Enabled status
    // - disable: Disabled status
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The condition for determining the health status of the address pool. Valid values:
    // 
    // *   any_ok: At least one address in the address pool is available.
    // *   p30_ok: At least 30% of the addresses in the address pool are available.
    // *   p50_ok: At least 50% of the addresses in the address pool are available.
    // *   p70_ok: At least 70% of the addresses in the address pool are available.
    // *   all_ok: All addresses in the address pool are available.
    std::shared_ptr<string> healthJudgement_ = nullptr;
    // The health state of the address pool. Valid values:
    // 
    // *   ok: The health state of the address pool is normal and all addresses that are referenced by the address pool are available.
    // *   ok_alert: The health state of the address pool is warning and some of the addresses that are referenced by the address pool are unavailable. However, the address pool is deemed normal. In this case, only the available addresses are returned for DNS requests.
    // *   exceptional: The health state of the address pool is abnormal and some or all of the addresses that are referenced by the address pool are unavailable. In this case, the address pool is deemed abnormal.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The instances that reference the address pool.
    std::shared_ptr<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs> instanceConfigs_ = nullptr;
    // Remarks for the address pool.
    std::shared_ptr<string> remark_ = nullptr;
    // Load balancing policy between addresses in sequential mode during the recovery of preceding resources service mode:
    // - preemptive: Preemption mode, where upon recovery of preceding resources, priority is given to using addresses with smaller sequence numbers;
    // - non_preemptive: Non-preemption mode, where upon recovery of preceding resources, the current address continues to be used;
    std::shared_ptr<string> sequenceLbStrategyMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
