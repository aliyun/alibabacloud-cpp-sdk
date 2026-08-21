// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
    };
    GetTranscodeSummaryRequest() = default ;
    GetTranscodeSummaryRequest(const GetTranscodeSummaryRequest &) = default ;
    GetTranscodeSummaryRequest(GetTranscodeSummaryRequest &&) = default ;
    GetTranscodeSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeSummaryRequest() = default ;
    GetTranscodeSummaryRequest& operator=(const GetTranscodeSummaryRequest &) = default ;
    GetTranscodeSummaryRequest& operator=(GetTranscodeSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoIds_ == nullptr; };
    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline string getVideoIds() const { DARABONBA_PTR_GET_DEFAULT(videoIds_, "") };
    inline GetTranscodeSummaryRequest& setVideoIds(string videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };


  protected:
    // The audio or video IDs. You can specify a maximum of 10 IDs, separated by commas (,). You can obtain the audio or video ID by using the following methods:
    // - For audio or video files uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the audio or video ID.
    // - Obtain the video ID from the value of the VideoId parameter returned by the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation when you request an upload URL and credential.
    // - After the audio or video file is uploaded, call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the audio or video ID, which is the value of the VideoId parameter in the response.
    // 
    // This parameter is required.
    shared_ptr<string> videoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
