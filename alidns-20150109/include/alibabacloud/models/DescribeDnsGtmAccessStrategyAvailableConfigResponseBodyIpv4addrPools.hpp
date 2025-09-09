// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYIPV4ADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYIPV4ADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4AddrPool, ipv4AddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4AddrPool, ipv4AddrPool_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv4AddrPool_ != nullptr; };
    // ipv4AddrPool Field Functions 
    bool hasIpv4AddrPool() const { return this->ipv4AddrPool_ != nullptr;};
    void deleteIpv4AddrPool() { this->ipv4AddrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool> & ipv4AddrPool() const { DARABONBA_PTR_GET_CONST(ipv4AddrPool_, vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool>) };
    inline vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool> ipv4AddrPool() { DARABONBA_PTR_GET(ipv4AddrPool_, vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool>) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools& setIpv4AddrPool(const vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool> & ipv4AddrPool) { DARABONBA_PTR_SET_VALUE(ipv4AddrPool_, ipv4AddrPool) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools& setIpv4AddrPool(vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool> && ipv4AddrPool) { DARABONBA_PTR_SET_RVALUE(ipv4AddrPool_, ipv4AddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPoolsIpv4AddrPool>> ipv4AddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
