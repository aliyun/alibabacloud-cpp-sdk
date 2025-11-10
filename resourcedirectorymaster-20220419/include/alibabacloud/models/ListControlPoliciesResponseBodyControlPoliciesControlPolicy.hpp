// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODYCONTROLPOLICIESCONTROLPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESRESPONSEBODYCONTROLPOLICIESCONTROLPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPoliciesResponseBodyControlPoliciesControlPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPoliciesResponseBodyControlPoliciesControlPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPoliciesResponseBodyControlPoliciesControlPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ListControlPoliciesResponseBodyControlPoliciesControlPolicy() = default ;
    ListControlPoliciesResponseBodyControlPoliciesControlPolicy(const ListControlPoliciesResponseBodyControlPoliciesControlPolicy &) = default ;
    ListControlPoliciesResponseBodyControlPoliciesControlPolicy(ListControlPoliciesResponseBodyControlPoliciesControlPolicy &&) = default ;
    ListControlPoliciesResponseBodyControlPoliciesControlPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPoliciesResponseBodyControlPoliciesControlPolicy() = default ;
    ListControlPoliciesResponseBodyControlPoliciesControlPolicy& operator=(const ListControlPoliciesResponseBodyControlPoliciesControlPolicy &) = default ;
    ListControlPoliciesResponseBodyControlPoliciesControlPolicy& operator=(ListControlPoliciesResponseBodyControlPoliciesControlPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentCount_ == nullptr
        && return this->createDate_ == nullptr && return this->description_ == nullptr && return this->effectScope_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr
        && return this->policyType_ == nullptr && return this->tags_ == nullptr && return this->updateDate_ == nullptr; };
    // attachmentCount Field Functions 
    bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
    void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
    inline string attachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setAttachmentCount(string attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectScope Field Functions 
    bool hasEffectScope() const { return this->effectScope_ != nullptr;};
    void deleteEffectScope() { this->effectScope_ = nullptr;};
    inline string effectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags) };
    inline Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags tags() { DARABONBA_PTR_GET(tags_, Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags) };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setTags(const Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setTags(Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListControlPoliciesResponseBodyControlPoliciesControlPolicy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The number of times that the access control policy is referenced.
    std::shared_ptr<string> attachmentCount_ = nullptr;
    // The time when the access control policy was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the access control policy.
    std::shared_ptr<string> description_ = nullptr;
    // The effective scope of the access control policy. Valid values:
    // 
    // *   All: The access control policy is in effect for Alibaba Cloud accounts, RAM users, and RAM roles.
    // *   RAM: The access control policy is in effect only for RAM users and RAM roles.
    std::shared_ptr<string> effectScope_ = nullptr;
    // The ID of the access control policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the access control policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the access control policy. Valid values:
    // 
    // *   System: system access control policy
    // *   Custom: custom access control policy
    std::shared_ptr<string> policyType_ = nullptr;
    // The tags.
    std::shared_ptr<Models::ListControlPoliciesResponseBodyControlPoliciesControlPolicyTags> tags_ = nullptr;
    // The time when the access control policy was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
