// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYIPV6ADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYIPV6ADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6AddrPool, ipv6AddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6AddrPool, ipv6AddrPool_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6AddrPool_ == nullptr; };
    // ipv6AddrPool Field Functions 
    bool hasIpv6AddrPool() const { return this->ipv6AddrPool_ != nullptr;};
    void deleteIpv6AddrPool() { this->ipv6AddrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool> & ipv6AddrPool() const { DARABONBA_PTR_GET_CONST(ipv6AddrPool_, vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool>) };
    inline vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool> ipv6AddrPool() { DARABONBA_PTR_GET(ipv6AddrPool_, vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool>) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools& setIpv6AddrPool(const vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool> & ipv6AddrPool) { DARABONBA_PTR_SET_VALUE(ipv6AddrPool_, ipv6AddrPool) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools& setIpv6AddrPool(vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool> && ipv6AddrPool) { DARABONBA_PTR_SET_RVALUE(ipv6AddrPool_, ipv6AddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPoolsIpv6AddrPool>> ipv6AddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
