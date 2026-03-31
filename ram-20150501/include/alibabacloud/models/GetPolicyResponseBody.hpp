// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GetPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultPolicyVersion, defaultPolicyVersion_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultPolicyVersion, defaultPolicyVersion_);
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
      // The number of references to the policy.
      shared_ptr<int32_t> attachmentCount_ {};
      // The time when the policy was created.
      shared_ptr<string> createDate_ {};
      // The default version of the policy.
      shared_ptr<string> defaultVersion_ {};
      // The description of the policy.
      shared_ptr<string> description_ {};
      // This parameter is deprecated.
      shared_ptr<string> policyDocument_ {};
      // The name of the policy.
      shared_ptr<string> policyName_ {};
      // The type of the policy.
      shared_ptr<string> policyType_ {};
      // The time when the policy was modified.
      shared_ptr<string> updateDate_ {};
    };

    class DefaultPolicyVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultPolicyVersion& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
        DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultPolicyVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
        DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      DefaultPolicyVersion() = default ;
      DefaultPolicyVersion(const DefaultPolicyVersion &) = default ;
      DefaultPolicyVersion(DefaultPolicyVersion &&) = default ;
      DefaultPolicyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultPolicyVersion() = default ;
      DefaultPolicyVersion& operator=(const DefaultPolicyVersion &) = default ;
      DefaultPolicyVersion& operator=(DefaultPolicyVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->isDefaultVersion_ == nullptr && this->policyDocument_ == nullptr && this->versionId_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline DefaultPolicyVersion& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // isDefaultVersion Field Functions 
      bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
      void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
      inline bool getIsDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
      inline DefaultPolicyVersion& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


      // policyDocument Field Functions 
      bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
      void deletePolicyDocument() { this->policyDocument_ = nullptr;};
      inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
      inline DefaultPolicyVersion& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline DefaultPolicyVersion& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The time when the default policy version was created.
      shared_ptr<string> createDate_ {};
      // An attribute in the `DefaultPolicyVersion` parameter. The value of the `IsDefaultVersion` parameter is `true`.
      shared_ptr<bool> isDefaultVersion_ {};
      // The document of the policy.
      shared_ptr<string> policyDocument_ {};
      // The ID of the default policy version.
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->defaultPolicyVersion_ == nullptr
        && this->policy_ == nullptr && this->requestId_ == nullptr; };
    // defaultPolicyVersion Field Functions 
    bool hasDefaultPolicyVersion() const { return this->defaultPolicyVersion_ != nullptr;};
    void deleteDefaultPolicyVersion() { this->defaultPolicyVersion_ = nullptr;};
    inline const GetPolicyResponseBody::DefaultPolicyVersion & getDefaultPolicyVersion() const { DARABONBA_PTR_GET_CONST(defaultPolicyVersion_, GetPolicyResponseBody::DefaultPolicyVersion) };
    inline GetPolicyResponseBody::DefaultPolicyVersion getDefaultPolicyVersion() { DARABONBA_PTR_GET(defaultPolicyVersion_, GetPolicyResponseBody::DefaultPolicyVersion) };
    inline GetPolicyResponseBody& setDefaultPolicyVersion(const GetPolicyResponseBody::DefaultPolicyVersion & defaultPolicyVersion) { DARABONBA_PTR_SET_VALUE(defaultPolicyVersion_, defaultPolicyVersion) };
    inline GetPolicyResponseBody& setDefaultPolicyVersion(GetPolicyResponseBody::DefaultPolicyVersion && defaultPolicyVersion) { DARABONBA_PTR_SET_RVALUE(defaultPolicyVersion_, defaultPolicyVersion) };


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
    // The information about the default policy version.
    shared_ptr<GetPolicyResponseBody::DefaultPolicyVersion> defaultPolicyVersion_ {};
    // The basic information about the policy.
    shared_ptr<GetPolicyResponseBody::Policy> policy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
