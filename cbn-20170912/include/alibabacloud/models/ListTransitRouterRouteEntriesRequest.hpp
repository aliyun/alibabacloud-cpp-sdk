// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteFilter, routeFilter_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryIds, transitRouterRouteEntryIds_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNames, transitRouterRouteEntryNames_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopResourceId, transitRouterRouteEntryNextHopResourceId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopResourceType, transitRouterRouteEntryNextHopResourceType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryOriginResourceId, transitRouterRouteEntryOriginResourceId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryOriginResourceType, transitRouterRouteEntryOriginResourceType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryStatus, transitRouterRouteEntryStatus_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryType, transitRouterRouteEntryType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteFilter, routeFilter_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryIds, transitRouterRouteEntryIds_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNames, transitRouterRouteEntryNames_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopResourceId, transitRouterRouteEntryNextHopResourceId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopResourceType, transitRouterRouteEntryNextHopResourceType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryOriginResourceId, transitRouterRouteEntryOriginResourceId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryOriginResourceType, transitRouterRouteEntryOriginResourceType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryStatus, transitRouterRouteEntryStatus_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryType, transitRouterRouteEntryType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    ListTransitRouterRouteEntriesRequest() = default ;
    ListTransitRouterRouteEntriesRequest(const ListTransitRouterRouteEntriesRequest &) = default ;
    ListTransitRouterRouteEntriesRequest(ListTransitRouterRouteEntriesRequest &&) = default ;
    ListTransitRouterRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteEntriesRequest() = default ;
    ListTransitRouterRouteEntriesRequest& operator=(const ListTransitRouterRouteEntriesRequest &) = default ;
    ListTransitRouterRouteEntriesRequest& operator=(ListTransitRouterRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteFilter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RouteFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RouteFilter() = default ;
      RouteFilter(const RouteFilter &) = default ;
      RouteFilter(RouteFilter &&) = default ;
      RouteFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteFilter() = default ;
      RouteFilter& operator=(const RouteFilter &) = default ;
      RouteFilter& operator=(RouteFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline RouteFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline RouteFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline RouteFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The match pattern for filtering CIDR blocks. Valid values:
      // 
      // *   **PrefixExactMatchCidrs**: exact matching.
      // *   **LongestPrefixMatchCidrs**: longest prefix matching. You can specify IP addresses and CIDR blocks.
      // *   **SubnetOfMatchCidrs**: subnet matching. The subnets of the specified CIDR blocks, including the CIDR block, are matches against the match conditions.
      // *   **SupernetOfMatchCidrs**: supernet matching. The supernets of the CIDR block, including the CIDR block, are matched against the match conditions.
      // 
      // By default, the logical operator among filter conditions is **AND**. Information about a route entry is returned only if the route entry matches all filter conditions. Filter conditions must be unique.
      shared_ptr<string> key_ {};
      // The filter value.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->prefixListId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routeFilter_ == nullptr && this->transitRouterRouteEntryDestinationCidrBlock_ == nullptr && this->transitRouterRouteEntryIds_ == nullptr && this->transitRouterRouteEntryNames_ == nullptr
        && this->transitRouterRouteEntryNextHopId_ == nullptr && this->transitRouterRouteEntryNextHopResourceId_ == nullptr && this->transitRouterRouteEntryNextHopResourceType_ == nullptr && this->transitRouterRouteEntryNextHopType_ == nullptr && this->transitRouterRouteEntryOriginResourceId_ == nullptr
        && this->transitRouterRouteEntryOriginResourceType_ == nullptr && this->transitRouterRouteEntryStatus_ == nullptr && this->transitRouterRouteEntryType_ == nullptr && this->transitRouterRouteTableId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteEntriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteEntriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterRouteEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterRouteEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ListTransitRouterRouteEntriesRequest& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterRouteEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterRouteEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeFilter Field Functions 
    bool hasRouteFilter() const { return this->routeFilter_ != nullptr;};
    void deleteRouteFilter() { this->routeFilter_ = nullptr;};
    inline const vector<ListTransitRouterRouteEntriesRequest::RouteFilter> & getRouteFilter() const { DARABONBA_PTR_GET_CONST(routeFilter_, vector<ListTransitRouterRouteEntriesRequest::RouteFilter>) };
    inline vector<ListTransitRouterRouteEntriesRequest::RouteFilter> getRouteFilter() { DARABONBA_PTR_GET(routeFilter_, vector<ListTransitRouterRouteEntriesRequest::RouteFilter>) };
    inline ListTransitRouterRouteEntriesRequest& setRouteFilter(const vector<ListTransitRouterRouteEntriesRequest::RouteFilter> & routeFilter) { DARABONBA_PTR_SET_VALUE(routeFilter_, routeFilter) };
    inline ListTransitRouterRouteEntriesRequest& setRouteFilter(vector<ListTransitRouterRouteEntriesRequest::RouteFilter> && routeFilter) { DARABONBA_PTR_SET_RVALUE(routeFilter_, routeFilter) };


    // transitRouterRouteEntryDestinationCidrBlock Field Functions 
    bool hasTransitRouterRouteEntryDestinationCidrBlock() const { return this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr;};
    void deleteTransitRouterRouteEntryDestinationCidrBlock() { this->transitRouterRouteEntryDestinationCidrBlock_ = nullptr;};
    inline string getTransitRouterRouteEntryDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDestinationCidrBlock_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryDestinationCidrBlock(string transitRouterRouteEntryDestinationCidrBlock) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDestinationCidrBlock_, transitRouterRouteEntryDestinationCidrBlock) };


    // transitRouterRouteEntryIds Field Functions 
    bool hasTransitRouterRouteEntryIds() const { return this->transitRouterRouteEntryIds_ != nullptr;};
    void deleteTransitRouterRouteEntryIds() { this->transitRouterRouteEntryIds_ = nullptr;};
    inline const vector<string> & getTransitRouterRouteEntryIds() const { DARABONBA_PTR_GET_CONST(transitRouterRouteEntryIds_, vector<string>) };
    inline vector<string> getTransitRouterRouteEntryIds() { DARABONBA_PTR_GET(transitRouterRouteEntryIds_, vector<string>) };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryIds(const vector<string> & transitRouterRouteEntryIds) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryIds_, transitRouterRouteEntryIds) };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryIds(vector<string> && transitRouterRouteEntryIds) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteEntryIds_, transitRouterRouteEntryIds) };


    // transitRouterRouteEntryNames Field Functions 
    bool hasTransitRouterRouteEntryNames() const { return this->transitRouterRouteEntryNames_ != nullptr;};
    void deleteTransitRouterRouteEntryNames() { this->transitRouterRouteEntryNames_ = nullptr;};
    inline const vector<string> & getTransitRouterRouteEntryNames() const { DARABONBA_PTR_GET_CONST(transitRouterRouteEntryNames_, vector<string>) };
    inline vector<string> getTransitRouterRouteEntryNames() { DARABONBA_PTR_GET(transitRouterRouteEntryNames_, vector<string>) };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryNames(const vector<string> & transitRouterRouteEntryNames) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNames_, transitRouterRouteEntryNames) };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryNames(vector<string> && transitRouterRouteEntryNames) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteEntryNames_, transitRouterRouteEntryNames) };


    // transitRouterRouteEntryNextHopId Field Functions 
    bool hasTransitRouterRouteEntryNextHopId() const { return this->transitRouterRouteEntryNextHopId_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopId() { this->transitRouterRouteEntryNextHopId_ = nullptr;};
    inline string getTransitRouterRouteEntryNextHopId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopId_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryNextHopId(string transitRouterRouteEntryNextHopId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopId_, transitRouterRouteEntryNextHopId) };


    // transitRouterRouteEntryNextHopResourceId Field Functions 
    bool hasTransitRouterRouteEntryNextHopResourceId() const { return this->transitRouterRouteEntryNextHopResourceId_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopResourceId() { this->transitRouterRouteEntryNextHopResourceId_ = nullptr;};
    inline string getTransitRouterRouteEntryNextHopResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopResourceId_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryNextHopResourceId(string transitRouterRouteEntryNextHopResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopResourceId_, transitRouterRouteEntryNextHopResourceId) };


    // transitRouterRouteEntryNextHopResourceType Field Functions 
    bool hasTransitRouterRouteEntryNextHopResourceType() const { return this->transitRouterRouteEntryNextHopResourceType_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopResourceType() { this->transitRouterRouteEntryNextHopResourceType_ = nullptr;};
    inline string getTransitRouterRouteEntryNextHopResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopResourceType_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryNextHopResourceType(string transitRouterRouteEntryNextHopResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopResourceType_, transitRouterRouteEntryNextHopResourceType) };


    // transitRouterRouteEntryNextHopType Field Functions 
    bool hasTransitRouterRouteEntryNextHopType() const { return this->transitRouterRouteEntryNextHopType_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopType() { this->transitRouterRouteEntryNextHopType_ = nullptr;};
    inline string getTransitRouterRouteEntryNextHopType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopType_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryNextHopType(string transitRouterRouteEntryNextHopType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopType_, transitRouterRouteEntryNextHopType) };


    // transitRouterRouteEntryOriginResourceId Field Functions 
    bool hasTransitRouterRouteEntryOriginResourceId() const { return this->transitRouterRouteEntryOriginResourceId_ != nullptr;};
    void deleteTransitRouterRouteEntryOriginResourceId() { this->transitRouterRouteEntryOriginResourceId_ = nullptr;};
    inline string getTransitRouterRouteEntryOriginResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryOriginResourceId_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryOriginResourceId(string transitRouterRouteEntryOriginResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryOriginResourceId_, transitRouterRouteEntryOriginResourceId) };


    // transitRouterRouteEntryOriginResourceType Field Functions 
    bool hasTransitRouterRouteEntryOriginResourceType() const { return this->transitRouterRouteEntryOriginResourceType_ != nullptr;};
    void deleteTransitRouterRouteEntryOriginResourceType() { this->transitRouterRouteEntryOriginResourceType_ = nullptr;};
    inline string getTransitRouterRouteEntryOriginResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryOriginResourceType_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryOriginResourceType(string transitRouterRouteEntryOriginResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryOriginResourceType_, transitRouterRouteEntryOriginResourceType) };


    // transitRouterRouteEntryStatus Field Functions 
    bool hasTransitRouterRouteEntryStatus() const { return this->transitRouterRouteEntryStatus_ != nullptr;};
    void deleteTransitRouterRouteEntryStatus() { this->transitRouterRouteEntryStatus_ = nullptr;};
    inline string getTransitRouterRouteEntryStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryStatus_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryStatus(string transitRouterRouteEntryStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryStatus_, transitRouterRouteEntryStatus) };


    // transitRouterRouteEntryType Field Functions 
    bool hasTransitRouterRouteEntryType() const { return this->transitRouterRouteEntryType_ != nullptr;};
    void deleteTransitRouterRouteEntryType() { this->transitRouterRouteEntryType_ = nullptr;};
    inline string getTransitRouterRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryType_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteEntryType(string transitRouterRouteEntryType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryType_, transitRouterRouteEntryType) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string getTransitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline ListTransitRouterRouteEntriesRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The prefix list ID.
    shared_ptr<string> prefixListId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The filter conditions.
    shared_ptr<vector<ListTransitRouterRouteEntriesRequest::RouteFilter>> routeFilter_ {};
    // The destination CIDR block of the route. **This parameter is to be deprecated. We recommend that you use the RouteFilter parameter**.
    shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock_ {};
    // The route ID.
    shared_ptr<vector<string>> transitRouterRouteEntryIds_ {};
    // The route name.
    shared_ptr<vector<string>> transitRouterRouteEntryNames_ {};
    // The ID of the network instance connection that you want to specify as the next hop.
    shared_ptr<string> transitRouterRouteEntryNextHopId_ {};
    // The next hop ID.
    shared_ptr<string> transitRouterRouteEntryNextHopResourceId_ {};
    // The next hop type. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **TR**
    // *   **VPN**
    shared_ptr<string> transitRouterRouteEntryNextHopResourceType_ {};
    // The next hop type. Valid values:
    // 
    // *   **BlackHole**: routes network traffic to a black hole.
    // *   **Attachment**: routes network traffic to a network instance connection.
    shared_ptr<string> transitRouterRouteEntryNextHopType_ {};
    // The source instance ID.
    shared_ptr<string> transitRouterRouteEntryOriginResourceId_ {};
    // The source instance type. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **TR**
    // *   **VPN**
    shared_ptr<string> transitRouterRouteEntryOriginResourceType_ {};
    // The status of the route. Valid values:
    // 
    // *   **All**
    // *   **Active** (default)
    // *   **Rejected**
    // *   **Prohibited**
    // *   **Standby**
    // *   **Candidate**
    // 
    // If you do not specify a value, routes in the active state are queried.
    shared_ptr<string> transitRouterRouteEntryStatus_ {};
    // The route type. Valid values:
    // 
    // *   **Propagated**: automatically learned by the route table.
    // *   **Static**: static routes.
    shared_ptr<string> transitRouterRouteEntryType_ {};
    // The ID of the route table of the Enterprise Edition transit router.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterRouteTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
