// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGFULLINFORESPONSEBODYADDRESSPOOLSADDRESSPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGFULLINFORESPONSEBODYADDRESSPOOLSADDRESSPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses.hpp>
#include <alibabacloud/models/DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& obj) { 
      DARABONBA_PTR_TO_JSON(AddressLbStrategy, addressLbStrategy_);
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(AddressPoolName, addressPoolName_);
      DARABONBA_PTR_TO_JSON(AddressPoolType, addressPoolType_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_TO_JSON(SeqNonPreemptiveSchedule, seqNonPreemptiveSchedule_);
      DARABONBA_PTR_TO_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(WeightValue, weightValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressLbStrategy, addressLbStrategy_);
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(AddressPoolName, addressPoolName_);
      DARABONBA_PTR_FROM_JSON(AddressPoolType, addressPoolType_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthJudgement, healthJudgement_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_FROM_JSON(SeqNonPreemptiveSchedule, seqNonPreemptiveSchedule_);
      DARABONBA_PTR_FROM_JSON(SequenceLbStrategyMode, sequenceLbStrategyMode_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(WeightValue, weightValue_);
    };
    DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool() = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool(const DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool &) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool(DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool &&) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool() = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& operator=(const DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool &) = default ;
    DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& operator=(DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressLbStrategy_ != nullptr
        && this->addressPoolId_ != nullptr && this->addressPoolName_ != nullptr && this->addressPoolType_ != nullptr && this->addresses_ != nullptr && this->availableStatus_ != nullptr
        && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->enableStatus_ != nullptr && this->healthJudgement_ != nullptr && this->healthStatus_ != nullptr
        && this->requestSource_ != nullptr && this->seqNonPreemptiveSchedule_ != nullptr && this->sequenceLbStrategyMode_ != nullptr && this->serialNumber_ != nullptr && this->updateTime_ != nullptr
        && this->updateTimestamp_ != nullptr && this->weightValue_ != nullptr; };
    // addressLbStrategy Field Functions 
    bool hasAddressLbStrategy() const { return this->addressLbStrategy_ != nullptr;};
    void deleteAddressLbStrategy() { this->addressLbStrategy_ = nullptr;};
    inline string addressLbStrategy() const { DARABONBA_PTR_GET_DEFAULT(addressLbStrategy_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAddressLbStrategy(string addressLbStrategy) { DARABONBA_PTR_SET_VALUE(addressLbStrategy_, addressLbStrategy) };


    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string addressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // addressPoolName Field Functions 
    bool hasAddressPoolName() const { return this->addressPoolName_ != nullptr;};
    void deleteAddressPoolName() { this->addressPoolName_ = nullptr;};
    inline string addressPoolName() const { DARABONBA_PTR_GET_DEFAULT(addressPoolName_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAddressPoolName(string addressPoolName) { DARABONBA_PTR_SET_VALUE(addressPoolName_, addressPoolName) };


    // addressPoolType Field Functions 
    bool hasAddressPoolType() const { return this->addressPoolType_ != nullptr;};
    void deleteAddressPoolType() { this->addressPoolType_ = nullptr;};
    inline string addressPoolType() const { DARABONBA_PTR_GET_DEFAULT(addressPoolType_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAddressPoolType(string addressPoolType) { DARABONBA_PTR_SET_VALUE(addressPoolType_, addressPoolType) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses) };
    inline Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses addresses() { DARABONBA_PTR_GET(addresses_, Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAddresses(const Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAddresses(Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string availableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthJudgement Field Functions 
    bool hasHealthJudgement() const { return this->healthJudgement_ != nullptr;};
    void deleteHealthJudgement() { this->healthJudgement_ = nullptr;};
    inline string healthJudgement() const { DARABONBA_PTR_GET_DEFAULT(healthJudgement_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setHealthJudgement(string healthJudgement) { DARABONBA_PTR_SET_VALUE(healthJudgement_, healthJudgement) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline const Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource & requestSource() const { DARABONBA_PTR_GET_CONST(requestSource_, Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource) };
    inline Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource requestSource() { DARABONBA_PTR_GET(requestSource_, Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setRequestSource(const Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource & requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setRequestSource(Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource && requestSource) { DARABONBA_PTR_SET_RVALUE(requestSource_, requestSource) };


    // seqNonPreemptiveSchedule Field Functions 
    bool hasSeqNonPreemptiveSchedule() const { return this->seqNonPreemptiveSchedule_ != nullptr;};
    void deleteSeqNonPreemptiveSchedule() { this->seqNonPreemptiveSchedule_ = nullptr;};
    inline bool seqNonPreemptiveSchedule() const { DARABONBA_PTR_GET_DEFAULT(seqNonPreemptiveSchedule_, false) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setSeqNonPreemptiveSchedule(bool seqNonPreemptiveSchedule) { DARABONBA_PTR_SET_VALUE(seqNonPreemptiveSchedule_, seqNonPreemptiveSchedule) };


    // sequenceLbStrategyMode Field Functions 
    bool hasSequenceLbStrategyMode() const { return this->sequenceLbStrategyMode_ != nullptr;};
    void deleteSequenceLbStrategyMode() { this->sequenceLbStrategyMode_ = nullptr;};
    inline string sequenceLbStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(sequenceLbStrategyMode_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setSequenceLbStrategyMode(string sequenceLbStrategyMode) { DARABONBA_PTR_SET_VALUE(sequenceLbStrategyMode_, sequenceLbStrategyMode) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline int32_t serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // weightValue Field Functions 
    bool hasWeightValue() const { return this->weightValue_ != nullptr;};
    void deleteWeightValue() { this->weightValue_ = nullptr;};
    inline int32_t weightValue() const { DARABONBA_PTR_GET_DEFAULT(weightValue_, 0) };
    inline DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPool& setWeightValue(int32_t weightValue) { DARABONBA_PTR_SET_VALUE(weightValue_, weightValue) };


  protected:
    // Load balancing policy among addresses in the address pool:
    // - round_robin: Round-robin, for any source of DNS resolution requests, returns all addresses and rotates their order for each request.
    // - sequence: Sequential, for any source of DNS resolution requests, returns the address with the smaller sequence number (the sequence number indicates the priority of the address return, with smaller numbers having higher priority). If the address with the smaller sequence number is unavailable, the next address with a smaller sequence number is returned.
    // - weight: Weighted, supports setting different weight values for each address to realize returning addresses according to the weight ratio for resolution queries.
    // - source_nearest: Source-nearest, i.e., intelligent resolution function, where GTM can return different addresses based on the source of different DNS resolution requests, achieving the effect of users accessing nearby.
    std::shared_ptr<string> addressLbStrategy_ = nullptr;
    // The ID of the address pool. This ID uniquely identifies the address pool.
    std::shared_ptr<string> addressPoolId_ = nullptr;
    // Address pool name.
    std::shared_ptr<string> addressPoolName_ = nullptr;
    // Address pool type:
    // - IPv4
    // - IPv6
    // - domain
    std::shared_ptr<string> addressPoolType_ = nullptr;
    // The addresses.
    std::shared_ptr<Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolAddresses> addresses_ = nullptr;
    // The availability state of the address pool. Valid values:
    // 
    // *   Available
    // *   unavailable
    std::shared_ptr<string> availableStatus_ = nullptr;
    // Address pool creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Address pool creation time (timestamp).
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The enabling state of the address pool. Valid values:
    // 
    // *   enable
    // *   disable
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The condition for determining the health state of the address pool. Valid values:
    // 
    // *   any_ok: At least one address in the address pool is available.
    // *   p30_ok: At least 30% of the addresses in the address pool are available.
    // *   p50_ok: At least 50% of the addresses in the address pool are available.
    // *   p70_ok: At least 70% of the addresses in the address pool are available.
    // *   all_ok: All addresses in the address pool are available.
    std::shared_ptr<string> healthJudgement_ = nullptr;
    // Address pool health status:
    // - ok: Normal, all addresses referenced by the address pool are available.
    // - ok_alert: Warning, some addresses referenced by the address pool are unavailable, but the address pool status is deemed normal. In the warning state, available address pools are resolved normally, while unavailable ones stop resolving.
    // - exceptional: Abnormal, some or all of the addresses referenced by the address pool are unavailable, and the address pool status is determined to be abnormal.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // Parse the list of request sources.
    std::shared_ptr<Models::DescribeCloudGtmInstanceConfigFullInfoResponseBodyAddressPoolsAddressPoolRequestSource> requestSource_ = nullptr;
    // Indicates whether it is a sequential (non-preemptive) scheduling object for hybrid cloud management scenarios: 
    // - true: yes 
    // - false: no
    std::shared_ptr<bool> seqNonPreemptiveSchedule_ = nullptr;
    // The mode used if the address with the smallest sequence number is recovered. This parameter is required only when AddressLbStrategy is set to sequence. Valid values:
    // 
    // *   preemptive: The address with the smallest sequence number is preferentially used if this address is recovered.
    // *   non_preemptive: The current address is still used even if the address with the smallest sequence number is recovered.
    std::shared_ptr<string> sequenceLbStrategyMode_ = nullptr;
    // Sequence number. For any parsing request from any source, the address pool with the smaller sequence number is returned (the sequence number indicates the priority of the address pool returned, with smaller numbers having higher priority).
    std::shared_ptr<int32_t> serialNumber_ = nullptr;
    // Last modification time of the address pool.
    std::shared_ptr<string> updateTime_ = nullptr;
    // Last modification time of the address pool (timestamp).
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // Weight value (an integer between 1 and 100, inclusive), allowing different weight values to be set for each address pool, enabling resolution queries to return address pools according to the weighted ratio.
    std::shared_ptr<int32_t> weightValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
