// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJENKINSIMAGESCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJENKINSIMAGESCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateJenkinsImageScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJenkinsImageScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_TO_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_TO_JSON(JenkinsEnv, jenkinsEnv_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJenkinsImageScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(ImageCreate, imageCreate_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageSize, imageSize_);
      DARABONBA_PTR_FROM_JSON(ImageUpdate, imageUpdate_);
      DARABONBA_PTR_FROM_JSON(JenkinsEnv, jenkinsEnv_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CreateJenkinsImageScanTaskRequest() = default ;
    CreateJenkinsImageScanTaskRequest(const CreateJenkinsImageScanTaskRequest &) = default ;
    CreateJenkinsImageScanTaskRequest(CreateJenkinsImageScanTaskRequest &&) = default ;
    CreateJenkinsImageScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJenkinsImageScanTaskRequest() = default ;
    CreateJenkinsImageScanTaskRequest& operator=(const CreateJenkinsImageScanTaskRequest &) = default ;
    CreateJenkinsImageScanTaskRequest& operator=(CreateJenkinsImageScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digest_ == nullptr
        && return this->imageCreate_ == nullptr && return this->imageId_ == nullptr && return this->imageSize_ == nullptr && return this->imageUpdate_ == nullptr && return this->jenkinsEnv_ == nullptr
        && return this->namespace_ == nullptr && return this->repoName_ == nullptr && return this->sourceIp_ == nullptr && return this->tag_ == nullptr && return this->token_ == nullptr
        && return this->uuid_ == nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline CreateJenkinsImageScanTaskRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // imageCreate Field Functions 
    bool hasImageCreate() const { return this->imageCreate_ != nullptr;};
    void deleteImageCreate() { this->imageCreate_ = nullptr;};
    inline int64_t imageCreate() const { DARABONBA_PTR_GET_DEFAULT(imageCreate_, 0L) };
    inline CreateJenkinsImageScanTaskRequest& setImageCreate(int64_t imageCreate) { DARABONBA_PTR_SET_VALUE(imageCreate_, imageCreate) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateJenkinsImageScanTaskRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageSize Field Functions 
    bool hasImageSize() const { return this->imageSize_ != nullptr;};
    void deleteImageSize() { this->imageSize_ = nullptr;};
    inline int64_t imageSize() const { DARABONBA_PTR_GET_DEFAULT(imageSize_, 0L) };
    inline CreateJenkinsImageScanTaskRequest& setImageSize(int64_t imageSize) { DARABONBA_PTR_SET_VALUE(imageSize_, imageSize) };


    // imageUpdate Field Functions 
    bool hasImageUpdate() const { return this->imageUpdate_ != nullptr;};
    void deleteImageUpdate() { this->imageUpdate_ = nullptr;};
    inline int64_t imageUpdate() const { DARABONBA_PTR_GET_DEFAULT(imageUpdate_, 0L) };
    inline CreateJenkinsImageScanTaskRequest& setImageUpdate(int64_t imageUpdate) { DARABONBA_PTR_SET_VALUE(imageUpdate_, imageUpdate) };


    // jenkinsEnv Field Functions 
    bool hasJenkinsEnv() const { return this->jenkinsEnv_ != nullptr;};
    void deleteJenkinsEnv() { this->jenkinsEnv_ = nullptr;};
    inline string jenkinsEnv() const { DARABONBA_PTR_GET_DEFAULT(jenkinsEnv_, "") };
    inline CreateJenkinsImageScanTaskRequest& setJenkinsEnv(string jenkinsEnv) { DARABONBA_PTR_SET_VALUE(jenkinsEnv_, jenkinsEnv) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateJenkinsImageScanTaskRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateJenkinsImageScanTaskRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateJenkinsImageScanTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateJenkinsImageScanTaskRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateJenkinsImageScanTaskRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateJenkinsImageScanTaskRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The digest of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<int64_t> imageCreate_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The size of the image. Unit: bytes.
    std::shared_ptr<int64_t> imageSize_ = nullptr;
    // The time when the image was updated.
    std::shared_ptr<int64_t> imageUpdate_ = nullptr;
    // The information about the Jenkins environment.
    std::shared_ptr<string> jenkinsEnv_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The token that is used to access the Jenkins image repository.
    std::shared_ptr<string> token_ = nullptr;
    // The UUID of the image asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
