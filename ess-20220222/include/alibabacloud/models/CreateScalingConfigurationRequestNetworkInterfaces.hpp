// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTNETWORKINTERFACES_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTNETWORKINTERFACES_HPP_
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
  class CreateScalingConfigurationRequestNetworkInterfaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestNetworkInterfaces& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestNetworkInterfaces& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    CreateScalingConfigurationRequestNetworkInterfaces() = default ;
    CreateScalingConfigurationRequestNetworkInterfaces(const CreateScalingConfigurationRequestNetworkInterfaces &) = default ;
    CreateScalingConfigurationRequestNetworkInterfaces(CreateScalingConfigurationRequestNetworkInterfaces &&) = default ;
    CreateScalingConfigurationRequestNetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestNetworkInterfaces() = default ;
    CreateScalingConfigurationRequestNetworkInterfaces& operator=(const CreateScalingConfigurationRequestNetworkInterfaces &) = default ;
    CreateScalingConfigurationRequestNetworkInterfaces& operator=(CreateScalingConfigurationRequestNetworkInterfaces &&) = default ;
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
    inline CreateScalingConfigurationRequestNetworkInterfaces& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateScalingConfigurationRequestNetworkInterfaces& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline CreateScalingConfigurationRequestNetworkInterfaces& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateScalingConfigurationRequestNetworkInterfaces& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateScalingConfigurationRequestNetworkInterfaces& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
