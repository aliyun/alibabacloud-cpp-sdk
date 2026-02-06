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
    // The ID of the audio or video file. You can specify up to 10 IDs. Separate the IDs with commas (,). You can use one of the following methods to obtain the ID:
    // 
    // *   After you upload a video in the [ApsaraVideo VOD console](https://vod.console.aliyun.com), you can log on to the ApsaraVideo VOD console and choose **Media Files** > **Audio/Video** to view the ID of the video.
    // *   Obtain the value of VideoId from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you call to obtain the upload URL and credential.
    // *   Obtain the value of VideoId by calling the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation. This method is applicable to files that have been uploaded.
    // 
    // This parameter is required.
    shared_ptr<string> videoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
