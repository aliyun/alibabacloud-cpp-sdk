// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTTAILSLATELISTTAILSLATE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTTAILSLATELISTTAILSLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& obj) { 
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(BlendDuration, blendDuration_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(IsMergeAudio, isMergeAudio_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(TailUrl, tailUrl_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& obj) { 
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(BlendDuration, blendDuration_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(IsMergeAudio, isMergeAudio_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(TailUrl, tailUrl_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate(const SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate(SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgColor_ == nullptr
        && return this->blendDuration_ == nullptr && return this->height_ == nullptr && return this->isMergeAudio_ == nullptr && return this->start_ == nullptr && return this->tailUrl_ == nullptr
        && return this->width_ == nullptr; };
    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline string bgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


    // blendDuration Field Functions 
    bool hasBlendDuration() const { return this->blendDuration_ != nullptr;};
    void deleteBlendDuration() { this->blendDuration_ = nullptr;};
    inline string blendDuration() const { DARABONBA_PTR_GET_DEFAULT(blendDuration_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setBlendDuration(string blendDuration) { DARABONBA_PTR_SET_VALUE(blendDuration_, blendDuration) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // isMergeAudio Field Functions 
    bool hasIsMergeAudio() const { return this->isMergeAudio_ != nullptr;};
    void deleteIsMergeAudio() { this->isMergeAudio_ = nullptr;};
    inline bool isMergeAudio() const { DARABONBA_PTR_GET_DEFAULT(isMergeAudio_, false) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setIsMergeAudio(bool isMergeAudio) { DARABONBA_PTR_SET_VALUE(isMergeAudio_, isMergeAudio) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // tailUrl Field Functions 
    bool hasTailUrl() const { return this->tailUrl_ != nullptr;};
    void deleteTailUrl() { this->tailUrl_ = nullptr;};
    inline string tailUrl() const { DARABONBA_PTR_GET_DEFAULT(tailUrl_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setTailUrl(string tailUrl) { DARABONBA_PTR_SET_VALUE(tailUrl_, tailUrl) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateListTailSlate& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The color of the bars that are added to the ending part if the size of the ending part is smaller than that of the main part. Default value: **White**. For more information, see [Background colors](https://docs-aliyun.cn-hangzhou.oss.aliyun-inc.com/assets/attach/29253/cn_zh/1502784952344/color.txt?spm=a2c4g.11186623.2.63.241240f77qp3Yy\\&file=color.txt).
    std::shared_ptr<string> bgColor_ = nullptr;
    // The duration of the transition between the main part and the ending part. A fade transition is used: The last frame of the main part fades out, and the first frame of the ending part fades in. Unit: seconds. Default value: **0**.
    std::shared_ptr<string> blendDuration_ = nullptr;
    // The height of the ending part.
    // 
    // *   Valid values: values in the range of **(0,4096)**, **-1**, and **full**.
    // *   A value of **-1** indicates that the height of the source of the ending part is retained. A value of **full** indicates that the height of the main part is used for the ending part.
    // *   Default value: -1.
    std::shared_ptr<string> height_ = nullptr;
    // Indicates whether the audio content of the ending part is merged. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isMergeAudio_ = nullptr;
    // The start time.
    std::shared_ptr<string> start_ = nullptr;
    // The OSS URL of the ending part.
    std::shared_ptr<string> tailUrl_ = nullptr;
    // The width of the ending part.
    // 
    // *   Valid values: values in the range of **(0,4096)**, **-1**, and **full**.
    // *   A value of **-1** indicates that the width of the source of the ending part is retained. A value of **full** indicates that the width of the main part is used for the ending part.
    // *   Default value: -1.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
