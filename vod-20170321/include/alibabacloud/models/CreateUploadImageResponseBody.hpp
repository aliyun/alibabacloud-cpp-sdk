// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateUploadImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadAuth, uploadAuth_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadAuth, uploadAuth_);
    };
    CreateUploadImageResponseBody() = default ;
    CreateUploadImageResponseBody(const CreateUploadImageResponseBody &) = default ;
    CreateUploadImageResponseBody(CreateUploadImageResponseBody &&) = default ;
    CreateUploadImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadImageResponseBody() = default ;
    CreateUploadImageResponseBody& operator=(const CreateUploadImageResponseBody &) = default ;
    CreateUploadImageResponseBody& operator=(CreateUploadImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileURL_ == nullptr
        && this->imageId_ == nullptr && this->imageURL_ == nullptr && this->requestId_ == nullptr && this->uploadAddress_ == nullptr && this->uploadAuth_ == nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline CreateUploadImageResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateUploadImageResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string getImageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline CreateUploadImageResponseBody& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string getUploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline CreateUploadImageResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string getUploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline CreateUploadImageResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


  protected:
    // The OSS URL of the image file. The URL does not contain authentication information.
    // 
    // When you add an image watermark template, you can use this URL as the value of the `FileUrl` request parameter for the [AddWatermark](~~AddWatermark~~) operation.
    shared_ptr<string> fileURL_ {};
    // The image ID. You can use it as a request parameter for operations such as [GetImageInfo](~~GetImageInfo~~), [GetImageInfos](~~GetImageInfos~~), [UpdateImageInfos](~~UpdateImageInfos~~), and [DeleteImage](~~DeleteImage~~).
    shared_ptr<string> imageId_ {};
    // The access URL of the image.
    // > If the returned ImageURL cannot be accessed in a browser and a 403 error is returned, it is because you have enabled URL authentication for the ApsaraVideo VOD domain name. You can disable [URL authentication](https://help.aliyun.com/document_detail/86090.html) or [generate an authentication signature](https://help.aliyun.com/document_detail/57007.html) by yourself.
    shared_ptr<string> imageURL_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The upload URL.
    // 
    // > The upload URL returned by the operation is Base64-encoded. When you call an SDK or API operation to upload media assets, you must Base64-decode the URL before use. You need to parse UploadAddress only when you use the native OSS SDK or OSS API to upload media assets.
    shared_ptr<string> uploadAddress_ {};
    // The upload credential.
    // > The upload credential returned by the operation is Base64-encoded. When you call an SDK or API operation to upload media assets, you must Base64-decode the credential before use. You need to parse UploadAuth only when you use the native OSS SDK or OSS API to upload media assets.
    shared_ptr<string> uploadAuth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
