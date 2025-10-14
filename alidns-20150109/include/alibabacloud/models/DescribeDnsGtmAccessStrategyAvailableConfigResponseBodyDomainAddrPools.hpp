// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYDOMAINADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYDOMAINADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(DomainAddrPool, domainAddrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainAddrPool, domainAddrPool_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainAddrPool_ == nullptr; };
    // domainAddrPool Field Functions 
    bool hasDomainAddrPool() const { return this->domainAddrPool_ != nullptr;};
    void deleteDomainAddrPool() { this->domainAddrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool> & domainAddrPool() const { DARABONBA_PTR_GET_CONST(domainAddrPool_, vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool>) };
    inline vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool> domainAddrPool() { DARABONBA_PTR_GET(domainAddrPool_, vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool>) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools& setDomainAddrPool(const vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool> & domainAddrPool) { DARABONBA_PTR_SET_VALUE(domainAddrPool_, domainAddrPool) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools& setDomainAddrPool(vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool> && domainAddrPool) { DARABONBA_PTR_SET_RVALUE(domainAddrPool_, domainAddrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPoolsDomainAddrPool>> domainAddrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
