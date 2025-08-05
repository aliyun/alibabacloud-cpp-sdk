// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSNETWORKPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSNETWORKPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBodyDataConnectionsNetworkParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBodyDataConnectionsNetworkParameters& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitcheId, vswitcheId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBodyDataConnectionsNetworkParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitcheId, vswitcheId_);
    };
    GetConnectionResponseBodyDataConnectionsNetworkParameters() = default ;
    GetConnectionResponseBodyDataConnectionsNetworkParameters(const GetConnectionResponseBodyDataConnectionsNetworkParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsNetworkParameters(GetConnectionResponseBodyDataConnectionsNetworkParameters &&) = default ;
    GetConnectionResponseBodyDataConnectionsNetworkParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBodyDataConnectionsNetworkParameters() = default ;
    GetConnectionResponseBodyDataConnectionsNetworkParameters& operator=(const GetConnectionResponseBodyDataConnectionsNetworkParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsNetworkParameters& operator=(GetConnectionResponseBodyDataConnectionsNetworkParameters &&) = default ;
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
    inline GetConnectionResponseBodyDataConnectionsNetworkParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetConnectionResponseBodyDataConnectionsNetworkParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetConnectionResponseBodyDataConnectionsNetworkParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitcheId Field Functions 
    bool hasVswitcheId() const { return this->vswitcheId_ != nullptr;};
    void deleteVswitcheId() { this->vswitcheId_ = nullptr;};
    inline string vswitcheId() const { DARABONBA_PTR_GET_DEFAULT(vswitcheId_, "") };
    inline GetConnectionResponseBodyDataConnectionsNetworkParameters& setVswitcheId(string vswitcheId) { DARABONBA_PTR_SET_VALUE(vswitcheId_, vswitcheId) };


  protected:
    // *   PublicNetwork: the Internet.
    // *   PrivateNetwork: virtual private cloud (VPC).
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
