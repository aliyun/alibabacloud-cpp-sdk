// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePolicyV2RequestRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    UpdatePolicyV2Request() = default ;
    UpdatePolicyV2Request(const UpdatePolicyV2Request &) = default ;
    UpdatePolicyV2Request(UpdatePolicyV2Request &&) = default ;
    UpdatePolicyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyV2Request() = default ;
    UpdatePolicyV2Request& operator=(const UpdatePolicyV2Request &) = default ;
    UpdatePolicyV2Request& operator=(UpdatePolicyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyDescription_ != nullptr
        && this->policyId_ != nullptr && this->policyName_ != nullptr && this->rules_ != nullptr; };
    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline UpdatePolicyV2Request& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdatePolicyV2Request& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdatePolicyV2Request& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<UpdatePolicyV2RequestRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<UpdatePolicyV2RequestRules>) };
    inline vector<UpdatePolicyV2RequestRules> rules() { DARABONBA_PTR_GET(rules_, vector<UpdatePolicyV2RequestRules>) };
    inline UpdatePolicyV2Request& setRules(const vector<UpdatePolicyV2RequestRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UpdatePolicyV2Request& setRules(vector<UpdatePolicyV2RequestRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The description of the backup policy.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The ID of the backup policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the backup policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The rules in the backup policy.
    std::shared_ptr<vector<UpdatePolicyV2RequestRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
