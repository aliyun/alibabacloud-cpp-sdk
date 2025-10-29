// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOSTAMPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOSTAMPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps& obj) { 
      DARABONBA_PTR_TO_JSON(VideoStamps, videoStamps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoStamps, videoStamps_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoStamps_ == nullptr; };
    // videoStamps Field Functions 
    bool hasVideoStamps() const { return this->videoStamps_ != nullptr;};
    void deleteVideoStamps() { this->videoStamps_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps> & videoStamps() const { DARABONBA_PTR_GET_CONST(videoStamps_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps> videoStamps() { DARABONBA_PTR_GET(videoStamps_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps& setVideoStamps(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps> & videoStamps) { DARABONBA_PTR_SET_VALUE(videoStamps_, videoStamps) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps& setVideoStamps(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps> && videoStamps) { DARABONBA_PTR_SET_RVALUE(videoStamps_, videoStamps) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStampsVideoStamps>> videoStamps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
