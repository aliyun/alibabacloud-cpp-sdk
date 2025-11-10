// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODYCONTROLPOLICYATTACHMENTSCONTROLPOLICYATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODYCONTROLPOLICYATTACHMENTSCONTROLPOLICYATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment() = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment(const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment(ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment &&) = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment() = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& operator=(const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& operator=(ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachDate_ == nullptr
        && return this->description_ == nullptr && return this->effectScope_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr && return this->policyType_ == nullptr; };
    // attachDate Field Functions 
    bool hasAttachDate() const { return this->attachDate_ != nullptr;};
    void deleteAttachDate() { this->attachDate_ = nullptr;};
    inline string attachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectScope Field Functions 
    bool hasEffectScope() const { return this->effectScope_ != nullptr;};
    void deleteEffectScope() { this->effectScope_ = nullptr;};
    inline string effectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The time when the access control policy was attached.
    std::shared_ptr<string> attachDate_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
