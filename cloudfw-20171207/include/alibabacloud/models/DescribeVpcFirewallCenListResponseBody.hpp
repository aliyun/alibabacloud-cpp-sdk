// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcFirewalls, vpcFirewalls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcFirewalls, vpcFirewalls_);
    };
    DescribeVpcFirewallCenListResponseBody() = default ;
    DescribeVpcFirewallCenListResponseBody(const DescribeVpcFirewallCenListResponseBody &) = default ;
    DescribeVpcFirewallCenListResponseBody(DescribeVpcFirewallCenListResponseBody &&) = default ;
    DescribeVpcFirewallCenListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenListResponseBody() = default ;
    DescribeVpcFirewallCenListResponseBody& operator=(const DescribeVpcFirewallCenListResponseBody &) = default ;
    DescribeVpcFirewallCenListResponseBody& operator=(DescribeVpcFirewallCenListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcFirewalls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcFirewalls& obj) { 
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
      friend void from_json(const Darabonba::Json& j, VpcFirewalls& obj) { 
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
      VpcFirewalls() = default ;
      VpcFirewalls(const VpcFirewalls &) = default ;
      VpcFirewalls(VpcFirewalls &&) = default ;
      VpcFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcFirewalls() = default ;
      VpcFirewalls& operator=(const VpcFirewalls &) = default ;
      VpcFirewalls& operator=(VpcFirewalls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LocalVpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LocalVpc& obj) { 
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
        friend void from_json(const Darabonba::Json& j, LocalVpc& obj) { 
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
        LocalVpc() = default ;
        LocalVpc(const LocalVpc &) = default ;
        LocalVpc(LocalVpc &&) = default ;
        LocalVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LocalVpc() = default ;
        LocalVpc& operator=(const LocalVpc &) = default ;
        LocalVpc& operator=(LocalVpc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcCidrTableList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcCidrTableList& obj) { 
            DARABONBA_PTR_TO_JSON(RouteEntryList, routeEntryList_);
            DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          };
          friend void from_json(const Darabonba::Json& j, VpcCidrTableList& obj) { 
            DARABONBA_PTR_FROM_JSON(RouteEntryList, routeEntryList_);
            DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          };
          VpcCidrTableList() = default ;
          VpcCidrTableList(const VpcCidrTableList &) = default ;
          VpcCidrTableList(VpcCidrTableList &&) = default ;
          VpcCidrTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcCidrTableList() = default ;
          VpcCidrTableList& operator=(const VpcCidrTableList &) = default ;
          VpcCidrTableList& operator=(VpcCidrTableList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RouteEntryList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RouteEntryList& obj) { 
              DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
              DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
            };
            friend void from_json(const Darabonba::Json& j, RouteEntryList& obj) { 
              DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
              DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
            };
            RouteEntryList() = default ;
            RouteEntryList(const RouteEntryList &) = default ;
            RouteEntryList(RouteEntryList &&) = default ;
            RouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RouteEntryList() = default ;
            RouteEntryList& operator=(const RouteEntryList &) = default ;
            RouteEntryList& operator=(RouteEntryList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && this->nextHopInstanceId_ == nullptr; };
            // destinationCidr Field Functions 
            bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
            void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
            inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
            inline RouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


            // nextHopInstanceId Field Functions 
            bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
            void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
            inline string getNextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
            inline RouteEntryList& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


          protected:
            // The destination CIDR block of the VPC.
            shared_ptr<string> destinationCidr_ {};
            // The instance ID of the next hop for the VPC.
            shared_ptr<string> nextHopInstanceId_ {};
          };

          virtual bool empty() const override { return this->routeEntryList_ == nullptr
        && this->routeTableId_ == nullptr; };
          // routeEntryList Field Functions 
          bool hasRouteEntryList() const { return this->routeEntryList_ != nullptr;};
          void deleteRouteEntryList() { this->routeEntryList_ = nullptr;};
          inline const vector<VpcCidrTableList::RouteEntryList> & getRouteEntryList() const { DARABONBA_PTR_GET_CONST(routeEntryList_, vector<VpcCidrTableList::RouteEntryList>) };
          inline vector<VpcCidrTableList::RouteEntryList> getRouteEntryList() { DARABONBA_PTR_GET(routeEntryList_, vector<VpcCidrTableList::RouteEntryList>) };
          inline VpcCidrTableList& setRouteEntryList(const vector<VpcCidrTableList::RouteEntryList> & routeEntryList) { DARABONBA_PTR_SET_VALUE(routeEntryList_, routeEntryList) };
          inline VpcCidrTableList& setRouteEntryList(vector<VpcCidrTableList::RouteEntryList> && routeEntryList) { DARABONBA_PTR_SET_RVALUE(routeEntryList_, routeEntryList) };


          // routeTableId Field Functions 
          bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
          void deleteRouteTableId() { this->routeTableId_ = nullptr;};
          inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
          inline VpcCidrTableList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        protected:
          // An array that consists of the route entries for the VPC.
          shared_ptr<vector<VpcCidrTableList::RouteEntryList>> routeEntryList_ {};
          // The route table ID of the VPC.
          shared_ptr<string> routeTableId_ {};
        };

        virtual bool empty() const override { return this->authorizationStatus_ == nullptr
        && this->defendCidrList_ == nullptr && this->manualVSwitchId_ == nullptr && this->networkInstanceId_ == nullptr && this->networkInstanceName_ == nullptr && this->networkInstanceType_ == nullptr
        && this->ownerId_ == nullptr && this->regionNo_ == nullptr && this->routeMode_ == nullptr && this->supportManualMode_ == nullptr && this->transitRouterType_ == nullptr
        && this->vpcCidrTableList_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // authorizationStatus Field Functions 
        bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
        void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
        inline string getAuthorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, "") };
        inline LocalVpc& setAuthorizationStatus(string authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


        // defendCidrList Field Functions 
        bool hasDefendCidrList() const { return this->defendCidrList_ != nullptr;};
        void deleteDefendCidrList() { this->defendCidrList_ = nullptr;};
        inline const vector<string> & getDefendCidrList() const { DARABONBA_PTR_GET_CONST(defendCidrList_, vector<string>) };
        inline vector<string> getDefendCidrList() { DARABONBA_PTR_GET(defendCidrList_, vector<string>) };
        inline LocalVpc& setDefendCidrList(const vector<string> & defendCidrList) { DARABONBA_PTR_SET_VALUE(defendCidrList_, defendCidrList) };
        inline LocalVpc& setDefendCidrList(vector<string> && defendCidrList) { DARABONBA_PTR_SET_RVALUE(defendCidrList_, defendCidrList) };


        // manualVSwitchId Field Functions 
        bool hasManualVSwitchId() const { return this->manualVSwitchId_ != nullptr;};
        void deleteManualVSwitchId() { this->manualVSwitchId_ = nullptr;};
        inline string getManualVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(manualVSwitchId_, "") };
        inline LocalVpc& setManualVSwitchId(string manualVSwitchId) { DARABONBA_PTR_SET_VALUE(manualVSwitchId_, manualVSwitchId) };


        // networkInstanceId Field Functions 
        bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
        void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
        inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
        inline LocalVpc& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


        // networkInstanceName Field Functions 
        bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
        void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
        inline string getNetworkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
        inline LocalVpc& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


        // networkInstanceType Field Functions 
        bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
        void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
        inline string getNetworkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
        inline LocalVpc& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline LocalVpc& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline LocalVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // routeMode Field Functions 
        bool hasRouteMode() const { return this->routeMode_ != nullptr;};
        void deleteRouteMode() { this->routeMode_ = nullptr;};
        inline string getRouteMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
        inline LocalVpc& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


        // supportManualMode Field Functions 
        bool hasSupportManualMode() const { return this->supportManualMode_ != nullptr;};
        void deleteSupportManualMode() { this->supportManualMode_ = nullptr;};
        inline string getSupportManualMode() const { DARABONBA_PTR_GET_DEFAULT(supportManualMode_, "") };
        inline LocalVpc& setSupportManualMode(string supportManualMode) { DARABONBA_PTR_SET_VALUE(supportManualMode_, supportManualMode) };


        // transitRouterType Field Functions 
        bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
        void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
        inline string getTransitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
        inline LocalVpc& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


        // vpcCidrTableList Field Functions 
        bool hasVpcCidrTableList() const { return this->vpcCidrTableList_ != nullptr;};
        void deleteVpcCidrTableList() { this->vpcCidrTableList_ = nullptr;};
        inline const vector<LocalVpc::VpcCidrTableList> & getVpcCidrTableList() const { DARABONBA_PTR_GET_CONST(vpcCidrTableList_, vector<LocalVpc::VpcCidrTableList>) };
        inline vector<LocalVpc::VpcCidrTableList> getVpcCidrTableList() { DARABONBA_PTR_GET(vpcCidrTableList_, vector<LocalVpc::VpcCidrTableList>) };
        inline LocalVpc& setVpcCidrTableList(const vector<LocalVpc::VpcCidrTableList> & vpcCidrTableList) { DARABONBA_PTR_SET_VALUE(vpcCidrTableList_, vpcCidrTableList) };
        inline LocalVpc& setVpcCidrTableList(vector<LocalVpc::VpcCidrTableList> && vpcCidrTableList) { DARABONBA_PTR_SET_RVALUE(vpcCidrTableList_, vpcCidrTableList) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline LocalVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline LocalVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        // Indicates whether the VPC is granted the required permissions. The value is fixed as **authorized**, which indicates that the VPC is granted the required permissions.
        shared_ptr<string> authorizationStatus_ {};
        // An array consisting of the CIDR blocks that are protected by the VPC firewall.
        shared_ptr<vector<string>> defendCidrList_ {};
        // The ID of the specified vSwitch when the routing mode is manual.
        shared_ptr<string> manualVSwitchId_ {};
        // The ID of the network instance.
        shared_ptr<string> networkInstanceId_ {};
        // The name of the network instance.
        shared_ptr<string> networkInstanceName_ {};
        // The type of the network instance. Valid values:
        // 
        // *   **VPC**
        // *   **VBR**
        // *   **CCN**
        shared_ptr<string> networkInstanceType_ {};
        // The ID of the Alibaba Cloud account to which the VPC belongs.
        shared_ptr<int64_t> ownerId_ {};
        // The region ID of the VPC.
        shared_ptr<string> regionNo_ {};
        // The routing mode of the VPC firewall. Valid values:
        // 
        // *   **auto**: automatic mode
        // *   **manual**: manual mode
        shared_ptr<string> routeMode_ {};
        // Indicates whether the manual routing mode is supported. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<string> supportManualMode_ {};
        // The edition of the CEN transit router. Valid values:
        // 
        // *   **Basic**: Basic Edition transit router
        // *   **Enterprise**: Enterprise Edition transit router
        shared_ptr<string> transitRouterType_ {};
        // An array that consists of the CIDR blocks of the VPC.
        shared_ptr<vector<LocalVpc::VpcCidrTableList>> vpcCidrTableList_ {};
        // The ID of the VPC.
        shared_ptr<string> vpcId_ {};
        // The name of the VPC.
        shared_ptr<string> vpcName_ {};
      };

      class IpsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
          DARABONBA_PTR_TO_JSON(EnableAllPatch, enableAllPatch_);
          DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
          DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        };
        friend void from_json(const Darabonba::Json& j, IpsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
          DARABONBA_PTR_FROM_JSON(EnableAllPatch, enableAllPatch_);
          DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
          DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        };
        IpsConfig() = default ;
        IpsConfig(const IpsConfig &) = default ;
        IpsConfig(IpsConfig &&) = default ;
        IpsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpsConfig() = default ;
        IpsConfig& operator=(const IpsConfig &) = default ;
        IpsConfig& operator=(IpsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->basicRules_ == nullptr
        && this->enableAllPatch_ == nullptr && this->ruleClass_ == nullptr && this->runMode_ == nullptr; };
        // basicRules Field Functions 
        bool hasBasicRules() const { return this->basicRules_ != nullptr;};
        void deleteBasicRules() { this->basicRules_ = nullptr;};
        inline int32_t getBasicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
        inline IpsConfig& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


        // enableAllPatch Field Functions 
        bool hasEnableAllPatch() const { return this->enableAllPatch_ != nullptr;};
        void deleteEnableAllPatch() { this->enableAllPatch_ = nullptr;};
        inline int32_t getEnableAllPatch() const { DARABONBA_PTR_GET_DEFAULT(enableAllPatch_, 0) };
        inline IpsConfig& setEnableAllPatch(int32_t enableAllPatch) { DARABONBA_PTR_SET_VALUE(enableAllPatch_, enableAllPatch) };


        // ruleClass Field Functions 
        bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
        void deleteRuleClass() { this->ruleClass_ = nullptr;};
        inline int32_t getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
        inline IpsConfig& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


        // runMode Field Functions 
        bool hasRunMode() const { return this->runMode_ != nullptr;};
        void deleteRunMode() { this->runMode_ = nullptr;};
        inline int32_t getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
        inline IpsConfig& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      protected:
        // Indicates whether basic protection is enabled. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> basicRules_ {};
        // Indicates whether virtual patching is enabled. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> enableAllPatch_ {};
        // The level of the rule group for the IPS. Valid values:
        // 
        // *   **1**: loose.
        // *   **2**: medium.
        // *   **3**: strict.
        shared_ptr<int32_t> ruleClass_ {};
        // The mode of the IPS. Valid values:
        // 
        // *   **1**: block mode
        // *   **0**: monitor mode
        shared_ptr<int32_t> runMode_ {};
      };

      class AclConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclConfig& obj) { 
          DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
        };
        friend void from_json(const Darabonba::Json& j, AclConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
        };
        AclConfig() = default ;
        AclConfig(const AclConfig &) = default ;
        AclConfig(AclConfig &&) = default ;
        AclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclConfig() = default ;
        AclConfig& operator=(const AclConfig &) = default ;
        AclConfig& operator=(AclConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->strictMode_ == nullptr; };
        // strictMode Field Functions 
        bool hasStrictMode() const { return this->strictMode_ != nullptr;};
        void deleteStrictMode() { this->strictMode_ = nullptr;};
        inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
        inline AclConfig& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


      protected:
        // Specifies whether to enable the strict mode. Valid values:
        // 
        // *   1: yes
        // *   0: no
        shared_ptr<int32_t> strictMode_ {};
      };

      virtual bool empty() const override { return this->aclConfig_ == nullptr
        && this->cenId_ == nullptr && this->cenName_ == nullptr && this->connectType_ == nullptr && this->firewallSwitchStatus_ == nullptr && this->ipsConfig_ == nullptr
        && this->localVpc_ == nullptr && this->memberUid_ == nullptr && this->precheckStatus_ == nullptr && this->regionStatus_ == nullptr && this->resultCode_ == nullptr
        && this->vpcFirewallId_ == nullptr && this->vpcFirewallName_ == nullptr; };
      // aclConfig Field Functions 
      bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
      void deleteAclConfig() { this->aclConfig_ = nullptr;};
      inline const VpcFirewalls::AclConfig & getAclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, VpcFirewalls::AclConfig) };
      inline VpcFirewalls::AclConfig getAclConfig() { DARABONBA_PTR_GET(aclConfig_, VpcFirewalls::AclConfig) };
      inline VpcFirewalls& setAclConfig(const VpcFirewalls::AclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
      inline VpcFirewalls& setAclConfig(VpcFirewalls::AclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline VpcFirewalls& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // cenName Field Functions 
      bool hasCenName() const { return this->cenName_ != nullptr;};
      void deleteCenName() { this->cenName_ = nullptr;};
      inline string getCenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
      inline VpcFirewalls& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


      // connectType Field Functions 
      bool hasConnectType() const { return this->connectType_ != nullptr;};
      void deleteConnectType() { this->connectType_ = nullptr;};
      inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
      inline VpcFirewalls& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


      // firewallSwitchStatus Field Functions 
      bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
      void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
      inline string getFirewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
      inline VpcFirewalls& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


      // ipsConfig Field Functions 
      bool hasIpsConfig() const { return this->ipsConfig_ != nullptr;};
      void deleteIpsConfig() { this->ipsConfig_ = nullptr;};
      inline const VpcFirewalls::IpsConfig & getIpsConfig() const { DARABONBA_PTR_GET_CONST(ipsConfig_, VpcFirewalls::IpsConfig) };
      inline VpcFirewalls::IpsConfig getIpsConfig() { DARABONBA_PTR_GET(ipsConfig_, VpcFirewalls::IpsConfig) };
      inline VpcFirewalls& setIpsConfig(const VpcFirewalls::IpsConfig & ipsConfig) { DARABONBA_PTR_SET_VALUE(ipsConfig_, ipsConfig) };
      inline VpcFirewalls& setIpsConfig(VpcFirewalls::IpsConfig && ipsConfig) { DARABONBA_PTR_SET_RVALUE(ipsConfig_, ipsConfig) };


      // localVpc Field Functions 
      bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
      void deleteLocalVpc() { this->localVpc_ = nullptr;};
      inline const VpcFirewalls::LocalVpc & getLocalVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, VpcFirewalls::LocalVpc) };
      inline VpcFirewalls::LocalVpc getLocalVpc() { DARABONBA_PTR_GET(localVpc_, VpcFirewalls::LocalVpc) };
      inline VpcFirewalls& setLocalVpc(const VpcFirewalls::LocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
      inline VpcFirewalls& setLocalVpc(VpcFirewalls::LocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline VpcFirewalls& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline string getPrecheckStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckStatus_, "") };
      inline VpcFirewalls& setPrecheckStatus(string precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };


      // regionStatus Field Functions 
      bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
      void deleteRegionStatus() { this->regionStatus_ = nullptr;};
      inline string getRegionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
      inline VpcFirewalls& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
      inline VpcFirewalls& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      // vpcFirewallId Field Functions 
      bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
      void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
      inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
      inline VpcFirewalls& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


      // vpcFirewallName Field Functions 
      bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
      void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
      inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
      inline VpcFirewalls& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


    protected:
      // ACL engine mode.
      shared_ptr<VpcFirewalls::AclConfig> aclConfig_ {};
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The name of the CEN instance.
      shared_ptr<string> cenName_ {};
      // The connection type of the VPC firewall. The value is fixed as cen, which indicates a CEN instance.
      shared_ptr<string> connectType_ {};
      // The status of the VPC firewall. Valid values:
      // 
      // *   **opened**: The VPC firewall is enabled.
      // *   **closed**: The VPC firewall is disabled.
      // *   **notconfigured**: The VPC firewall is not configured.
      shared_ptr<string> firewallSwitchStatus_ {};
      // The intrusion prevention system (IPS) configurations.
      shared_ptr<VpcFirewalls::IpsConfig> ipsConfig_ {};
      // The details about the VPC.
      shared_ptr<VpcFirewalls::LocalVpc> localVpc_ {};
      // The UID of the member that is manged by your Alibaba Cloud account. The member is also an Alibaba Cloud account.
      shared_ptr<string> memberUid_ {};
      // Indicates whether the VPC firewall can be automatically enabled to protect VPC traffic based on route learning. Valid values:
      // 
      // *   **passed**: The VPC firewall can be automatically enabled.
      // *   **failed**: The VPC firewall cannot be automatically enabled.
      // *   **unknown**: The VPC firewall is in an unknown state.
      shared_ptr<string> precheckStatus_ {};
      // Indicates whether you can create a VPC firewall in a specified region. Valid values:
      // 
      // *   **enable**: yes
      // *   **disable**: no
      shared_ptr<string> regionStatus_ {};
      // The result code of the operation that creates the VPC firewall. Valid values:
      // 
      // *   **Unauthorized**: Cloud Firewall is not authorized to access the VPC for which the VPC firewall is created, and the VPC firewall cannot be created.
      // *   **RegionDisable**: VPC Firewall is not supported in the region of the VPC for which the VPC firewall is created, and the VPC firewall cannot be created.
      // *   **OpsDisable**: You are not allowed to create the VPC firewall.
      // *   **VbrNotSupport**: The VPC firewall cannot be created for a VBR that is attached to the CEN instance.
      // *   Empty string: You can create a VPC firewall for the network instance.
      shared_ptr<string> resultCode_ {};
      // The instance ID of the VPC firewall.
      shared_ptr<string> vpcFirewallId_ {};
      // The instance name of the VPC firewall.
      shared_ptr<string> vpcFirewallName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vpcFirewalls_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallCenListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallCenListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcFirewalls Field Functions 
    bool hasVpcFirewalls() const { return this->vpcFirewalls_ != nullptr;};
    void deleteVpcFirewalls() { this->vpcFirewalls_ = nullptr;};
    inline const vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls> & getVpcFirewalls() const { DARABONBA_PTR_GET_CONST(vpcFirewalls_, vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls>) };
    inline vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls> getVpcFirewalls() { DARABONBA_PTR_GET(vpcFirewalls_, vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls>) };
    inline DescribeVpcFirewallCenListResponseBody& setVpcFirewalls(const vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls> & vpcFirewalls) { DARABONBA_PTR_SET_VALUE(vpcFirewalls_, vpcFirewalls) };
    inline DescribeVpcFirewallCenListResponseBody& setVpcFirewalls(vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls> && vpcFirewalls) { DARABONBA_PTR_SET_RVALUE(vpcFirewalls_, vpcFirewalls) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of VPC firewalls.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the VPC firewalls.
    shared_ptr<vector<DescribeVpcFirewallCenListResponseBody::VpcFirewalls>> vpcFirewalls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
