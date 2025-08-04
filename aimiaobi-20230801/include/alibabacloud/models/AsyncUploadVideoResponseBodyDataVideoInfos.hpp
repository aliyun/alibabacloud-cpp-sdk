// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEORESPONSEBODYDATAVIDEOINFOS_HPP_
#define ALIBABACLOUD_MODELS_ASYNCUPLOADVIDEORESPONSEBODYDATAVIDEOINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncUploadVideoResponseBodyDataVideoInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncUploadVideoResponseBodyDataVideoInfos& obj) { 
      DARABONBA_PTR_TO_JSON(VideoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      DARABONBA_PTR_TO_JSON(VideoName, videoName_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncUploadVideoResponseBodyDataVideoInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      DARABONBA_PTR_FROM_JSON(VideoName, videoName_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    AsyncUploadVideoResponseBodyDataVideoInfos() = default ;
    AsyncUploadVideoResponseBodyDataVideoInfos(const AsyncUploadVideoResponseBodyDataVideoInfos &) = default ;
    AsyncUploadVideoResponseBodyDataVideoInfos(AsyncUploadVideoResponseBodyDataVideoInfos &&) = default ;
    AsyncUploadVideoResponseBodyDataVideoInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncUploadVideoResponseBodyDataVideoInfos() = default ;
    AsyncUploadVideoResponseBodyDataVideoInfos& operator=(const AsyncUploadVideoResponseBodyDataVideoInfos &) = default ;
    AsyncUploadVideoResponseBodyDataVideoInfos& operator=(AsyncUploadVideoResponseBodyDataVideoInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoExtraInfo_ != nullptr
        && this->videoId_ != nullptr && this->videoName_ != nullptr && this->videoUrl_ != nullptr; };
    // videoExtraInfo Field Functions 
    bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
    void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
    inline string videoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
    inline AsyncUploadVideoResponseBodyDataVideoInfos& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline AsyncUploadVideoResponseBodyDataVideoInfos& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // videoName Field Functions 
    bool hasVideoName() const { return this->videoName_ != nullptr;};
    void deleteVideoName() { this->videoName_ = nullptr;};
    inline string videoName() const { DARABONBA_PTR_GET_DEFAULT(videoName_, "") };
    inline AsyncUploadVideoResponseBodyDataVideoInfos& setVideoName(string videoName) { DARABONBA_PTR_SET_VALUE(videoName_, videoName) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline AsyncUploadVideoResponseBodyDataVideoInfos& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> videoExtraInfo_ = nullptr;
    std::shared_ptr<string> videoId_ = nullptr;
    std::shared_ptr<string> videoName_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
