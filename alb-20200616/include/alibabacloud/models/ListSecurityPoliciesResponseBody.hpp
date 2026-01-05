// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESRESPONSEBODY_HPP_
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
  class ListSecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSecurityPoliciesResponseBody() = default ;
    ListSecurityPoliciesResponseBody(const ListSecurityPoliciesResponseBody &) = default ;
    ListSecurityPoliciesResponseBody(ListSecurityPoliciesResponseBody &&) = default ;
    ListSecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPoliciesResponseBody() = default ;
    ListSecurityPoliciesResponseBody& operator=(const ListSecurityPoliciesResponseBody &) = default ;
    ListSecurityPoliciesResponseBody& operator=(ListSecurityPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyStatus, securityPolicyStatus_);
        DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyStatus, securityPolicyStatus_);
        DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      SecurityPolicies() = default ;
      SecurityPolicies(const SecurityPolicies &) = default ;
      SecurityPolicies(SecurityPolicies &&) = default ;
      SecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityPolicies() = default ;
      SecurityPolicies& operator=(const SecurityPolicies &) = default ;
      SecurityPolicies& operator=(SecurityPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
        shared_ptr<string> key_ {};
        // The tag value. The tag value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->ciphers_ == nullptr
        && this->createTime_ == nullptr && this->resourceGroupId_ == nullptr && this->securityPolicyId_ == nullptr && this->securityPolicyName_ == nullptr && this->securityPolicyStatus_ == nullptr
        && this->TLSVersions_ == nullptr && this->tags_ == nullptr; };
      // ciphers Field Functions 
      bool hasCiphers() const { return this->ciphers_ != nullptr;};
      void deleteCiphers() { this->ciphers_ = nullptr;};
      inline const vector<string> & getCiphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
      inline vector<string> getCiphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
      inline SecurityPolicies& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
      inline SecurityPolicies& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SecurityPolicies& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline SecurityPolicies& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline SecurityPolicies& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


      // securityPolicyName Field Functions 
      bool hasSecurityPolicyName() const { return this->securityPolicyName_ != nullptr;};
      void deleteSecurityPolicyName() { this->securityPolicyName_ = nullptr;};
      inline string getSecurityPolicyName() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyName_, "") };
      inline SecurityPolicies& setSecurityPolicyName(string securityPolicyName) { DARABONBA_PTR_SET_VALUE(securityPolicyName_, securityPolicyName) };


      // securityPolicyStatus Field Functions 
      bool hasSecurityPolicyStatus() const { return this->securityPolicyStatus_ != nullptr;};
      void deleteSecurityPolicyStatus() { this->securityPolicyStatus_ = nullptr;};
      inline string getSecurityPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyStatus_, "") };
      inline SecurityPolicies& setSecurityPolicyStatus(string securityPolicyStatus) { DARABONBA_PTR_SET_VALUE(securityPolicyStatus_, securityPolicyStatus) };


      // TLSVersions Field Functions 
      bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
      void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
      inline const vector<string> & getTLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
      inline vector<string> getTLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
      inline SecurityPolicies& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
      inline SecurityPolicies& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<SecurityPolicies::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SecurityPolicies::Tags>) };
      inline vector<SecurityPolicies::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<SecurityPolicies::Tags>) };
      inline SecurityPolicies& setTags(const vector<SecurityPolicies::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline SecurityPolicies& setTags(vector<SecurityPolicies::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The supported cipher suites.
      shared_ptr<vector<string>> ciphers_ {};
      // The time when the ACL was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
      shared_ptr<string> createTime_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the security policy.
      shared_ptr<string> securityPolicyId_ {};
      // The name of the security policy.
      shared_ptr<string> securityPolicyName_ {};
      // The status of the security policy. Valid values:
      // 
      // *   **Configuring**
      // *   **Available**
      shared_ptr<string> securityPolicyStatus_ {};
      // The supported TLS protocol versions.
      shared_ptr<vector<string>> TLSVersions_ {};
      // The tags.
      shared_ptr<vector<SecurityPolicies::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->securityPolicies_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecurityPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecurityPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSecurityPoliciesResponseBody::SecurityPolicies> & getSecurityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSecurityPoliciesResponseBody::SecurityPolicies>) };
    inline vector<ListSecurityPoliciesResponseBody::SecurityPolicies> getSecurityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSecurityPoliciesResponseBody::SecurityPolicies>) };
    inline ListSecurityPoliciesResponseBody& setSecurityPolicies(const vector<ListSecurityPoliciesResponseBody::SecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSecurityPoliciesResponseBody& setSecurityPolicies(vector<ListSecurityPoliciesResponseBody::SecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecurityPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The supported security policies.
    shared_ptr<vector<ListSecurityPoliciesResponseBody::SecurityPolicies>> securityPolicies_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
