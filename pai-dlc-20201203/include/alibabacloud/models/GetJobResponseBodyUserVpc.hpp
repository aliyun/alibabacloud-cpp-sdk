// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYUSERVPC_HPP_
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
  class GetJobResponseBodyUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCidrs, extendedCidrs_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCidrs, extendedCidrs_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetJobResponseBodyUserVpc() = default ;
    GetJobResponseBodyUserVpc(const GetJobResponseBodyUserVpc &) = default ;
    GetJobResponseBodyUserVpc(GetJobResponseBodyUserVpc &&) = default ;
    GetJobResponseBodyUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyUserVpc() = default ;
    GetJobResponseBodyUserVpc& operator=(const GetJobResponseBodyUserVpc &) = default ;
    GetJobResponseBodyUserVpc& operator=(GetJobResponseBodyUserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && return this->extendedCidrs_ == nullptr && return this->securityGroupId_ == nullptr && return this->switchId_ == nullptr && return this->vpcId_ == nullptr; };
    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string defaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline GetJobResponseBodyUserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCidrs Field Functions 
    bool hasExtendedCidrs() const { return this->extendedCidrs_ != nullptr;};
    void deleteExtendedCidrs() { this->extendedCidrs_ = nullptr;};
    inline const vector<string> & extendedCidrs() const { DARABONBA_PTR_GET_CONST(extendedCidrs_, vector<string>) };
    inline vector<string> extendedCidrs() { DARABONBA_PTR_GET(extendedCidrs_, vector<string>) };
    inline GetJobResponseBodyUserVpc& setExtendedCidrs(const vector<string> & extendedCidrs) { DARABONBA_PTR_SET_VALUE(extendedCidrs_, extendedCidrs) };
    inline GetJobResponseBodyUserVpc& setExtendedCidrs(vector<string> && extendedCidrs) { DARABONBA_PTR_SET_RVALUE(extendedCidrs_, extendedCidrs) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetJobResponseBodyUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline GetJobResponseBodyUserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetJobResponseBodyUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The default router. This parameter is valid only for general-purpose computing resources. Valid values:
    // 
    // eth0: The default network interface is used to access the Internet through the public gateway. eth1: The user\\"s Elastic Network Interface is used to access the Internet through the private gateway.
    std::shared_ptr<string> defaultRoute_ = nullptr;
    // The extended CIDR block. Example: 192.168.0.1/24.
    std::shared_ptr<vector<string>> extendedCidrs_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> switchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
