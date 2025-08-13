// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODYPOLICYATTACHMENTSPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODYPOLICYATTACHMENTSPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(AttachSeq, attachSeq_);
      DARABONBA_PTR_TO_JSON(AttachTime, attachTime_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachSeq, attachSeq_);
      DARABONBA_PTR_FROM_JSON(AttachTime, attachTime_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList() = default ;
    GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList(const GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList &) = default ;
    GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList(GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList &&) = default ;
    GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList() = default ;
    GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& operator=(const GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList &) = default ;
    GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& operator=(GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachSeq_ != nullptr
        && this->attachTime_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->targetId_ != nullptr && this->targetType_ != nullptr; };
    // attachSeq Field Functions 
    bool hasAttachSeq() const { return this->attachSeq_ != nullptr;};
    void deleteAttachSeq() { this->attachSeq_ = nullptr;};
    inline int32_t attachSeq() const { DARABONBA_PTR_GET_DEFAULT(attachSeq_, 0) };
    inline GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& setAttachSeq(int32_t attachSeq) { DARABONBA_PTR_SET_VALUE(attachSeq_, attachSeq) };


    // attachTime Field Functions 
    bool hasAttachTime() const { return this->attachTime_ != nullptr;};
    void deleteAttachTime() { this->attachTime_ = nullptr;};
    inline string attachTime() const { DARABONBA_PTR_GET_DEFAULT(attachTime_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& setAttachTime(string attachTime) { DARABONBA_PTR_SET_VALUE(attachTime_, attachTime) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<int32_t> attachSeq_ = nullptr;
    std::shared_ptr<string> attachTime_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<string> targetId_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
