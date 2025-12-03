// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSEBODYTLSCIPHERPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESRESPONSEBODYTLSCIPHERPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ListTLSCipherPoliciesResponseBodyTLSCipherPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RelateListeners, relateListeners_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TLSVersions, TLSVersions_);
    };
    friend void from_json(const Darabonba::Json& j, ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphers, ciphers_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RelateListeners, relateListeners_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TLSVersions, TLSVersions_);
    };
    ListTLSCipherPoliciesResponseBodyTLSCipherPolicies() = default ;
    ListTLSCipherPoliciesResponseBodyTLSCipherPolicies(const ListTLSCipherPoliciesResponseBodyTLSCipherPolicies &) = default ;
    ListTLSCipherPoliciesResponseBodyTLSCipherPolicies(ListTLSCipherPoliciesResponseBodyTLSCipherPolicies &&) = default ;
    ListTLSCipherPoliciesResponseBodyTLSCipherPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTLSCipherPoliciesResponseBodyTLSCipherPolicies() = default ;
    ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& operator=(const ListTLSCipherPoliciesResponseBodyTLSCipherPolicies &) = default ;
    ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& operator=(ListTLSCipherPoliciesResponseBodyTLSCipherPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphers_ == nullptr
        && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->relateListeners_ == nullptr && return this->status_ == nullptr
        && return this->TLSVersions_ == nullptr; };
    // ciphers Field Functions 
    bool hasCiphers() const { return this->ciphers_ != nullptr;};
    void deleteCiphers() { this->ciphers_ = nullptr;};
    inline const vector<string> & ciphers() const { DARABONBA_PTR_GET_CONST(ciphers_, vector<string>) };
    inline vector<string> ciphers() { DARABONBA_PTR_GET(ciphers_, vector<string>) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setCiphers(const vector<string> & ciphers) { DARABONBA_PTR_SET_VALUE(ciphers_, ciphers) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setCiphers(vector<string> && ciphers) { DARABONBA_PTR_SET_RVALUE(ciphers_, ciphers) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // relateListeners Field Functions 
    bool hasRelateListeners() const { return this->relateListeners_ != nullptr;};
    void deleteRelateListeners() { this->relateListeners_ = nullptr;};
    inline const vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners> & relateListeners() const { DARABONBA_PTR_GET_CONST(relateListeners_, vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners>) };
    inline vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners> relateListeners() { DARABONBA_PTR_GET(relateListeners_, vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners>) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setRelateListeners(const vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners> & relateListeners) { DARABONBA_PTR_SET_VALUE(relateListeners_, relateListeners) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setRelateListeners(vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners> && relateListeners) { DARABONBA_PTR_SET_RVALUE(relateListeners_, relateListeners) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // TLSVersions Field Functions 
    bool hasTLSVersions() const { return this->TLSVersions_ != nullptr;};
    void deleteTLSVersions() { this->TLSVersions_ = nullptr;};
    inline const vector<string> & TLSVersions() const { DARABONBA_PTR_GET_CONST(TLSVersions_, vector<string>) };
    inline vector<string> TLSVersions() { DARABONBA_PTR_GET(TLSVersions_, vector<string>) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setTLSVersions(const vector<string> & TLSVersions) { DARABONBA_PTR_SET_VALUE(TLSVersions_, TLSVersions) };
    inline ListTLSCipherPoliciesResponseBodyTLSCipherPolicies& setTLSVersions(vector<string> && TLSVersions) { DARABONBA_PTR_SET_RVALUE(TLSVersions_, TLSVersions) };


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
    std::shared_ptr<vector<string>> ciphers_ = nullptr;
    // The timestamp generated when the TLS policy is created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the TLS policy.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the TLS policy.
    std::shared_ptr<string> name_ = nullptr;
    // The list of associated listeners.
    std::shared_ptr<vector<Models::ListTLSCipherPoliciesResponseBodyTLSCipherPoliciesRelateListeners>> relateListeners_ = nullptr;
    // The status of the TLS policy. Valid values:
    // 
    // *   **configuring**: The TLS policy is being configured.
    // *   **normal**: The TLS policy works as expected.
    std::shared_ptr<string> status_ = nullptr;
    // The version of the TLS protocol.
    std::shared_ptr<vector<string>> TLSVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
