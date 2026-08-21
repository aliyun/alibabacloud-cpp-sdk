// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitPreprocessJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PreprocessType, preprocessType_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PreprocessType, preprocessType_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    SubmitPreprocessJobsRequest() = default ;
    SubmitPreprocessJobsRequest(const SubmitPreprocessJobsRequest &) = default ;
    SubmitPreprocessJobsRequest(SubmitPreprocessJobsRequest &&) = default ;
    SubmitPreprocessJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsRequest() = default ;
    SubmitPreprocessJobsRequest& operator=(const SubmitPreprocessJobsRequest &) = default ;
    SubmitPreprocessJobsRequest& operator=(SubmitPreprocessJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preprocessType_ == nullptr
        && this->videoId_ == nullptr; };
    // preprocessType Field Functions 
    bool hasPreprocessType() const { return this->preprocessType_ != nullptr;};
    void deletePreprocessType() { this->preprocessType_ = nullptr;};
    inline string getPreprocessType() const { DARABONBA_PTR_GET_DEFAULT(preprocessType_, "") };
    inline SubmitPreprocessJobsRequest& setPreprocessType(string preprocessType) { DARABONBA_PTR_SET_VALUE(preprocessType_, preprocessType) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitPreprocessJobsRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The preprocessing type. Set the value to **LivePreprocess** (video preprocessing for the China Production Studio).
    // 
    // This parameter is required.
    shared_ptr<string> preprocessType_ {};
    // The video ID. You can obtain the video ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the video ID.
    // - When you upload a video by calling the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation, the video ID is the value of the VideoId parameter in the response.
    // - After the video is uploaded, you can call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the video ID, which is the value of the VideoId parameter in the response.
    // 
    // This parameter is required.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
