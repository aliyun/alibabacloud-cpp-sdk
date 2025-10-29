// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODYWATERMARKLISTWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODYWATERMARKLISTWATERMARK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OffsetCorner, offsetCorner_);
      DARABONBA_PTR_TO_JSON(PictureUrl, pictureUrl_);
      DARABONBA_PTR_TO_JSON(RefHeight, refHeight_);
      DARABONBA_PTR_TO_JSON(RefWidth, refWidth_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Transparency, transparency_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(XOffset, XOffset_);
      DARABONBA_PTR_TO_JSON(YOffset, YOffset_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OffsetCorner, offsetCorner_);
      DARABONBA_PTR_FROM_JSON(PictureUrl, pictureUrl_);
      DARABONBA_PTR_FROM_JSON(RefHeight, refHeight_);
      DARABONBA_PTR_FROM_JSON(RefWidth, refWidth_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Transparency, transparency_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(XOffset, XOffset_);
      DARABONBA_PTR_FROM_JSON(YOffset, YOffset_);
    };
    DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark() = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark(const DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark &) = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark(DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark &&) = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark() = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& operator=(const DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark &) = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& operator=(DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->height_ == nullptr && return this->name_ == nullptr && return this->offsetCorner_ == nullptr && return this->pictureUrl_ == nullptr && return this->refHeight_ == nullptr
        && return this->refWidth_ == nullptr && return this->ruleCount_ == nullptr && return this->templateId_ == nullptr && return this->transparency_ == nullptr && return this->type_ == nullptr
        && return this->XOffset_ == nullptr && return this->YOffset_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offsetCorner Field Functions 
    bool hasOffsetCorner() const { return this->offsetCorner_ != nullptr;};
    void deleteOffsetCorner() { this->offsetCorner_ = nullptr;};
    inline string offsetCorner() const { DARABONBA_PTR_GET_DEFAULT(offsetCorner_, "") };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setOffsetCorner(string offsetCorner) { DARABONBA_PTR_SET_VALUE(offsetCorner_, offsetCorner) };


    // pictureUrl Field Functions 
    bool hasPictureUrl() const { return this->pictureUrl_ != nullptr;};
    void deletePictureUrl() { this->pictureUrl_ = nullptr;};
    inline string pictureUrl() const { DARABONBA_PTR_GET_DEFAULT(pictureUrl_, "") };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setPictureUrl(string pictureUrl) { DARABONBA_PTR_SET_VALUE(pictureUrl_, pictureUrl) };


    // refHeight Field Functions 
    bool hasRefHeight() const { return this->refHeight_ != nullptr;};
    void deleteRefHeight() { this->refHeight_ = nullptr;};
    inline int32_t refHeight() const { DARABONBA_PTR_GET_DEFAULT(refHeight_, 0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setRefHeight(int32_t refHeight) { DARABONBA_PTR_SET_VALUE(refHeight_, refHeight) };


    // refWidth Field Functions 
    bool hasRefWidth() const { return this->refWidth_ != nullptr;};
    void deleteRefWidth() { this->refWidth_ = nullptr;};
    inline int32_t refWidth() const { DARABONBA_PTR_GET_DEFAULT(refWidth_, 0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setRefWidth(int32_t refWidth) { DARABONBA_PTR_SET_VALUE(refWidth_, refWidth) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transparency Field Functions 
    bool hasTransparency() const { return this->transparency_ != nullptr;};
    void deleteTransparency() { this->transparency_ = nullptr;};
    inline int32_t transparency() const { DARABONBA_PTR_GET_DEFAULT(transparency_, 0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setTransparency(int32_t transparency) { DARABONBA_PTR_SET_VALUE(transparency_, transparency) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // XOffset Field Functions 
    bool hasXOffset() const { return this->XOffset_ != nullptr;};
    void deleteXOffset() { this->XOffset_ = nullptr;};
    inline float XOffset() const { DARABONBA_PTR_GET_DEFAULT(XOffset_, 0.0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setXOffset(float XOffset) { DARABONBA_PTR_SET_VALUE(XOffset_, XOffset) };


    // YOffset Field Functions 
    bool hasYOffset() const { return this->YOffset_ != nullptr;};
    void deleteYOffset() { this->YOffset_ = nullptr;};
    inline float YOffset() const { DARABONBA_PTR_GET_DEFAULT(YOffset_, 0.0) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark& setYOffset(float YOffset) { DARABONBA_PTR_SET_VALUE(YOffset_, YOffset) };


  protected:
    // The description of the watermark.
    std::shared_ptr<string> description_ = nullptr;
    // The height of the watermark. Unit: pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The name of the watermark.
    std::shared_ptr<string> name_ = nullptr;
    // The position of the watermark.
    // 
    // *   TopLeft: the upper-left corner.
    // *   TopRight: the upper-right corner.
    // *   BottomLeft: the lower-left corner.
    // *   BottomRight: the lower-right corner.
    std::shared_ptr<string> offsetCorner_ = nullptr;
    // The URL of the watermark image.
    std::shared_ptr<string> pictureUrl_ = nullptr;
    // The height of the background video. Unit: pixels.
    std::shared_ptr<int32_t> refHeight_ = nullptr;
    // The width of the background video. Unit: pixels.
    std::shared_ptr<int32_t> refWidth_ = nullptr;
    // The number of watermark rules configured for the domain name.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // The ID of the watermark template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The transparency of the watermark. A smaller value indicates a more transparent watermark. Valid values: 0 to 255.
    std::shared_ptr<int32_t> transparency_ = nullptr;
    // The watermark type.
    // 
    // *   0: image. Only image watermarks are supported.
    // *   1: text.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The offset of the watermark along the x-axis. Unit: pixels.
    // 
    // >  The value of the RefWidth parameter is used as the reference. If the OffsetCorner parameter is set to TopLeft, the value of the XOffset parameter indicates the x-axis offset of the upper-left corner of the watermark relative to that of the background video. The directions from the coordinate axes to the center of the background video are positive. In other words, the x-axis is positive toward the right.
    std::shared_ptr<float> XOffset_ = nullptr;
    // The offset of the watermark along the y-axis. Unit: pixels.
    // 
    // >  The value of the RefHeight parameter is used as the reference. If the OffsetCorner parameter is set to TopLeft, the value of the YOffset parameter indicates the y-axis offset of the upper-left corner of the watermark relative to that of the background video. The directions from the coordinate axes to the center of the background video are positive. In other words, the y-axis is positive downward.
    std::shared_ptr<float> YOffset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
