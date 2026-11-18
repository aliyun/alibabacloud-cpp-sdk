// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateUploadVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadAuth, uploadAuth_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadAuth, uploadAuth_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    CreateUploadVideoResponseBody() = default ;
    CreateUploadVideoResponseBody(const CreateUploadVideoResponseBody &) = default ;
    CreateUploadVideoResponseBody(CreateUploadVideoResponseBody &&) = default ;
    CreateUploadVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadVideoResponseBody() = default ;
    CreateUploadVideoResponseBody& operator=(const CreateUploadVideoResponseBody &) = default ;
    CreateUploadVideoResponseBody& operator=(CreateUploadVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadAddress_ == nullptr && this->uploadAuth_ == nullptr && this->videoId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUploadVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string getUploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline CreateUploadVideoResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string getUploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline CreateUploadVideoResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline CreateUploadVideoResponseBody& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The upload URL.
    // 
    // > The upload URL returned by the operation is Base64-encoded. When you call an SDK or API operation to upload the media asset, you must decode the URL before use. You only need to parse UploadAddress when you use the native OSS SDK or OSS API for upload.
    shared_ptr<string> uploadAddress_ {};
    // The upload credential.
    // 
    // > The upload credential returned by the operation is Base64-encoded. When you call an SDK or API operation to upload the media asset, you must decode the credential before use. You only need to parse UploadAuth when you use the native OSS SDK or OSS API for upload.
    shared_ptr<string> uploadAuth_ {};
    // The audio or video ID. You can use this ID as a request parameter for media asset management, media processing, and media review operations.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
