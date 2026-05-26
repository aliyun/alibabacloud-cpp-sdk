// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoInsightsCaptionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoInsightsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoInsightsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsightsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
    };
    VideoInsightsConfig() = default ;
    VideoInsightsConfig(const VideoInsightsConfig &) = default ;
    VideoInsightsConfig(VideoInsightsConfig &&) = default ;
    VideoInsightsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoInsightsConfig() = default ;
    VideoInsightsConfig& operator=(const VideoInsightsConfig &) = default ;
    VideoInsightsConfig& operator=(VideoInsightsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline const VideoInsightsCaptionConfig & getCaption() const { DARABONBA_PTR_GET_CONST(caption_, VideoInsightsCaptionConfig) };
    inline VideoInsightsCaptionConfig getCaption() { DARABONBA_PTR_GET(caption_, VideoInsightsCaptionConfig) };
    inline VideoInsightsConfig& setCaption(const VideoInsightsCaptionConfig & caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };
    inline VideoInsightsConfig& setCaption(VideoInsightsCaptionConfig && caption) { DARABONBA_PTR_SET_RVALUE(caption_, caption) };


  protected:
    shared_ptr<VideoInsightsCaptionConfig> caption_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
