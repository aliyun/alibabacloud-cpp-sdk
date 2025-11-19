// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(AuthInfoTimeout, authInfoTimeout_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(AuthInfoTimeout, authInfoTimeout_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetVideoPlayAuthRequest() = default ;
    GetVideoPlayAuthRequest(const GetVideoPlayAuthRequest &) = default ;
    GetVideoPlayAuthRequest(GetVideoPlayAuthRequest &&) = default ;
    GetVideoPlayAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayAuthRequest() = default ;
    GetVideoPlayAuthRequest& operator=(const GetVideoPlayAuthRequest &) = default ;
    GetVideoPlayAuthRequest& operator=(GetVideoPlayAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && return this->authInfoTimeout_ == nullptr && return this->videoId_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GetVideoPlayAuthRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // authInfoTimeout Field Functions 
    bool hasAuthInfoTimeout() const { return this->authInfoTimeout_ != nullptr;};
    void deleteAuthInfoTimeout() { this->authInfoTimeout_ = nullptr;};
    inline int64_t authInfoTimeout() const { DARABONBA_PTR_GET_DEFAULT(authInfoTimeout_, 0L) };
    inline GetVideoPlayAuthRequest& setAuthInfoTimeout(int64_t authInfoTimeout) { DARABONBA_PTR_SET_VALUE(authInfoTimeout_, authInfoTimeout) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetVideoPlayAuthRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The API version. Set the value to **1.0.0**.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // The validity period of the playback credential. Unit: **seconds**. You cannot obtain the playback URL of a video by using a credential that has expired. A new credential is required.
    // 
    // *   Default value: **100**.
    // *   Valid values: `[100,3000]`.
    std::shared_ptr<int64_t> authInfoTimeout_ = nullptr;
    // The ID of the media file. You can specify only one ID. You can use one of the following methods to obtain the ID of the file:
    // 
    // *   Log on to the [ApsaraVideo VOD](https://vod.console.aliyun.com) console. In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the media file. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of the VideoId parameter from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation.
    // *   Obtain the value of the VideoId parameter from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation. This method is applicable to files that have been uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
