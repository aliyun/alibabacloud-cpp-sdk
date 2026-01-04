// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewayAssociateNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewayAssociateNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateNetworkInterfaces, associateNetworkInterfaces_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewayAssociateNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateNetworkInterfaces, associateNetworkInterfaces_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody() = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody(const DescribeNatGatewayAssociateNetworkInterfacesResponseBody &) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody(DescribeNatGatewayAssociateNetworkInterfacesResponseBody &&) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewayAssociateNetworkInterfacesResponseBody() = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody& operator=(const DescribeNatGatewayAssociateNetworkInterfacesResponseBody &) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody& operator=(DescribeNatGatewayAssociateNetworkInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssociateNetworkInterfaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociateNetworkInterfaces& obj) { 
        DARABONBA_PTR_TO_JSON(AssociateNetworkInterface, associateNetworkInterface_);
      };
      friend void from_json(const Darabonba::Json& j, AssociateNetworkInterfaces& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociateNetworkInterface, associateNetworkInterface_);
      };
      AssociateNetworkInterfaces() = default ;
      AssociateNetworkInterfaces(const AssociateNetworkInterfaces &) = default ;
      AssociateNetworkInterfaces(AssociateNetworkInterfaces &&) = default ;
      AssociateNetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociateNetworkInterfaces() = default ;
      AssociateNetworkInterfaces& operator=(const AssociateNetworkInterfaces &) = default ;
      AssociateNetworkInterfaces& operator=(AssociateNetworkInterfaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AssociateNetworkInterface : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociateNetworkInterface& obj) { 
          DARABONBA_PTR_TO_JSON(IPv4Sets, IPv4Sets_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(ResourceVpcId, resourceVpcId_);
          DARABONBA_PTR_TO_JSON(TunnelIndex, tunnelIndex_);
        };
        friend void from_json(const Darabonba::Json& j, AssociateNetworkInterface& obj) { 
          DARABONBA_PTR_FROM_JSON(IPv4Sets, IPv4Sets_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(ResourceVpcId, resourceVpcId_);
          DARABONBA_PTR_FROM_JSON(TunnelIndex, tunnelIndex_);
        };
        AssociateNetworkInterface() = default ;
        AssociateNetworkInterface(const AssociateNetworkInterface &) = default ;
        AssociateNetworkInterface(AssociateNetworkInterface &&) = default ;
        AssociateNetworkInterface(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociateNetworkInterface() = default ;
        AssociateNetworkInterface& operator=(const AssociateNetworkInterface &) = default ;
        AssociateNetworkInterface& operator=(AssociateNetworkInterface &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IPv4Sets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IPv4Sets& obj) { 
            DARABONBA_PTR_TO_JSON(IPv4Set, IPv4Set_);
          };
          friend void from_json(const Darabonba::Json& j, IPv4Sets& obj) { 
            DARABONBA_PTR_FROM_JSON(IPv4Set, IPv4Set_);
          };
          IPv4Sets() = default ;
          IPv4Sets(const IPv4Sets &) = default ;
          IPv4Sets(IPv4Sets &&) = default ;
          IPv4Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IPv4Sets() = default ;
          IPv4Sets& operator=(const IPv4Sets &) = default ;
          IPv4Sets& operator=(IPv4Sets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class IPv4Set : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const IPv4Set& obj) { 
              DARABONBA_PTR_TO_JSON(IPv4Address, IPv4Address_);
              DARABONBA_PTR_TO_JSON(Primary, primary_);
            };
            friend void from_json(const Darabonba::Json& j, IPv4Set& obj) { 
              DARABONBA_PTR_FROM_JSON(IPv4Address, IPv4Address_);
              DARABONBA_PTR_FROM_JSON(Primary, primary_);
            };
            IPv4Set() = default ;
            IPv4Set(const IPv4Set &) = default ;
            IPv4Set(IPv4Set &&) = default ;
            IPv4Set(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~IPv4Set() = default ;
            IPv4Set& operator=(const IPv4Set &) = default ;
            IPv4Set& operator=(IPv4Set &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->IPv4Address_ == nullptr
        && this->primary_ == nullptr; };
            // IPv4Address Field Functions 
            bool hasIPv4Address() const { return this->IPv4Address_ != nullptr;};
            void deleteIPv4Address() { this->IPv4Address_ = nullptr;};
            inline string getIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(IPv4Address_, "") };
            inline IPv4Set& setIPv4Address(string IPv4Address) { DARABONBA_PTR_SET_VALUE(IPv4Address_, IPv4Address) };


            // primary Field Functions 
            bool hasPrimary() const { return this->primary_ != nullptr;};
            void deletePrimary() { this->primary_ = nullptr;};
            inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
            inline IPv4Set& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


          protected:
            // The primary private IP address of the ENI.
            shared_ptr<string> IPv4Address_ {};
            // Indicates whether the IP address is the primary private IP address. Valid values:
            // 
            // *   true: Primary private IP address
            // *   false: Secondary private IP addresses
            shared_ptr<bool> primary_ {};
          };

          virtual bool empty() const override { return this->IPv4Set_ == nullptr; };
          // IPv4Set Field Functions 
          bool hasIPv4Set() const { return this->IPv4Set_ != nullptr;};
          void deleteIPv4Set() { this->IPv4Set_ = nullptr;};
          inline const vector<IPv4Sets::IPv4Set> & getIPv4Set() const { DARABONBA_PTR_GET_CONST(IPv4Set_, vector<IPv4Sets::IPv4Set>) };
          inline vector<IPv4Sets::IPv4Set> getIPv4Set() { DARABONBA_PTR_GET(IPv4Set_, vector<IPv4Sets::IPv4Set>) };
          inline IPv4Sets& setIPv4Set(const vector<IPv4Sets::IPv4Set> & iPv4Set) { DARABONBA_PTR_SET_VALUE(IPv4Set_, iPv4Set) };
          inline IPv4Sets& setIPv4Set(vector<IPv4Sets::IPv4Set> && iPv4Set) { DARABONBA_PTR_SET_RVALUE(IPv4Set_, iPv4Set) };


        protected:
          shared_ptr<vector<IPv4Sets::IPv4Set>> IPv4Set_ {};
        };

        virtual bool empty() const override { return this->IPv4Sets_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->resourceVpcId_ == nullptr
        && this->tunnelIndex_ == nullptr; };
        // IPv4Sets Field Functions 
        bool hasIPv4Sets() const { return this->IPv4Sets_ != nullptr;};
        void deleteIPv4Sets() { this->IPv4Sets_ = nullptr;};
        inline const AssociateNetworkInterface::IPv4Sets & getIPv4Sets() const { DARABONBA_PTR_GET_CONST(IPv4Sets_, AssociateNetworkInterface::IPv4Sets) };
        inline AssociateNetworkInterface::IPv4Sets getIPv4Sets() { DARABONBA_PTR_GET(IPv4Sets_, AssociateNetworkInterface::IPv4Sets) };
        inline AssociateNetworkInterface& setIPv4Sets(const AssociateNetworkInterface::IPv4Sets & iPv4Sets) { DARABONBA_PTR_SET_VALUE(IPv4Sets_, iPv4Sets) };
        inline AssociateNetworkInterface& setIPv4Sets(AssociateNetworkInterface::IPv4Sets && iPv4Sets) { DARABONBA_PTR_SET_RVALUE(IPv4Sets_, iPv4Sets) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline AssociateNetworkInterface& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline AssociateNetworkInterface& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceOwnerId Field Functions 
        bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
        void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
        inline string getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
        inline AssociateNetworkInterface& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline AssociateNetworkInterface& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // resourceVpcId Field Functions 
        bool hasResourceVpcId() const { return this->resourceVpcId_ != nullptr;};
        void deleteResourceVpcId() { this->resourceVpcId_ = nullptr;};
        inline string getResourceVpcId() const { DARABONBA_PTR_GET_DEFAULT(resourceVpcId_, "") };
        inline AssociateNetworkInterface& setResourceVpcId(string resourceVpcId) { DARABONBA_PTR_SET_VALUE(resourceVpcId_, resourceVpcId) };


        // tunnelIndex Field Functions 
        bool hasTunnelIndex() const { return this->tunnelIndex_ != nullptr;};
        void deleteTunnelIndex() { this->tunnelIndex_ = nullptr;};
        inline string getTunnelIndex() const { DARABONBA_PTR_GET_DEFAULT(tunnelIndex_, "") };
        inline AssociateNetworkInterface& setTunnelIndex(string tunnelIndex) { DARABONBA_PTR_SET_VALUE(tunnelIndex_, tunnelIndex) };


      protected:
        // The IPv4 addresses of the ENIs.
        shared_ptr<AssociateNetworkInterface::IPv4Sets> IPv4Sets_ {};
        // The ID of the ENI.
        shared_ptr<string> networkInterfaceId_ {};
        // The ID of the service resource.
        shared_ptr<string> resourceId_ {};
        // The UID of the account to which the service resource belongs.
        shared_ptr<string> resourceOwnerId_ {};
        // The type of the service resource.
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> resourceVpcId_ {};
        // The ID of the tunnel index.
        shared_ptr<string> tunnelIndex_ {};
      };

      virtual bool empty() const override { return this->associateNetworkInterface_ == nullptr; };
      // associateNetworkInterface Field Functions 
      bool hasAssociateNetworkInterface() const { return this->associateNetworkInterface_ != nullptr;};
      void deleteAssociateNetworkInterface() { this->associateNetworkInterface_ = nullptr;};
      inline const vector<AssociateNetworkInterfaces::AssociateNetworkInterface> & getAssociateNetworkInterface() const { DARABONBA_PTR_GET_CONST(associateNetworkInterface_, vector<AssociateNetworkInterfaces::AssociateNetworkInterface>) };
      inline vector<AssociateNetworkInterfaces::AssociateNetworkInterface> getAssociateNetworkInterface() { DARABONBA_PTR_GET(associateNetworkInterface_, vector<AssociateNetworkInterfaces::AssociateNetworkInterface>) };
      inline AssociateNetworkInterfaces& setAssociateNetworkInterface(const vector<AssociateNetworkInterfaces::AssociateNetworkInterface> & associateNetworkInterface) { DARABONBA_PTR_SET_VALUE(associateNetworkInterface_, associateNetworkInterface) };
      inline AssociateNetworkInterfaces& setAssociateNetworkInterface(vector<AssociateNetworkInterfaces::AssociateNetworkInterface> && associateNetworkInterface) { DARABONBA_PTR_SET_RVALUE(associateNetworkInterface_, associateNetworkInterface) };


    protected:
      shared_ptr<vector<AssociateNetworkInterfaces::AssociateNetworkInterface>> associateNetworkInterface_ {};
    };

    virtual bool empty() const override { return this->associateNetworkInterfaces_ == nullptr
        && this->count_ == nullptr && this->maxResults_ == nullptr && this->natGatewayId_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // associateNetworkInterfaces Field Functions 
    bool hasAssociateNetworkInterfaces() const { return this->associateNetworkInterfaces_ != nullptr;};
    void deleteAssociateNetworkInterfaces() { this->associateNetworkInterfaces_ = nullptr;};
    inline const DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces & getAssociateNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(associateNetworkInterfaces_, DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces getAssociateNetworkInterfaces() { DARABONBA_PTR_GET(associateNetworkInterfaces_, DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setAssociateNetworkInterfaces(const DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces & associateNetworkInterfaces) { DARABONBA_PTR_SET_VALUE(associateNetworkInterfaces_, associateNetworkInterfaces) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setAssociateNetworkInterfaces(DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces && associateNetworkInterfaces) { DARABONBA_PTR_SET_RVALUE(associateNetworkInterfaces_, associateNetworkInterfaces) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ENIs associated with the VPC NAT gateway.
    shared_ptr<DescribeNatGatewayAssociateNetworkInterfacesResponseBody::AssociateNetworkInterfaces> associateNetworkInterfaces_ {};
    // Number of associated ENIs.
    shared_ptr<int32_t> count_ {};
    // The number of entries to return per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The ID of the VPC NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // Indicates whether the token for the next query exists. Valid value:
    // 
    // *   If **NextToken** is empty, there is no next page.
    // *   If the value returned of **NextToken** is not empty, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
