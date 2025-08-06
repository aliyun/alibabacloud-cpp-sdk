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
    virtual bool empty() const override { this->fileURL_ != nullptr
        && this->imageId_ != nullptr && this->imageURL_ != nullptr && this->requestId_ != nullptr && this->uploadAddress_ != nullptr && this->uploadAuth_ != nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline CreateUploadImageResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateUploadImageResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline CreateUploadImageResponseBody& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string uploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline CreateUploadImageResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string uploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline CreateUploadImageResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


  protected:
    // The OSS URL of the file. The URL does not contain the information used for URL signing. You can specify FileUrl when you call the [AddWatermark](https://help.aliyun.com/document_detail/98617.html) operation.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The ID of the image file.
    std::shared_ptr<string> imageId_ = nullptr;
    // The URL of the image.
    // 
    // > If the returned URL is inaccessible from a browser and the HTTP 403 status code is returned, the URL signing feature in ApsaraVideo VOD is enabled. To resolve this issue, you can disable the [URL signing](https://help.aliyun.com/document_detail/86090.html) feature or [generate a signed URL](https://help.aliyun.com/document_detail/57007.html).
    std::shared_ptr<string> imageURL_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The upload URL.
    // 
    // > The returned upload URL is a Base64-encoded URL. You must decode the Base64-encoded URL before you use an SDK or call an API operation to upload auxiliary media assets. You need to parse UploadAddress only if you use the OSS SDK or call an OSS API operation to upload auxiliary media assets.
    std::shared_ptr<string> uploadAddress_ = nullptr;
    // The upload credential.
    // 
    // > The returned upload credential is a Base64-encoded value. You must decode the Base64-encoded credential before you use an SDK or call an API operation to upload auxiliary media assets. You need to parse UploadAuth only if you use the OSS SDK or call an OSS API operation to upload auxiliary media assets.
    std::shared_ptr<string> uploadAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
