// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallCenDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(FirewallVpc, firewallVpc_);
      DARABONBA_PTR_TO_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(FirewallVpc, firewallVpc_);
      DARABONBA_PTR_FROM_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVpcFirewallCenDetailResponseBody() = default ;
    DescribeVpcFirewallCenDetailResponseBody(const DescribeVpcFirewallCenDetailResponseBody &) = default ;
    DescribeVpcFirewallCenDetailResponseBody(DescribeVpcFirewallCenDetailResponseBody &&) = default ;
    DescribeVpcFirewallCenDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenDetailResponseBody() = default ;
    DescribeVpcFirewallCenDetailResponseBody& operator=(const DescribeVpcFirewallCenDetailResponseBody &) = default ;
    DescribeVpcFirewallCenDetailResponseBody& operator=(DescribeVpcFirewallCenDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LocalVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LocalVpc& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LocalVpc& obj) { 
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
        // The route entries for the VPC.
        shared_ptr<vector<VpcCidrTableList::RouteEntryList>> routeEntryList_ {};
        // The route table ID of the VPC.
        shared_ptr<string> routeTableId_ {};
      };

      class EniList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EniList& obj) { 
          DARABONBA_PTR_TO_JSON(EniId, eniId_);
          DARABONBA_PTR_TO_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
          DARABONBA_PTR_TO_JSON(EniVSwitchId, eniVSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, EniList& obj) { 
          DARABONBA_PTR_FROM_JSON(EniId, eniId_);
          DARABONBA_PTR_FROM_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
          DARABONBA_PTR_FROM_JSON(EniVSwitchId, eniVSwitchId_);
        };
        EniList() = default ;
        EniList(const EniList &) = default ;
        EniList(EniList &&) = default ;
        EniList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EniList() = default ;
        EniList& operator=(const EniList &) = default ;
        EniList& operator=(EniList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eniId_ == nullptr
        && this->eniPrivateIpAddress_ == nullptr && this->eniVSwitchId_ == nullptr; };
        // eniId Field Functions 
        bool hasEniId() const { return this->eniId_ != nullptr;};
        void deleteEniId() { this->eniId_ = nullptr;};
        inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
        inline EniList& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


        // eniPrivateIpAddress Field Functions 
        bool hasEniPrivateIpAddress() const { return this->eniPrivateIpAddress_ != nullptr;};
        void deleteEniPrivateIpAddress() { this->eniPrivateIpAddress_ = nullptr;};
        inline string getEniPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddress_, "") };
        inline EniList& setEniPrivateIpAddress(string eniPrivateIpAddress) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddress_, eniPrivateIpAddress) };


        // eniVSwitchId Field Functions 
        bool hasEniVSwitchId() const { return this->eniVSwitchId_ != nullptr;};
        void deleteEniVSwitchId() { this->eniVSwitchId_ = nullptr;};
        inline string getEniVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(eniVSwitchId_, "") };
        inline EniList& setEniVSwitchId(string eniVSwitchId) { DARABONBA_PTR_SET_VALUE(eniVSwitchId_, eniVSwitchId) };


      protected:
        // The ID of the ENI that belongs to the VPC.
        shared_ptr<string> eniId_ {};
        // The private IP address of the ENI that belongs to the VPC.
        shared_ptr<string> eniPrivateIpAddress_ {};
        // The ID of the vSwitch to which the ENI is connected.
        shared_ptr<string> eniVSwitchId_ {};
      };

      virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->attachmentName_ == nullptr && this->defendCidrList_ == nullptr && this->eniList_ == nullptr && this->manualVSwitchId_ == nullptr && this->networkInstanceId_ == nullptr
        && this->networkInstanceName_ == nullptr && this->networkInstanceType_ == nullptr && this->ownerId_ == nullptr && this->regionNo_ == nullptr && this->routeMode_ == nullptr
        && this->supportManualMode_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterType_ == nullptr && this->vpcCidrTableList_ == nullptr && this->vpcId_ == nullptr
        && this->vpcName_ == nullptr; };
      // attachmentId Field Functions 
      bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
      void deleteAttachmentId() { this->attachmentId_ = nullptr;};
      inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
      inline LocalVpc& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


      // attachmentName Field Functions 
      bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
      void deleteAttachmentName() { this->attachmentName_ = nullptr;};
      inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
      inline LocalVpc& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


      // defendCidrList Field Functions 
      bool hasDefendCidrList() const { return this->defendCidrList_ != nullptr;};
      void deleteDefendCidrList() { this->defendCidrList_ = nullptr;};
      inline const vector<string> & getDefendCidrList() const { DARABONBA_PTR_GET_CONST(defendCidrList_, vector<string>) };
      inline vector<string> getDefendCidrList() { DARABONBA_PTR_GET(defendCidrList_, vector<string>) };
      inline LocalVpc& setDefendCidrList(const vector<string> & defendCidrList) { DARABONBA_PTR_SET_VALUE(defendCidrList_, defendCidrList) };
      inline LocalVpc& setDefendCidrList(vector<string> && defendCidrList) { DARABONBA_PTR_SET_RVALUE(defendCidrList_, defendCidrList) };


      // eniList Field Functions 
      bool hasEniList() const { return this->eniList_ != nullptr;};
      void deleteEniList() { this->eniList_ = nullptr;};
      inline const vector<LocalVpc::EniList> & getEniList() const { DARABONBA_PTR_GET_CONST(eniList_, vector<LocalVpc::EniList>) };
      inline vector<LocalVpc::EniList> getEniList() { DARABONBA_PTR_GET(eniList_, vector<LocalVpc::EniList>) };
      inline LocalVpc& setEniList(const vector<LocalVpc::EniList> & eniList) { DARABONBA_PTR_SET_VALUE(eniList_, eniList) };
      inline LocalVpc& setEniList(vector<LocalVpc::EniList> && eniList) { DARABONBA_PTR_SET_RVALUE(eniList_, eniList) };


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
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline LocalVpc& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


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


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline LocalVpc& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


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
      // The ID of the connection between two network instances.
      shared_ptr<string> attachmentId_ {};
      // The name of the connection between two network instances.
      shared_ptr<string> attachmentName_ {};
      // An array consisting of the CIDR blocks that are protected by the VPC firewall.
      shared_ptr<vector<string>> defendCidrList_ {};
      // The Elastic Network Interfaces (ENIs).
      shared_ptr<vector<LocalVpc::EniList>> eniList_ {};
      // The ID of the specified vSwitch when the routing mode is manual.
      shared_ptr<string> manualVSwitchId_ {};
      // The ID of the VPC for which the VPC firewall is created.
      shared_ptr<string> networkInstanceId_ {};
      // The name of the network instance.
      shared_ptr<string> networkInstanceName_ {};
      // The type of the network instance. The value is fixed as **VPC**.
      shared_ptr<string> networkInstanceType_ {};
      // The UID of the Alibaba Cloud account to which the VPC belongs.
      shared_ptr<string> ownerId_ {};
      // The ID of the region in which the VPC resides.
      shared_ptr<string> regionNo_ {};
      // The routing mode. Valid values:
      // 
      // *   auto: automatic mode
      // *   manual: manual mode
      shared_ptr<string> routeMode_ {};
      // Indicates whether the manual routing mode is supported. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<string> supportManualMode_ {};
      // The instance ID of the CEN transit router.
      shared_ptr<string> transitRouterId_ {};
      // The edition of the CEN transit router. Valid values:
      // 
      // *   **Basic**: Basic Edition
      // *   **Enterprise**: Enterprise Edition
      shared_ptr<string> transitRouterType_ {};
      // An array that consists of the CIDR blocks of the VPC.
      shared_ptr<vector<LocalVpc::VpcCidrTableList>> vpcCidrTableList_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the VPC.
      shared_ptr<string> vpcName_ {};
    };

    class FirewallVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallVpc& obj) { 
        DARABONBA_PTR_TO_JSON(AllowConfiguration, allowConfiguration_);
        DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
        DARABONBA_PTR_TO_JSON(VpcCidr, vpcCidr_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchCidr, vswitchCidr_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(VswitchZoneId, vswitchZoneId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowConfiguration, allowConfiguration_);
        DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
        DARABONBA_PTR_FROM_JSON(VpcCidr, vpcCidr_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchCidr, vswitchCidr_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(VswitchZoneId, vswitchZoneId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      FirewallVpc() = default ;
      FirewallVpc(const FirewallVpc &) = default ;
      FirewallVpc(FirewallVpc &&) = default ;
      FirewallVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallVpc() = default ;
      FirewallVpc& operator=(const FirewallVpc &) = default ;
      FirewallVpc& operator=(FirewallVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowConfiguration_ == nullptr
        && this->standbyZoneId_ == nullptr && this->vpcCidr_ == nullptr && this->vpcId_ == nullptr && this->vswitchCidr_ == nullptr && this->vswitchId_ == nullptr
        && this->vswitchZoneId_ == nullptr && this->zoneId_ == nullptr; };
      // allowConfiguration Field Functions 
      bool hasAllowConfiguration() const { return this->allowConfiguration_ != nullptr;};
      void deleteAllowConfiguration() { this->allowConfiguration_ = nullptr;};
      inline int32_t getAllowConfiguration() const { DARABONBA_PTR_GET_DEFAULT(allowConfiguration_, 0) };
      inline FirewallVpc& setAllowConfiguration(int32_t allowConfiguration) { DARABONBA_PTR_SET_VALUE(allowConfiguration_, allowConfiguration) };


      // standbyZoneId Field Functions 
      bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
      void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
      inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
      inline FirewallVpc& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


      // vpcCidr Field Functions 
      bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
      void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
      inline string getVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
      inline FirewallVpc& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline FirewallVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchCidr Field Functions 
      bool hasVswitchCidr() const { return this->vswitchCidr_ != nullptr;};
      void deleteVswitchCidr() { this->vswitchCidr_ = nullptr;};
      inline string getVswitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vswitchCidr_, "") };
      inline FirewallVpc& setVswitchCidr(string vswitchCidr) { DARABONBA_PTR_SET_VALUE(vswitchCidr_, vswitchCidr) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline FirewallVpc& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // vswitchZoneId Field Functions 
      bool hasVswitchZoneId() const { return this->vswitchZoneId_ != nullptr;};
      void deleteVswitchZoneId() { this->vswitchZoneId_ = nullptr;};
      inline string getVswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(vswitchZoneId_, "") };
      inline FirewallVpc& setVswitchZoneId(string vswitchZoneId) { DARABONBA_PTR_SET_VALUE(vswitchZoneId_, vswitchZoneId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline FirewallVpc& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Indicates whether you can specify a CIDR block when you create a VPC firewall for a Basic Edition transit router of a CEN instance. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> allowConfiguration_ {};
      // Firewall backup availability zone ID.
      shared_ptr<string> standbyZoneId_ {};
      // The CIDR block of the VPC.
      shared_ptr<string> vpcCidr_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The CIDR block of the vSwitch.
      shared_ptr<string> vswitchCidr_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
      // The availability zone ID of the virtual switch.
      shared_ptr<string> vswitchZoneId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->connectType_ == nullptr
        && this->firewallSwitchStatus_ == nullptr && this->firewallVpc_ == nullptr && this->localVpc_ == nullptr && this->requestId_ == nullptr && this->vpcFirewallId_ == nullptr
        && this->vpcFirewallName_ == nullptr; };
    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string getFirewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // firewallVpc Field Functions 
    bool hasFirewallVpc() const { return this->firewallVpc_ != nullptr;};
    void deleteFirewallVpc() { this->firewallVpc_ = nullptr;};
    inline const DescribeVpcFirewallCenDetailResponseBody::FirewallVpc & getFirewallVpc() const { DARABONBA_PTR_GET_CONST(firewallVpc_, DescribeVpcFirewallCenDetailResponseBody::FirewallVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody::FirewallVpc getFirewallVpc() { DARABONBA_PTR_GET(firewallVpc_, DescribeVpcFirewallCenDetailResponseBody::FirewallVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setFirewallVpc(const DescribeVpcFirewallCenDetailResponseBody::FirewallVpc & firewallVpc) { DARABONBA_PTR_SET_VALUE(firewallVpc_, firewallVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setFirewallVpc(DescribeVpcFirewallCenDetailResponseBody::FirewallVpc && firewallVpc) { DARABONBA_PTR_SET_RVALUE(firewallVpc_, firewallVpc) };


    // localVpc Field Functions 
    bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
    void deleteLocalVpc() { this->localVpc_ = nullptr;};
    inline const DescribeVpcFirewallCenDetailResponseBody::LocalVpc & getLocalVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, DescribeVpcFirewallCenDetailResponseBody::LocalVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody::LocalVpc getLocalVpc() { DARABONBA_PTR_GET(localVpc_, DescribeVpcFirewallCenDetailResponseBody::LocalVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setLocalVpc(const DescribeVpcFirewallCenDetailResponseBody::LocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
    inline DescribeVpcFirewallCenDetailResponseBody& setLocalVpc(DescribeVpcFirewallCenDetailResponseBody::LocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVpcFirewallCenDetailResponseBody& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // The connection type of the VPC firewall. The value is fixed as **cen**, which indicates CEN instances.
    shared_ptr<string> connectType_ {};
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: enabled
    // *   **closed**: disabled
    // *   **notconfigured**: not configured
    shared_ptr<string> firewallSwitchStatus_ {};
    // The firewall VPC.
    shared_ptr<DescribeVpcFirewallCenDetailResponseBody::FirewallVpc> firewallVpc_ {};
    // The details about the VPC.
    shared_ptr<DescribeVpcFirewallCenDetailResponseBody::LocalVpc> localVpc_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The instance ID of the VPC firewall.
    shared_ptr<string> vpcFirewallId_ {};
    // The instance name of the VPC firewall.
    shared_ptr<string> vpcFirewallName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
