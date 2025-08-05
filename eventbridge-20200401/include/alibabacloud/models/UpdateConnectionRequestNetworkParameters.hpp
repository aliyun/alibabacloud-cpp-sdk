// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTNETWORKPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTNETWORKPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateConnectionRequestNetworkParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequestNetworkParameters& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitcheId, vswitcheId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequestNetworkParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitcheId, vswitcheId_);
    };
    UpdateConnectionRequestNetworkParameters() = default ;
    UpdateConnectionRequestNetworkParameters(const UpdateConnectionRequestNetworkParameters &) = default ;
    UpdateConnectionRequestNetworkParameters(UpdateConnectionRequestNetworkParameters &&) = default ;
    UpdateConnectionRequestNetworkParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequestNetworkParameters() = default ;
    UpdateConnectionRequestNetworkParameters& operator=(const UpdateConnectionRequestNetworkParameters &) = default ;
    UpdateConnectionRequestNetworkParameters& operator=(UpdateConnectionRequestNetworkParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkType_ != nullptr
        && this->securityGroupId_ != nullptr && this->vpcId_ != nullptr && this->vswitcheId_ != nullptr; };
    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateConnectionRequestNetworkParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateConnectionRequestNetworkParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateConnectionRequestNetworkParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitcheId Field Functions 
    bool hasVswitcheId() const { return this->vswitcheId_ != nullptr;};
    void deleteVswitcheId() { this->vswitcheId_ = nullptr;};
    inline string vswitcheId() const { DARABONBA_PTR_GET_DEFAULT(vswitcheId_, "") };
    inline UpdateConnectionRequestNetworkParameters& setVswitcheId(string vswitcheId) { DARABONBA_PTR_SET_VALUE(vswitcheId_, vswitcheId) };


  protected:
    // *   PublicNetwork: the Internet.
    // *   PrivateNetwork: virtual private cloud (VPC).
    // 
    // >  If you set this parameter to PrivateNetwork, you must also configure VpcId, VswitchId, and SecurityGroupId.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkType_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitcheId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
