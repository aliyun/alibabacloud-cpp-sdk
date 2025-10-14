// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYADDRPOOLSADDRPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYADDRPOOLSADDRPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(AddrPoolName, addrPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(AddrPoolName, addrPoolName_);
    };
    DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool(const DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool(DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool &&) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool& operator=(const DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool& operator=(DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addrPoolId_ == nullptr
        && return this->addrPoolName_ == nullptr; };
    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // addrPoolName Field Functions 
    bool hasAddrPoolName() const { return this->addrPoolName_ != nullptr;};
    void deleteAddrPoolName() { this->addrPoolName_ = nullptr;};
    inline string addrPoolName() const { DARABONBA_PTR_GET_DEFAULT(addrPoolName_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPoolsAddrPool& setAddrPoolName(string addrPoolName) { DARABONBA_PTR_SET_VALUE(addrPoolName_, addrPoolName) };


  protected:
    // The ID of the address pool.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The name of the address pool.
    std::shared_ptr<string> addrPoolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
