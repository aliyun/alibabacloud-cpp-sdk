// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSecurityPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSecurityPolicyResponseBody() = default ;
    ListSecurityPolicyResponseBody(const ListSecurityPolicyResponseBody &) = default ;
    ListSecurityPolicyResponseBody(ListSecurityPolicyResponseBody &&) = default ;
    ListSecurityPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyResponseBody() = default ;
    ListSecurityPolicyResponseBody& operator=(const ListSecurityPolicyResponseBody &) = default ;
    ListSecurityPolicyResponseBody& operator=(ListSecurityPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyName, securityPolicyName_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyStatus, securityPolicyStatus_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyName, securityPolicyName_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyStatus, securityPolicyStatus_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
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
        // The tag key. You can specify up to 10 tag keys.
        // 
        // The tag key can be up to 64 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
        shared_ptr<string> key_ {};
        // The tag value. You can specify up to 10 tag values.
        // 
        // The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
        shared_ptr<string> value_ {};
      };

      class RelatedListeners : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedListeners& obj) { 
          DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedListeners& obj) { 
          DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        };
        RelatedListeners() = default ;
        RelatedListeners(const RelatedListeners &) = default ;
        RelatedListeners(RelatedListeners &&) = default ;
        RelatedListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedListeners() = default ;
        RelatedListeners& operator=(const RelatedListeners &) = default ;
        RelatedListeners& operator=(RelatedListeners &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->listenerId_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalancerId_ == nullptr; };
        // listenerId Field Functions 
        bool hasListenerId() const { return this->listenerId_ != nullptr;};
        void deleteListenerId() { this->listenerId_ = nullptr;};
        inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
        inline RelatedListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int64_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0L) };
        inline RelatedListeners& setListenerPort(int64_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // listenerProtocol Field Functions 
        bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
        void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
        inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
        inline RelatedListeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline RelatedListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      protected:
        // The listener ID.
        shared_ptr<string> listenerId_ {};
        // The listener port.
        shared_ptr<int64_t> listenerPort_ {};
        // The listener protocol. Valid value: **TCPSSL**.
        shared_ptr<string> listenerProtocol_ {};
        // The NLB instance ID.
        shared_ptr<string> loadBalancerId_ {};
      };

      virtual bool empty() const override { return this->ciphers_ == nullptr
        && this->regionId_ == nullptr && this->relatedListeners_ == nullptr && this->resourceGroupId_ == nullptr && this->securityPolicyId_ == nullptr && this->securityPolicyName_ == nullptr
        && this->securityPolicyStatus_ == nullptr && this->tags_ == nullptr && this->tlsVersion_ == nullptr; };
      // ciphers Field Functions 
      bool hasCiphers() const { return this->ciphers_ != nullptr;};
      void deleteCiphers() { this->ciphers_ = nullptr;};
      inline string getCiphers() const { DARABONBA_PTR_GET_DEFAULT(ciphers_, "") };
      inline SecurityPolicies& setCiphers(string ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SecurityPolicies& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // relatedListeners Field Functions 
      bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
      void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
      inline const vector<SecurityPolicies::RelatedListeners> & getRelatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, vector<SecurityPolicies::RelatedListeners>) };
      inline vector<SecurityPolicies::RelatedListeners> getRelatedListeners() { DARABONBA_PTR_GET(relatedListeners_, vector<SecurityPolicies::RelatedListeners>) };
      inline SecurityPolicies& setRelatedListeners(const vector<SecurityPolicies::RelatedListeners> & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
      inline SecurityPolicies& setRelatedListeners(vector<SecurityPolicies::RelatedListeners> && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


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


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<SecurityPolicies::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SecurityPolicies::Tags>) };
      inline vector<SecurityPolicies::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<SecurityPolicies::Tags>) };
      inline SecurityPolicies& setTags(const vector<SecurityPolicies::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline SecurityPolicies& setTags(vector<SecurityPolicies::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tlsVersion Field Functions 
      bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
      void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
      inline string getTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
      inline SecurityPolicies& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


    protected:
      // The cipher suites supported by the security policy. Valid values of this parameter vary based on the value of TlsVersions. A security policy supports up to 32 cipher suites.
      // 
      // TLSv1.0 and TLSv1.1 support the following cipher suites:
      // 
      // *   **ECDHE-ECDSA-AES128-SHA**
      // *   **ECDHE-ECDSA-AES256-SHA**
      // *   **ECDHE-RSA-AES128-SHA**
      // *   **ECDHE-RSA-AES256-SHA**
      // *   **AES128-SHA**
      // *   **AES256-SHA**
      // *   **DES-CBC3-SHA**
      // 
      // TLSv1.2 supports the following cipher suites:
      // 
      // *   **ECDHE-ECDSA-AES128-SHA**
      // *   **ECDHE-ECDSA-AES256-SHA**
      // *   **ECDHE-RSA-AES128-SHA**
      // *   **ECDHE-RSA-AES256-SHA**
      // *   **AES128-SHA**
      // *   **AES256-SHA**
      // *   **DES-CBC3-SHA**
      // *   **ECDHE-ECDSA-AES128-GCM-SHA256**
      // *   **ECDHE-ECDSA-AES256-GCM-SHA384**
      // *   **ECDHE-ECDSA-AES128-SHA256**
      // *   **ECDHE-ECDSA-AES256-SHA384**
      // *   **ECDHE-RSA-AES128-GCM-SHA256**
      // *   **ECDHE-RSA-AES256-GCM-SHA384**
      // *   **ECDHE-RSA-AES128-SHA256**
      // *   **ECDHE-RSA-AES256-SHA384**
      // *   **AES128-GCM-SHA256**
      // *   **AES256-GCM-SHA384**
      // *   **AES128-SHA256**
      // *   **AES256-SHA256**
      // 
      // TLSv1.3 supports the following cipher suites:
      // 
      // *   **TLS_AES_128_GCM_SHA256**
      // *   **TLS_AES_256_GCM_SHA384**
      // *   **TLS_CHACHA20_POLY1305_SHA256**
      // *   **TLS_AES_128_CCM_SHA256**
      // *   **TLS_AES_128_CCM_8_SHA256**
      shared_ptr<string> ciphers_ {};
      // The region ID of the NLB instance.
      shared_ptr<string> regionId_ {};
      // The listeners that are associated with the NLB instance.
      shared_ptr<vector<SecurityPolicies::RelatedListeners>> relatedListeners_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the TLS security policy.
      shared_ptr<string> securityPolicyId_ {};
      // The name of the TLS security policy.
      shared_ptr<string> securityPolicyName_ {};
      // The status of the TLS security policy. Valid values:
      // 
      // *   **Configuring**
      // *   **Available**
      shared_ptr<string> securityPolicyStatus_ {};
      // The tags.
      shared_ptr<vector<SecurityPolicies::Tags>> tags_ {};
      // The supported versions of the TLS protocol. Valid values: **TLSv1.0**, **TLSv1.1**, **TLSv1.2**, and **TLSv1.3**.
      shared_ptr<string> tlsVersion_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->securityPolicies_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecurityPolicyResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecurityPolicyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSecurityPolicyResponseBody::SecurityPolicies> & getSecurityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSecurityPolicyResponseBody::SecurityPolicies>) };
    inline vector<ListSecurityPolicyResponseBody::SecurityPolicies> getSecurityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSecurityPolicyResponseBody::SecurityPolicies>) };
    inline ListSecurityPolicyResponseBody& setSecurityPolicies(const vector<ListSecurityPolicyResponseBody::SecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSecurityPolicyResponseBody& setSecurityPolicies(vector<ListSecurityPolicyResponseBody::SecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecurityPolicyResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If NextToken is empty, no next page exists.
    // *   If a value is returned for NextToken, specify the value in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The TLS security policies.
    shared_ptr<vector<ListSecurityPolicyResponseBody::SecurityPolicies>> securityPolicies_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
