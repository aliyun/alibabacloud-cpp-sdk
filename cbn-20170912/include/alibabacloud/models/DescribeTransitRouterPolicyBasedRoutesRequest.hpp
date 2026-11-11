// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYBASEDROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYBASEDROUTESREQUEST_HPP_
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
  class DescribeTransitRouterPolicyBasedRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterPolicyBasedRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterPolicyBasedRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
    };
    DescribeTransitRouterPolicyBasedRoutesRequest() = default ;
    DescribeTransitRouterPolicyBasedRoutesRequest(const DescribeTransitRouterPolicyBasedRoutesRequest &) = default ;
    DescribeTransitRouterPolicyBasedRoutesRequest(DescribeTransitRouterPolicyBasedRoutesRequest &&) = default ;
    DescribeTransitRouterPolicyBasedRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterPolicyBasedRoutesRequest() = default ;
    DescribeTransitRouterPolicyBasedRoutesRequest& operator=(const DescribeTransitRouterPolicyBasedRoutesRequest &) = default ;
    DescribeTransitRouterPolicyBasedRoutesRequest& operator=(DescribeTransitRouterPolicyBasedRoutesRequest &&) = default ;
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
      // - **PolicyBasedRouteId**: the instance ID of the policy-based routing rule.
      // 
      // By default, multiple filter conditions are evaluated by using the **AND** operator. A resource is considered a match only if it meets all the filter conditions.
      // 
      // You can specify up to 5 filter conditions at a time.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      // 
      // Specify the filter value based on **Key**. You can specify multiple filter values for a single **Key**. Multiple filter values are evaluated by using the **OR** operator. A resource is considered a match if it meets any of the filter values.
      // 
      // You can specify up to 5 filter values for a single filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->policyTableId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter>) };
    inline vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter>) };
    inline DescribeTransitRouterPolicyBasedRoutesRequest& setFilter(const vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeTransitRouterPolicyBasedRoutesRequest& setFilter(vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTransitRouterPolicyBasedRoutesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouterPolicyBasedRoutesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyTableId Field Functions 
    bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
    void deletePolicyTableId() { this->policyTableId_ = nullptr;};
    inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
    inline DescribeTransitRouterPolicyBasedRoutesRequest& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


  protected:
    // The filter conditions.
    // 
    // You can specify up to 5 filter conditions at a time.
    shared_ptr<vector<DescribeTransitRouterPolicyBasedRoutesRequest::Filter>> filter_ {};
    // The number of entries to return on each page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If **NextToken** is empty, no next query is available.
    // - If **NextToken** returns a value, the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The instance ID of the policy-based routing table.
    shared_ptr<string> policyTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
