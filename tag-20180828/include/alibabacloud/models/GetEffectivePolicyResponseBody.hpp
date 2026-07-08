// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEFFECTIVEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PolicyAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      };
      PolicyAttachments() = default ;
      PolicyAttachments(const PolicyAttachments &) = default ;
      PolicyAttachments(PolicyAttachments &&) = default ;
      PolicyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyAttachments() = default ;
      PolicyAttachments& operator=(const PolicyAttachments &) = default ;
      PolicyAttachments& operator=(PolicyAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PolicyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolicyList& obj) { 
          DARABONBA_PTR_TO_JSON(AttachSeq, attachSeq_);
          DARABONBA_PTR_TO_JSON(AttachTime, attachTime_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, PolicyList& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachSeq, attachSeq_);
          DARABONBA_PTR_FROM_JSON(AttachTime, attachTime_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        PolicyList() = default ;
        PolicyList(const PolicyList &) = default ;
        PolicyList(PolicyList &&) = default ;
        PolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolicyList() = default ;
        PolicyList& operator=(const PolicyList &) = default ;
        PolicyList& operator=(PolicyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachSeq_ == nullptr
        && this->attachTime_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr; };
        // attachSeq Field Functions 
        bool hasAttachSeq() const { return this->attachSeq_ != nullptr;};
        void deleteAttachSeq() { this->attachSeq_ = nullptr;};
        inline int32_t getAttachSeq() const { DARABONBA_PTR_GET_DEFAULT(attachSeq_, 0) };
        inline PolicyList& setAttachSeq(int32_t attachSeq) { DARABONBA_PTR_SET_VALUE(attachSeq_, attachSeq) };


        // attachTime Field Functions 
        bool hasAttachTime() const { return this->attachTime_ != nullptr;};
        void deleteAttachTime() { this->attachTime_ = nullptr;};
        inline string getAttachTime() const { DARABONBA_PTR_GET_DEFAULT(attachTime_, "") };
        inline PolicyList& setAttachTime(string attachTime) { DARABONBA_PTR_SET_VALUE(attachTime_, attachTime) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline PolicyList& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline PolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
        inline PolicyList& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline PolicyList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        shared_ptr<int32_t> attachSeq_ {};
        shared_ptr<string> attachTime_ {};
        shared_ptr<string> policyId_ {};
        shared_ptr<string> policyName_ {};
        shared_ptr<string> targetId_ {};
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->policyList_ == nullptr
        && this->policyType_ == nullptr && this->tagKey_ == nullptr; };
      // policyList Field Functions 
      bool hasPolicyList() const { return this->policyList_ != nullptr;};
      void deletePolicyList() { this->policyList_ = nullptr;};
      inline const vector<PolicyAttachments::PolicyList> & getPolicyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<PolicyAttachments::PolicyList>) };
      inline vector<PolicyAttachments::PolicyList> getPolicyList() { DARABONBA_PTR_GET(policyList_, vector<PolicyAttachments::PolicyList>) };
      inline PolicyAttachments& setPolicyList(const vector<PolicyAttachments::PolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
      inline PolicyAttachments& setPolicyList(vector<PolicyAttachments::PolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline PolicyAttachments& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline PolicyAttachments& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    protected:
      shared_ptr<vector<PolicyAttachments::PolicyList>> policyList_ {};
      shared_ptr<string> policyType_ {};
      shared_ptr<string> tagKey_ {};
    };

    virtual bool empty() const override { return this->effectivePolicy_ == nullptr
        && this->policyAttachments_ == nullptr && this->requestId_ == nullptr; };
    // effectivePolicy Field Functions 
    bool hasEffectivePolicy() const { return this->effectivePolicy_ != nullptr;};
    void deleteEffectivePolicy() { this->effectivePolicy_ = nullptr;};
    inline string getEffectivePolicy() const { DARABONBA_PTR_GET_DEFAULT(effectivePolicy_, "") };
    inline GetEffectivePolicyResponseBody& setEffectivePolicy(string effectivePolicy) { DARABONBA_PTR_SET_VALUE(effectivePolicy_, effectivePolicy) };


    // policyAttachments Field Functions 
    bool hasPolicyAttachments() const { return this->policyAttachments_ != nullptr;};
    void deletePolicyAttachments() { this->policyAttachments_ = nullptr;};
    inline const vector<GetEffectivePolicyResponseBody::PolicyAttachments> & getPolicyAttachments() const { DARABONBA_PTR_GET_CONST(policyAttachments_, vector<GetEffectivePolicyResponseBody::PolicyAttachments>) };
    inline vector<GetEffectivePolicyResponseBody::PolicyAttachments> getPolicyAttachments() { DARABONBA_PTR_GET(policyAttachments_, vector<GetEffectivePolicyResponseBody::PolicyAttachments>) };
    inline GetEffectivePolicyResponseBody& setPolicyAttachments(const vector<GetEffectivePolicyResponseBody::PolicyAttachments> & policyAttachments) { DARABONBA_PTR_SET_VALUE(policyAttachments_, policyAttachments) };
    inline GetEffectivePolicyResponseBody& setPolicyAttachments(vector<GetEffectivePolicyResponseBody::PolicyAttachments> && policyAttachments) { DARABONBA_PTR_SET_RVALUE(policyAttachments_, policyAttachments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEffectivePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The effective policy.
    shared_ptr<string> effectivePolicy_ {};
    shared_ptr<vector<GetEffectivePolicyResponseBody::PolicyAttachments>> policyAttachments_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
