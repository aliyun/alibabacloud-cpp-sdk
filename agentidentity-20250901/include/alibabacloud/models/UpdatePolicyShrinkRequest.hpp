// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdatePolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definition, definitionShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definitionShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
    };
    UpdatePolicyShrinkRequest() = default ;
    UpdatePolicyShrinkRequest(const UpdatePolicyShrinkRequest &) = default ;
    UpdatePolicyShrinkRequest(UpdatePolicyShrinkRequest &&) = default ;
    UpdatePolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyShrinkRequest() = default ;
    UpdatePolicyShrinkRequest& operator=(const UpdatePolicyShrinkRequest &) = default ;
    UpdatePolicyShrinkRequest& operator=(UpdatePolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definitionShrink_ == nullptr
        && this->description_ == nullptr && this->policyName_ == nullptr && this->policySetName_ == nullptr; };
    // definitionShrink Field Functions 
    bool hasDefinitionShrink() const { return this->definitionShrink_ != nullptr;};
    void deleteDefinitionShrink() { this->definitionShrink_ = nullptr;};
    inline string getDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(definitionShrink_, "") };
    inline UpdatePolicyShrinkRequest& setDefinitionShrink(string definitionShrink) { DARABONBA_PTR_SET_VALUE(definitionShrink_, definitionShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePolicyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdatePolicyShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policySetName Field Functions 
    bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
    void deletePolicySetName() { this->policySetName_ = nullptr;};
    inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
    inline UpdatePolicyShrinkRequest& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


  protected:
    shared_ptr<string> definitionShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> policyName_ {};
    shared_ptr<string> policySetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
