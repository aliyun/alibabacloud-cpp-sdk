// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetRegistrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    GetRegistrationPolicyRequest() = default ;
    GetRegistrationPolicyRequest(const GetRegistrationPolicyRequest &) = default ;
    GetRegistrationPolicyRequest(GetRegistrationPolicyRequest &&) = default ;
    GetRegistrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistrationPolicyRequest() = default ;
    GetRegistrationPolicyRequest& operator=(const GetRegistrationPolicyRequest &) = default ;
    GetRegistrationPolicyRequest& operator=(GetRegistrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetRegistrationPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
