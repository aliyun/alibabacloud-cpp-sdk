// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAUTHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAUTHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RemoveAuthPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAuthPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAuthPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    RemoveAuthPolicyRequest() = default ;
    RemoveAuthPolicyRequest(const RemoveAuthPolicyRequest &) = default ;
    RemoveAuthPolicyRequest(RemoveAuthPolicyRequest &&) = default ;
    RemoveAuthPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAuthPolicyRequest() = default ;
    RemoveAuthPolicyRequest& operator=(const RemoveAuthPolicyRequest &) = default ;
    RemoveAuthPolicyRequest& operator=(RemoveAuthPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->policyId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline RemoveAuthPolicyRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline RemoveAuthPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
