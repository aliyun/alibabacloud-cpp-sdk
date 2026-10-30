// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTEMAPRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTEMAPRULESREQUEST_HPP_
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
  class ListRouteMapRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteMapRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_TO_JSON(RouteMapRuleIds, routeMapRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteMapRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_FROM_JSON(RouteMapRuleIds, routeMapRuleIds_);
    };
    ListRouteMapRulesRequest() = default ;
    ListRouteMapRulesRequest(const ListRouteMapRulesRequest &) = default ;
    ListRouteMapRulesRequest(ListRouteMapRulesRequest &&) = default ;
    ListRouteMapRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteMapRulesRequest() = default ;
    ListRouteMapRulesRequest& operator=(const ListRouteMapRulesRequest &) = default ;
    ListRouteMapRulesRequest& operator=(ListRouteMapRulesRequest &&) = default ;
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
      // - **Name**: the name of the route map rule.
      // - **Priority**: the priority of the route map rule.
      // 
      // By default, multiple filter conditions have an AND relationship. A match succeeds only when all filter conditions are met.
      // 
      // You can specify up to 5 filter conditions at a time.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      // 
      // Specify the filter value based on the Key parameter. You can specify multiple filter values for a single key. Multiple filter values have an OR relationship. A match succeeds if any of the filter values is met.
      // 
      // You can specify up to 5 filter values for a single filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->routeMapId_ == nullptr
        && this->routeMapRuleIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListRouteMapRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListRouteMapRulesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListRouteMapRulesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListRouteMapRulesRequest::Filter>) };
    inline vector<ListRouteMapRulesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListRouteMapRulesRequest::Filter>) };
    inline ListRouteMapRulesRequest& setFilter(const vector<ListRouteMapRulesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListRouteMapRulesRequest& setFilter(vector<ListRouteMapRulesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteMapRulesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteMapRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline ListRouteMapRulesRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


    // routeMapRuleIds Field Functions 
    bool hasRouteMapRuleIds() const { return this->routeMapRuleIds_ != nullptr;};
    void deleteRouteMapRuleIds() { this->routeMapRuleIds_ = nullptr;};
    inline const vector<string> & getRouteMapRuleIds() const { DARABONBA_PTR_GET_CONST(routeMapRuleIds_, vector<string>) };
    inline vector<string> getRouteMapRuleIds() { DARABONBA_PTR_GET(routeMapRuleIds_, vector<string>) };
    inline ListRouteMapRulesRequest& setRouteMapRuleIds(const vector<string> & routeMapRuleIds) { DARABONBA_PTR_SET_VALUE(routeMapRuleIds_, routeMapRuleIds) };
    inline ListRouteMapRulesRequest& setRouteMapRuleIds(vector<string> && routeMapRuleIds) { DARABONBA_PTR_SET_RVALUE(routeMapRuleIds_, routeMapRuleIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value on your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: sends a check request and does not query the route map rules. Check items include whether required parameters are specified, request format, and service limits. If the check fails, the corresponding error is returned. If the check succeeds, the error code DryRunOperation is returned.
    // - **false** (default): sends a normal request and directly queries the route map rules after the check succeeds.
    shared_ptr<bool> dryRun_ {};
    // The information about the filter conditions.
    // 
    // You can specify up to 5 filter conditions at a time.
    shared_ptr<vector<ListRouteMapRulesRequest::Filter>> filter_ {};
    // The number of entries to return on each page in a paginated query.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - You do not need to specify this parameter for the first query or when no next query is available.
    // - If a next query is available, set this parameter to the **NextToken** value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The ID of the route map to query.
    shared_ptr<string> routeMapId_ {};
    // The list of route map rule IDs to query. This parameter and filter conditions can be used together for matching, and they have an AND relationship.
    shared_ptr<vector<string>> routeMapRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
