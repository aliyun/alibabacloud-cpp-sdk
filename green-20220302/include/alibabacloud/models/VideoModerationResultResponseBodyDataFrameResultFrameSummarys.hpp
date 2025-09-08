// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESUMMARYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResultFrameSummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResultFrameSummarys& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LabelSum, labelSum_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResultFrameSummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LabelSum, labelSum_);
    };
    VideoModerationResultResponseBodyDataFrameResultFrameSummarys() = default ;
    VideoModerationResultResponseBodyDataFrameResultFrameSummarys(const VideoModerationResultResponseBodyDataFrameResultFrameSummarys &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFrameSummarys(VideoModerationResultResponseBodyDataFrameResultFrameSummarys &&) = default ;
    VideoModerationResultResponseBodyDataFrameResultFrameSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResultFrameSummarys() = default ;
    VideoModerationResultResponseBodyDataFrameResultFrameSummarys& operator=(const VideoModerationResultResponseBodyDataFrameResultFrameSummarys &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFrameSummarys& operator=(VideoModerationResultResponseBodyDataFrameResultFrameSummarys &&) = default ;
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
    inline VideoModerationResultResponseBodyDataFrameResultFrameSummarys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFrameSummarys& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // labelSum Field Functions 
    bool hasLabelSum() const { return this->labelSum_ != nullptr;};
    void deleteLabelSum() { this->labelSum_ = nullptr;};
    inline int32_t labelSum() const { DARABONBA_PTR_GET_DEFAULT(labelSum_, 0) };
    inline VideoModerationResultResponseBodyDataFrameResultFrameSummarys& setLabelSum(int32_t labelSum) { DARABONBA_PTR_SET_VALUE(labelSum_, labelSum) };


  protected:
    // The description of the result.
    std::shared_ptr<string> description_ = nullptr;
    // The label against which a captured frame is matched.
    std::shared_ptr<string> label_ = nullptr;
    // The number of times that the label is matched.
    std::shared_ptr<int32_t> labelSum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
