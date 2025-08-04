// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFODURATIONSUBDURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFODURATIONSUBDURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Video1080, video1080_);
      DARABONBA_PTR_TO_JSON(Video360, video360_);
      DARABONBA_PTR_TO_JSON(Video720, video720_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Video1080, video1080_);
      DARABONBA_PTR_FROM_JSON(Video360, video360_);
      DARABONBA_PTR_FROM_JSON(Video720, video720_);
    };
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration(const DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration(DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration &&) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& operator=(const DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& operator=(DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audio_ != nullptr
        && this->content_ != nullptr && this->video1080_ != nullptr && this->video360_ != nullptr && this->video720_ != nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline int32_t audio() const { DARABONBA_PTR_GET_DEFAULT(audio_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& setAudio(int32_t audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline int32_t content() const { DARABONBA_PTR_GET_DEFAULT(content_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& setContent(int32_t content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // video1080 Field Functions 
    bool hasVideo1080() const { return this->video1080_ != nullptr;};
    void deleteVideo1080() { this->video1080_ = nullptr;};
    inline int32_t video1080() const { DARABONBA_PTR_GET_DEFAULT(video1080_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& setVideo1080(int32_t video1080) { DARABONBA_PTR_SET_VALUE(video1080_, video1080) };


    // video360 Field Functions 
    bool hasVideo360() const { return this->video360_ != nullptr;};
    void deleteVideo360() { this->video360_ = nullptr;};
    inline int32_t video360() const { DARABONBA_PTR_GET_DEFAULT(video360_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& setVideo360(int32_t video360) { DARABONBA_PTR_SET_VALUE(video360_, video360) };


    // video720 Field Functions 
    bool hasVideo720() const { return this->video720_ != nullptr;};
    void deleteVideo720() { this->video720_ = nullptr;};
    inline int32_t video720() const { DARABONBA_PTR_GET_DEFAULT(video720_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration& setVideo720(int32_t video720) { DARABONBA_PTR_SET_VALUE(video720_, video720) };


  protected:
    std::shared_ptr<int32_t> audio_ = nullptr;
    std::shared_ptr<int32_t> content_ = nullptr;
    std::shared_ptr<int32_t> video1080_ = nullptr;
    std::shared_ptr<int32_t> video360_ = nullptr;
    std::shared_ptr<int32_t> video720_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
