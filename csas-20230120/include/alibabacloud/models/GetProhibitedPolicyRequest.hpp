// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROHIBITEDPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROHIBITEDPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetProhibitedPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProhibitedPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProhibitedPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    GetProhibitedPolicyRequest() = default ;
    GetProhibitedPolicyRequest(const GetProhibitedPolicyRequest &) = default ;
    GetProhibitedPolicyRequest(GetProhibitedPolicyRequest &&) = default ;
    GetProhibitedPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProhibitedPolicyRequest() = default ;
    GetProhibitedPolicyRequest& operator=(const GetProhibitedPolicyRequest &) = default ;
    GetProhibitedPolicyRequest& operator=(GetProhibitedPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetProhibitedPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The software prohibition policy ID. You can obtain this value from the following operations:
    // - [ListProhibitedPolicies](~~ListProhibitedPolicies~~): Lists software prohibition policies.
    // - [CreateProhibitedPolicy](~~CreateProhibitedPolicy~~): Creates a software prohibition policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
