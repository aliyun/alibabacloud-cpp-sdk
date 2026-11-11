// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYTABLEASSOCIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYTABLEASSOCIATIONSREQUEST_HPP_
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
  class DescribeTransitRouterPolicyTableAssociationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterPolicyTableAssociationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterPolicyTableAssociationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeTransitRouterPolicyTableAssociationsRequest() = default ;
    DescribeTransitRouterPolicyTableAssociationsRequest(const DescribeTransitRouterPolicyTableAssociationsRequest &) = default ;
    DescribeTransitRouterPolicyTableAssociationsRequest(DescribeTransitRouterPolicyTableAssociationsRequest &&) = default ;
    DescribeTransitRouterPolicyTableAssociationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterPolicyTableAssociationsRequest() = default ;
    DescribeTransitRouterPolicyTableAssociationsRequest& operator=(const DescribeTransitRouterPolicyTableAssociationsRequest &) = default ;
    DescribeTransitRouterPolicyTableAssociationsRequest& operator=(DescribeTransitRouterPolicyTableAssociationsRequest &&) = default ;
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
      // - **PolicyTableId**: the policy routing table ID.
      // - **AttachmentId**: the network connectivity instance ID.
      // - **AssociationId**: the policy routing table associate relationship instance ID.
      // 
      // By default, multiple filter conditions are connected by the **AND** logical operator. A result is returned only when all filter conditions are met.
      // 
      // You can specify up to five filter conditions at a time.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      // 
      // Specify the filter value based on the **Key** parameter. You can specify multiple filter values for a single **Key**. Multiple filter values are connected by the **OR** logical operator. A result is returned when any of the filter values is met.
      // 
      // You can specify up to five filter values for a single filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter>) };
    inline vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter>) };
    inline DescribeTransitRouterPolicyTableAssociationsRequest& setFilter(const vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeTransitRouterPolicyTableAssociationsRequest& setFilter(vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTransitRouterPolicyTableAssociationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouterPolicyTableAssociationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The filter conditions. You can specify up to five filter conditions at a time.
    shared_ptr<vector<DescribeTransitRouterPolicyTableAssociationsRequest::Filter>> filter_ {};
    // The number of entries to return per page. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If **NextToken** is empty, no subsequent query is available.
    // - If a value is returned for **NextToken**, the value is the token for the next query.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
