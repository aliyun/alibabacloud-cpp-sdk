// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSNETWORKINTERFACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSNETWORKINTERFACES_HPP_
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
  class DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
    };
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces(DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces &&) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& operator=(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& operator=(DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->ipv6AddressCount_ == nullptr && return this->networkInterfaceTrafficMode_ == nullptr && return this->securityGroupIds_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


  protected:
    // The ENI type. Valid values:
    // 
    // *   Primary: the primary ENI
    // *   Secondary: the secondary ENI
    std::shared_ptr<string> instanceType_ = nullptr;
    // The number of randomly generated IPv6 addresses that are allocated to the primary ENI.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: The TCP communication mode is used.
    // *   HighPerformance: The Elastic RDMA Interface (ERI) is enabled and the remote direct memory access (RDMA) communication mode is used.
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    // The IDs of the security groups to which the ENIs belong.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
