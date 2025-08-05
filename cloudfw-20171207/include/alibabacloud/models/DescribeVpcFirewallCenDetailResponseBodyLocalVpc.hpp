// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYLOCALVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYLOCALVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList.hpp>
#include <alibabacloud/models/DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenDetailResponseBodyLocalVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenDetailResponseBodyLocalVpc& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(DefendCidrList, defendCidrList_);
      DARABONBA_PTR_TO_JSON(EniList, eniList_);
      DARABONBA_PTR_TO_JSON(ManualVSwitchId, manualVSwitchId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_TO_JSON(SupportManualMode, supportManualMode_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterType, transitRouterType_);
      DARABONBA_PTR_TO_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenDetailResponseBodyLocalVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentId, attachmentId_);
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(DefendCidrList, defendCidrList_);
      DARABONBA_PTR_FROM_JSON(EniList, eniList_);
      DARABONBA_PTR_FROM_JSON(ManualVSwitchId, manualVSwitchId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_FROM_JSON(SupportManualMode, supportManualMode_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterType, transitRouterType_);
      DARABONBA_PTR_FROM_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcFirewallCenDetailResponseBodyLocalVpc() = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpc(const DescribeVpcFirewallCenDetailResponseBodyLocalVpc &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpc(DescribeVpcFirewallCenDetailResponseBodyLocalVpc &&) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpc() = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpc& operator=(const DescribeVpcFirewallCenDetailResponseBodyLocalVpc &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpc& operator=(DescribeVpcFirewallCenDetailResponseBodyLocalVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentId_ != nullptr
        && this->attachmentName_ != nullptr && this->defendCidrList_ != nullptr && this->eniList_ != nullptr && this->manualVSwitchId_ != nullptr && this->networkInstanceId_ != nullptr
        && this->networkInstanceName_ != nullptr && this->networkInstanceType_ != nullptr && this->ownerId_ != nullptr && this->regionNo_ != nullptr && this->routeMode_ != nullptr
        && this->supportManualMode_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterType_ != nullptr && this->vpcCidrTableList_ != nullptr && this->vpcId_ != nullptr
        && this->vpcName_ != nullptr; };
    // attachmentId Field Functions 
    bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
    void deleteAttachmentId() { this->attachmentId_ = nullptr;};
    inline string attachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // defendCidrList Field Functions 
    bool hasDefendCidrList() const { return this->defendCidrList_ != nullptr;};
    void deleteDefendCidrList() { this->defendCidrList_ = nullptr;};
    inline const vector<string> & defendCidrList() const { DARABONBA_PTR_GET_CONST(defendCidrList_, vector<string>) };
    inline vector<string> defendCidrList() { DARABONBA_PTR_GET(defendCidrList_, vector<string>) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setDefendCidrList(const vector<string> & defendCidrList) { DARABONBA_PTR_SET_VALUE(defendCidrList_, defendCidrList) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setDefendCidrList(vector<string> && defendCidrList) { DARABONBA_PTR_SET_RVALUE(defendCidrList_, defendCidrList) };


    // eniList Field Functions 
    bool hasEniList() const { return this->eniList_ != nullptr;};
    void deleteEniList() { this->eniList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList> & eniList() const { DARABONBA_PTR_GET_CONST(eniList_, vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList>) };
    inline vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList> eniList() { DARABONBA_PTR_GET(eniList_, vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList>) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setEniList(const vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList> & eniList) { DARABONBA_PTR_SET_VALUE(eniList_, eniList) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setEniList(vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList> && eniList) { DARABONBA_PTR_SET_RVALUE(eniList_, eniList) };


    // manualVSwitchId Field Functions 
    bool hasManualVSwitchId() const { return this->manualVSwitchId_ != nullptr;};
    void deleteManualVSwitchId() { this->manualVSwitchId_ = nullptr;};
    inline string manualVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(manualVSwitchId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setManualVSwitchId(string manualVSwitchId) { DARABONBA_PTR_SET_VALUE(manualVSwitchId_, manualVSwitchId) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // networkInstanceName Field Functions 
    bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
    void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
    inline string networkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


    // networkInstanceType Field Functions 
    bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
    void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
    inline string networkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string routeMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // supportManualMode Field Functions 
    bool hasSupportManualMode() const { return this->supportManualMode_ != nullptr;};
    void deleteSupportManualMode() { this->supportManualMode_ = nullptr;};
    inline string supportManualMode() const { DARABONBA_PTR_GET_DEFAULT(supportManualMode_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setSupportManualMode(string supportManualMode) { DARABONBA_PTR_SET_VALUE(supportManualMode_, supportManualMode) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterType Field Functions 
    bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
    void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
    inline string transitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


    // vpcCidrTableList Field Functions 
    bool hasVpcCidrTableList() const { return this->vpcCidrTableList_ != nullptr;};
    void deleteVpcCidrTableList() { this->vpcCidrTableList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList> & vpcCidrTableList() const { DARABONBA_PTR_GET_CONST(vpcCidrTableList_, vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList>) };
    inline vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList> vpcCidrTableList() { DARABONBA_PTR_GET(vpcCidrTableList_, vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList>) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setVpcCidrTableList(const vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList> & vpcCidrTableList) { DARABONBA_PTR_SET_VALUE(vpcCidrTableList_, vpcCidrTableList) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setVpcCidrTableList(vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList> && vpcCidrTableList) { DARABONBA_PTR_SET_RVALUE(vpcCidrTableList_, vpcCidrTableList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The ID of the connection between two network instances.
    std::shared_ptr<string> attachmentId_ = nullptr;
    // The name of the connection between two network instances.
    std::shared_ptr<string> attachmentName_ = nullptr;
    // An array consisting of the CIDR blocks that are protected by the VPC firewall.
    std::shared_ptr<vector<string>> defendCidrList_ = nullptr;
    // The Elastic Network Interfaces (ENIs).
    std::shared_ptr<vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList>> eniList_ = nullptr;
    // The ID of the specified vSwitch when the routing mode is manual.
    std::shared_ptr<string> manualVSwitchId_ = nullptr;
    // The ID of the VPC for which the VPC firewall is created.
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    // The name of the network instance.
    std::shared_ptr<string> networkInstanceName_ = nullptr;
    // The type of the network instance. The value is fixed as **VPC**.
    std::shared_ptr<string> networkInstanceType_ = nullptr;
    // The UID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the region in which the VPC resides.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The routing mode. Valid values:
    // 
    // *   auto: automatic mode
    // *   manual: manual mode
    std::shared_ptr<string> routeMode_ = nullptr;
    // Indicates whether the manual routing mode is supported. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<string> supportManualMode_ = nullptr;
    // The instance ID of the CEN transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The edition of the CEN transit router. Valid values:
    // 
    // *   **Basic**: Basic Edition
    // *   **Enterprise**: Enterprise Edition
    std::shared_ptr<string> transitRouterType_ = nullptr;
    // An array that consists of the CIDR blocks of the VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList>> vpcCidrTableList_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
