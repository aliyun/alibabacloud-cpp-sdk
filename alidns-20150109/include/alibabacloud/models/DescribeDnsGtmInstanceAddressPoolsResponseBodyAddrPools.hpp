// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESPONSEBODYADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLSRESPONSEBODYADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPool, addrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPool, addrPool_);
    };
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools() = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools(const DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools &) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools(DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools &&) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools() = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools& operator=(const DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools &) = default ;
    DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools& operator=(DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPool_ != nullptr; };
    // addrPool Field Functions 
    bool hasAddrPool() const { return this->addrPool_ != nullptr;};
    void deleteAddrPool() { this->addrPool_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool> & addrPool() const { DARABONBA_PTR_GET_CONST(addrPool_, vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool>) };
    inline vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool> addrPool() { DARABONBA_PTR_GET(addrPool_, vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool>) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools& setAddrPool(const vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool> & addrPool) { DARABONBA_PTR_SET_VALUE(addrPool_, addrPool) };
    inline DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPools& setAddrPool(vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool> && addrPool) { DARABONBA_PTR_SET_RVALUE(addrPool_, addrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmInstanceAddressPoolsResponseBodyAddrPoolsAddrPool>> addrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
