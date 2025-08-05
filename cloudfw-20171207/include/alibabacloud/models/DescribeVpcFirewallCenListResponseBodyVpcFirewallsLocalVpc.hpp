// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODYVPCFIREWALLSLOCALVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODYVPCFIREWALLSLOCALVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationStatus, authorizationStatus_);
      DARABONBA_PTR_TO_JSON(DefendCidrList, defendCidrList_);
      DARABONBA_PTR_TO_JSON(ManualVSwitchId, manualVSwitchId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_TO_JSON(SupportManualMode, supportManualMode_);
      DARABONBA_PTR_TO_JSON(TransitRouterType, transitRouterType_);
      DARABONBA_PTR_TO_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationStatus, authorizationStatus_);
      DARABONBA_PTR_FROM_JSON(DefendCidrList, defendCidrList_);
      DARABONBA_PTR_FROM_JSON(ManualVSwitchId, manualVSwitchId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_FROM_JSON(SupportManualMode, supportManualMode_);
      DARABONBA_PTR_FROM_JSON(TransitRouterType, transitRouterType_);
      DARABONBA_PTR_FROM_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc() = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc(const DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc &) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc(DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc &&) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc() = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& operator=(const DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc &) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& operator=(DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationStatus_ != nullptr
        && this->defendCidrList_ != nullptr && this->manualVSwitchId_ != nullptr && this->networkInstanceId_ != nullptr && this->networkInstanceName_ != nullptr && this->networkInstanceType_ != nullptr
        && this->ownerId_ != nullptr && this->regionNo_ != nullptr && this->routeMode_ != nullptr && this->supportManualMode_ != nullptr && this->transitRouterType_ != nullptr
        && this->vpcCidrTableList_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // authorizationStatus Field Functions 
    bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
    void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
    inline string authorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setAuthorizationStatus(string authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


    // defendCidrList Field Functions 
    bool hasDefendCidrList() const { return this->defendCidrList_ != nullptr;};
    void deleteDefendCidrList() { this->defendCidrList_ = nullptr;};
    inline const vector<string> & defendCidrList() const { DARABONBA_PTR_GET_CONST(defendCidrList_, vector<string>) };
    inline vector<string> defendCidrList() { DARABONBA_PTR_GET(defendCidrList_, vector<string>) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setDefendCidrList(const vector<string> & defendCidrList) { DARABONBA_PTR_SET_VALUE(defendCidrList_, defendCidrList) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setDefendCidrList(vector<string> && defendCidrList) { DARABONBA_PTR_SET_RVALUE(defendCidrList_, defendCidrList) };


    // manualVSwitchId Field Functions 
    bool hasManualVSwitchId() const { return this->manualVSwitchId_ != nullptr;};
    void deleteManualVSwitchId() { this->manualVSwitchId_ = nullptr;};
    inline string manualVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(manualVSwitchId_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setManualVSwitchId(string manualVSwitchId) { DARABONBA_PTR_SET_VALUE(manualVSwitchId_, manualVSwitchId) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // networkInstanceName Field Functions 
    bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
    void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
    inline string networkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


    // networkInstanceType Field Functions 
    bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
    void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
    inline string networkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string routeMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // supportManualMode Field Functions 
    bool hasSupportManualMode() const { return this->supportManualMode_ != nullptr;};
    void deleteSupportManualMode() { this->supportManualMode_ = nullptr;};
    inline string supportManualMode() const { DARABONBA_PTR_GET_DEFAULT(supportManualMode_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setSupportManualMode(string supportManualMode) { DARABONBA_PTR_SET_VALUE(supportManualMode_, supportManualMode) };


    // transitRouterType Field Functions 
    bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
    void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
    inline string transitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


    // vpcCidrTableList Field Functions 
    bool hasVpcCidrTableList() const { return this->vpcCidrTableList_ != nullptr;};
    void deleteVpcCidrTableList() { this->vpcCidrTableList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList> & vpcCidrTableList() const { DARABONBA_PTR_GET_CONST(vpcCidrTableList_, vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>) };
    inline vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList> vpcCidrTableList() { DARABONBA_PTR_GET(vpcCidrTableList_, vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setVpcCidrTableList(const vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList> & vpcCidrTableList) { DARABONBA_PTR_SET_VALUE(vpcCidrTableList_, vpcCidrTableList) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setVpcCidrTableList(vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList> && vpcCidrTableList) { DARABONBA_PTR_SET_RVALUE(vpcCidrTableList_, vpcCidrTableList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // Indicates whether the VPC is granted the required permissions. The value is fixed as **authorized**, which indicates that the VPC is granted the required permissions.
    std::shared_ptr<string> authorizationStatus_ = nullptr;
    // An array consisting of the CIDR blocks that are protected by the VPC firewall.
    std::shared_ptr<vector<string>> defendCidrList_ = nullptr;
    // The ID of the specified vSwitch when the routing mode is manual.
    std::shared_ptr<string> manualVSwitchId_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    // The name of the network instance.
    std::shared_ptr<string> networkInstanceName_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **CCN**
    std::shared_ptr<string> networkInstanceType_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the VPC.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The routing mode of the VPC firewall. Valid values:
    // 
    // *   **auto**: automatic mode
    // *   **manual**: manual mode
    std::shared_ptr<string> routeMode_ = nullptr;
    // Indicates whether the manual routing mode is supported. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<string> supportManualMode_ = nullptr;
    // The edition of the CEN transit router. Valid values:
    // 
    // *   **Basic**: Basic Edition transit router
    // *   **Enterprise**: Enterprise Edition transit router
    std::shared_ptr<string> transitRouterType_ = nullptr;
    // An array that consists of the CIDR blocks of the VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList>> vpcCidrTableList_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
