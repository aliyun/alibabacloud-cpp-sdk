// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    GetControlPolicyRequest() = default ;
    GetControlPolicyRequest(const GetControlPolicyRequest &) = default ;
    GetControlPolicyRequest(GetControlPolicyRequest &&) = default ;
    GetControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetControlPolicyRequest() = default ;
    GetControlPolicyRequest& operator=(const GetControlPolicyRequest &) = default ;
    GetControlPolicyRequest& operator=(GetControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->policyId_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetControlPolicyRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetControlPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The language in which you want to return the description of the access control policy. Valid values:
    // 
    // *   zh-CN (default value): Chinese
    // *   en: English
    // *   ja: Japanese
    // 
    // > This parameter is valid only for system access control policies.
    shared_ptr<string> language_ {};
    // The ID of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
