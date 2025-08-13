// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODYPOLICYATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODYPOLICYATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetEffectivePolicyResponseBodyPolicyAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEffectivePolicyResponseBodyPolicyAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetEffectivePolicyResponseBodyPolicyAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    GetEffectivePolicyResponseBodyPolicyAttachments() = default ;
    GetEffectivePolicyResponseBodyPolicyAttachments(const GetEffectivePolicyResponseBodyPolicyAttachments &) = default ;
    GetEffectivePolicyResponseBodyPolicyAttachments(GetEffectivePolicyResponseBodyPolicyAttachments &&) = default ;
    GetEffectivePolicyResponseBodyPolicyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEffectivePolicyResponseBodyPolicyAttachments() = default ;
    GetEffectivePolicyResponseBodyPolicyAttachments& operator=(const GetEffectivePolicyResponseBodyPolicyAttachments &) = default ;
    GetEffectivePolicyResponseBodyPolicyAttachments& operator=(GetEffectivePolicyResponseBodyPolicyAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyList_ != nullptr
        && this->policyType_ != nullptr && this->tagKey_ != nullptr; };
    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList> & policyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList>) };
    inline vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList> policyList() { DARABONBA_PTR_GET(policyList_, vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList>) };
    inline GetEffectivePolicyResponseBodyPolicyAttachments& setPolicyList(const vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline GetEffectivePolicyResponseBodyPolicyAttachments& setPolicyList(vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachments& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline GetEffectivePolicyResponseBodyPolicyAttachments& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


  protected:
    std::shared_ptr<vector<Models::GetEffectivePolicyResponseBodyPolicyAttachmentsPolicyList>> policyList_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
