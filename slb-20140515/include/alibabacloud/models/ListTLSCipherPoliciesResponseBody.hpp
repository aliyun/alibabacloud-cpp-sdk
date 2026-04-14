// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ListTLSCipherPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTLSCipherPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicies, TLSCipherPolicies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTLSCipherPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicies, TLSCipherPolicies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTLSCipherPoliciesResponseBody() = default ;
    ListTLSCipherPoliciesResponseBody(const ListTLSCipherPoliciesResponseBody &) = default ;
    ListTLSCipherPoliciesResponseBody(ListTLSCipherPoliciesResponseBody &&) = default ;
    ListTLSCipherPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTLSCipherPoliciesResponseBody() = default ;
    ListTLSCipherPoliciesResponseBody& operator=(const ListTLSCipherPoliciesResponseBody &) = default ;
    ListTLSCipherPoliciesResponseBody& operator=(ListTLSCipherPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TLSCipherPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TLSCipherPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RelateListeners, relateListeners_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
      };
      friend void from_json(const Darabonba::Json& j, TLSCipherPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RelateListeners, relateListeners_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
      };
      TLSCipherPolicies() = default ;
      TLSCipherPolicies(const TLSCipherPolicies &) = default ;
      TLSCipherPolicies(TLSCipherPolicies &&) = default ;
      TLSCipherPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TLSCipherPolicies() = default ;
      TLSCipherPolicies& operator=(const TLSCipherPolicies &) = default ;
      TLSCipherPolicies& operator=(TLSCipherPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelateListeners : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelateListeners& obj) { 
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, RelateListeners& obj) { 
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        RelateListeners() = default ;
        RelateListeners(const RelateListeners &) = default ;
        RelateListeners(RelateListeners &&) = default ;
        RelateListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelateListeners() = default ;
        RelateListeners& operator=(const RelateListeners &) = default ;
        RelateListeners& operator=(RelateListeners &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr; };
        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline RelateListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline RelateListeners& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline RelateListeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The ID of the CLB instance.
        shared_ptr<string> loadBalancerId_ {};
        // The listening port. Valid values: **1** to **65535**.
        shared_ptr<int32_t> port_ {};
        // The listening protocol. Valid values:
        // 
        // *   **TCP**
        // *   **UDP**
        // *   **HTTP**
        // *   **HTTPS**
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->ciphers_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->relateListeners_ == nullptr && this->status_ == nullptr
        && this->TLSVersions_ == nullptr; };
      // ciphers Field Functions 
      bool hasCiphers() const { return this->ciphers_ != nullptr;};
      void deleteCiphers() { this->ciphers_ = nullptr;};
      inline const vector<string> & getCiphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
      inline vector<string> getCiphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
      inline TLSCipherPolicies& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
      inline TLSCipherPolicies& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline TLSCipherPolicies& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TLSCipherPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TLSCipherPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // relateListeners Field Functions 
      bool hasRelateListeners() const { return this->relateListeners_ != nullptr;};
      void deleteRelateListeners() { this->relateListeners_ = nullptr;};
      inline const vector<TLSCipherPolicies::RelateListeners> & getRelateListeners() const { DARABONBA_PTR_GET_CONST(relateListeners_, vector<TLSCipherPolicies::RelateListeners>) };
      inline vector<TLSCipherPolicies::RelateListeners> getRelateListeners() { DARABONBA_PTR_GET(relateListeners_, vector<TLSCipherPolicies::RelateListeners>) };
      inline TLSCipherPolicies& setRelateListeners(const vector<TLSCipherPolicies::RelateListeners> & relateListeners) { DARABONBA_PTR_SET_VALUE(relateListeners_, relateListeners) };
      inline TLSCipherPolicies& setRelateListeners(vector<TLSCipherPolicies::RelateListeners> && relateListeners) { DARABONBA_PTR_SET_RVALUE(relateListeners_, relateListeners) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TLSCipherPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // TLSVersions Field Functions 
      bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
      void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
      inline const vector<string> & getTLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
      inline vector<string> getTLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
      inline TLSCipherPolicies& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
      inline TLSCipherPolicies& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


    protected:
      // The cipher suites supported by the TLS version.
      // 
      // TLS 1.0 and TLS 1.1 support the following cipher suites:
      // 
      // *   ECDHE-ECDSA-AES128-SHA
      // *   ECDHE-ECDSA-AES256-SHA
      // *   ECDHE-RSA-AES128-SHA
      // *   ECDHE-RSA-AES256-SHA
      // *   AES128-SHA AES256-SHA
      // *   DES-CBC3-SHA
      // 
      // TLS 1.2 supports the following cipher suites:
      // 
      // *   ECDHE-ECDSA-AES128-SHA
      // *   ECDHE-ECDSA-AES256-SHA
      // *   ECDHE-RSA-AES128-SHA
      // *   ECDHE-RSA-AES256-SHA
      // *   AES128-SHA AES256-SHA
      // *   DES-CBC3-SHA
      // *   ECDHE-ECDSA-AES128-GCM-SHA256
      // *   ECDHE-ECDSA-AES256-GCM-SHA384
      // *   ECDHE-ECDSA-AES128-SHA256
      // *   ECDHE-ECDSA-AES256-SHA384
      // *   ECDHE-RSA-AES128-GCM-SHA256
      // *   ECDHE-RSA-AES256-GCM-SHA384
      // *   ECDHE-RSA-AES128-SHA256
      // *   ECDHE-RSA-AES256-SHA384
      // *   AES128-GCM-SHA256
      // *   AES256-GCM-SHA384
      // *   AES128-SHA256 AES256-SHA256
      // 
      // TLS 1.3 supports the following cipher suites:
      // 
      // *   TLS_AES_128_GCM_SHA256
      // *   TLS_AES_256_GCM_SHA384
      // *   TLS_CHACHA20_POLY1305_SHA256
      // *   TLS_AES_128_CCM_SHA256
      // *   TLS_AES_128_CCM_8_SHA256
      shared_ptr<vector<string>> ciphers_ {};
      // The timestamp generated when the TLS policy is created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the TLS policy.
      shared_ptr<string> instanceId_ {};
      // The name of the TLS policy.
      shared_ptr<string> name_ {};
      // The list of associated listeners.
      shared_ptr<vector<TLSCipherPolicies::RelateListeners>> relateListeners_ {};
      // The status of the TLS policy. Valid values:
      // 
      // *   **configuring**: The TLS policy is being configured.
      // *   **normal**: The TLS policy works as expected.
      shared_ptr<string> status_ {};
      // The version of the TLS protocol.
      shared_ptr<vector<string>> TLSVersions_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->TLSCipherPolicies_ == nullptr && this->totalCount_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListTLSCipherPoliciesResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTLSCipherPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTLSCipherPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // TLSCipherPolicies Field Functions 
    bool hasTLSCipherPolicies() const { return this->TLSCipherPolicies_ != nullptr;};
    void deleteTLSCipherPolicies() { this->TLSCipherPolicies_ = nullptr;};
    inline const vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies> & getTLSCipherPolicies() const { DARABONBA_PTR_GET_CONST(TLSCipherPolicies_, vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies>) };
    inline vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies> getTLSCipherPolicies() { DARABONBA_PTR_GET(TLSCipherPolicies_, vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies>) };
    inline ListTLSCipherPoliciesResponseBody& setTLSCipherPolicies(const vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies> & tLSCipherPolicies) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicies_, tLSCipherPolicies) };
    inline ListTLSCipherPoliciesResponseBody& setTLSCipherPolicies(vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies> && tLSCipherPolicies) { DARABONBA_PTR_SET_RVALUE(TLSCipherPolicies_, tLSCipherPolicies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTLSCipherPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether the current page is the last page. Valid values:
    // 
    // *   **true**: The current page is the last page.
    // *   **false**: The current page is not the last page.
    shared_ptr<bool> isTruncated_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no next query is to be sent.
    // *   If **NextToken** is not empty, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of TLS policies.
    shared_ptr<vector<ListTLSCipherPoliciesResponseBody::TLSCipherPolicies>> TLSCipherPolicies_ {};
    // The total number of TLS policies returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
