// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODYFAILOVERADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYRESPONSEBODYFAILOVERADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverAddrPool, failoverAddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverAddrPool, failoverAddrPool_);
    };
    DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools() = default ;
    DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools(const DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools &) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools(DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools &&) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools() = default ;
    DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools& operator=(const DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools &) = default ;
    DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools& operator=(DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failoverAddrPool_ != nullptr; };
    // failoverAddrPool Field Functions 
    bool hasFailoverAddrPool() const { return this->failoverAddrPool_ != nullptr;};
    void deleteFailoverAddrPool() { this->failoverAddrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool> & failoverAddrPool() const { DARABONBA_PTR_GET_CONST(failoverAddrPool_, vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool>) };
    inline vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool> failoverAddrPool() { DARABONBA_PTR_GET(failoverAddrPool_, vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool>) };
    inline DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools& setFailoverAddrPool(const vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool> & failoverAddrPool) { DARABONBA_PTR_SET_VALUE(failoverAddrPool_, failoverAddrPool) };
    inline DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPools& setFailoverAddrPool(vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool> && failoverAddrPool) { DARABONBA_PTR_SET_RVALUE(failoverAddrPool_, failoverAddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategyResponseBodyFailoverAddrPoolsFailoverAddrPool>> failoverAddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
