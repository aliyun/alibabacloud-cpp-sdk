// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCREDENTIALSREQUEST_HPP_
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
  class ListCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialIds, credentialIds_);
      DARABONBA_PTR_TO_JSON(CredentialSharingScopes, credentialSharingScopes_);
      DARABONBA_PTR_TO_JSON(CredentialTypes, credentialTypes_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialIds, credentialIds_);
      DARABONBA_PTR_FROM_JSON(CredentialSharingScopes, credentialSharingScopes_);
      DARABONBA_PTR_FROM_JSON(CredentialTypes, credentialTypes_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListCredentialsRequest() = default ;
    ListCredentialsRequest(const ListCredentialsRequest &) = default ;
    ListCredentialsRequest(ListCredentialsRequest &&) = default ;
    ListCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCredentialsRequest() = default ;
    ListCredentialsRequest& operator=(const ListCredentialsRequest &) = default ;
    ListCredentialsRequest& operator=(ListCredentialsRequest &&) = default ;
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

    virtual bool empty() const override { return this->credentialIds_ == nullptr
        && this->credentialSharingScopes_ == nullptr && this->credentialTypes_ == nullptr && this->filter_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->statuses_ == nullptr; };
    // credentialIds Field Functions 
    bool hasCredentialIds() const { return this->credentialIds_ != nullptr;};
    void deleteCredentialIds() { this->credentialIds_ = nullptr;};
    inline const vector<string> & getCredentialIds() const { DARABONBA_PTR_GET_CONST(credentialIds_, vector<string>) };
    inline vector<string> getCredentialIds() { DARABONBA_PTR_GET(credentialIds_, vector<string>) };
    inline ListCredentialsRequest& setCredentialIds(const vector<string> & credentialIds) { DARABONBA_PTR_SET_VALUE(credentialIds_, credentialIds) };
    inline ListCredentialsRequest& setCredentialIds(vector<string> && credentialIds) { DARABONBA_PTR_SET_RVALUE(credentialIds_, credentialIds) };


    // credentialSharingScopes Field Functions 
    bool hasCredentialSharingScopes() const { return this->credentialSharingScopes_ != nullptr;};
    void deleteCredentialSharingScopes() { this->credentialSharingScopes_ = nullptr;};
    inline const vector<string> & getCredentialSharingScopes() const { DARABONBA_PTR_GET_CONST(credentialSharingScopes_, vector<string>) };
    inline vector<string> getCredentialSharingScopes() { DARABONBA_PTR_GET(credentialSharingScopes_, vector<string>) };
    inline ListCredentialsRequest& setCredentialSharingScopes(const vector<string> & credentialSharingScopes) { DARABONBA_PTR_SET_VALUE(credentialSharingScopes_, credentialSharingScopes) };
    inline ListCredentialsRequest& setCredentialSharingScopes(vector<string> && credentialSharingScopes) { DARABONBA_PTR_SET_RVALUE(credentialSharingScopes_, credentialSharingScopes) };


    // credentialTypes Field Functions 
    bool hasCredentialTypes() const { return this->credentialTypes_ != nullptr;};
    void deleteCredentialTypes() { this->credentialTypes_ = nullptr;};
    inline const vector<string> & getCredentialTypes() const { DARABONBA_PTR_GET_CONST(credentialTypes_, vector<string>) };
    inline vector<string> getCredentialTypes() { DARABONBA_PTR_GET(credentialTypes_, vector<string>) };
    inline ListCredentialsRequest& setCredentialTypes(const vector<string> & credentialTypes) { DARABONBA_PTR_SET_VALUE(credentialTypes_, credentialTypes) };
    inline ListCredentialsRequest& setCredentialTypes(vector<string> && credentialTypes) { DARABONBA_PTR_SET_RVALUE(credentialTypes_, credentialTypes) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListCredentialsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListCredentialsRequest::Filter>) };
    inline vector<ListCredentialsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListCredentialsRequest::Filter>) };
    inline ListCredentialsRequest& setFilter(const vector<ListCredentialsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListCredentialsRequest& setFilter(vector<ListCredentialsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCredentialsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCredentialsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCredentialsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListCredentialsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListCredentialsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    shared_ptr<vector<string>> credentialIds_ {};
    shared_ptr<vector<string>> credentialSharingScopes_ {};
    shared_ptr<vector<string>> credentialTypes_ {};
    shared_ptr<vector<ListCredentialsRequest::Filter>> filter_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 分页查询时每页行数。默认值为20，最大值为100。
    shared_ptr<int32_t> maxResults_ {};
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
