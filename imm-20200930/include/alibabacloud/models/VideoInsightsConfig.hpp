// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoInsightsCaptionConfig.hpp>
#include <alibabacloud/models/VideoInsightsLabelConfig.hpp>
#include <alibabacloud/models/VideoInsightsMultiStreamConfig.hpp>
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
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MultiStream, multiStream_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsightsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MultiStream, multiStream_);
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
    virtual bool empty() const override { return this->caption_ == nullptr
        && this->label_ == nullptr && this->multiStream_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline const VideoInsightsCaptionConfig & getCaption() const { DARABONBA_PTR_GET_CONST(caption_, VideoInsightsCaptionConfig) };
    inline VideoInsightsCaptionConfig getCaption() { DARABONBA_PTR_GET(caption_, VideoInsightsCaptionConfig) };
    inline VideoInsightsConfig& setCaption(const VideoInsightsCaptionConfig & caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };
    inline VideoInsightsConfig& setCaption(VideoInsightsCaptionConfig && caption) { DARABONBA_PTR_SET_RVALUE(caption_, caption) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const VideoInsightsLabelConfig & getLabel() const { DARABONBA_PTR_GET_CONST(label_, VideoInsightsLabelConfig) };
    inline VideoInsightsLabelConfig getLabel() { DARABONBA_PTR_GET(label_, VideoInsightsLabelConfig) };
    inline VideoInsightsConfig& setLabel(const VideoInsightsLabelConfig & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline VideoInsightsConfig& setLabel(VideoInsightsLabelConfig && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // multiStream Field Functions 
    bool hasMultiStream() const { return this->multiStream_ != nullptr;};
    void deleteMultiStream() { this->multiStream_ = nullptr;};
    inline const VideoInsightsMultiStreamConfig & getMultiStream() const { DARABONBA_PTR_GET_CONST(multiStream_, VideoInsightsMultiStreamConfig) };
    inline VideoInsightsMultiStreamConfig getMultiStream() { DARABONBA_PTR_GET(multiStream_, VideoInsightsMultiStreamConfig) };
    inline VideoInsightsConfig& setMultiStream(const VideoInsightsMultiStreamConfig & multiStream) { DARABONBA_PTR_SET_VALUE(multiStream_, multiStream) };
    inline VideoInsightsConfig& setMultiStream(VideoInsightsMultiStreamConfig && multiStream) { DARABONBA_PTR_SET_RVALUE(multiStream_, multiStream) };


  protected:
    // The video synopsis configuration.
    shared_ptr<VideoInsightsCaptionConfig> caption_ {};
    // The label configuration.
    shared_ptr<VideoInsightsLabelConfig> label_ {};
    // The video multi-stream configuration.
    shared_ptr<VideoInsightsMultiStreamConfig> multiStream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
