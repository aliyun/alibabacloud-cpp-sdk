// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADATTACHEDMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADATTACHEDMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateUploadAttachedMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadAttachedMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadAuth, uploadAuth_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadAttachedMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadAuth, uploadAuth_);
    };
    CreateUploadAttachedMediaResponseBody() = default ;
    CreateUploadAttachedMediaResponseBody(const CreateUploadAttachedMediaResponseBody &) = default ;
    CreateUploadAttachedMediaResponseBody(CreateUploadAttachedMediaResponseBody &&) = default ;
    CreateUploadAttachedMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadAttachedMediaResponseBody() = default ;
    CreateUploadAttachedMediaResponseBody& operator=(const CreateUploadAttachedMediaResponseBody &) = default ;
    CreateUploadAttachedMediaResponseBody& operator=(CreateUploadAttachedMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileURL_ == nullptr
        && this->mediaId_ == nullptr && this->mediaURL_ == nullptr && this->requestId_ == nullptr && this->uploadAddress_ == nullptr && this->uploadAuth_ == nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline CreateUploadAttachedMediaResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateUploadAttachedMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string getMediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline CreateUploadAttachedMediaResponseBody& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadAttachedMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string getUploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline CreateUploadAttachedMediaResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string getUploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline CreateUploadAttachedMediaResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


  protected:
    // The OSS URL of the auxiliary media asset file (without authentication).
    // 
    // When you add an image watermark template, this URL can be used as the request parameter `FileUrl` of the [AddWatermark](~~AddWatermark~~) operation.
    shared_ptr<string> fileURL_ {};
    // The media asset ID.
    shared_ptr<string> mediaId_ {};
    // The access URL of the media asset.
    // 
    // If a CDN domain name is configured, a CDN URL is returned. Otherwise, an OSS URL is returned.
    // 
    // > If the returned MediaURL is inaccessible in a browser (403), you have enabled URL authentication for the VOD domain name. You can disable [URL authentication](https://help.aliyun.com/document_detail/86090.html) or [generate an authentication signature](https://help.aliyun.com/document_detail/57007.html) yourself.
    shared_ptr<string> mediaURL_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The upload URL.
    // > The upload URL returned by the operation is a Base64-encoded value. When you use the SDK or API to upload media assets, you must Base64-decode the value before use. Only uploads by using the OSS native SDK or OSS API require you to parse UploadAddress yourself.
    shared_ptr<string> uploadAddress_ {};
    // The upload credential.
    // 
    // > The upload credential returned by the operation is a Base64-encoded value. When you use the SDK or API to upload media assets, you must Base64-decode the value before use. Only uploads by using the OSS native SDK or OSS API require you to parse UploadAuth yourself.
    shared_ptr<string> uploadAuth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
