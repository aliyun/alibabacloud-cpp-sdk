// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTETABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTETABLEENTRIESRESPONSEBODY_HPP_
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
  class ListGatewayRouteTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayRouteEntryModels, gatewayRouteEntryModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayRouteEntryModels, gatewayRouteEntryModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGatewayRouteTableEntriesResponseBody() = default ;
    ListGatewayRouteTableEntriesResponseBody(const ListGatewayRouteTableEntriesResponseBody &) = default ;
    ListGatewayRouteTableEntriesResponseBody(ListGatewayRouteTableEntriesResponseBody &&) = default ;
    ListGatewayRouteTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteTableEntriesResponseBody() = default ;
    ListGatewayRouteTableEntriesResponseBody& operator=(const ListGatewayRouteTableEntriesResponseBody &) = default ;
    ListGatewayRouteTableEntriesResponseBody& operator=(ListGatewayRouteTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GatewayRouteEntryModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GatewayRouteEntryModels& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, GatewayRouteEntryModels& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      GatewayRouteEntryModels() = default ;
      GatewayRouteEntryModels(const GatewayRouteEntryModels &) = default ;
      GatewayRouteEntryModels(GatewayRouteEntryModels &&) = default ;
      GatewayRouteEntryModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GatewayRouteEntryModels() = default ;
      GatewayRouteEntryModels& operator=(const GatewayRouteEntryModels &) = default ;
      GatewayRouteEntryModels& operator=(GatewayRouteEntryModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NextHops : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NextHops& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, NextHops& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        NextHops() = default ;
        NextHops(const NextHops &) = default ;
        NextHops(NextHops &&) = default ;
        NextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NextHops() = default ;
        NextHops& operator=(const NextHops &) = default ;
        NextHops& operator=(NextHops &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->weight_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
        inline NextHops& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline NextHops& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline NextHops& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
        inline NextHops& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // Indicates whether the route is available. Valid values:
        // 
        // *   **0**: unavailable
        // *   **1**: available
        shared_ptr<string> enabled_ {};
        // The ID of the next hop.
        shared_ptr<string> nextHopId_ {};
        // The type of the next hop. Valid values:
        // 
        // *   **Instance** (default): an ECS instance
        // *   **HaVip**: a high-availability virtual IP address (HaVip).
        // *   **VpnGateway**: a VPN gateway
        // *   **NatGateway**: a NAT gateway
        // *   **NetworkInterface**: a secondary ENI
        // *   **RouterInterface**: a router interface
        // *   **IPv6Gateway**: an IPv6 gateway
        // *   **Attachment**: a transit router
        shared_ptr<string> nextHopType_ {};
        // The weight of the route.
        shared_ptr<string> weight_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->name_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->nextHops_ == nullptr
        && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GatewayRouteEntryModels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline GatewayRouteEntryModels& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GatewayRouteEntryModels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nextHopId Field Functions 
      bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
      void deleteNextHopId() { this->nextHopId_ = nullptr;};
      inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
      inline GatewayRouteEntryModels& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline GatewayRouteEntryModels& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // nextHops Field Functions 
      bool hasNextHops() const { return this->nextHops_ != nullptr;};
      void deleteNextHops() { this->nextHops_ = nullptr;};
      inline const vector<GatewayRouteEntryModels::NextHops> & getNextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, vector<GatewayRouteEntryModels::NextHops>) };
      inline vector<GatewayRouteEntryModels::NextHops> getNextHops() { DARABONBA_PTR_GET(nextHops_, vector<GatewayRouteEntryModels::NextHops>) };
      inline GatewayRouteEntryModels& setNextHops(const vector<GatewayRouteEntryModels::NextHops> & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
      inline GatewayRouteEntryModels& setNextHops(vector<GatewayRouteEntryModels::NextHops> && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GatewayRouteEntryModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the route entry.
      shared_ptr<string> description_ {};
      // The destination CIDR block of the route.
      shared_ptr<string> destinationCidrBlock_ {};
      // The name of the route entry.
      // 
      // The name must be 2 to 128 characters in length and can contain letter, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
      shared_ptr<string> name_ {};
      // The ID of the next hop.
      shared_ptr<string> nextHopId_ {};
      // The type of the next hop. Valid values:
      // 
      // *   **EcsInstance**: Elastic Compute Service (ECS) instance
      // *   **NetworkInterface**: elastic network interfaces (ENIs).
      // *   **Local**: local next hop
      shared_ptr<string> nextHopType_ {};
      // The information about the next hop.
      shared_ptr<vector<GatewayRouteEntryModels::NextHops>> nextHops_ {};
      // The status of the route entry. Valid values:
      // 
      // *   **Pending**
      // *   **Available**
      // *   **Modifying**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->gatewayRouteEntryModels_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // gatewayRouteEntryModels Field Functions 
    bool hasGatewayRouteEntryModels() const { return this->gatewayRouteEntryModels_ != nullptr;};
    void deleteGatewayRouteEntryModels() { this->gatewayRouteEntryModels_ = nullptr;};
    inline const vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels> & getGatewayRouteEntryModels() const { DARABONBA_PTR_GET_CONST(gatewayRouteEntryModels_, vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels>) };
    inline vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels> getGatewayRouteEntryModels() { DARABONBA_PTR_GET(gatewayRouteEntryModels_, vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels>) };
    inline ListGatewayRouteTableEntriesResponseBody& setGatewayRouteEntryModels(const vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels> & gatewayRouteEntryModels) { DARABONBA_PTR_SET_VALUE(gatewayRouteEntryModels_, gatewayRouteEntryModels) };
    inline ListGatewayRouteTableEntriesResponseBody& setGatewayRouteEntryModels(vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels> && gatewayRouteEntryModels) { DARABONBA_PTR_SET_RVALUE(gatewayRouteEntryModels_, gatewayRouteEntryModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGatewayRouteTableEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayRouteTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListGatewayRouteTableEntriesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the routes in the gateway route table.
    shared_ptr<vector<ListGatewayRouteTableEntriesResponseBody::GatewayRouteEntryModels>> gatewayRouteEntryModels_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
