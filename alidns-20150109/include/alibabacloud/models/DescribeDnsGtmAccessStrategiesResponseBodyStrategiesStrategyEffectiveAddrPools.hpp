// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYEFFECTIVEADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGIESRESPONSEBODYSTRATEGIESSTRATEGYEFFECTIVEADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveAddrPool, effectiveAddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveAddrPool, effectiveAddrPool_);
    };
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools(const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools(DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools &&) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools() = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools& operator=(const DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools &) = default ;
    DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools& operator=(DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveAddrPool_ == nullptr; };
    // effectiveAddrPool Field Functions 
    bool hasEffectiveAddrPool() const { return this->effectiveAddrPool_ != nullptr;};
    void deleteEffectiveAddrPool() { this->effectiveAddrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool> & effectiveAddrPool() const { DARABONBA_PTR_GET_CONST(effectiveAddrPool_, vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool>) };
    inline vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool> effectiveAddrPool() { DARABONBA_PTR_GET(effectiveAddrPool_, vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool>) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools& setEffectiveAddrPool(const vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool> & effectiveAddrPool) { DARABONBA_PTR_SET_VALUE(effectiveAddrPool_, effectiveAddrPool) };
    inline DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPools& setEffectiveAddrPool(vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool> && effectiveAddrPool) { DARABONBA_PTR_SET_RVALUE(effectiveAddrPool_, effectiveAddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategiesResponseBodyStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool>> effectiveAddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
