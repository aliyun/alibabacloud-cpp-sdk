// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODYINSTANCESINSTANCEADDRPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODYINSTANCESINSTANCEADDRPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPool, addrPool_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPool, addrPool_);
    };
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools &&) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools& operator=(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools& operator=(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPool_ != nullptr; };
    // addrPool Field Functions 
    bool hasAddrPool() const { return this->addrPool_ != nullptr;};
    void deleteAddrPool() { this->addrPool_ = nullptr;};
    inline const vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool> & addrPool() const { DARABONBA_PTR_GET_CONST(addrPool_, vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool>) };
    inline vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool> addrPool() { DARABONBA_PTR_GET(addrPool_, vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool>) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools& setAddrPool(const vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool> & addrPool) { DARABONBA_PTR_SET_VALUE(addrPool_, addrPool) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools& setAddrPool(vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool> && addrPool) { DARABONBA_PTR_SET_RVALUE(addrPool_, addrPool) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPoolsAddrPool>> addrPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
