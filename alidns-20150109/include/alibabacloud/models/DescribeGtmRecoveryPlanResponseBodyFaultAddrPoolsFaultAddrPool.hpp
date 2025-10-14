// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODYFAULTADDRPOOLSFAULTADDRPOOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANRESPONSEBODYFAULTADDRPOOLSFAULTADDRPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(AddrPoolName, addrPoolName_);
      DARABONBA_PTR_TO_JSON(Addrs, addrs_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(AddrPoolName, addrPoolName_);
      DARABONBA_PTR_FROM_JSON(Addrs, addrs_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool() = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool(const DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool &) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool(DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool &&) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool() = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& operator=(const DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool &) = default ;
    DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& operator=(DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addrPoolId_ == nullptr
        && return this->addrPoolName_ == nullptr && return this->addrs_ == nullptr && return this->instanceId_ == nullptr; };
    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // addrPoolName Field Functions 
    bool hasAddrPoolName() const { return this->addrPoolName_ != nullptr;};
    void deleteAddrPoolName() { this->addrPoolName_ = nullptr;};
    inline string addrPoolName() const { DARABONBA_PTR_GET_DEFAULT(addrPoolName_, "") };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& setAddrPoolName(string addrPoolName) { DARABONBA_PTR_SET_VALUE(addrPoolName_, addrPoolName) };


    // addrs Field Functions 
    bool hasAddrs() const { return this->addrs_ != nullptr;};
    void deleteAddrs() { this->addrs_ = nullptr;};
    inline const Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs & addrs() const { DARABONBA_PTR_GET_CONST(addrs_, Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs) };
    inline Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs addrs() { DARABONBA_PTR_GET(addrs_, Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs) };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& setAddrs(const Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs & addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& setAddrs(Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs && addrs) { DARABONBA_PTR_SET_RVALUE(addrs_, addrs) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPool& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The address pool ID.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The address pool name.
    std::shared_ptr<string> addrPoolName_ = nullptr;
    std::shared_ptr<Models::DescribeGtmRecoveryPlanResponseBodyFaultAddrPoolsFaultAddrPoolAddrs> addrs_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
