// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODY_HPP_
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
  class DescribeVpcFirewallDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PeerVpc, peerVpc_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(LocalVpc, localVpc_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PeerVpc, peerVpc_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVpcFirewallDetailResponseBody() = default ;
    DescribeVpcFirewallDetailResponseBody(const DescribeVpcFirewallDetailResponseBody &) = default ;
    DescribeVpcFirewallDetailResponseBody(DescribeVpcFirewallDetailResponseBody &&) = default ;
    DescribeVpcFirewallDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDetailResponseBody() = default ;
    DescribeVpcFirewallDetailResponseBody& operator=(const DescribeVpcFirewallDetailResponseBody &) = default ;
    DescribeVpcFirewallDetailResponseBody& operator=(DescribeVpcFirewallDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PeerVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PeerVpc& obj) { 
        DARABONBA_PTR_TO_JSON(EniId, eniId_);
        DARABONBA_PTR_TO_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(RouterInterfaceId, routerInterfaceId_);
        DARABONBA_PTR_TO_JSON(VpcCidrTableList, vpcCidrTableList_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, PeerVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(EniId, eniId_);
        DARABONBA_PTR_FROM_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(RouterInterfaceId, routerInterfaceId_);
        DARABONBA_PTR_FROM_JSON(VpcCidrTableList, vpcCidrTableList_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      PeerVpc() = default ;
      PeerVpc(const PeerVpc &) = default ;
      PeerVpc(PeerVpc &&) = default ;
      PeerVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PeerVpc() = default ;
      PeerVpc& operator=(const PeerVpc &) = default ;
      PeerVpc& operator=(PeerVpc &&) = default ;
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
          // The destination CIDR block of the peer VPC.
          shared_ptr<string> destinationCidr_ {};
          // The instance ID of the next hop for the peer VPC.
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
        // The route entries of the peer VPC.
        shared_ptr<vector<VpcCidrTableList::RouteEntryList>> routeEntryList_ {};
        // The ID of the route table for the peer VPC.
        shared_ptr<string> routeTableId_ {};
      };

      virtual bool empty() const override { return this->eniId_ == nullptr
        && this->eniPrivateIpAddress_ == nullptr && this->regionNo_ == nullptr && this->routerInterfaceId_ == nullptr && this->vpcCidrTableList_ == nullptr && this->vpcId_ == nullptr
        && this->vpcName_ == nullptr; };
      // eniId Field Functions 
      bool hasEniId() const { return this->eniId_ != nullptr;};
      void deleteEniId() { this->eniId_ = nullptr;};
      inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
      inline PeerVpc& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


      // eniPrivateIpAddress Field Functions 
      bool hasEniPrivateIpAddress() const { return this->eniPrivateIpAddress_ != nullptr;};
      void deleteEniPrivateIpAddress() { this->eniPrivateIpAddress_ = nullptr;};
      inline string getEniPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddress_, "") };
      inline PeerVpc& setEniPrivateIpAddress(string eniPrivateIpAddress) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddress_, eniPrivateIpAddress) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline PeerVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // routerInterfaceId Field Functions 
      bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
      void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
      inline string getRouterInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
      inline PeerVpc& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


      // vpcCidrTableList Field Functions 
      bool hasVpcCidrTableList() const { return this->vpcCidrTableList_ != nullptr;};
      void deleteVpcCidrTableList() { this->vpcCidrTableList_ = nullptr;};
      inline const vector<PeerVpc::VpcCidrTableList> & getVpcCidrTableList() const { DARABONBA_PTR_GET_CONST(vpcCidrTableList_, vector<PeerVpc::VpcCidrTableList>) };
      inline vector<PeerVpc::VpcCidrTableList> getVpcCidrTableList() { DARABONBA_PTR_GET(vpcCidrTableList_, vector<PeerVpc::VpcCidrTableList>) };
      inline PeerVpc& setVpcCidrTableList(const vector<PeerVpc::VpcCidrTableList> & vpcCidrTableList) { DARABONBA_PTR_SET_VALUE(vpcCidrTableList_, vpcCidrTableList) };
      inline PeerVpc& setVpcCidrTableList(vector<PeerVpc::VpcCidrTableList> && vpcCidrTableList) { DARABONBA_PTR_SET_RVALUE(vpcCidrTableList_, vpcCidrTableList) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline PeerVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline PeerVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      // The ID of the ENI for the peer VPC.
      shared_ptr<string> eniId_ {};
      // The private IP address of the ENI for the peer VPC.
      shared_ptr<string> eniPrivateIpAddress_ {};
      // The region ID of the peer VPC.
      shared_ptr<string> regionNo_ {};
      // The router interface ID of the peer VPC.
      shared_ptr<string> routerInterfaceId_ {};
      // The CIDR blocks of the peer VPC.
      shared_ptr<vector<PeerVpc::VpcCidrTableList>> vpcCidrTableList_ {};
      // The ID of the peer VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the peer VPC.
      shared_ptr<string> vpcName_ {};
    };

    class LocalVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LocalVpc& obj) { 
        DARABONBA_PTR_TO_JSON(EniId, eniId_);
        DARABONBA_PTR_TO_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(RouterInterfaceId, routerInterfaceId_);
        DARABONBA_PTR_TO_JSON(VpcCidrTableList, vpcCidrTableList_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, LocalVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(EniId, eniId_);
        DARABONBA_PTR_FROM_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(RouterInterfaceId, routerInterfaceId_);
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
          // The destination CIDR block of the local VPC.
          shared_ptr<string> destinationCidr_ {};
          // The instance ID of the next hop for the local VPC.
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
        // The route entries of the local VPC.
        shared_ptr<vector<VpcCidrTableList::RouteEntryList>> routeEntryList_ {};
        // The ID of the route table for the local VPC.
        shared_ptr<string> routeTableId_ {};
      };

      virtual bool empty() const override { return this->eniId_ == nullptr
        && this->eniPrivateIpAddress_ == nullptr && this->regionNo_ == nullptr && this->routerInterfaceId_ == nullptr && this->vpcCidrTableList_ == nullptr && this->vpcId_ == nullptr
        && this->vpcName_ == nullptr; };
      // eniId Field Functions 
      bool hasEniId() const { return this->eniId_ != nullptr;};
      void deleteEniId() { this->eniId_ = nullptr;};
      inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
      inline LocalVpc& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


      // eniPrivateIpAddress Field Functions 
      bool hasEniPrivateIpAddress() const { return this->eniPrivateIpAddress_ != nullptr;};
      void deleteEniPrivateIpAddress() { this->eniPrivateIpAddress_ = nullptr;};
      inline string getEniPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddress_, "") };
      inline LocalVpc& setEniPrivateIpAddress(string eniPrivateIpAddress) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddress_, eniPrivateIpAddress) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline LocalVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // routerInterfaceId Field Functions 
      bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
      void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
      inline string getRouterInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
      inline LocalVpc& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


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
      // The ID of the ENI for the local VPC.
      shared_ptr<string> eniId_ {};
      // The private IP address of the elastic network interface (ENI) for the local VPC.
      shared_ptr<string> eniPrivateIpAddress_ {};
      // The region ID of the local VPC.
      shared_ptr<string> regionNo_ {};
      // The router interface ID of the local VPC.
      shared_ptr<string> routerInterfaceId_ {};
      // The CIDR blocks of the local VPC.
      shared_ptr<vector<LocalVpc::VpcCidrTableList>> vpcCidrTableList_ {};
      // The ID of the local VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the local VPC.
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->connectType_ == nullptr && this->firewallSwitchStatus_ == nullptr && this->localVpc_ == nullptr && this->memberUid_ == nullptr && this->peerVpc_ == nullptr
        && this->requestId_ == nullptr && this->vpcFirewallId_ == nullptr && this->vpcFirewallName_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeVpcFirewallDetailResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string getFirewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // localVpc Field Functions 
    bool hasLocalVpc() const { return this->localVpc_ != nullptr;};
    void deleteLocalVpc() { this->localVpc_ = nullptr;};
    inline const DescribeVpcFirewallDetailResponseBody::LocalVpc & getLocalVpc() const { DARABONBA_PTR_GET_CONST(localVpc_, DescribeVpcFirewallDetailResponseBody::LocalVpc) };
    inline DescribeVpcFirewallDetailResponseBody::LocalVpc getLocalVpc() { DARABONBA_PTR_GET(localVpc_, DescribeVpcFirewallDetailResponseBody::LocalVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setLocalVpc(const DescribeVpcFirewallDetailResponseBody::LocalVpc & localVpc) { DARABONBA_PTR_SET_VALUE(localVpc_, localVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setLocalVpc(DescribeVpcFirewallDetailResponseBody::LocalVpc && localVpc) { DARABONBA_PTR_SET_RVALUE(localVpc_, localVpc) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // peerVpc Field Functions 
    bool hasPeerVpc() const { return this->peerVpc_ != nullptr;};
    void deletePeerVpc() { this->peerVpc_ = nullptr;};
    inline const DescribeVpcFirewallDetailResponseBody::PeerVpc & getPeerVpc() const { DARABONBA_PTR_GET_CONST(peerVpc_, DescribeVpcFirewallDetailResponseBody::PeerVpc) };
    inline DescribeVpcFirewallDetailResponseBody::PeerVpc getPeerVpc() { DARABONBA_PTR_GET(peerVpc_, DescribeVpcFirewallDetailResponseBody::PeerVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setPeerVpc(const DescribeVpcFirewallDetailResponseBody::PeerVpc & peerVpc) { DARABONBA_PTR_SET_VALUE(peerVpc_, peerVpc) };
    inline DescribeVpcFirewallDetailResponseBody& setPeerVpc(DescribeVpcFirewallDetailResponseBody::PeerVpc && peerVpc) { DARABONBA_PTR_SET_RVALUE(peerVpc_, peerVpc) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVpcFirewallDetailResponseBody& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // The bandwidth of the Express Connect circuit. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The connection type of the VPC firewall. The value is fixed as **expressconnect**, which indicates Express Connect circuits.
    shared_ptr<string> connectType_ {};
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: The VPC firewall is enabled.
    // *   **closed**: The VPC firewall is disabled.
    // *   **notconfigured**: The VPC firewall is not configured.
    // *   **configured**: The VPC firewall is configured.
    shared_ptr<string> firewallSwitchStatus_ {};
    // The details about the local VPC.
    shared_ptr<DescribeVpcFirewallDetailResponseBody::LocalVpc> localVpc_ {};
    // The UID of the member that is managed by your Alibaba Cloud account.
    shared_ptr<string> memberUid_ {};
    // The details about the peer VPC.
    shared_ptr<DescribeVpcFirewallDetailResponseBody::PeerVpc> peerVpc_ {};
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
