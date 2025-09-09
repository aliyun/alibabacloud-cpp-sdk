// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICERESPONSEBODYDRYRUNRESULTROLEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICERESPONSEBODYDRYRUNRESULTROLEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceResponseBodyDryRunResultRolePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceResponseBodyDryRunResultRolePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceResponseBodyDryRunResultRolePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    UpdateServiceResponseBodyDryRunResultRolePolicy() = default ;
    UpdateServiceResponseBodyDryRunResultRolePolicy(const UpdateServiceResponseBodyDryRunResultRolePolicy &) = default ;
    UpdateServiceResponseBodyDryRunResultRolePolicy(UpdateServiceResponseBodyDryRunResultRolePolicy &&) = default ;
    UpdateServiceResponseBodyDryRunResultRolePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceResponseBodyDryRunResultRolePolicy() = default ;
    UpdateServiceResponseBodyDryRunResultRolePolicy& operator=(const UpdateServiceResponseBodyDryRunResultRolePolicy &) = default ;
    UpdateServiceResponseBodyDryRunResultRolePolicy& operator=(UpdateServiceResponseBodyDryRunResultRolePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->missingPolicy_ != nullptr
        && this->policy_ != nullptr; };
    // missingPolicy Field Functions 
    bool hasMissingPolicy() const { return this->missingPolicy_ != nullptr;};
    void deleteMissingPolicy() { this->missingPolicy_ = nullptr;};
    inline const vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy> & missingPolicy() const { DARABONBA_PTR_GET_CONST(missingPolicy_, vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>) };
    inline vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy> missingPolicy() { DARABONBA_PTR_GET(missingPolicy_, vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>) };
    inline UpdateServiceResponseBodyDryRunResultRolePolicy& setMissingPolicy(const vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy> & missingPolicy) { DARABONBA_PTR_SET_VALUE(missingPolicy_, missingPolicy) };
    inline UpdateServiceResponseBodyDryRunResultRolePolicy& setMissingPolicy(vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy> && missingPolicy) { DARABONBA_PTR_SET_RVALUE(missingPolicy_, missingPolicy) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UpdateServiceResponseBodyDryRunResultRolePolicy& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The missing  ram policy for deploying role.
    std::shared_ptr<vector<Models::UpdateServiceResponseBodyDryRunResultRolePolicyMissingPolicy>> missingPolicy_ = nullptr;
    // The required ram policy for deploying role.
    std::shared_ptr<string> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
