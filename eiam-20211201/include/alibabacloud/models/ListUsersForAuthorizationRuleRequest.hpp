// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUsersForAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListUsersForAuthorizationRuleRequest() = default ;
    ListUsersForAuthorizationRuleRequest(const ListUsersForAuthorizationRuleRequest &) = default ;
    ListUsersForAuthorizationRuleRequest(ListUsersForAuthorizationRuleRequest &&) = default ;
    ListUsersForAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForAuthorizationRuleRequest() = default ;
    ListUsersForAuthorizationRuleRequest& operator=(const ListUsersForAuthorizationRuleRequest &) = default ;
    ListUsersForAuthorizationRuleRequest& operator=(ListUsersForAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // 过滤条件名称。
      shared_ptr<string> name_ {};
      // 过滤条件值。
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->filter_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline ListUsersForAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListUsersForAuthorizationRuleRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListUsersForAuthorizationRuleRequest::Filter>) };
    inline vector<ListUsersForAuthorizationRuleRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListUsersForAuthorizationRuleRequest::Filter>) };
    inline ListUsersForAuthorizationRuleRequest& setFilter(const vector<ListUsersForAuthorizationRuleRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListUsersForAuthorizationRuleRequest& setFilter(vector<ListUsersForAuthorizationRuleRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUsersForAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUsersForAuthorizationRuleRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUsersForAuthorizationRuleRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // 过滤条件
    shared_ptr<vector<ListUsersForAuthorizationRuleRequest::Filter>> filter_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 分页查询时每页行数。默认值为20，最大值为100。
    shared_ptr<int32_t> maxResults_ {};
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
