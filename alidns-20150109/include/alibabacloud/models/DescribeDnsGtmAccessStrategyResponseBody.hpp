// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyResponseBodyLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolGroupStatus, defaultAddrPoolGroupStatus_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolType, defaultAddrPoolType_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPools, defaultAddrPools_);
      DARABONBA_PTR_TO_JSON(DefaultAvailableAddrNum, defaultAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(DefaultLatencyOptimization, defaultLatencyOptimization_);
      DARABONBA_PTR_TO_JSON(DefaultLbaStrategy, defaultLbaStrategy_);
      DARABONBA_PTR_TO_JSON(DefaultMaxReturnAddrNum, defaultMaxReturnAddrNum_);
      DARABONBA_PTR_TO_JSON(DefaultMinAvailableAddrNum, defaultMinAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolGroupStatus, failoverAddrPoolGroupStatus_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolType, failoverAddrPoolType_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPools, failoverAddrPools_);
      DARABONBA_PTR_TO_JSON(FailoverAvailableAddrNum, failoverAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(FailoverLatencyOptimization, failoverLatencyOptimization_);
      DARABONBA_PTR_TO_JSON(FailoverLbaStrategy, failoverLbaStrategy_);
      DARABONBA_PTR_TO_JSON(FailoverMaxReturnAddrNum, failoverMaxReturnAddrNum_);
      DARABONBA_PTR_TO_JSON(FailoverMinAvailableAddrNum, failoverMinAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolGroupStatus, defaultAddrPoolGroupStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolType, defaultAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPools, defaultAddrPools_);
      DARABONBA_PTR_FROM_JSON(DefaultAvailableAddrNum, defaultAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(DefaultLatencyOptimization, defaultLatencyOptimization_);
      DARABONBA_PTR_FROM_JSON(DefaultLbaStrategy, defaultLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(DefaultMaxReturnAddrNum, defaultMaxReturnAddrNum_);
      DARABONBA_PTR_FROM_JSON(DefaultMinAvailableAddrNum, defaultMinAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolGroupStatus, failoverAddrPoolGroupStatus_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolType, failoverAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPools, failoverAddrPools_);
      DARABONBA_PTR_FROM_JSON(FailoverAvailableAddrNum, failoverAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(FailoverLatencyOptimization, failoverLatencyOptimization_);
      DARABONBA_PTR_FROM_JSON(FailoverLbaStrategy, failoverLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(FailoverMaxReturnAddrNum, failoverMaxReturnAddrNum_);
      DARABONBA_PTR_FROM_JSON(FailoverMinAvailableAddrNum, failoverMinAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    DescribeDnsGtmAccessStrategyResponseBody() = default ;
    DescribeDnsGtmAccessStrategyResponseBody(const DescribeDnsGtmAccessStrategyResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyResponseBody(DescribeDnsGtmAccessStrategyResponseBody &&) = default ;
    DescribeDnsGtmAccessStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyResponseBody() = default ;
    DescribeDnsGtmAccessStrategyResponseBody& operator=(const DescribeDnsGtmAccessStrategyResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyResponseBody& operator=(DescribeDnsGtmAccessStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessMode_ != nullptr
        && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->defaultAddrPoolGroupStatus_ != nullptr && this->defaultAddrPoolType_ != nullptr && this->defaultAddrPools_ != nullptr
        && this->defaultAvailableAddrNum_ != nullptr && this->defaultLatencyOptimization_ != nullptr && this->defaultLbaStrategy_ != nullptr && this->defaultMaxReturnAddrNum_ != nullptr && this->defaultMinAvailableAddrNum_ != nullptr
        && this->effectiveAddrPoolGroupType_ != nullptr && this->failoverAddrPoolGroupStatus_ != nullptr && this->failoverAddrPoolType_ != nullptr && this->failoverAddrPools_ != nullptr && this->failoverAvailableAddrNum_ != nullptr
        && this->failoverLatencyOptimization_ != nullptr && this->failoverLbaStrategy_ != nullptr && this->failoverMaxReturnAddrNum_ != nullptr && this->failoverMinAvailableAddrNum_ != nullptr && this->instanceId_ != nullptr
        && this->lines_ != nullptr && this->requestId_ != nullptr && this->strategyId_ != nullptr && this->strategyMode_ != nullptr && this->strategyName_ != nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // defaultAddrPoolGroupStatus Field Functions 
    bool hasDefaultAddrPoolGroupStatus() const { return this->defaultAddrPoolGroupStatus_ != nullptr;};
    void deleteDefaultAddrPoolGroupStatus() { this->defaultAddrPoolGroupStatus_ = nullptr;};
    inline string defaultAddrPoolGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolGroupStatus_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPoolGroupStatus(string defaultAddrPoolGroupStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolGroupStatus_, defaultAddrPoolGroupStatus) };


    // defaultAddrPoolType Field Functions 
    bool hasDefaultAddrPoolType() const { return this->defaultAddrPoolType_ != nullptr;};
    void deleteDefaultAddrPoolType() { this->defaultAddrPoolType_ = nullptr;};
    inline string defaultAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolType_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPoolType(string defaultAddrPoolType) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolType_, defaultAddrPoolType) };


    // defaultAddrPools Field Functions 
    bool hasDefaultAddrPools() const { return this->defaultAddrPools_ != nullptr;};
    void deleteDefaultAddrPools() { this->defaultAddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools & defaultAddrPools() const { DARABONBA_PTR_GET_CONST(defaultAddrPools_, DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools defaultAddrPools() { DARABONBA_PTR_GET(defaultAddrPools_, DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPools(const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools & defaultAddrPools) { DARABONBA_PTR_SET_VALUE(defaultAddrPools_, defaultAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAddrPools(DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools && defaultAddrPools) { DARABONBA_PTR_SET_RVALUE(defaultAddrPools_, defaultAddrPools) };


    // defaultAvailableAddrNum Field Functions 
    bool hasDefaultAvailableAddrNum() const { return this->defaultAvailableAddrNum_ != nullptr;};
    void deleteDefaultAvailableAddrNum() { this->defaultAvailableAddrNum_ = nullptr;};
    inline int32_t defaultAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultAvailableAddrNum(int32_t defaultAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultAvailableAddrNum_, defaultAvailableAddrNum) };


    // defaultLatencyOptimization Field Functions 
    bool hasDefaultLatencyOptimization() const { return this->defaultLatencyOptimization_ != nullptr;};
    void deleteDefaultLatencyOptimization() { this->defaultLatencyOptimization_ = nullptr;};
    inline string defaultLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(defaultLatencyOptimization_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultLatencyOptimization(string defaultLatencyOptimization) { DARABONBA_PTR_SET_VALUE(defaultLatencyOptimization_, defaultLatencyOptimization) };


    // defaultLbaStrategy Field Functions 
    bool hasDefaultLbaStrategy() const { return this->defaultLbaStrategy_ != nullptr;};
    void deleteDefaultLbaStrategy() { this->defaultLbaStrategy_ = nullptr;};
    inline string defaultLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(defaultLbaStrategy_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultLbaStrategy(string defaultLbaStrategy) { DARABONBA_PTR_SET_VALUE(defaultLbaStrategy_, defaultLbaStrategy) };


    // defaultMaxReturnAddrNum Field Functions 
    bool hasDefaultMaxReturnAddrNum() const { return this->defaultMaxReturnAddrNum_ != nullptr;};
    void deleteDefaultMaxReturnAddrNum() { this->defaultMaxReturnAddrNum_ = nullptr;};
    inline int32_t defaultMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMaxReturnAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultMaxReturnAddrNum(int32_t defaultMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMaxReturnAddrNum_, defaultMaxReturnAddrNum) };


    // defaultMinAvailableAddrNum Field Functions 
    bool hasDefaultMinAvailableAddrNum() const { return this->defaultMinAvailableAddrNum_ != nullptr;};
    void deleteDefaultMinAvailableAddrNum() { this->defaultMinAvailableAddrNum_ = nullptr;};
    inline int32_t defaultMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(defaultMinAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setDefaultMinAvailableAddrNum(int32_t defaultMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(defaultMinAvailableAddrNum_, defaultMinAvailableAddrNum) };


    // effectiveAddrPoolGroupType Field Functions 
    bool hasEffectiveAddrPoolGroupType() const { return this->effectiveAddrPoolGroupType_ != nullptr;};
    void deleteEffectiveAddrPoolGroupType() { this->effectiveAddrPoolGroupType_ = nullptr;};
    inline string effectiveAddrPoolGroupType() const { DARABONBA_PTR_GET_DEFAULT(effectiveAddrPoolGroupType_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setEffectiveAddrPoolGroupType(string effectiveAddrPoolGroupType) { DARABONBA_PTR_SET_VALUE(effectiveAddrPoolGroupType_, effectiveAddrPoolGroupType) };


    // failoverAddrPoolGroupStatus Field Functions 
    bool hasFailoverAddrPoolGroupStatus() const { return this->failoverAddrPoolGroupStatus_ != nullptr;};
    void deleteFailoverAddrPoolGroupStatus() { this->failoverAddrPoolGroupStatus_ = nullptr;};
    inline string failoverAddrPoolGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolGroupStatus_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPoolGroupStatus(string failoverAddrPoolGroupStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolGroupStatus_, failoverAddrPoolGroupStatus) };


    // failoverAddrPoolType Field Functions 
    bool hasFailoverAddrPoolType() const { return this->failoverAddrPoolType_ != nullptr;};
    void deleteFailoverAddrPoolType() { this->failoverAddrPoolType_ = nullptr;};
    inline string failoverAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolType_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPoolType(string failoverAddrPoolType) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolType_, failoverAddrPoolType) };


    // failoverAddrPools Field Functions 
    bool hasFailoverAddrPools() const { return this->failoverAddrPools_ != nullptr;};
    void deleteFailoverAddrPools() { this->failoverAddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools & failoverAddrPools() const { DARABONBA_PTR_GET_CONST(failoverAddrPools_, DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools failoverAddrPools() { DARABONBA_PTR_GET(failoverAddrPools_, DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPools(const DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools & failoverAddrPools) { DARABONBA_PTR_SET_VALUE(failoverAddrPools_, failoverAddrPools) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAddrPools(DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools && failoverAddrPools) { DARABONBA_PTR_SET_RVALUE(failoverAddrPools_, failoverAddrPools) };


    // failoverAvailableAddrNum Field Functions 
    bool hasFailoverAvailableAddrNum() const { return this->failoverAvailableAddrNum_ != nullptr;};
    void deleteFailoverAvailableAddrNum() { this->failoverAvailableAddrNum_ = nullptr;};
    inline int32_t failoverAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverAvailableAddrNum(int32_t failoverAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverAvailableAddrNum_, failoverAvailableAddrNum) };


    // failoverLatencyOptimization Field Functions 
    bool hasFailoverLatencyOptimization() const { return this->failoverLatencyOptimization_ != nullptr;};
    void deleteFailoverLatencyOptimization() { this->failoverLatencyOptimization_ = nullptr;};
    inline string failoverLatencyOptimization() const { DARABONBA_PTR_GET_DEFAULT(failoverLatencyOptimization_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverLatencyOptimization(string failoverLatencyOptimization) { DARABONBA_PTR_SET_VALUE(failoverLatencyOptimization_, failoverLatencyOptimization) };


    // failoverLbaStrategy Field Functions 
    bool hasFailoverLbaStrategy() const { return this->failoverLbaStrategy_ != nullptr;};
    void deleteFailoverLbaStrategy() { this->failoverLbaStrategy_ = nullptr;};
    inline string failoverLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(failoverLbaStrategy_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverLbaStrategy(string failoverLbaStrategy) { DARABONBA_PTR_SET_VALUE(failoverLbaStrategy_, failoverLbaStrategy) };


    // failoverMaxReturnAddrNum Field Functions 
    bool hasFailoverMaxReturnAddrNum() const { return this->failoverMaxReturnAddrNum_ != nullptr;};
    void deleteFailoverMaxReturnAddrNum() { this->failoverMaxReturnAddrNum_ = nullptr;};
    inline int32_t failoverMaxReturnAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMaxReturnAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverMaxReturnAddrNum(int32_t failoverMaxReturnAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMaxReturnAddrNum_, failoverMaxReturnAddrNum) };


    // failoverMinAvailableAddrNum Field Functions 
    bool hasFailoverMinAvailableAddrNum() const { return this->failoverMinAvailableAddrNum_ != nullptr;};
    void deleteFailoverMinAvailableAddrNum() { this->failoverMinAvailableAddrNum_ = nullptr;};
    inline int32_t failoverMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(failoverMinAvailableAddrNum_, 0) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setFailoverMinAvailableAddrNum(int32_t failoverMinAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(failoverMinAvailableAddrNum_, failoverMinAvailableAddrNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyResponseBodyLines & lines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeDnsGtmAccessStrategyResponseBodyLines) };
    inline DescribeDnsGtmAccessStrategyResponseBodyLines lines() { DARABONBA_PTR_GET(lines_, DescribeDnsGtmAccessStrategyResponseBodyLines) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setLines(const DescribeDnsGtmAccessStrategyResponseBodyLines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeDnsGtmAccessStrategyResponseBody& setLines(DescribeDnsGtmAccessStrategyResponseBodyLines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string strategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeDnsGtmAccessStrategyResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The primary/secondary switchover policy for address pool groups. Valid values:
    // 
    // *   AUTO: performs automatic switchover between the primary and secondary address pool groups upon failures.
    // *   DEFAULT: uses the primary address pool group.
    // *   FAILOVER: uses the secondary address pool group.
    std::shared_ptr<string> accessMode_ = nullptr;
    // The time when the access policy was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp that indicates when the access policy was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The status of the primary address pool group. Valid values:
    // 
    // *   AVAILABLE: available
    // *   NOT_AVAILABLE: unavailable
    std::shared_ptr<string> defaultAddrPoolGroupStatus_ = nullptr;
    // The type of the primary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    std::shared_ptr<string> defaultAddrPoolType_ = nullptr;
    // The address pools in the primary address pool group.
    std::shared_ptr<DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools> defaultAddrPools_ = nullptr;
    // The number of available addresses in the primary address pool.
    std::shared_ptr<int32_t> defaultAvailableAddrNum_ = nullptr;
    // Indicates whether scheduling optimization for latency resolution was enabled for the primary address pool group. Valid values:
    // 
    // *   OPEN: enabled
    // *   CLOSE: disabled
    std::shared_ptr<string> defaultLatencyOptimization_ = nullptr;
    // The load balancing policy of the primary address pool group. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    std::shared_ptr<string> defaultLbaStrategy_ = nullptr;
    // The maximum number of addresses returned from the primary address pool group.
    std::shared_ptr<int32_t> defaultMaxReturnAddrNum_ = nullptr;
    // The minimum number of available addresses in the primary address pool group.
    std::shared_ptr<int32_t> defaultMinAvailableAddrNum_ = nullptr;
    // The type of the active address pool group. Valid values:
    // 
    // *   DEFAULT: the primary address pool group
    // *   FAILOVER: the secondary address pool group
    std::shared_ptr<string> effectiveAddrPoolGroupType_ = nullptr;
    // The status of the secondary address pool group. Valid values:
    // 
    // *   AVAILABLE: available
    // *   NOT_AVAILABLE: unavailable
    std::shared_ptr<string> failoverAddrPoolGroupStatus_ = nullptr;
    // The type of the secondary address pool. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    std::shared_ptr<string> failoverAddrPoolType_ = nullptr;
    // The address pools in the secondary address pool group.
    std::shared_ptr<DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools> failoverAddrPools_ = nullptr;
    // The number of available addresses in the secondary address pool.
    std::shared_ptr<int32_t> failoverAvailableAddrNum_ = nullptr;
    // Indicates whether scheduling optimization for latency resolution was enabled for the secondary address pool group. Valid values:
    // 
    // *   OPEN: enabled
    // *   CLOSE: disabled
    std::shared_ptr<string> failoverLatencyOptimization_ = nullptr;
    // The load balancing policy of the secondary address pool group. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    std::shared_ptr<string> failoverLbaStrategy_ = nullptr;
    // The maximum number of addresses returned from the secondary address pool group.
    std::shared_ptr<int32_t> failoverMaxReturnAddrNum_ = nullptr;
    // The minimum number of available addresses in the secondary address pool group.
    std::shared_ptr<int32_t> failoverMinAvailableAddrNum_ = nullptr;
    // The ID of the associated instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The source regions.
    std::shared_ptr<DescribeDnsGtmAccessStrategyResponseBodyLines> lines_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the access policy.
    std::shared_ptr<string> strategyId_ = nullptr;
    // The type of the access policy. Valid values:
    // 
    // *   GEO: geographical location-based
    // *   LATENCY: latency-based
    std::shared_ptr<string> strategyMode_ = nullptr;
    // The name of the access policy.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
