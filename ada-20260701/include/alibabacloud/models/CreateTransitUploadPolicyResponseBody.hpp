// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITUPLOADPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITUPLOADPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class CreateTransitUploadPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitUploadPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(PolicyInfo, policyInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TransitId, transitId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitUploadPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(PolicyInfo, policyInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TransitId, transitId_);
    };
    CreateTransitUploadPolicyResponseBody() = default ;
    CreateTransitUploadPolicyResponseBody(const CreateTransitUploadPolicyResponseBody &) = default ;
    CreateTransitUploadPolicyResponseBody(CreateTransitUploadPolicyResponseBody &&) = default ;
    CreateTransitUploadPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitUploadPolicyResponseBody() = default ;
    CreateTransitUploadPolicyResponseBody& operator=(const CreateTransitUploadPolicyResponseBody &) = default ;
    CreateTransitUploadPolicyResponseBody& operator=(CreateTransitUploadPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(Dir, dir_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(Dir, dir_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
      };
      PolicyInfo() = default ;
      PolicyInfo(const PolicyInfo &) = default ;
      PolicyInfo(PolicyInfo &&) = default ;
      PolicyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyInfo() = default ;
      PolicyInfo& operator=(const PolicyInfo &) = default ;
      PolicyInfo& operator=(PolicyInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->dir_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->securityToken_ == nullptr && this->signature_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline PolicyInfo& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // dir Field Functions 
      bool hasDir() const { return this->dir_ != nullptr;};
      void deleteDir() { this->dir_ = nullptr;};
      inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
      inline PolicyInfo& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline PolicyInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline PolicyInfo& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline PolicyInfo& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline PolicyInfo& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      // The `OSSAccessKeyId` in the PostObject form. Keep it secure along with the entire `PolicyInfo`.
      shared_ptr<string> accessId_ {};
      // The object storage key. The value is the same as the top-level `FilePath`.
      shared_ptr<string> dir_ {};
      // The destination URL for the client to execute the PostObject request.
      shared_ptr<string> host_ {};
      // The Base64-encoded PostObject upload policy. Keep it secure along with the entire `PolicyInfo`.
      shared_ptr<string> policy_ {};
      // When STS credentials are used, this is the `x-oss-security-token` in the PostObject form. It may be empty if STS is not used. This field contains sensitive authorization information.
      shared_ptr<string> securityToken_ {};
      // The signature of the PostObject form. This field contains sensitive authorization information.
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->filePath_ == nullptr
        && this->policyInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->transitId_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateTransitUploadPolicyResponseBody& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // policyInfo Field Functions 
    bool hasPolicyInfo() const { return this->policyInfo_ != nullptr;};
    void deletePolicyInfo() { this->policyInfo_ = nullptr;};
    inline const CreateTransitUploadPolicyResponseBody::PolicyInfo & getPolicyInfo() const { DARABONBA_PTR_GET_CONST(policyInfo_, CreateTransitUploadPolicyResponseBody::PolicyInfo) };
    inline CreateTransitUploadPolicyResponseBody::PolicyInfo getPolicyInfo() { DARABONBA_PTR_GET(policyInfo_, CreateTransitUploadPolicyResponseBody::PolicyInfo) };
    inline CreateTransitUploadPolicyResponseBody& setPolicyInfo(const CreateTransitUploadPolicyResponseBody::PolicyInfo & policyInfo) { DARABONBA_PTR_SET_VALUE(policyInfo_, policyInfo) };
    inline CreateTransitUploadPolicyResponseBody& setPolicyInfo(CreateTransitUploadPolicyResponseBody::PolicyInfo && policyInfo) { DARABONBA_PTR_SET_RVALUE(policyInfo_, policyInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitUploadPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateTransitUploadPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // transitId Field Functions 
    bool hasTransitId() const { return this->transitId_ != nullptr;};
    void deleteTransitId() { this->transitId_ = nullptr;};
    inline string getTransitId() const { DARABONBA_PTR_GET_DEFAULT(transitId_, "") };
    inline CreateTransitUploadPolicyResponseBody& setTransitId(string transitId) { DARABONBA_PTR_SET_VALUE(transitId_, transitId) };


  protected:
    // The object storage key, which is also the `key` in the PostObject form.
    shared_ptr<string> filePath_ {};
    // The upload policy object. For complete sub-fields, see the following table.
    shared_ptr<CreateTransitUploadPolicyResponseBody::PolicyInfo> policyInfo_ {};
    // The request ID, used for Tracing Analysis and troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the upload policy is successfully generated. A successful response always returns `true`. An error response is returned upon failure.
    shared_ptr<bool> success_ {};
    // The ID of the newly created Transit record, which is used for subsequent queries and storage.
    shared_ptr<string> transitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
