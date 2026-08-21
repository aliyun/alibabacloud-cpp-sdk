// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHUPLOADVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHUPLOADVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RefreshUploadVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshUploadVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_TO_JSON(UploadAuth, uploadAuth_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshUploadVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadAddress, uploadAddress_);
      DARABONBA_PTR_FROM_JSON(UploadAuth, uploadAuth_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    RefreshUploadVideoResponseBody() = default ;
    RefreshUploadVideoResponseBody(const RefreshUploadVideoResponseBody &) = default ;
    RefreshUploadVideoResponseBody(RefreshUploadVideoResponseBody &&) = default ;
    RefreshUploadVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshUploadVideoResponseBody() = default ;
    RefreshUploadVideoResponseBody& operator=(const RefreshUploadVideoResponseBody &) = default ;
    RefreshUploadVideoResponseBody& operator=(RefreshUploadVideoResponseBody &&) = default ;
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
    inline RefreshUploadVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadAddress Field Functions 
    bool hasUploadAddress() const { return this->uploadAddress_ != nullptr;};
    void deleteUploadAddress() { this->uploadAddress_ = nullptr;};
    inline string getUploadAddress() const { DARABONBA_PTR_GET_DEFAULT(uploadAddress_, "") };
    inline RefreshUploadVideoResponseBody& setUploadAddress(string uploadAddress) { DARABONBA_PTR_SET_VALUE(uploadAddress_, uploadAddress) };


    // uploadAuth Field Functions 
    bool hasUploadAuth() const { return this->uploadAuth_ != nullptr;};
    void deleteUploadAuth() { this->uploadAuth_ = nullptr;};
    inline string getUploadAuth() const { DARABONBA_PTR_GET_DEFAULT(uploadAuth_, "") };
    inline RefreshUploadVideoResponseBody& setUploadAuth(string uploadAuth) { DARABONBA_PTR_SET_VALUE(uploadAuth_, uploadAuth) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline RefreshUploadVideoResponseBody& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The upload URL.
    // >The upload URL returned by this operation is a Base64-encoded value. When you use an SDK or API to upload media assets, you must decode the value in Base64 before use. You need to parse UploadAddress only if you use the China (China) native OSS SDK or OSS API for upload.
    shared_ptr<string> uploadAddress_ {};
    // The upload credential.
    // >The upload credential returned by this operation is a Base64-encoded value. When you use an SDK or API to upload media assets, you must decode the value in Base64 before use. You need to parse UploadAuth only if you use the native OSS SDK or OSS API for upload.
    shared_ptr<string> uploadAuth_ {};
    // The audio or video ID.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
