// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESREQUEST_HPP_
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
  class ListTransitRouterRouteTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableIds, transitRouterRouteTableIds_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableNames, transitRouterRouteTableNames_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableStatus, transitRouterRouteTableStatus_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableType, transitRouterRouteTableType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableIds, transitRouterRouteTableIds_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableNames, transitRouterRouteTableNames_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableStatus, transitRouterRouteTableStatus_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableType, transitRouterRouteTableType_);
    };
    ListTransitRouterRouteTablesRequest() = default ;
    ListTransitRouterRouteTablesRequest(const ListTransitRouterRouteTablesRequest &) = default ;
    ListTransitRouterRouteTablesRequest(ListTransitRouterRouteTablesRequest &&) = default ;
    ListTransitRouterRouteTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablesRequest() = default ;
    ListTransitRouterRouteTablesRequest& operator=(const ListTransitRouterRouteTablesRequest &) = default ;
    ListTransitRouterRouteTablesRequest& operator=(ListTransitRouterRouteTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      // 
      // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      // 
      // You can specify at most 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // The tag value can be 0 to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // Each tag key must have a unique tag value. You can specify at most 20 tag values in each call.
      shared_ptr<string> value_ {};
    };

    class RouteTableOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTableOptions& obj) { 
        DARABONBA_PTR_TO_JSON(MultiRegionECMP, multiRegionECMP_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTableOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(MultiRegionECMP, multiRegionECMP_);
      };
      RouteTableOptions() = default ;
      RouteTableOptions(const RouteTableOptions &) = default ;
      RouteTableOptions(RouteTableOptions &&) = default ;
      RouteTableOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTableOptions() = default ;
      RouteTableOptions& operator=(const RouteTableOptions &) = default ;
      RouteTableOptions& operator=(RouteTableOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->multiRegionECMP_ == nullptr; };
      // multiRegionECMP Field Functions 
      bool hasMultiRegionECMP() const { return this->multiRegionECMP_ != nullptr;};
      void deleteMultiRegionECMP() { this->multiRegionECMP_ = nullptr;};
      inline string getMultiRegionECMP() const { DARABONBA_PTR_GET_DEFAULT(multiRegionECMP_, "") };
      inline RouteTableOptions& setMultiRegionECMP(string multiRegionECMP) { DARABONBA_PTR_SET_VALUE(multiRegionECMP_, multiRegionECMP) };


    protected:
      // Specifies whether to enable equal-cost multi-path (ECMP) routing. Valid values:
      // 
      // *   **disable**: disables ECMP routing If you disable ECMP routing, routes that are learned from different regions but have the same prefix and attributes select the transit router with the smallest region ID as the next hop. Region IDs are sorted in alphabetic order. The network latency and bandwidth consumption also vary based on the region. Proceed with caution.
      // *   **enable**: enables ECMP routing. If you enable ECMP routing, routes that are learned from different regions but have the same prefix and attributes form an ECMP route. The network latency and bandwidth consumption also vary based on the region. Proceed with caution.
      shared_ptr<string> multiRegionECMP_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->routeTableOptions_ == nullptr && this->tag_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterRouteTableIds_ == nullptr && this->transitRouterRouteTableNames_ == nullptr
        && this->transitRouterRouteTableStatus_ == nullptr && this->transitRouterRouteTableType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTablesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTablesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterRouteTablesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterRouteTablesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterRouteTablesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterRouteTablesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableOptions Field Functions 
    bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
    void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
    inline const ListTransitRouterRouteTablesRequest::RouteTableOptions & getRouteTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, ListTransitRouterRouteTablesRequest::RouteTableOptions) };
    inline ListTransitRouterRouteTablesRequest::RouteTableOptions getRouteTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, ListTransitRouterRouteTablesRequest::RouteTableOptions) };
    inline ListTransitRouterRouteTablesRequest& setRouteTableOptions(const ListTransitRouterRouteTablesRequest::RouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
    inline ListTransitRouterRouteTablesRequest& setRouteTableOptions(ListTransitRouterRouteTablesRequest::RouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTransitRouterRouteTablesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTransitRouterRouteTablesRequest::Tag>) };
    inline vector<ListTransitRouterRouteTablesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListTransitRouterRouteTablesRequest::Tag>) };
    inline ListTransitRouterRouteTablesRequest& setTag(const vector<ListTransitRouterRouteTablesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTransitRouterRouteTablesRequest& setTag(vector<ListTransitRouterRouteTablesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterRouteTableIds Field Functions 
    bool hasTransitRouterRouteTableIds() const { return this->transitRouterRouteTableIds_ != nullptr;};
    void deleteTransitRouterRouteTableIds() { this->transitRouterRouteTableIds_ = nullptr;};
    inline const vector<string> & getTransitRouterRouteTableIds() const { DARABONBA_PTR_GET_CONST(transitRouterRouteTableIds_, vector<string>) };
    inline vector<string> getTransitRouterRouteTableIds() { DARABONBA_PTR_GET(transitRouterRouteTableIds_, vector<string>) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableIds(const vector<string> & transitRouterRouteTableIds) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableIds_, transitRouterRouteTableIds) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableIds(vector<string> && transitRouterRouteTableIds) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteTableIds_, transitRouterRouteTableIds) };


    // transitRouterRouteTableNames Field Functions 
    bool hasTransitRouterRouteTableNames() const { return this->transitRouterRouteTableNames_ != nullptr;};
    void deleteTransitRouterRouteTableNames() { this->transitRouterRouteTableNames_ = nullptr;};
    inline const vector<string> & getTransitRouterRouteTableNames() const { DARABONBA_PTR_GET_CONST(transitRouterRouteTableNames_, vector<string>) };
    inline vector<string> getTransitRouterRouteTableNames() { DARABONBA_PTR_GET(transitRouterRouteTableNames_, vector<string>) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableNames(const vector<string> & transitRouterRouteTableNames) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableNames_, transitRouterRouteTableNames) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableNames(vector<string> && transitRouterRouteTableNames) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteTableNames_, transitRouterRouteTableNames) };


    // transitRouterRouteTableStatus Field Functions 
    bool hasTransitRouterRouteTableStatus() const { return this->transitRouterRouteTableStatus_ != nullptr;};
    void deleteTransitRouterRouteTableStatus() { this->transitRouterRouteTableStatus_ = nullptr;};
    inline string getTransitRouterRouteTableStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableStatus_, "") };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableStatus(string transitRouterRouteTableStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableStatus_, transitRouterRouteTableStatus) };


    // transitRouterRouteTableType Field Functions 
    bool hasTransitRouterRouteTableType() const { return this->transitRouterRouteTableType_ != nullptr;};
    void deleteTransitRouterRouteTableType() { this->transitRouterRouteTableType_ = nullptr;};
    inline string getTransitRouterRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableType_, "") };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableType(string transitRouterRouteTableType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableType_, transitRouterRouteTableType) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query or no subsequent query is to be sent, ignore this parameter.
    // *   If a subsequent query is to be sent, set the value to the value of **NextToken** that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The features of the route table.
    shared_ptr<ListTransitRouterRouteTablesRequest::RouteTableOptions> routeTableOptions_ {};
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    shared_ptr<vector<ListTransitRouterRouteTablesRequest::Tag>> tag_ {};
    // The ID of the Enterprise Edition transit router.
    shared_ptr<string> transitRouterId_ {};
    // The ID of the route table.
    // 
    // You can query multiple route tables in each call. Maximum value of **N**: **20**.
    shared_ptr<vector<string>> transitRouterRouteTableIds_ {};
    // The name of the route table.
    // 
    // You can query multiple route tables in each call. Maximum value of **N**: **20**.
    // 
    // > If you set both **TransitRouterRouteTableNames.N** and **TransitRouterRouteTableIds.N**, make sure that the specified name and ID belong to the same route table.
    shared_ptr<vector<string>> transitRouterRouteTableNames_ {};
    // The status of the route table. Valid values:
    // 
    // *   **Creating**: The route table is being created.
    // *   **Deleting**: The route table is being deleted.
    // *   **Active**: The route table is available.
    shared_ptr<string> transitRouterRouteTableStatus_ {};
    // The type of the route table. Valid values:
    // 
    // *   **Custom**: a custom route table
    // *   **System**: the default route table
    shared_ptr<string> transitRouterRouteTableType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
