// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODYVPCFIREWALLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODYVPCFIREWALLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig.hpp>
#include <alibabacloud/models/DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig.hpp>
#include <alibabacloud/models/DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenListResponseBodyVpcFirewalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenListResponseBodyVpcFirewalls& obj) { 
      DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenName, cenName_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(IpsConfig, ipsConfig_);
      DARABONBA_PTR_TO_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenListResponseBodyVpcFirewalls& obj) { 
      DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenName, cenName_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(IpsConfig, ipsConfig_);
      DARABONBA_PTR_FROM_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVpcFirewallCenListResponseBodyVpcFirewalls() = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewalls(const DescribeVpcFirewallCenListResponseBodyVpcFirewalls &) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewalls(DescribeVpcFirewallCenListResponseBodyVpcFirewalls &&) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewalls() = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewalls& operator=(const DescribeVpcFirewallCenListResponseBodyVpcFirewalls &) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewalls& operator=(DescribeVpcFirewallCenListResponseBodyVpcFirewalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclConfig_ == nullptr
        && return this->cenId_ == nullptr && return this->cenName_ == nullptr && return this->connectType_ == nullptr && return this->firewallSwitchStatus_ == nullptr && return this->ipsConfig_ == nullptr
        && return this->localVpc_ == nullptr && return this->memberUid_ == nullptr && return this->precheckStatus_ == nullptr && return this->regionStatus_ == nullptr && return this->resultCode_ == nullptr
        && return this->vpcFirewallId_ == nullptr && return this->vpcFirewallName_ == nullptr; };
    // aclConfig Field Functions 
    bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
    void deleteAclConfig() { this->aclConfig_ = nullptr;};
    inline const Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig & aclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig) };
    inline Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig aclConfig() { DARABONBA_PTR_GET(aclConfig_, Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setAclConfig(const Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setAclConfig(Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenName Field Functions 
    bool hasCenName() const { return this->cenName_ != nullptr;};
    void deleteCenName() { this->cenName_ = nullptr;};
    inline string cenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // ipsConfig Field Functions 
    bool hasIpsConfig() const { return this->ipsConfig_ != nullptr;};
    void deleteIpsConfig() { this->ipsConfig_ = nullptr;};
    inline const Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig & ipsConfig() const { DARABONBA_PTR_GET_CONST(ipsConfig_, Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig) };
    inline Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig ipsConfig() { DARABONBA_PTR_GET(ipsConfig_, Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setIpsConfig(const Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig & ipsConfig) { DARABONBA_PTR_SET_VALUE(ipsConfig_, ipsConfig) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setIpsConfig(Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig && ipsConfig) { DARABONBA_PTR_SET_RVALUE(ipsConfig_, ipsConfig) };


    // localVpc Field Functions 
    bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
    void deleteLocalVpc() { this->localVpc_ = nullptr;};
    inline const Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc & localVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc) };
    inline Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc localVpc() { DARABONBA_PTR_GET(localVpc_, Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setLocalVpc(const Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setLocalVpc(Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline string precheckStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckStatus_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setPrecheckStatus(string precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };


    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline string regionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewalls& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // ACL engine mode.
    std::shared_ptr<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsAclConfig> aclConfig_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The name of the CEN instance.
    std::shared_ptr<string> cenName_ = nullptr;
    // The connection type of the VPC firewall. The value is fixed as cen, which indicates a CEN instance.
    std::shared_ptr<string> connectType_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: The VPC firewall is enabled.
    // *   **closed**: The VPC firewall is disabled.
    // *   **notconfigured**: The VPC firewall is not configured.
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The intrusion prevention system (IPS) configurations.
    std::shared_ptr<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsIpsConfig> ipsConfig_ = nullptr;
    // The details about the VPC.
    std::shared_ptr<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc> localVpc_ = nullptr;
    // The UID of the member that is manged by your Alibaba Cloud account. The member is also an Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // Indicates whether the VPC firewall can be automatically enabled to protect VPC traffic based on route learning. Valid values:
    // 
    // *   **passed**: The VPC firewall can be automatically enabled.
    // *   **failed**: The VPC firewall cannot be automatically enabled.
    // *   **unknown**: The VPC firewall is in an unknown state.
    std::shared_ptr<string> precheckStatus_ = nullptr;
    // Indicates whether you can create a VPC firewall in a specified region. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    std::shared_ptr<string> regionStatus_ = nullptr;
    // The result code of the operation that creates the VPC firewall. Valid values:
    // 
    // *   **Unauthorized**: Cloud Firewall is not authorized to access the VPC for which the VPC firewall is created, and the VPC firewall cannot be created.
    // *   **RegionDisable**: VPC Firewall is not supported in the region of the VPC for which the VPC firewall is created, and the VPC firewall cannot be created.
    // *   **OpsDisable**: You are not allowed to create the VPC firewall.
    // *   **VbrNotSupport**: The VPC firewall cannot be created for a VBR that is attached to the CEN instance.
    // *   Empty string: You can create a VPC firewall for the network instance.
    std::shared_ptr<string> resultCode_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    // The instance name of the VPC firewall.
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
