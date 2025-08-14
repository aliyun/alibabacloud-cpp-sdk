// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHUPLOADMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHUPLOADMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class RefreshUploadMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshUploadMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadAuth, uploadAuth_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshUploadMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadAuth, uploadAuth_);
    };
    RefreshUploadMediaResponseBody() = default ;
    RefreshUploadMediaResponseBody(const RefreshUploadMediaResponseBody &) = default ;
    RefreshUploadMediaResponseBody(RefreshUploadMediaResponseBody &&) = default ;
    RefreshUploadMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshUploadMediaResponseBody() = default ;
    RefreshUploadMediaResponseBody& operator=(const RefreshUploadMediaResponseBody &) = default ;
    RefreshUploadMediaResponseBody& operator=(RefreshUploadMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->requestId_ != nullptr && this->uploadAddress_ != nullptr && this->uploadAuth_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RefreshUploadMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshUploadMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string uploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline RefreshUploadMediaResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string uploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline RefreshUploadMediaResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The upload URL.
    // 
    // >  The returned upload URL is a Base64-encoded URL. You must decode the Base64-encoded upload URL before you use an SDK or call an API operation to upload media files. You need to parse UploadAddress only if you use Object Storage Service (OSS) SDK or call an OSS API operation to upload media files.
    std::shared_ptr<string> uploadAddress_ = nullptr;
    // The upload credential.
    // 
    // >  The returned upload credential is a Base64-encoded value. You must decode the Base64-encoded upload credential before you use an SDK or call an API operation to upload media files. You need to parse UploadAuth only if you use OSS SDK or call an OSS API operation to upload media files.
    std::shared_ptr<string> uploadAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
