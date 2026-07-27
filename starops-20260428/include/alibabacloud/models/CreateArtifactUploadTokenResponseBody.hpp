// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTUPLOADTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTUPLOADTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class CreateArtifactUploadTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accessId, accessId_);
      DARABONBA_PTR_TO_JSON(artifactPath, artifactPath_);
      DARABONBA_PTR_TO_JSON(dir, dir_);
      DARABONBA_PTR_TO_JSON(expire, expire_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(successActionStatus, successActionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactUploadTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accessId, accessId_);
      DARABONBA_PTR_FROM_JSON(artifactPath, artifactPath_);
      DARABONBA_PTR_FROM_JSON(dir, dir_);
      DARABONBA_PTR_FROM_JSON(expire, expire_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(successActionStatus, successActionStatus_);
    };
    CreateArtifactUploadTokenResponseBody() = default ;
    CreateArtifactUploadTokenResponseBody(const CreateArtifactUploadTokenResponseBody &) = default ;
    CreateArtifactUploadTokenResponseBody(CreateArtifactUploadTokenResponseBody &&) = default ;
    CreateArtifactUploadTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactUploadTokenResponseBody() = default ;
    CreateArtifactUploadTokenResponseBody& operator=(const CreateArtifactUploadTokenResponseBody &) = default ;
    CreateArtifactUploadTokenResponseBody& operator=(CreateArtifactUploadTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->artifactPath_ == nullptr && this->dir_ == nullptr && this->expire_ == nullptr && this->host_ == nullptr && this->maxSize_ == nullptr
        && this->policy_ == nullptr && this->requestId_ == nullptr && this->signature_ == nullptr && this->successActionStatus_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline CreateArtifactUploadTokenResponseBody& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // artifactPath Field Functions 
    bool hasArtifactPath() const { return this->artifactPath_ != nullptr;};
    void deleteArtifactPath() { this->artifactPath_ = nullptr;};
    inline string getArtifactPath() const { DARABONBA_PTR_GET_DEFAULT(artifactPath_, "") };
    inline CreateArtifactUploadTokenResponseBody& setArtifactPath(string artifactPath) { DARABONBA_PTR_SET_VALUE(artifactPath_, artifactPath) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline CreateArtifactUploadTokenResponseBody& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline CreateArtifactUploadTokenResponseBody& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateArtifactUploadTokenResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int64_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0L) };
    inline CreateArtifactUploadTokenResponseBody& setMaxSize(int64_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateArtifactUploadTokenResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateArtifactUploadTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateArtifactUploadTokenResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // successActionStatus Field Functions 
    bool hasSuccessActionStatus() const { return this->successActionStatus_ != nullptr;};
    void deleteSuccessActionStatus() { this->successActionStatus_ = nullptr;};
    inline string getSuccessActionStatus() const { DARABONBA_PTR_GET_DEFAULT(successActionStatus_, "") };
    inline CreateArtifactUploadTokenResponseBody& setSuccessActionStatus(string successActionStatus) { DARABONBA_PTR_SET_VALUE(successActionStatus_, successActionStatus) };


  protected:
    shared_ptr<string> accessId_ {};
    shared_ptr<string> artifactPath_ {};
    shared_ptr<string> dir_ {};
    shared_ptr<int64_t> expire_ {};
    shared_ptr<string> host_ {};
    shared_ptr<int64_t> maxSize_ {};
    shared_ptr<string> policy_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> signature_ {};
    shared_ptr<string> successActionStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
