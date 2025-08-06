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
    virtual bool empty() const override { this->fileURL_ != nullptr
        && this->mediaId_ != nullptr && this->mediaURL_ != nullptr && this->requestId_ != nullptr && this->uploadAddress_ != nullptr && this->uploadAuth_ != nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline CreateUploadAttachedMediaResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateUploadAttachedMediaResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline CreateUploadAttachedMediaResponseBody& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadAttachedMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string uploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline CreateUploadAttachedMediaResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string uploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline CreateUploadAttachedMediaResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


  protected:
    // The URL of the auxiliary media asset file. The URL is an Object Storage Service (OSS) URL and does not contain the information used for URL signing.
    // 
    // You can use specify this value for the `FileUrl` parameter when you call the [AddWatermark](~~AddWatermark~~) operation to create a watermark template.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The ID of the auxiliary media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The URL of the auxiliary media asset.
    // 
    // If a domain name for Alibaba Cloud CDN is specified, a CDN URL is returned. Otherwise, an OSS URL is returned.
    // 
    // >  If you enable the URL signing feature of ApsaraVideo VOD, you may be unable to access the returned URL of the auxiliary media asset by using a browser and the HTTP status code 403 may be returned. To resolve this issue, you can disable the [URL signing](https://help.aliyun.com/document_detail/86090.html) feature or [generate a signed URL](https://help.aliyun.com/document_detail/57007.html).
    std::shared_ptr<string> mediaURL_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The upload URL.
    // 
    // >  The upload URL returned by this operation is Base64-encoded. Before you can use an SDK or an API operation to upload a media asset based on the upload URL, you must decode the upload URL by using the Base64 algorithm. You must parse the upload URL only if you use native OSS SDKs or OSS API for uploads.
    std::shared_ptr<string> uploadAddress_ = nullptr;
    // The upload credential.
    // 
    // >  The upload credential returned by this operation is Base64-encoded. Before you can use an SDK or an API operation to upload a media asset based on the upload credential, you must decode the upload credential by using the Base64 algorithm. You must parse the upload credential only if you use native OSS SDKs or OSS API for uploads.
    std::shared_ptr<string> uploadAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
