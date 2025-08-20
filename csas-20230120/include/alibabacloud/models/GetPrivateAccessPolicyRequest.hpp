// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    GetPrivateAccessPolicyRequest() = default ;
    GetPrivateAccessPolicyRequest(const GetPrivateAccessPolicyRequest &) = default ;
    GetPrivateAccessPolicyRequest(GetPrivateAccessPolicyRequest &&) = default ;
    GetPrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessPolicyRequest() = default ;
    GetPrivateAccessPolicyRequest& operator=(const GetPrivateAccessPolicyRequest &) = default ;
    GetPrivateAccessPolicyRequest& operator=(GetPrivateAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetPrivateAccessPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // Intranet access policy ID. The value can be obtained from:
    // - [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): Query multiple intranet access policies in bulk.
    // - [CreatePrivateAccessPolicy](~~CreatePrivateAccessPolicy~~): Create an intranet access policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
