// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateControlPolicyRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
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
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
        && return this->effectScope_ == nullptr && return this->policyDocument_ == nullptr && return this->policyName_ == nullptr && return this->tag_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectScope Field Functions 
    bool hasEffectScope() const { return this->effectScope_ != nullptr;};
    void deleteEffectScope() { this->effectScope_ = nullptr;};
    inline string effectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
    inline CreateControlPolicyRequest& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreateControlPolicyRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateControlPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateControlPolicyRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateControlPolicyRequestTag>) };
    inline vector<CreateControlPolicyRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateControlPolicyRequestTag>) };
    inline CreateControlPolicyRequest& setTag(const vector<CreateControlPolicyRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateControlPolicyRequest& setTag(vector<CreateControlPolicyRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the access control policy.
    // 
    // The description must be 1 to 1,024 characters in length. The description can contain letters, digits, underscores (_), and hyphens (-) and must start with a letter.
    std::shared_ptr<string> description_ = nullptr;
    // The effective scope of the access control policy.
    // 
    // The value RAM indicates that the access control policy takes effect only for RAM users and RAM roles.
    // 
    // This parameter is required.
    std::shared_ptr<string> effectScope_ = nullptr;
    // The document of the access control policy.
    // 
    // The document can be a maximum of 4,096 characters in length.
    // 
    // For more information about the languages of access control policies, see [Languages of access control policies](https://help.aliyun.com/document_detail/179096.html).
    // 
    // For more information about the examples of access control policies, see [Examples of custom access control policies](https://help.aliyun.com/document_detail/181474.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> policyDocument_ = nullptr;
    // The name of the access control policy.
    // 
    // The name must be 1 to 128 characters in length. The name can contain letters, digits, and hyphens (-) and must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // The tag to add to the access control policy.
    std::shared_ptr<vector<CreateControlPolicyRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
