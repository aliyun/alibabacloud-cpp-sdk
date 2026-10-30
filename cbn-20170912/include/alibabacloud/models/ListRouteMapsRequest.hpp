// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTEMAPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTEMAPSREQUEST_HPP_
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
  class ListRouteMapsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteMapsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteMapIds, routeMapIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteMapsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteMapIds, routeMapIds_);
    };
    ListRouteMapsRequest() = default ;
    ListRouteMapsRequest(const ListRouteMapsRequest &) = default ;
    ListRouteMapsRequest(ListRouteMapsRequest &&) = default ;
    ListRouteMapsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteMapsRequest() = default ;
    ListRouteMapsRequest& operator=(const ListRouteMapsRequest &) = default ;
    ListRouteMapsRequest& operator=(ListRouteMapsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
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
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The filter condition. Valid values:
      // 
      // - **Direction**: the direction of the route map.
      // - **Name**: the name of the route map.
      // - **Priority**: the priority of the route map.
      // 
      // By default, multiple filter conditions are connected by an AND logical operator. A route map must meet all filter conditions to be considered a match.
      // 
      // You can specify up to 5 filter conditions at a time.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      // 
      // Specify the filter value based on the **Key**. You can specify multiple filter values for a single **Key**. Multiple filter values are connected by an OR logical operator. A route map that meets any of the filter values is considered a match for the filter condition.
      // 
      // You can specify up to 5 filter values for a single filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr
        && this->routeMapIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListRouteMapsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListRouteMapsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListRouteMapsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListRouteMapsRequest::Filter>) };
    inline vector<ListRouteMapsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListRouteMapsRequest::Filter>) };
    inline ListRouteMapsRequest& setFilter(const vector<ListRouteMapsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListRouteMapsRequest& setFilter(vector<ListRouteMapsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteMapsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteMapsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListRouteMapsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeMapIds Field Functions 
    bool hasRouteMapIds() const { return this->routeMapIds_ != nullptr;};
    void deleteRouteMapIds() { this->routeMapIds_ = nullptr;};
    inline const vector<string> & getRouteMapIds() const { DARABONBA_PTR_GET_CONST(routeMapIds_, vector<string>) };
    inline vector<string> getRouteMapIds() { DARABONBA_PTR_GET(routeMapIds_, vector<string>) };
    inline ListRouteMapsRequest& setRouteMapIds(const vector<string> & routeMapIds) { DARABONBA_PTR_SET_VALUE(routeMapIds_, routeMapIds) };
    inline ListRouteMapsRequest& setRouteMapIds(vector<string> && routeMapIds) { DARABONBA_PTR_SET_RVALUE(routeMapIds_, routeMapIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a value for this parameter on your client to ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: sends a check request without performing the query. The system checks whether required parameters are specified, the request format, and service limits. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The filter conditions.
    // 
    // You can specify up to 5 filter conditions at a time.
    shared_ptr<vector<ListRouteMapsRequest::Filter>> filter_ {};
    // The number of entries to return on each page. Valid values: 1 to 100.
    // If you do not specify the MaxResults parameter, pagination is not used. After you call the operation, the value of MaxResults indicates the total number of entries. If you specify the MaxResults parameter, pagination is used. After you call the operation, the value of MaxResults indicates the number of entries on the current page. We recommend that you set MaxResults to 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If this is the first query or no next query is available, you do not need to specify this parameter.
    // - If a next query is available, set the value to the **NextToken** value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of the route maps to query. If you do not specify this parameter, all route maps are queried.
    shared_ptr<vector<string>> routeMapIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
