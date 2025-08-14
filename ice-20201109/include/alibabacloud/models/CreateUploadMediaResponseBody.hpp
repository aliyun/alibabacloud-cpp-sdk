// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateUploadMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadAuth, uploadAuth_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadAuth, uploadAuth_);
    };
    CreateUploadMediaResponseBody() = default ;
    CreateUploadMediaResponseBody(const CreateUploadMediaResponseBody &) = default ;
    CreateUploadMediaResponseBody(CreateUploadMediaResponseBody &&) = default ;
    CreateUploadMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadMediaResponseBody() = default ;
    CreateUploadMediaResponseBody& operator=(const CreateUploadMediaResponseBody &) = default ;
    CreateUploadMediaResponseBody& operator=(CreateUploadMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileURL_ != nullptr
        && this->mediaId_ != nullptr && this->mediaURL_ != nullptr && this->requestId_ != nullptr && this->uploadAddress_ != nullptr && this->uploadAuth_ != nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline CreateUploadMediaResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateUploadMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline CreateUploadMediaResponseBody& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string uploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline CreateUploadMediaResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string uploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline CreateUploadMediaResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


  protected:
    // The OSS URL of the file. The URL does not contain the information used for authentication.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The URL of the media asset.
    // 
    // >  If a domain name for Alibaba Cloud CDN (CDN) is specified, a CDN URL is returned. Otherwise, an OSS URL is returned. If the HTTP status code 403 is returned when you access the URL from your browser, the URL authentication feature of ApsaraVideo VOD is enabled. To resolve this issue, disable URL authentication or generate an authentication signature.
    std::shared_ptr<string> mediaURL_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The upload URL.
    // 
    // >  The returned upload URL is a Base64-encoded URL. You must decode the Base64-encoded upload URL before you use an SDK or call an API operation to upload media files. You need to parse UploadAddress only if you use OSS SDK or call an OSS API operation to upload media files.
    std::shared_ptr<string> uploadAddress_ = nullptr;
    // The upload credential.
    // 
    // >  The returned upload credential is a Base64-encoded value. You must decode the Base64-encoded upload URL before you use an SDK or call an API operation to upload media files. You need to parse UploadAuth only if you use OSS SDK or call an OSS API operation to upload media files.
    std::shared_ptr<string> uploadAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
