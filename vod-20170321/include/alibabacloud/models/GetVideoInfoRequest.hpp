// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetVideoInfoRequest() = default ;
    GetVideoInfoRequest(const GetVideoInfoRequest &) = default ;
    GetVideoInfoRequest(GetVideoInfoRequest &&) = default ;
    GetVideoInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfoRequest() = default ;
    GetVideoInfoRequest& operator=(const GetVideoInfoRequest &) = default ;
    GetVideoInfoRequest& operator=(GetVideoInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoId_ == nullptr; };
    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetVideoInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The ID of the audio or video file. You can specify only one ID in each call. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the audio or video file. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of VideoId from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you called to obtain the upload URL and credential.
    // *   Obtain the value of VideoId from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you called to query the media ID after the media file is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
