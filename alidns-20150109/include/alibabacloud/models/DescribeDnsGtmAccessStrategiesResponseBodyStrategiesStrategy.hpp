// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
      DARABONBA_PTR_TO_JSON(EffectiveAddrPoolType, effectiveAddrPoolType_);
      DARABONBA_PTR_TO_JSON(EffectiveAddrPools, effectiveAddrPools_);
      DARABONBA_PTR_TO_JSON(EffectiveLbaStrategy, effectiveLbaStrategy_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(EffectiveAddrPoolGroupType, effectiveAddrPoolGroupType_);
      DARABONBA_PTR_FROM_JSON(EffectiveAddrPoolType, effectiveAddrPoolType_);
      DARABONBA_PTR_FROM_JSON(EffectiveAddrPools, effectiveAddrPools_);
      DARABONBA_PTR_FROM_JSON(EffectiveLbaStrategy, effectiveLbaStrategy_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy(const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy(DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy &&) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& operator=(const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& operator=(DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->effectiveAddrPoolGroupType_ != nullptr && this->effectiveAddrPoolType_ != nullptr && this->effectiveAddrPools_ != nullptr && this->effectiveLbaStrategy_ != nullptr
        && this->lines_ != nullptr && this->strategyId_ != nullptr && this->strategyName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // effectiveAddrPoolGroupType Field Functions 
    bool hasEffectiveAddrPoolGroupType() const { return this->effectiveAddrPoolGroupType_ != nullptr;};
    void deleteEffectiveAddrPoolGroupType() { this->effectiveAddrPoolGroupType_ = nullptr;};
    inline string effectiveAddrPoolGroupType() const { DARABONBA_PTR_GET_DEFAULT(effectiveAddrPoolGroupType_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setEffectiveAddrPoolGroupType(string effectiveAddrPoolGroupType) { DARABONBA_PTR_SET_VALUE(effectiveAddrPoolGroupType_, effectiveAddrPoolGroupType) };


    // effectiveAddrPoolType Field Functions 
    bool hasEffectiveAddrPoolType() const { return this->effectiveAddrPoolType_ != nullptr;};
    void deleteEffectiveAddrPoolType() { this->effectiveAddrPoolType_ = nullptr;};
    inline string effectiveAddrPoolType() const { DARABONBA_PTR_GET_DEFAULT(effectiveAddrPoolType_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setEffectiveAddrPoolType(string effectiveAddrPoolType) { DARABONBA_PTR_SET_VALUE(effectiveAddrPoolType_, effectiveAddrPoolType) };


    // effectiveAddrPools Field Functions 
    bool hasEffectiveAddrPools() const { return this->effectiveAddrPools_ != nullptr;};
    void deleteEffectiveAddrPools() { this->effectiveAddrPools_ = nullptr;};
    inline const Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools & effectiveAddrPools() const { DARABONBA_PTR_GET_CONST(effectiveAddrPools_, Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools) };
    inline Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools effectiveAddrPools() { DARABONBA_PTR_GET(effectiveAddrPools_, Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setEffectiveAddrPools(const Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools & effectiveAddrPools) { DARABONBA_PTR_SET_VALUE(effectiveAddrPools_, effectiveAddrPools) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setEffectiveAddrPools(Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools && effectiveAddrPools) { DARABONBA_PTR_SET_RVALUE(effectiveAddrPools_, effectiveAddrPools) };


    // effectiveLbaStrategy Field Functions 
    bool hasEffectiveLbaStrategy() const { return this->effectiveLbaStrategy_ != nullptr;};
    void deleteEffectiveLbaStrategy() { this->effectiveLbaStrategy_ = nullptr;};
    inline string effectiveLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(effectiveLbaStrategy_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setEffectiveLbaStrategy(string effectiveLbaStrategy) { DARABONBA_PTR_SET_VALUE(effectiveLbaStrategy_, effectiveLbaStrategy) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines & lines() const { DARABONBA_PTR_GET_CONST(lines_, Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines) };
    inline Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines lines() { DARABONBA_PTR_GET(lines_, Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setLines(const Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setLines(Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The time when the access policy was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp that indicates when the access policy was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The type of the active address pool group. Valid values:
    // 
    // *   DEFAULT: the primary address pool group
    // *   FAILOVER: the secondary address pool group
    std::shared_ptr<string> effectiveAddrPoolGroupType_ = nullptr;
    // The type of the active address pools. Valid values:
    // 
    // *   IPV4
    // *   IPV6
    // *   DOMAIN
    std::shared_ptr<string> effectiveAddrPoolType_ = nullptr;
    // The active address pool groups.
    std::shared_ptr<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools> effectiveAddrPools_ = nullptr;
    // The load balancing policy of the active address pool group. Data is returned when StrategyMode is set to GEO. Valid values: 
    // 
    // - ALL_RR: returns all addresses.
    // - RATIO: returns addresses by weight.
    std::shared_ptr<string> effectiveLbaStrategy_ = nullptr;
    // The source regions. Data is returned when StrategyMode is set to GEO. Valid values:
    std::shared_ptr<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyLines> lines_ = nullptr;
    // The ID of the access policy.
    std::shared_ptr<string> strategyId_ = nullptr;
    // The name of the access policy.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
