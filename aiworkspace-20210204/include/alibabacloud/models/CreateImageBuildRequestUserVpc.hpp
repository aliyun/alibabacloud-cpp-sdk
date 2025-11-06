// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTUSERVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequestUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequestUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCidrs, extendedCidrs_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequestUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCidrs, extendedCidrs_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateImageBuildRequestUserVpc() = default ;
    CreateImageBuildRequestUserVpc(const CreateImageBuildRequestUserVpc &) = default ;
    CreateImageBuildRequestUserVpc(CreateImageBuildRequestUserVpc &&) = default ;
    CreateImageBuildRequestUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequestUserVpc() = default ;
    CreateImageBuildRequestUserVpc& operator=(const CreateImageBuildRequestUserVpc &) = default ;
    CreateImageBuildRequestUserVpc& operator=(CreateImageBuildRequestUserVpc &&) = default ;
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
    inline CreateImageBuildRequestUserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCidrs Field Functions 
    bool hasExtendedCidrs() const { return this->extendedCidrs_ != nullptr;};
    void deleteExtendedCidrs() { this->extendedCidrs_ = nullptr;};
    inline const vector<string> & extendedCidrs() const { DARABONBA_PTR_GET_CONST(extendedCidrs_, vector<string>) };
    inline vector<string> extendedCidrs() { DARABONBA_PTR_GET(extendedCidrs_, vector<string>) };
    inline CreateImageBuildRequestUserVpc& setExtendedCidrs(const vector<string> & extendedCidrs) { DARABONBA_PTR_SET_VALUE(extendedCidrs_, extendedCidrs) };
    inline CreateImageBuildRequestUserVpc& setExtendedCidrs(vector<string> && extendedCidrs) { DARABONBA_PTR_SET_RVALUE(extendedCidrs_, extendedCidrs) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateImageBuildRequestUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline CreateImageBuildRequestUserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateImageBuildRequestUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // 默认路由网卡出口
    std::shared_ptr<string> defaultRoute_ = nullptr;
    // 扩展网段
    std::shared_ptr<vector<string>> extendedCidrs_ = nullptr;
    // 安全组 ID
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // 交换机 ID
    std::shared_ptr<string> switchId_ = nullptr;
    // 专有网络 ID
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
