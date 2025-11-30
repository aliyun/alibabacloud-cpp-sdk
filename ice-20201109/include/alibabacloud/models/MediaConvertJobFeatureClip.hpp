// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURECLIP_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURECLIP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobFeatureClipTimeSpan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobFeatureClip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobFeatureClip& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigToClipFirstPart, configToClipFirstPart_);
      DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobFeatureClip& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigToClipFirstPart, configToClipFirstPart_);
      DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
    };
    MediaConvertJobFeatureClip() = default ;
    MediaConvertJobFeatureClip(const MediaConvertJobFeatureClip &) = default ;
    MediaConvertJobFeatureClip(MediaConvertJobFeatureClip &&) = default ;
    MediaConvertJobFeatureClip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobFeatureClip() = default ;
    MediaConvertJobFeatureClip& operator=(const MediaConvertJobFeatureClip &) = default ;
    MediaConvertJobFeatureClip& operator=(MediaConvertJobFeatureClip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configToClipFirstPart_ == nullptr
        && return this->timeSpan_ == nullptr; };
    // configToClipFirstPart Field Functions 
    bool hasConfigToClipFirstPart() const { return this->configToClipFirstPart_ != nullptr;};
    void deleteConfigToClipFirstPart() { this->configToClipFirstPart_ = nullptr;};
    inline string configToClipFirstPart() const { DARABONBA_PTR_GET_DEFAULT(configToClipFirstPart_, "") };
    inline MediaConvertJobFeatureClip& setConfigToClipFirstPart(string configToClipFirstPart) { DARABONBA_PTR_SET_VALUE(configToClipFirstPart_, configToClipFirstPart) };


    // timeSpan Field Functions 
    bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
    void deleteTimeSpan() { this->timeSpan_ = nullptr;};
    inline const Models::MediaConvertJobFeatureClipTimeSpan & timeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, Models::MediaConvertJobFeatureClipTimeSpan) };
    inline Models::MediaConvertJobFeatureClipTimeSpan timeSpan() { DARABONBA_PTR_GET(timeSpan_, Models::MediaConvertJobFeatureClipTimeSpan) };
    inline MediaConvertJobFeatureClip& setTimeSpan(const Models::MediaConvertJobFeatureClipTimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
    inline MediaConvertJobFeatureClip& setTimeSpan(Models::MediaConvertJobFeatureClipTimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


  protected:
    std::shared_ptr<string> configToClipFirstPart_ = nullptr;
    std::shared_ptr<Models::MediaConvertJobFeatureClipTimeSpan> timeSpan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
