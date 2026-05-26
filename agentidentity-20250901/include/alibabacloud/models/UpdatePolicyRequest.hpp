// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Definition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
    };
    UpdatePolicyRequest() = default ;
    UpdatePolicyRequest(const UpdatePolicyRequest &) = default ;
    UpdatePolicyRequest(UpdatePolicyRequest &&) = default ;
    UpdatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyRequest() = default ;
    UpdatePolicyRequest& operator=(const UpdatePolicyRequest &) = default ;
    UpdatePolicyRequest& operator=(UpdatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && this->description_ == nullptr && this->policyName_ == nullptr && this->policySetName_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline const Definition & getDefinition() const { DARABONBA_PTR_GET_CONST(definition_, Definition) };
    inline Definition getDefinition() { DARABONBA_PTR_GET(definition_, Definition) };
    inline UpdatePolicyRequest& setDefinition(const Definition & definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };
    inline UpdatePolicyRequest& setDefinition(Definition && definition) { DARABONBA_PTR_SET_RVALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdatePolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policySetName Field Functions 
    bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
    void deletePolicySetName() { this->policySetName_ = nullptr;};
    inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
    inline UpdatePolicyRequest& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


  protected:
    shared_ptr<Definition> definition_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> policyName_ {};
    shared_ptr<string> policySetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
