// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOFRAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames& obj) { 
      DARABONBA_PTR_TO_JSON(VideoFrames, videoFrames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoFrames, videoFrames_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoFrames_ == nullptr; };
    // videoFrames Field Functions 
    bool hasVideoFrames() const { return this->videoFrames_ != nullptr;};
    void deleteVideoFrames() { this->videoFrames_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames> & videoFrames() const { DARABONBA_PTR_GET_CONST(videoFrames_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames> videoFrames() { DARABONBA_PTR_GET(videoFrames_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames& setVideoFrames(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames> & videoFrames) { DARABONBA_PTR_SET_VALUE(videoFrames_, videoFrames) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames& setVideoFrames(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames> && videoFrames) { DARABONBA_PTR_SET_RVALUE(videoFrames_, videoFrames) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFramesVideoFrames>> videoFrames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
