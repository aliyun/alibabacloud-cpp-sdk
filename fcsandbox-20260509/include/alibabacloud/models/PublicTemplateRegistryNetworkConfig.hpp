// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATEREGISTRYNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATEREGISTRYNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateRegistryNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateRegistryNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateRegistryNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    PublicTemplateRegistryNetworkConfig() = default ;
    PublicTemplateRegistryNetworkConfig(const PublicTemplateRegistryNetworkConfig &) = default ;
    PublicTemplateRegistryNetworkConfig(PublicTemplateRegistryNetworkConfig &&) = default ;
    PublicTemplateRegistryNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateRegistryNetworkConfig() = default ;
    PublicTemplateRegistryNetworkConfig& operator=(const PublicTemplateRegistryNetworkConfig &) = default ;
    PublicTemplateRegistryNetworkConfig& operator=(PublicTemplateRegistryNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline PublicTemplateRegistryNetworkConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline PublicTemplateRegistryNetworkConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline PublicTemplateRegistryNetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the security group where the image repository resides.
    shared_ptr<string> securityGroupId_ {};
    // The ID of the vSwitch where the image repository resides.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC where the image repository resides.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
