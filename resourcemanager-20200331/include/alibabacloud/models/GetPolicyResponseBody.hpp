// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolicyResponseBody() = default ;
    GetPolicyResponseBody(const GetPolicyResponseBody &) = default ;
    GetPolicyResponseBody(GetPolicyResponseBody &&) = default ;
    GetPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBody() = default ;
    GetPolicyResponseBody& operator=(const GetPolicyResponseBody &) = default ;
    GetPolicyResponseBody& operator=(GetPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policy& obj) { 
        DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      };
      friend void from_json(const Darabonba::Json& j, Policy& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      };
      Policy() = default ;
      Policy(const Policy &) = default ;
      Policy(Policy &&) = default ;
      Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policy() = default ;
      Policy& operator=(const Policy &) = default ;
      Policy& operator=(Policy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachmentCount_ == nullptr
        && this->createDate_ == nullptr && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->policyDocument_ == nullptr && this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->updateDate_ == nullptr; };
      // attachmentCount Field Functions 
      bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
      void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
      inline int32_t getAttachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, 0) };
      inline Policy& setAttachmentCount(int32_t attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Policy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
      inline Policy& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Policy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // policyDocument Field Functions 
      bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
      void deletePolicyDocument() { this->policyDocument_ = nullptr;};
      inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
      inline Policy& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Policy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The number of references to the permission policy.
      shared_ptr<int32_t> attachmentCount_ {};
      // The time when the permission policy was created.
      shared_ptr<string> createDate_ {};
      // The default version of the permission policy.
      shared_ptr<string> defaultVersion_ {};
      // The description of the permission policy.
      shared_ptr<string> description_ {};
      // The document of the permission policy.
      shared_ptr<string> policyDocument_ {};
      // The name of the permission policy.
      shared_ptr<string> policyName_ {};
      // The type of the permission policy. Valid values:
      // 
      // *   Custom
      // *   System
      shared_ptr<string> policyType_ {};
      // The time when the permission policy was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->policy_ == nullptr
        && this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetPolicyResponseBody::Policy & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, GetPolicyResponseBody::Policy) };
    inline GetPolicyResponseBody::Policy getPolicy() { DARABONBA_PTR_GET(policy_, GetPolicyResponseBody::Policy) };
    inline GetPolicyResponseBody& setPolicy(const GetPolicyResponseBody::Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetPolicyResponseBody& setPolicy(GetPolicyResponseBody::Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the permission policy.
    shared_ptr<GetPolicyResponseBody::Policy> policy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
