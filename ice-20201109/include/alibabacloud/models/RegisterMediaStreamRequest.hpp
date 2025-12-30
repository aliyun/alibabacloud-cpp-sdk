// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERMEDIASTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERMEDIASTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class RegisterMediaStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterMediaStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(StreamTags, streamTags_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterMediaStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(StreamTags, streamTags_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    RegisterMediaStreamRequest() = default ;
    RegisterMediaStreamRequest(const RegisterMediaStreamRequest &) = default ;
    RegisterMediaStreamRequest(RegisterMediaStreamRequest &&) = default ;
    RegisterMediaStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterMediaStreamRequest() = default ;
    RegisterMediaStreamRequest& operator=(const RegisterMediaStreamRequest &) = default ;
    RegisterMediaStreamRequest& operator=(RegisterMediaStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputURL_ == nullptr
        && this->mediaId_ == nullptr && this->streamTags_ == nullptr && this->userData_ == nullptr; };
    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline RegisterMediaStreamRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RegisterMediaStreamRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // streamTags Field Functions 
    bool hasStreamTags() const { return this->streamTags_ != nullptr;};
    void deleteStreamTags() { this->streamTags_ = nullptr;};
    inline string getStreamTags() const { DARABONBA_PTR_GET_DEFAULT(streamTags_, "") };
    inline RegisterMediaStreamRequest& setStreamTags(string streamTags) { DARABONBA_PTR_SET_VALUE(streamTags_, streamTags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RegisterMediaStreamRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The URL of the media asset in another service. The URL is associated with the ID of the media asset in IMS. The URL cannot be modified once registered.
    // 
    // Set this parameter to the OSS URL of the media asset. The following formats are supported:
    // 
    // http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4
    // 
    // oss://example-bucket/example.mp4: In this format, it is considered by default that the region of the OSS bucket in which the media asset resides is the same as the region in which IMS is activated.
    shared_ptr<string> inputURL_ {};
    // The ID of the media asset.
    shared_ptr<string> mediaId_ {};
    shared_ptr<string> streamTags_ {};
    // The user data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
