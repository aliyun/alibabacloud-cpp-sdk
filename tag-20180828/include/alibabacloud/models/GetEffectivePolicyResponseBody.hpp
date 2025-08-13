// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEffectivePolicyResponseBodyPolicyAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GetEffectivePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEffectivePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EffectivePolicy, effectivePolicy_);
      DARABONBA_PTR_TO_JSON(PolicyAttachments, policyAttachments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEffectivePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectivePolicy, effectivePolicy_);
      DARABONBA_PTR_FROM_JSON(PolicyAttachments, policyAttachments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEffectivePolicyResponseBody() = default ;
    GetEffectivePolicyResponseBody(const GetEffectivePolicyResponseBody &) = default ;
    GetEffectivePolicyResponseBody(GetEffectivePolicyResponseBody &&) = default ;
    GetEffectivePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEffectivePolicyResponseBody() = default ;
    GetEffectivePolicyResponseBody& operator=(const GetEffectivePolicyResponseBody &) = default ;
    GetEffectivePolicyResponseBody& operator=(GetEffectivePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectivePolicy_ != nullptr
        && this->policyAttachments_ != nullptr && this->requestId_ != nullptr; };
    // effectivePolicy Field Functions 
    bool hasEffectivePolicy() const { return this->effectivePolicy_ != nullptr;};
    void deleteEffectivePolicy() { this->effectivePolicy_ = nullptr;};
    inline string effectivePolicy() const { DARABONBA_PTR_GET_DEFAULT(effectivePolicy_, "") };
    inline GetEffectivePolicyResponseBody& setEffectivePolicy(string effectivePolicy) { DARABONBA_PTR_SET_VALUE(effectivePolicy_, effectivePolicy) };


    // policyAttachments Field Functions 
    bool hasPolicyAttachments() const { return this->policyAttachments_ != nullptr;};
    void deletePolicyAttachments() { this->policyAttachments_ = nullptr;};
    inline const vector<GetEffectivePolicyResponseBodyPolicyAttachments> & policyAttachments() const { DARABONBA_PTR_GET_CONST(policyAttachments_, vector<GetEffectivePolicyResponseBodyPolicyAttachments>) };
    inline vector<GetEffectivePolicyResponseBodyPolicyAttachments> policyAttachments() { DARABONBA_PTR_GET(policyAttachments_, vector<GetEffectivePolicyResponseBodyPolicyAttachments>) };
    inline GetEffectivePolicyResponseBody& setPolicyAttachments(const vector<GetEffectivePolicyResponseBodyPolicyAttachments> & policyAttachments) { DARABONBA_PTR_SET_VALUE(policyAttachments_, policyAttachments) };
    inline GetEffectivePolicyResponseBody& setPolicyAttachments(vector<GetEffectivePolicyResponseBodyPolicyAttachments> && policyAttachments) { DARABONBA_PTR_SET_RVALUE(policyAttachments_, policyAttachments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEffectivePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The effective tag policy.
    std::shared_ptr<string> effectivePolicy_ = nullptr;
    std::shared_ptr<vector<GetEffectivePolicyResponseBodyPolicyAttachments>> policyAttachments_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
