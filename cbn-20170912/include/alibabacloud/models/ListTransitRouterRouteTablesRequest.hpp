// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTransitRouterRouteTablesRequestRouteTableOptions.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterRouteTablesRequestTag.hpp>
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
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->routeTableOptions_ != nullptr && this->tag_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterRouteTableIds_ != nullptr && this->transitRouterRouteTableNames_ != nullptr
        && this->transitRouterRouteTableStatus_ != nullptr && this->transitRouterRouteTableType_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTablesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTablesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterRouteTablesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterRouteTablesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterRouteTablesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterRouteTablesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableOptions Field Functions 
    bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
    void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
    inline const ListTransitRouterRouteTablesRequestRouteTableOptions & routeTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, ListTransitRouterRouteTablesRequestRouteTableOptions) };
    inline ListTransitRouterRouteTablesRequestRouteTableOptions routeTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, ListTransitRouterRouteTablesRequestRouteTableOptions) };
    inline ListTransitRouterRouteTablesRequest& setRouteTableOptions(const ListTransitRouterRouteTablesRequestRouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
    inline ListTransitRouterRouteTablesRequest& setRouteTableOptions(ListTransitRouterRouteTablesRequestRouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTransitRouterRouteTablesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTransitRouterRouteTablesRequestTag>) };
    inline vector<ListTransitRouterRouteTablesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListTransitRouterRouteTablesRequestTag>) };
    inline ListTransitRouterRouteTablesRequest& setTag(const vector<ListTransitRouterRouteTablesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTransitRouterRouteTablesRequest& setTag(vector<ListTransitRouterRouteTablesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterRouteTableIds Field Functions 
    bool hasTransitRouterRouteTableIds() const { return this->transitRouterRouteTableIds_ != nullptr;};
    void deleteTransitRouterRouteTableIds() { this->transitRouterRouteTableIds_ = nullptr;};
    inline const vector<string> & transitRouterRouteTableIds() const { DARABONBA_PTR_GET_CONST(transitRouterRouteTableIds_, vector<string>) };
    inline vector<string> transitRouterRouteTableIds() { DARABONBA_PTR_GET(transitRouterRouteTableIds_, vector<string>) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableIds(const vector<string> & transitRouterRouteTableIds) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableIds_, transitRouterRouteTableIds) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableIds(vector<string> && transitRouterRouteTableIds) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteTableIds_, transitRouterRouteTableIds) };


    // transitRouterRouteTableNames Field Functions 
    bool hasTransitRouterRouteTableNames() const { return this->transitRouterRouteTableNames_ != nullptr;};
    void deleteTransitRouterRouteTableNames() { this->transitRouterRouteTableNames_ = nullptr;};
    inline const vector<string> & transitRouterRouteTableNames() const { DARABONBA_PTR_GET_CONST(transitRouterRouteTableNames_, vector<string>) };
    inline vector<string> transitRouterRouteTableNames() { DARABONBA_PTR_GET(transitRouterRouteTableNames_, vector<string>) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableNames(const vector<string> & transitRouterRouteTableNames) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableNames_, transitRouterRouteTableNames) };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableNames(vector<string> && transitRouterRouteTableNames) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteTableNames_, transitRouterRouteTableNames) };


    // transitRouterRouteTableStatus Field Functions 
    bool hasTransitRouterRouteTableStatus() const { return this->transitRouterRouteTableStatus_ != nullptr;};
    void deleteTransitRouterRouteTableStatus() { this->transitRouterRouteTableStatus_ = nullptr;};
    inline string transitRouterRouteTableStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableStatus_, "") };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableStatus(string transitRouterRouteTableStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableStatus_, transitRouterRouteTableStatus) };


    // transitRouterRouteTableType Field Functions 
    bool hasTransitRouterRouteTableType() const { return this->transitRouterRouteTableType_ != nullptr;};
    void deleteTransitRouterRouteTableType() { this->transitRouterRouteTableType_ = nullptr;};
    inline string transitRouterRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableType_, "") };
    inline ListTransitRouterRouteTablesRequest& setTransitRouterRouteTableType(string transitRouterRouteTableType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableType_, transitRouterRouteTableType) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query or no subsequent query is to be sent, ignore this parameter.
    // *   If a subsequent query is to be sent, set the value to the value of **NextToken** that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The features of the route table.
    std::shared_ptr<ListTransitRouterRouteTablesRequestRouteTableOptions> routeTableOptions_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<ListTransitRouterRouteTablesRequestTag>> tag_ = nullptr;
    // The ID of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the route table.
    // 
    // You can query multiple route tables in each call. Maximum value of **N**: **20**.
    std::shared_ptr<vector<string>> transitRouterRouteTableIds_ = nullptr;
    // The name of the route table.
    // 
    // You can query multiple route tables in each call. Maximum value of **N**: **20**.
    // 
    // > If you set both **TransitRouterRouteTableNames.N** and **TransitRouterRouteTableIds.N**, make sure that the specified name and ID belong to the same route table.
    std::shared_ptr<vector<string>> transitRouterRouteTableNames_ = nullptr;
    // The status of the route table. Valid values:
    // 
    // *   **Creating**: The route table is being created.
    // *   **Deleting**: The route table is being deleted.
    // *   **Active**: The route table is available.
    std::shared_ptr<string> transitRouterRouteTableStatus_ = nullptr;
    // The type of the route table. Valid values:
    // 
    // *   **Custom**: a custom route table
    // *   **System**: the default route table
    std::shared_ptr<string> transitRouterRouteTableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
