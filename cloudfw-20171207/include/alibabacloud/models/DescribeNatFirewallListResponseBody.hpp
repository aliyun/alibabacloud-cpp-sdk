// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLLISTRESPONSEBODY_HPP_
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
  class DescribeNatFirewallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatFirewallList, natFirewallList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatFirewallList, natFirewallList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatFirewallListResponseBody() = default ;
    DescribeNatFirewallListResponseBody(const DescribeNatFirewallListResponseBody &) = default ;
    DescribeNatFirewallListResponseBody(DescribeNatFirewallListResponseBody &&) = default ;
    DescribeNatFirewallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallListResponseBody() = default ;
    DescribeNatFirewallListResponseBody& operator=(const DescribeNatFirewallListResponseBody &) = default ;
    DescribeNatFirewallListResponseBody& operator=(DescribeNatFirewallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatFirewallList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatFirewallList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
        DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
        DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
        DARABONBA_PTR_TO_JSON(ProxyNetworkInterfaceId, proxyNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(ProxyRouteTableId, proxyRouteTableId_);
        DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
        DARABONBA_PTR_TO_JSON(ProxyVSwitchId, proxyVSwitchId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, NatFirewallList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
        DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
        DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
        DARABONBA_PTR_FROM_JSON(ProxyNetworkInterfaceId, proxyNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(ProxyRouteTableId, proxyRouteTableId_);
        DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
        DARABONBA_PTR_FROM_JSON(ProxyVSwitchId, proxyVSwitchId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      NatFirewallList() = default ;
      NatFirewallList(const NatFirewallList &) = default ;
      NatFirewallList(NatFirewallList &&) = default ;
      NatFirewallList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatFirewallList() = default ;
      NatFirewallList& operator=(const NatFirewallList &) = default ;
      NatFirewallList& operator=(NatFirewallList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NatRouteEntryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NatRouteEntryList& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
        };
        friend void from_json(const Darabonba::Json& j, NatRouteEntryList& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
        };
        NatRouteEntryList() = default ;
        NatRouteEntryList(const NatRouteEntryList &) = default ;
        NatRouteEntryList(NatRouteEntryList &&) = default ;
        NatRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NatRouteEntryList() = default ;
        NatRouteEntryList& operator=(const NatRouteEntryList &) = default ;
        NatRouteEntryList& operator=(NatRouteEntryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->routeTableId_ == nullptr; };
        // destinationCidr Field Functions 
        bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
        void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
        inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
        inline NatRouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline NatRouteEntryList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline NatRouteEntryList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline NatRouteEntryList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      protected:
        // The destination CIDR block of the default route.
        shared_ptr<string> destinationCidr_ {};
        // The next hop of the original NAT gateway.
        shared_ptr<string> nextHopId_ {};
        // The network type of the next hop. The value is fixed as NatGateway.
        shared_ptr<string> nextHopType_ {};
        // The route table to which the default route of the NAT gateway belongs.
        shared_ptr<string> routeTableId_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->errorDetail_ == nullptr && this->memberUid_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->natRouteEntryList_ == nullptr
        && this->proxyId_ == nullptr && this->proxyName_ == nullptr && this->proxyNetworkInterfaceId_ == nullptr && this->proxyRouteTableId_ == nullptr && this->proxyStatus_ == nullptr
        && this->proxyVSwitchId_ == nullptr && this->regionId_ == nullptr && this->strictMode_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline NatFirewallList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // errorDetail Field Functions 
      bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
      void deleteErrorDetail() { this->errorDetail_ = nullptr;};
      inline string getErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
      inline NatFirewallList& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline NatFirewallList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline NatFirewallList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natGatewayName Field Functions 
      bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
      void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
      inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
      inline NatFirewallList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


      // natRouteEntryList Field Functions 
      bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
      void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
      inline const vector<NatFirewallList::NatRouteEntryList> & getNatRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<NatFirewallList::NatRouteEntryList>) };
      inline vector<NatFirewallList::NatRouteEntryList> getNatRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<NatFirewallList::NatRouteEntryList>) };
      inline NatFirewallList& setNatRouteEntryList(const vector<NatFirewallList::NatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
      inline NatFirewallList& setNatRouteEntryList(vector<NatFirewallList::NatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


      // proxyId Field Functions 
      bool hasProxyId() const { return this->proxyId_ != nullptr;};
      void deleteProxyId() { this->proxyId_ = nullptr;};
      inline string getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
      inline NatFirewallList& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


      // proxyName Field Functions 
      bool hasProxyName() const { return this->proxyName_ != nullptr;};
      void deleteProxyName() { this->proxyName_ = nullptr;};
      inline string getProxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
      inline NatFirewallList& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


      // proxyNetworkInterfaceId Field Functions 
      bool hasProxyNetworkInterfaceId() const { return this->proxyNetworkInterfaceId_ != nullptr;};
      void deleteProxyNetworkInterfaceId() { this->proxyNetworkInterfaceId_ = nullptr;};
      inline string getProxyNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(proxyNetworkInterfaceId_, "") };
      inline NatFirewallList& setProxyNetworkInterfaceId(string proxyNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(proxyNetworkInterfaceId_, proxyNetworkInterfaceId) };


      // proxyRouteTableId Field Functions 
      bool hasProxyRouteTableId() const { return this->proxyRouteTableId_ != nullptr;};
      void deleteProxyRouteTableId() { this->proxyRouteTableId_ = nullptr;};
      inline string getProxyRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(proxyRouteTableId_, "") };
      inline NatFirewallList& setProxyRouteTableId(string proxyRouteTableId) { DARABONBA_PTR_SET_VALUE(proxyRouteTableId_, proxyRouteTableId) };


      // proxyStatus Field Functions 
      bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
      void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
      inline string getProxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
      inline NatFirewallList& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


      // proxyVSwitchId Field Functions 
      bool hasProxyVSwitchId() const { return this->proxyVSwitchId_ != nullptr;};
      void deleteProxyVSwitchId() { this->proxyVSwitchId_ = nullptr;};
      inline string getProxyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(proxyVSwitchId_, "") };
      inline NatFirewallList& setProxyVSwitchId(string proxyVSwitchId) { DARABONBA_PTR_SET_VALUE(proxyVSwitchId_, proxyVSwitchId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline NatFirewallList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // strictMode Field Functions 
      bool hasStrictMode() const { return this->strictMode_ != nullptr;};
      void deleteStrictMode() { this->strictMode_ = nullptr;};
      inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
      inline NatFirewallList& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NatFirewallList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline NatFirewallList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      // The UID of the Alibaba Cloud account.
      // 
      // >  The value of this parameter indicates the management account to which the member is added.
      shared_ptr<int64_t> aliUid_ {};
      // The cause of the error.
      shared_ptr<string> errorDetail_ {};
      // The UID of the member in Cloud Firewall.
      shared_ptr<int64_t> memberUid_ {};
      // The ID of the NAT gateway.
      shared_ptr<string> natGatewayId_ {};
      // The name of the NAT gateway.
      shared_ptr<string> natGatewayName_ {};
      // The default route entries of the NAT gateway.
      shared_ptr<vector<NatFirewallList::NatRouteEntryList>> natRouteEntryList_ {};
      // The ID of the NAT firewall.
      shared_ptr<string> proxyId_ {};
      // The name of the NAT firewall.
      shared_ptr<string> proxyName_ {};
      shared_ptr<string> proxyNetworkInterfaceId_ {};
      shared_ptr<string> proxyRouteTableId_ {};
      // The status of the NAT firewall. Valid values:
      // 
      // *   configuring
      // *   deleting
      // *   normal
      // *   abnormal
      // *   opening
      // *   closing
      // *   closed
      shared_ptr<string> proxyStatus_ {};
      shared_ptr<string> proxyVSwitchId_ {};
      // The region ID of your Cloud Firewall.
      // 
      // >  For more information about the supported regions of Cloud Firewall, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
      shared_ptr<string> regionId_ {};
      // Indicates whether the strict mode is enabled. Valid values: 1, which specifies yes, and 0, which specifies no.
      shared_ptr<int32_t> strictMode_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the VPC.
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->natFirewallList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // natFirewallList Field Functions 
    bool hasNatFirewallList() const { return this->natFirewallList_ != nullptr;};
    void deleteNatFirewallList() { this->natFirewallList_ = nullptr;};
    inline const vector<DescribeNatFirewallListResponseBody::NatFirewallList> & getNatFirewallList() const { DARABONBA_PTR_GET_CONST(natFirewallList_, vector<DescribeNatFirewallListResponseBody::NatFirewallList>) };
    inline vector<DescribeNatFirewallListResponseBody::NatFirewallList> getNatFirewallList() { DARABONBA_PTR_GET(natFirewallList_, vector<DescribeNatFirewallListResponseBody::NatFirewallList>) };
    inline DescribeNatFirewallListResponseBody& setNatFirewallList(const vector<DescribeNatFirewallListResponseBody::NatFirewallList> & natFirewallList) { DARABONBA_PTR_SET_VALUE(natFirewallList_, natFirewallList) };
    inline DescribeNatFirewallListResponseBody& setNatFirewallList(vector<DescribeNatFirewallListResponseBody::NatFirewallList> && natFirewallList) { DARABONBA_PTR_SET_RVALUE(natFirewallList_, natFirewallList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatFirewallListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The NAT firewalls.
    shared_ptr<vector<DescribeNatFirewallListResponseBody::NatFirewallList>> natFirewallList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of NAT firewalls.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
