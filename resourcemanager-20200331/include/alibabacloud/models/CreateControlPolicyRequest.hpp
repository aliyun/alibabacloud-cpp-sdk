// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    CreateControlPolicyRequest() = default ;
    CreateControlPolicyRequest(const CreateControlPolicyRequest &) = default ;
    CreateControlPolicyRequest(CreateControlPolicyRequest &&) = default ;
    CreateControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateControlPolicyRequest() = default ;
    CreateControlPolicyRequest& operator=(const CreateControlPolicyRequest &) = default ;
    CreateControlPolicyRequest& operator=(CreateControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->effectScope_ == nullptr && this->policyDocument_ == nullptr && this->policyName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectScope Field Functions 
    bool hasEffectScope() const { return this->effectScope_ != nullptr;};
    void deleteEffectScope() { this->effectScope_ = nullptr;};
    inline string getEffectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
    inline CreateControlPolicyRequest& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreateControlPolicyRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateControlPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // The description of the control policy.
    // 
    // The description must be 1 to 1024 characters in length, must start with a letter, and can contain letters, digits, underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // The effective scope of the control policy.
    // 
    // Valid values: RAM, which indicates that the control policy takes effect only for Resource Access Management (RAM) users or RAM roles.
    // 
    // This parameter is required.
    shared_ptr<string> effectScope_ {};
    // The content of the control policy.
    // 
    // The maximum length is 4096 characters.
    // 
    // For information about the control policy language, see [Control policy language](https://help.aliyun.com/document_detail/179096.html).
    // 
    // For examples of control policies, see [Examples of custom control policies](https://help.aliyun.com/document_detail/181474.html).
    // 
    // This parameter is required.
    shared_ptr<string> policyDocument_ {};
    // Policy Name of the control policy.
    // 
    // Policy Name must be 1 to 128 characters in length, must start with a letter, and can contain letters, digits, and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> policyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
