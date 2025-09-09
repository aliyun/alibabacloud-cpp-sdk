// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance &&) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& operator=(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& operator=(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPools_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr; };
    // addrPools Field Functions 
    bool hasAddrPools() const { return this->addrPools_ != nullptr;};
    void deleteAddrPools() { this->addrPools_ = nullptr;};
    inline const Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools & addrPools() const { DARABONBA_PTR_GET_CONST(addrPools_, Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools) };
    inline Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools addrPools() { DARABONBA_PTR_GET(addrPools_, Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& setAddrPools(const Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools & addrPools) { DARABONBA_PTR_SET_VALUE(addrPools_, addrPools) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& setAddrPools(Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools && addrPools) { DARABONBA_PTR_SET_RVALUE(addrPools_, addrPools) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The address pools.
    std::shared_ptr<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstanceAddrPools> addrPools_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
