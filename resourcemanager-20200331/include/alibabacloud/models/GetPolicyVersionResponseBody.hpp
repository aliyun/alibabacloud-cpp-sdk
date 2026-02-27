// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetPolicyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolicyVersionResponseBody() = default ;
    GetPolicyVersionResponseBody(const GetPolicyVersionResponseBody &) = default ;
    GetPolicyVersionResponseBody(GetPolicyVersionResponseBody &&) = default ;
    GetPolicyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyVersionResponseBody() = default ;
    GetPolicyVersionResponseBody& operator=(const GetPolicyVersionResponseBody &) = default ;
    GetPolicyVersionResponseBody& operator=(GetPolicyVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyVersion& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
        DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
        DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      PolicyVersion() = default ;
      PolicyVersion(const PolicyVersion &) = default ;
      PolicyVersion(PolicyVersion &&) = default ;
      PolicyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyVersion() = default ;
      PolicyVersion& operator=(const PolicyVersion &) = default ;
      PolicyVersion& operator=(PolicyVersion &&) = default ;
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
      inline PolicyVersion& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // isDefaultVersion Field Functions 
      bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
      void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
      inline bool getIsDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
      inline PolicyVersion& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


      // policyDocument Field Functions 
      bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
      void deletePolicyDocument() { this->policyDocument_ = nullptr;};
      inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
      inline PolicyVersion& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline PolicyVersion& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The time when the policy version was created.
      shared_ptr<string> createDate_ {};
      // Indicates whether the policy version is the default version.
      shared_ptr<bool> isDefaultVersion_ {};
      // The document of the permission policy.
      shared_ptr<string> policyDocument_ {};
      // The ID of the policy version.
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->policyVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline const GetPolicyVersionResponseBody::PolicyVersion & getPolicyVersion() const { DARABONBA_PTR_GET_CONST(policyVersion_, GetPolicyVersionResponseBody::PolicyVersion) };
    inline GetPolicyVersionResponseBody::PolicyVersion getPolicyVersion() { DARABONBA_PTR_GET(policyVersion_, GetPolicyVersionResponseBody::PolicyVersion) };
    inline GetPolicyVersionResponseBody& setPolicyVersion(const GetPolicyVersionResponseBody::PolicyVersion & policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };
    inline GetPolicyVersionResponseBody& setPolicyVersion(GetPolicyVersionResponseBody::PolicyVersion && policyVersion) { DARABONBA_PTR_SET_RVALUE(policyVersion_, policyVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the policy version.
    shared_ptr<GetPolicyVersionResponseBody::PolicyVersion> policyVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
