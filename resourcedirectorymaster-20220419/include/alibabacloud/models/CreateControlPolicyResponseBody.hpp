// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CreateControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicy, controlPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicy, controlPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateControlPolicyResponseBody() = default ;
    CreateControlPolicyResponseBody(const CreateControlPolicyResponseBody &) = default ;
    CreateControlPolicyResponseBody(CreateControlPolicyResponseBody &&) = default ;
    CreateControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateControlPolicyResponseBody() = default ;
    CreateControlPolicyResponseBody& operator=(const CreateControlPolicyResponseBody &) = default ;
    CreateControlPolicyResponseBody& operator=(CreateControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ControlPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EffectScope, effectScope_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      ControlPolicy() = default ;
      ControlPolicy(const ControlPolicy &) = default ;
      ControlPolicy(ControlPolicy &&) = default ;
      ControlPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPolicy() = default ;
      ControlPolicy& operator=(const ControlPolicy &) = default ;
      ControlPolicy& operator=(ControlPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachmentCount_ == nullptr
        && this->createDate_ == nullptr && this->description_ == nullptr && this->effectScope_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->updateDate_ == nullptr; };
      // attachmentCount Field Functions 
      bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
      void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
      inline string getAttachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, "") };
      inline ControlPolicy& setAttachmentCount(string attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline ControlPolicy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ControlPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // effectScope Field Functions 
      bool hasEffectScope() const { return this->effectScope_ != nullptr;};
      void deleteEffectScope() { this->effectScope_ = nullptr;};
      inline string getEffectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
      inline ControlPolicy& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline ControlPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline ControlPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline ControlPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline ControlPolicy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The number of times that the access control policy is referenced.
      shared_ptr<string> attachmentCount_ {};
      // The time when the access control policy was created.
      shared_ptr<string> createDate_ {};
      // The description of the access control policy.
      shared_ptr<string> description_ {};
      // The effective scope of the access control policy.
      // 
      // The value RAM indicates that the access control policy takes effect only for RAM users and RAM roles.
      shared_ptr<string> effectScope_ {};
      // The ID of the access control policy.
      shared_ptr<string> policyId_ {};
      // The name of the access control policy.
      shared_ptr<string> policyName_ {};
      // The type of the access control policy. Valid values:
      // 
      // *   System: system access control policy
      // *   Custom: custom access control policy
      shared_ptr<string> policyType_ {};
      // The time when the access control policy was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->controlPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // controlPolicy Field Functions 
    bool hasControlPolicy() const { return this->controlPolicy_ != nullptr;};
    void deleteControlPolicy() { this->controlPolicy_ = nullptr;};
    inline const CreateControlPolicyResponseBody::ControlPolicy & getControlPolicy() const { DARABONBA_PTR_GET_CONST(controlPolicy_, CreateControlPolicyResponseBody::ControlPolicy) };
    inline CreateControlPolicyResponseBody::ControlPolicy getControlPolicy() { DARABONBA_PTR_GET(controlPolicy_, CreateControlPolicyResponseBody::ControlPolicy) };
    inline CreateControlPolicyResponseBody& setControlPolicy(const CreateControlPolicyResponseBody::ControlPolicy & controlPolicy) { DARABONBA_PTR_SET_VALUE(controlPolicy_, controlPolicy) };
    inline CreateControlPolicyResponseBody& setControlPolicy(CreateControlPolicyResponseBody::ControlPolicy && controlPolicy) { DARABONBA_PTR_SET_RVALUE(controlPolicy_, controlPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access control policy.
    shared_ptr<CreateControlPolicyResponseBody::ControlPolicy> controlPolicy_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
