// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODYDEFAULTADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODYDEFAULTADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultAddrPool, defaultAddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultAddrPool, defaultAddrPool_);
    };
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools() = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools(const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools &) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools(DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools &&) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools() = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools& operator=(const DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools &) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools& operator=(DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultAddrPool_ == nullptr; };
    // defaultAddrPool Field Functions 
    bool hasDefaultAddrPool() const { return this->defaultAddrPool_ != nullptr;};
    void deleteDefaultAddrPool() { this->defaultAddrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool> & defaultAddrPool() const { DARABONBA_PTR_GET_CONST(defaultAddrPool_, vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool>) };
    inline vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool> defaultAddrPool() { DARABONBA_PTR_GET(defaultAddrPool_, vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool>) };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools& setDefaultAddrPool(const vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool> & defaultAddrPool) { DARABONBA_PTR_SET_VALUE(defaultAddrPool_, defaultAddrPool) };
    inline DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPools& setDefaultAddrPool(vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool> && defaultAddrPool) { DARABONBA_PTR_SET_RVALUE(defaultAddrPool_, defaultAddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategyResponseBodyDefaultAddrPoolsDefaultAddrPool>> defaultAddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
