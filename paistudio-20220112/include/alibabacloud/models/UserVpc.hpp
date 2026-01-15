// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERVPC_HPP_
#define ALIBABACLOUD_MODELS_USERVPC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ForwardInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultForwardInfo, defaultForwardInfo_);
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultForwardInfo, defaultForwardInfo_);
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UserVpc() = default ;
    UserVpc(const UserVpc &) = default ;
    UserVpc(UserVpc &&) = default ;
    UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserVpc() = default ;
    UserVpc& operator=(const UserVpc &) = default ;
    UserVpc& operator=(UserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultForwardInfo_ == nullptr
        && this->defaultRoute_ == nullptr && this->extendedCIDRs_ == nullptr && this->roleArn_ == nullptr && this->securityGroupId_ == nullptr && this->switchId_ == nullptr
        && this->vpcId_ == nullptr; };
    // defaultForwardInfo Field Functions 
    bool hasDefaultForwardInfo() const { return this->defaultForwardInfo_ != nullptr;};
    void deleteDefaultForwardInfo() { this->defaultForwardInfo_ = nullptr;};
    inline const ForwardInfo & getDefaultForwardInfo() const { DARABONBA_PTR_GET_CONST(defaultForwardInfo_, ForwardInfo) };
    inline ForwardInfo getDefaultForwardInfo() { DARABONBA_PTR_GET(defaultForwardInfo_, ForwardInfo) };
    inline UserVpc& setDefaultForwardInfo(const ForwardInfo & defaultForwardInfo) { DARABONBA_PTR_SET_VALUE(defaultForwardInfo_, defaultForwardInfo) };
    inline UserVpc& setDefaultForwardInfo(ForwardInfo && defaultForwardInfo) { DARABONBA_PTR_SET_RVALUE(defaultForwardInfo_, defaultForwardInfo) };


    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCIDRs Field Functions 
    bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
    void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
    inline const vector<string> & getExtendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
    inline vector<string> getExtendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
    inline UserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
    inline UserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline UserVpc& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline UserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<ForwardInfo> defaultForwardInfo_ {};
    shared_ptr<string> defaultRoute_ {};
    shared_ptr<vector<string>> extendedCIDRs_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> switchId_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
