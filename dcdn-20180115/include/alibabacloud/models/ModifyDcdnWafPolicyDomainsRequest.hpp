// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDCDNWAFPOLICYDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDCDNWAFPOLICYDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyDcdnWafPolicyDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDcdnWafPolicyDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindDomains, bindDomains_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(UnbindDomains, unbindDomains_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDcdnWafPolicyDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindDomains, bindDomains_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(UnbindDomains, unbindDomains_);
    };
    ModifyDcdnWafPolicyDomainsRequest() = default ;
    ModifyDcdnWafPolicyDomainsRequest(const ModifyDcdnWafPolicyDomainsRequest &) = default ;
    ModifyDcdnWafPolicyDomainsRequest(ModifyDcdnWafPolicyDomainsRequest &&) = default ;
    ModifyDcdnWafPolicyDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDcdnWafPolicyDomainsRequest() = default ;
    ModifyDcdnWafPolicyDomainsRequest& operator=(const ModifyDcdnWafPolicyDomainsRequest &) = default ;
    ModifyDcdnWafPolicyDomainsRequest& operator=(ModifyDcdnWafPolicyDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindDomains_ == nullptr
        && this->method_ == nullptr && this->policyId_ == nullptr && this->unbindDomains_ == nullptr; };
    // bindDomains Field Functions 
    bool hasBindDomains() const { return this->bindDomains_ != nullptr;};
    void deleteBindDomains() { this->bindDomains_ = nullptr;};
    inline string getBindDomains() const { DARABONBA_PTR_GET_DEFAULT(bindDomains_, "") };
    inline ModifyDcdnWafPolicyDomainsRequest& setBindDomains(string bindDomains) { DARABONBA_PTR_SET_VALUE(bindDomains_, bindDomains) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline int32_t getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, 0) };
    inline ModifyDcdnWafPolicyDomainsRequest& setMethod(int32_t method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ModifyDcdnWafPolicyDomainsRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // unbindDomains Field Functions 
    bool hasUnbindDomains() const { return this->unbindDomains_ != nullptr;};
    void deleteUnbindDomains() { this->unbindDomains_ = nullptr;};
    inline string getUnbindDomains() const { DARABONBA_PTR_GET_DEFAULT(unbindDomains_, "") };
    inline ModifyDcdnWafPolicyDomainsRequest& setUnbindDomains(string unbindDomains) { DARABONBA_PTR_SET_VALUE(unbindDomains_, unbindDomains) };


  protected:
    // The domain names that you want to bind to the protection policy. You can specify up to 50 domain names. Separate multiple domain names with commas (,).
    // 
    // > You can configure either **BindDomains** or **UnbindDomains**.
    shared_ptr<string> bindDomains_ {};
    // The association method. Valid values:
    // 
    // *   0: replace.
    // *   1: add.
    // *   Default value: 0.
    // 
    // > 
    // 
    // *   This parameter takes effect only when you specify **BindDomains**. If you have associated a domain name indicated by **BindDomains** with the default protection policy, the `Policy.DefaultAndCustom.BindToSameDomain` error is returned.
    // 
    // *   You can only replace accelerated domain names that are bound to the default protection policy.
    shared_ptr<int32_t> method_ {};
    // The ID of the protection policy. You can specify only one ID in each request.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The domain names that you want to unbind from the protection policy. You can specify up to 50 domain names. Separate multiple domain names with commas (,).
    // 
    // > You can configure either **BindDomains** or **UnbindDomains**.
    shared_ptr<string> unbindDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
