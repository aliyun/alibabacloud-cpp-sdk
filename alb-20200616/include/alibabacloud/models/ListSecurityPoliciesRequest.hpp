// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSecurityPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyIds, securityPolicyIds_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyNames, securityPolicyNames_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyIds, securityPolicyIds_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyNames, securityPolicyNames_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListSecurityPoliciesRequest() = default ;
    ListSecurityPoliciesRequest(const ListSecurityPoliciesRequest &) = default ;
    ListSecurityPoliciesRequest(ListSecurityPoliciesRequest &&) = default ;
    ListSecurityPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPoliciesRequest() = default ;
    ListSecurityPoliciesRequest& operator=(const ListSecurityPoliciesRequest &) = default ;
    ListSecurityPoliciesRequest& operator=(ListSecurityPoliciesRequest &&) = default ;
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
      // The tag key. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->securityPolicyIds_ == nullptr && this->securityPolicyNames_ == nullptr && this->tag_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecurityPoliciesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecurityPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSecurityPoliciesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityPolicyIds Field Functions 
    bool hasSecurityPolicyIds() const { return this->securityPolicyIds_ != nullptr;};
    void deleteSecurityPolicyIds() { this->securityPolicyIds_ = nullptr;};
    inline const vector<string> & getSecurityPolicyIds() const { DARABONBA_PTR_GET_CONST(securityPolicyIds_, vector<string>) };
    inline vector<string> getSecurityPolicyIds() { DARABONBA_PTR_GET(securityPolicyIds_, vector<string>) };
    inline ListSecurityPoliciesRequest& setSecurityPolicyIds(const vector<string> & securityPolicyIds) { DARABONBA_PTR_SET_VALUE(securityPolicyIds_, securityPolicyIds) };
    inline ListSecurityPoliciesRequest& setSecurityPolicyIds(vector<string> && securityPolicyIds) { DARABONBA_PTR_SET_RVALUE(securityPolicyIds_, securityPolicyIds) };


    // securityPolicyNames Field Functions 
    bool hasSecurityPolicyNames() const { return this->securityPolicyNames_ != nullptr;};
    void deleteSecurityPolicyNames() { this->securityPolicyNames_ = nullptr;};
    inline const vector<string> & getSecurityPolicyNames() const { DARABONBA_PTR_GET_CONST(securityPolicyNames_, vector<string>) };
    inline vector<string> getSecurityPolicyNames() { DARABONBA_PTR_GET(securityPolicyNames_, vector<string>) };
    inline ListSecurityPoliciesRequest& setSecurityPolicyNames(const vector<string> & securityPolicyNames) { DARABONBA_PTR_SET_VALUE(securityPolicyNames_, securityPolicyNames) };
    inline ListSecurityPoliciesRequest& setSecurityPolicyNames(vector<string> && securityPolicyNames) { DARABONBA_PTR_SET_RVALUE(securityPolicyNames_, securityPolicyNames) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListSecurityPoliciesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListSecurityPoliciesRequest::Tag>) };
    inline vector<ListSecurityPoliciesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListSecurityPoliciesRequest::Tag>) };
    inline ListSecurityPoliciesRequest& setTag(const vector<ListSecurityPoliciesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListSecurityPoliciesRequest& setTag(vector<ListSecurityPoliciesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The security policy IDs. You can specify at most 20 security policies.
    shared_ptr<vector<string>> securityPolicyIds_ {};
    // The names of the security policies. You can specify up to 10 names.
    shared_ptr<vector<string>> securityPolicyNames_ {};
    // The tags.
    shared_ptr<vector<ListSecurityPoliciesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
