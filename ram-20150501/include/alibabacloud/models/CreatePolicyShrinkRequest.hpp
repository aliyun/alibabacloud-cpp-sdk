// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class CreatePolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    CreatePolicyShrinkRequest() = default ;
    CreatePolicyShrinkRequest(const CreatePolicyShrinkRequest &) = default ;
    CreatePolicyShrinkRequest(CreatePolicyShrinkRequest &&) = default ;
    CreatePolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyShrinkRequest() = default ;
    CreatePolicyShrinkRequest& operator=(const CreatePolicyShrinkRequest &) = default ;
    CreatePolicyShrinkRequest& operator=(CreatePolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->policyDocument_ == nullptr && this->policyName_ == nullptr && this->tagShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline CreatePolicyShrinkRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreatePolicyShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The description of the policy.
    // 
    // The description must be 1 to 1,024 characters in length.
    shared_ptr<string> description_ {};
    // The document of the policy.
    // 
    // The document must be 1 to 6,144 characters in length.
    // 
    // For more information about policy elements and sample policies, see [Policy elements](https://help.aliyun.com/document_detail/93738.html) and [Overview of sample policies](https://help.aliyun.com/document_detail/210969.html).
    shared_ptr<string> policyDocument_ {};
    // The name of the policy.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, and hyphens (-).
    shared_ptr<string> policyName_ {};
    // The tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
