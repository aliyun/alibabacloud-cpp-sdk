// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTUSERVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateJobRequestUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateJobRequestUserVpc() = default ;
    CreateJobRequestUserVpc(const CreateJobRequestUserVpc &) = default ;
    CreateJobRequestUserVpc(CreateJobRequestUserVpc &&) = default ;
    CreateJobRequestUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestUserVpc() = default ;
    CreateJobRequestUserVpc& operator=(const CreateJobRequestUserVpc &) = default ;
    CreateJobRequestUserVpc& operator=(CreateJobRequestUserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && return this->extendedCIDRs_ == nullptr && return this->securityGroupId_ == nullptr && return this->switchId_ == nullptr && return this->vpcId_ == nullptr; };
    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string defaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline CreateJobRequestUserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCIDRs Field Functions 
    bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
    void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
    inline const vector<string> & extendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
    inline vector<string> extendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
    inline CreateJobRequestUserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
    inline CreateJobRequestUserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateJobRequestUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline CreateJobRequestUserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateJobRequestUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The default route. Default value: false. Valid values:
    // 
    // *   eth0: The default network interface is used to access the Internet through the public gateway.
    // *   eth1: The user\\"s elastic network interface (ENI) is used to access the Internet through the private gateway. For more information about the configuration method, see [Enable Internet access for a DSW instance by using a private Internet NAT gateway](https://help.aliyun.com/document_detail/2525343.html).
    std::shared_ptr<string> defaultRoute_ = nullptr;
    // The extended CIDR block.
    // 
    // *   If you leave the SwitchId and ExtendedCIDRs parameters empty, the system automatically obtains all CIDR blocks in a VPC.
    // *   If you configure the SwitchId and ExtendedCIDRs parameters, we recommend that you specify all CIDR blocks in a VPC.
    std::shared_ptr<vector<string>> extendedCIDRs_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The vSwitch ID. This parameter is optional.
    // 
    // *   If you leave this parameter empty, the system automatically selects a vSwitch based on the inventory status.
    // *   You can also specify a vSwitch ID.
    std::shared_ptr<string> switchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
