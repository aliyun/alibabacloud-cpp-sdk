// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODY_HPP_
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
  class DescribeSecurityProxyResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    DescribeSecurityProxyResourcesResponseBody() = default ;
    DescribeSecurityProxyResourcesResponseBody(const DescribeSecurityProxyResourcesResponseBody &) = default ;
    DescribeSecurityProxyResourcesResponseBody(DescribeSecurityProxyResourcesResponseBody &&) = default ;
    DescribeSecurityProxyResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResourcesResponseBody() = default ;
    DescribeSecurityProxyResourcesResponseBody& operator=(const DescribeSecurityProxyResourcesResponseBody &) = default ;
    DescribeSecurityProxyResourcesResponseBody& operator=(DescribeSecurityProxyResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
      };
      ResourceList() = default ;
      ResourceList(const ResourceList &) = default ;
      ResourceList(ResourceList &&) = default ;
      ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceList() = default ;
      ResourceList& operator=(const ResourceList &) = default ;
      ResourceList& operator=(ResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcList& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
          DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, VpcList& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
          DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        VpcList() = default ;
        VpcList(const VpcList &) = default ;
        VpcList(VpcList &&) = default ;
        VpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcList() = default ;
        VpcList& operator=(const VpcList &) = default ;
        VpcList& operator=(VpcList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NatGateways : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NatGateways& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
            DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
            DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, NatGateways& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
            DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
            DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          NatGateways() = default ;
          NatGateways(const NatGateways &) = default ;
          NatGateways(NatGateways &&) = default ;
          NatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NatGateways() = default ;
          NatGateways& operator=(const NatGateways &) = default ;
          NatGateways& operator=(NatGateways &&) = default ;
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
            shared_ptr<string> destinationCidr_ {};
            shared_ptr<string> nextHopId_ {};
            shared_ptr<string> nextHopType_ {};
            shared_ptr<string> routeTableId_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->natRouteEntryList_ == nullptr && this->status_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
          inline NatGateways& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


          // natGatewayId Field Functions 
          bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
          void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
          inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
          inline NatGateways& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


          // natGatewayName Field Functions 
          bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
          void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
          inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
          inline NatGateways& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


          // natRouteEntryList Field Functions 
          bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
          void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
          inline const vector<NatGateways::NatRouteEntryList> & getNatRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<NatGateways::NatRouteEntryList>) };
          inline vector<NatGateways::NatRouteEntryList> getNatRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<NatGateways::NatRouteEntryList>) };
          inline NatGateways& setNatRouteEntryList(const vector<NatGateways::NatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
          inline NatGateways& setNatRouteEntryList(vector<NatGateways::NatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline NatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> detail_ {};
          shared_ptr<string> natGatewayId_ {};
          shared_ptr<string> natGatewayName_ {};
          shared_ptr<vector<NatGateways::NatRouteEntryList>> natRouteEntryList_ {};
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->memberUid_ == nullptr && this->natGateways_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VpcList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // memberUid Field Functions 
        bool hasMemberUid() const { return this->memberUid_ != nullptr;};
        void deleteMemberUid() { this->memberUid_ = nullptr;};
        inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
        inline VpcList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


        // natGateways Field Functions 
        bool hasNatGateways() const { return this->natGateways_ != nullptr;};
        void deleteNatGateways() { this->natGateways_ = nullptr;};
        inline const vector<VpcList::NatGateways> & getNatGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, vector<VpcList::NatGateways>) };
        inline vector<VpcList::NatGateways> getNatGateways() { DARABONBA_PTR_GET(natGateways_, vector<VpcList::NatGateways>) };
        inline VpcList& setNatGateways(const vector<VpcList::NatGateways> & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
        inline VpcList& setNatGateways(vector<VpcList::NatGateways> && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline VpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> memberUid_ {};
        shared_ptr<vector<VpcList::NatGateways>> natGateways_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->vpcList_ == nullptr; };
      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline ResourceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // vpcList Field Functions 
      bool hasVpcList() const { return this->vpcList_ != nullptr;};
      void deleteVpcList() { this->vpcList_ = nullptr;};
      inline const vector<ResourceList::VpcList> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<ResourceList::VpcList>) };
      inline vector<ResourceList::VpcList> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<ResourceList::VpcList>) };
      inline ResourceList& setVpcList(const vector<ResourceList::VpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
      inline ResourceList& setVpcList(vector<ResourceList::VpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


    protected:
      shared_ptr<string> regionNo_ {};
      shared_ptr<vector<ResourceList::VpcList>> vpcList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityProxyResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<DescribeSecurityProxyResourcesResponseBody::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<DescribeSecurityProxyResourcesResponseBody::ResourceList>) };
    inline vector<DescribeSecurityProxyResourcesResponseBody::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<DescribeSecurityProxyResourcesResponseBody::ResourceList>) };
    inline DescribeSecurityProxyResourcesResponseBody& setResourceList(const vector<DescribeSecurityProxyResourcesResponseBody::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline DescribeSecurityProxyResourcesResponseBody& setResourceList(vector<DescribeSecurityProxyResourcesResponseBody::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSecurityProxyResourcesResponseBody::ResourceList>> resourceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
