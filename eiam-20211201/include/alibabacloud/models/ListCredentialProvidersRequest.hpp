// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCREDENTIALPROVIDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCREDENTIALPROVIDERSREQUEST_HPP_
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
  class ListCredentialProvidersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCredentialProvidersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialProviderIds, credentialProviderIds_);
      DARABONBA_PTR_TO_JSON(CredentialProviderTypes, credentialProviderTypes_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListCredentialProvidersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialProviderIds, credentialProviderIds_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderTypes, credentialProviderTypes_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListCredentialProvidersRequest() = default ;
    ListCredentialProvidersRequest(const ListCredentialProvidersRequest &) = default ;
    ListCredentialProvidersRequest(ListCredentialProvidersRequest &&) = default ;
    ListCredentialProvidersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCredentialProvidersRequest() = default ;
    ListCredentialProvidersRequest& operator=(const ListCredentialProvidersRequest &) = default ;
    ListCredentialProvidersRequest& operator=(ListCredentialProvidersRequest &&) = default ;
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
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->credentialProviderIds_ == nullptr
        && this->credentialProviderTypes_ == nullptr && this->filter_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->statuses_ == nullptr; };
    // credentialProviderIds Field Functions 
    bool hasCredentialProviderIds() const { return this->credentialProviderIds_ != nullptr;};
    void deleteCredentialProviderIds() { this->credentialProviderIds_ = nullptr;};
    inline const vector<string> & getCredentialProviderIds() const { DARABONBA_PTR_GET_CONST(credentialProviderIds_, vector<string>) };
    inline vector<string> getCredentialProviderIds() { DARABONBA_PTR_GET(credentialProviderIds_, vector<string>) };
    inline ListCredentialProvidersRequest& setCredentialProviderIds(const vector<string> & credentialProviderIds) { DARABONBA_PTR_SET_VALUE(credentialProviderIds_, credentialProviderIds) };
    inline ListCredentialProvidersRequest& setCredentialProviderIds(vector<string> && credentialProviderIds) { DARABONBA_PTR_SET_RVALUE(credentialProviderIds_, credentialProviderIds) };


    // credentialProviderTypes Field Functions 
    bool hasCredentialProviderTypes() const { return this->credentialProviderTypes_ != nullptr;};
    void deleteCredentialProviderTypes() { this->credentialProviderTypes_ = nullptr;};
    inline const vector<string> & getCredentialProviderTypes() const { DARABONBA_PTR_GET_CONST(credentialProviderTypes_, vector<string>) };
    inline vector<string> getCredentialProviderTypes() { DARABONBA_PTR_GET(credentialProviderTypes_, vector<string>) };
    inline ListCredentialProvidersRequest& setCredentialProviderTypes(const vector<string> & credentialProviderTypes) { DARABONBA_PTR_SET_VALUE(credentialProviderTypes_, credentialProviderTypes) };
    inline ListCredentialProvidersRequest& setCredentialProviderTypes(vector<string> && credentialProviderTypes) { DARABONBA_PTR_SET_RVALUE(credentialProviderTypes_, credentialProviderTypes) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListCredentialProvidersRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListCredentialProvidersRequest::Filter>) };
    inline vector<ListCredentialProvidersRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListCredentialProvidersRequest::Filter>) };
    inline ListCredentialProvidersRequest& setFilter(const vector<ListCredentialProvidersRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListCredentialProvidersRequest& setFilter(vector<ListCredentialProvidersRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCredentialProvidersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCredentialProvidersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCredentialProvidersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListCredentialProvidersRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListCredentialProvidersRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // 认证令牌提供商ID列表。
    shared_ptr<vector<string>> credentialProviderIds_ {};
    // 认证令牌提供商类型列表。
    shared_ptr<vector<string>> credentialProviderTypes_ {};
    shared_ptr<vector<ListCredentialProvidersRequest::Filter>> filter_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 分页查询时每页行数。默认值为20，最大值为100。
    shared_ptr<int32_t> maxResults_ {};
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    shared_ptr<string> nextToken_ {};
    // 认证令牌提供商状态列表。
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
