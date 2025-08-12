// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMVIDEOINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval& obj) { 
      DARABONBA_PTR_TO_JSON(VideoInterval, videoInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoInterval, videoInterval_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoInterval_ != nullptr; };
    // videoInterval Field Functions 
    bool hasVideoInterval() const { return this->videoInterval_ != nullptr;};
    void deleteVideoInterval() { this->videoInterval_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval> & videoInterval() const { DARABONBA_PTR_GET_CONST(videoInterval_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval> videoInterval() { DARABONBA_PTR_GET(videoInterval_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval& setVideoInterval(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval> & videoInterval) { DARABONBA_PTR_SET_VALUE(videoInterval_, videoInterval) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval& setVideoInterval(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval> && videoInterval) { DARABONBA_PTR_SET_RVALUE(videoInterval_, videoInterval) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoIntervalVideoInterval>> videoInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
