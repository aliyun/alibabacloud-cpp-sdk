// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAAUDIORESULTAUDIOSUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAAUDIORESULTAUDIOSUMMARYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataAudioResultAudioSummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataAudioResultAudioSummarys& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LabelSum, labelSum_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataAudioResultAudioSummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LabelSum, labelSum_);
    };
    VideoModerationResultResponseBodyDataAudioResultAudioSummarys() = default ;
    VideoModerationResultResponseBodyDataAudioResultAudioSummarys(const VideoModerationResultResponseBodyDataAudioResultAudioSummarys &) = default ;
    VideoModerationResultResponseBodyDataAudioResultAudioSummarys(VideoModerationResultResponseBodyDataAudioResultAudioSummarys &&) = default ;
    VideoModerationResultResponseBodyDataAudioResultAudioSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataAudioResultAudioSummarys() = default ;
    VideoModerationResultResponseBodyDataAudioResultAudioSummarys& operator=(const VideoModerationResultResponseBodyDataAudioResultAudioSummarys &) = default ;
    VideoModerationResultResponseBodyDataAudioResultAudioSummarys& operator=(VideoModerationResultResponseBodyDataAudioResultAudioSummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->label_ != nullptr && this->labelSum_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline VideoModerationResultResponseBodyDataAudioResultAudioSummarys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline VideoModerationResultResponseBodyDataAudioResultAudioSummarys& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // labelSum Field Functions 
    bool hasLabelSum() const { return this->labelSum_ != nullptr;};
    void deleteLabelSum() { this->labelSum_ = nullptr;};
    inline int32_t labelSum() const { DARABONBA_PTR_GET_DEFAULT(labelSum_, 0) };
    inline VideoModerationResultResponseBodyDataAudioResultAudioSummarys& setLabelSum(int32_t labelSum) { DARABONBA_PTR_SET_VALUE(labelSum_, labelSum) };


  protected:
    // The description of the labels.
    std::shared_ptr<string> description_ = nullptr;
    // The voice label.
    std::shared_ptr<string> label_ = nullptr;
    // The number of times that the label is matched.
    std::shared_ptr<int32_t> labelSum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
