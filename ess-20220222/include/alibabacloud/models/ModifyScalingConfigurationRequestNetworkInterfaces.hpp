// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTNETWORKINTERFACES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTNETWORKINTERFACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationRequestNetworkInterfaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequestNetworkInterfaces& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequestNetworkInterfaces& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    ModifyScalingConfigurationRequestNetworkInterfaces() = default ;
    ModifyScalingConfigurationRequestNetworkInterfaces(const ModifyScalingConfigurationRequestNetworkInterfaces &) = default ;
    ModifyScalingConfigurationRequestNetworkInterfaces(ModifyScalingConfigurationRequestNetworkInterfaces &&) = default ;
    ModifyScalingConfigurationRequestNetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequestNetworkInterfaces() = default ;
    ModifyScalingConfigurationRequestNetworkInterfaces& operator=(const ModifyScalingConfigurationRequestNetworkInterfaces &) = default ;
    ModifyScalingConfigurationRequestNetworkInterfaces& operator=(ModifyScalingConfigurationRequestNetworkInterfaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->ipv6AddressCount_ != nullptr && this->networkInterfaceTrafficMode_ != nullptr && this->securityGroupIds_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyScalingConfigurationRequestNetworkInterfaces& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline ModifyScalingConfigurationRequestNetworkInterfaces& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline ModifyScalingConfigurationRequestNetworkInterfaces& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ModifyScalingConfigurationRequestNetworkInterfaces& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ModifyScalingConfigurationRequestNetworkInterfaces& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    // The ENI type. If you specify this parameter, you must use NetworkInterfaces to specify a primary ENI. In addition, you cannot specify SecurityGroupId or SecurityGroupIds. Valid values:
    // 
    // *   Primary: the primary ENI.
    // *   Secondary: the secondary ENI.
    // 
    // Default value: Secondary.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The number of randomly generated IPv6 addresses that you want to allocate to the primary ENI. Before you specify this parameter, take note of the following items:
    // 
    // This parameter takes effect only if you set NetworkInterface.InstanceType to Primary. If you set NetworkInterface.InstanceType to Secondary or leave it empty, you cannot specify this parameter.
    // 
    // After you specify this parameter, you can no longer specify Ipv6AddressCount.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: uses the TCP communication mode.
    // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
    // 
    // Default value: Standard.
    // 
    // >  The number of ERIs on an instance cannot exceed the maximum number of ERIs supported by the instance type. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    // The IDs of the security groups to which you want to assign the ENI.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
