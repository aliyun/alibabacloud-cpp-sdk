// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTSLOGODATALOGO_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTSLOGODATALOGO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& obj) { 
      DARABONBA_PTR_TO_JSON(confidence, confidence_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& obj) { 
      DARABONBA_PTR_FROM_JSON(confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo(const VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo(VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo &&) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& operator=(const VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& operator=(VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->label_ != nullptr && this->name_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline int64_t confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0L) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& setConfidence(int64_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Confidence score, ranging from 0 to 100, with two decimal places.
    std::shared_ptr<int64_t> confidence_ = nullptr;
    // label
    std::shared_ptr<string> label_ = nullptr;
    // Logo name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
