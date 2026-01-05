// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVESTREAMWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVESTREAMWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveStreamWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveStreamWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OffsetCorner, offsetCorner_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PictureUrl, pictureUrl_);
      DARABONBA_PTR_TO_JSON(RefHeight, refHeight_);
      DARABONBA_PTR_TO_JSON(RefWidth, refWidth_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Transparency, transparency_);
      DARABONBA_PTR_TO_JSON(XOffset, XOffset_);
      DARABONBA_PTR_TO_JSON(YOffset, YOffset_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveStreamWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OffsetCorner, offsetCorner_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PictureUrl, pictureUrl_);
      DARABONBA_PTR_FROM_JSON(RefHeight, refHeight_);
      DARABONBA_PTR_FROM_JSON(RefWidth, refWidth_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Transparency, transparency_);
      DARABONBA_PTR_FROM_JSON(XOffset, XOffset_);
      DARABONBA_PTR_FROM_JSON(YOffset, YOffset_);
    };
    UpdateLiveStreamWatermarkRequest() = default ;
    UpdateLiveStreamWatermarkRequest(const UpdateLiveStreamWatermarkRequest &) = default ;
    UpdateLiveStreamWatermarkRequest(UpdateLiveStreamWatermarkRequest &&) = default ;
    UpdateLiveStreamWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveStreamWatermarkRequest() = default ;
    UpdateLiveStreamWatermarkRequest& operator=(const UpdateLiveStreamWatermarkRequest &) = default ;
    UpdateLiveStreamWatermarkRequest& operator=(UpdateLiveStreamWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->height_ == nullptr && this->name_ == nullptr && this->offsetCorner_ == nullptr && this->ownerId_ == nullptr && this->pictureUrl_ == nullptr
        && this->refHeight_ == nullptr && this->refWidth_ == nullptr && this->regionId_ == nullptr && this->templateId_ == nullptr && this->transparency_ == nullptr
        && this->XOffset_ == nullptr && this->YOffset_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLiveStreamWatermarkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline UpdateLiveStreamWatermarkRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveStreamWatermarkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offsetCorner Field Functions 
    bool hasOffsetCorner() const { return this->offsetCorner_ != nullptr;};
    void deleteOffsetCorner() { this->offsetCorner_ = nullptr;};
    inline string getOffsetCorner() const { DARABONBA_PTR_GET_DEFAULT(offsetCorner_, "") };
    inline UpdateLiveStreamWatermarkRequest& setOffsetCorner(string offsetCorner) { DARABONBA_PTR_SET_VALUE(offsetCorner_, offsetCorner) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveStreamWatermarkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pictureUrl Field Functions 
    bool hasPictureUrl() const { return this->pictureUrl_ != nullptr;};
    void deletePictureUrl() { this->pictureUrl_ = nullptr;};
    inline string getPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(pictureUrl_, "") };
    inline UpdateLiveStreamWatermarkRequest& setPictureUrl(string pictureUrl) { DARABONBA_PTR_SET_VALUE(pictureUrl_, pictureUrl) };


    // refHeight Field Functions 
    bool hasRefHeight() const { return this->refHeight_ != nullptr;};
    void deleteRefHeight() { this->refHeight_ = nullptr;};
    inline int32_t getRefHeight() const { DARABONBA_PTR_GET_DEFAULT(refHeight_, 0) };
    inline UpdateLiveStreamWatermarkRequest& setRefHeight(int32_t refHeight) { DARABONBA_PTR_SET_VALUE(refHeight_, refHeight) };


    // refWidth Field Functions 
    bool hasRefWidth() const { return this->refWidth_ != nullptr;};
    void deleteRefWidth() { this->refWidth_ = nullptr;};
    inline int32_t getRefWidth() const { DARABONBA_PTR_GET_DEFAULT(refWidth_, 0) };
    inline UpdateLiveStreamWatermarkRequest& setRefWidth(int32_t refWidth) { DARABONBA_PTR_SET_VALUE(refWidth_, refWidth) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveStreamWatermarkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateLiveStreamWatermarkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transparency Field Functions 
    bool hasTransparency() const { return this->transparency_ != nullptr;};
    void deleteTransparency() { this->transparency_ = nullptr;};
    inline int32_t getTransparency() const { DARABONBA_PTR_GET_DEFAULT(transparency_, 0) };
    inline UpdateLiveStreamWatermarkRequest& setTransparency(int32_t transparency) { DARABONBA_PTR_SET_VALUE(transparency_, transparency) };


    // XOffset Field Functions 
    bool hasXOffset() const { return this->XOffset_ != nullptr;};
    void deleteXOffset() { this->XOffset_ = nullptr;};
    inline float getXOffset() const { DARABONBA_PTR_GET_DEFAULT(XOffset_, 0.0) };
    inline UpdateLiveStreamWatermarkRequest& setXOffset(float XOffset) { DARABONBA_PTR_SET_VALUE(XOffset_, XOffset) };


    // YOffset Field Functions 
    bool hasYOffset() const { return this->YOffset_ != nullptr;};
    void deleteYOffset() { this->YOffset_ = nullptr;};
    inline float getYOffset() const { DARABONBA_PTR_GET_DEFAULT(YOffset_, 0.0) };
    inline UpdateLiveStreamWatermarkRequest& setYOffset(float YOffset) { DARABONBA_PTR_SET_VALUE(YOffset_, YOffset) };


  protected:
    // The description of the watermark.
    shared_ptr<string> description_ {};
    // The height of the watermark. Unit: pixel. The height of the watermark is scaled in proportion to the height of the background video.
    shared_ptr<int32_t> height_ {};
    // The name of the watermark.
    shared_ptr<string> name_ {};
    // The position of the watermark. Valid values:
    // 
    // *   TopLeft: the upper-left corner.
    // *   TopRight: the upper-right corner.
    // *   BottomLeft: the lower-left corner.
    // *   BottomRight: the lower-right corner.
    shared_ptr<string> offsetCorner_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The URL of the watermark image.
    shared_ptr<string> pictureUrl_ {};
    // The height of the background video. Unit: pixel.
    shared_ptr<int32_t> refHeight_ {};
    // The width of the background video. Unit: pixel.
    shared_ptr<int32_t> refWidth_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the watermark template.
    // 
    // >  You can obtain the template ID by checking the value of the TemplateId parameter that is returned by the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/410759.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The transparency of the watermark. A smaller value indicates a more transparent watermark. Valid values: 0 to 255.
    shared_ptr<int32_t> transparency_ {};
    // The offset of the watermark along the x-axis. Unit: pixel.
    // 
    // >  In this case, the value of the RefWidth parameter is used as the reference. If the OffsetCorner parameter is set to TopLeft, the value of the XOffset parameter indicates the x-axis offset of the upper-left corner of the watermark relative to that of the background video. The directions from the coordinate axes to the center of the background video are positive. In other words, the x-axis is positive toward the right.
    shared_ptr<float> XOffset_ {};
    // The offset of the watermark along the y-axis. Unit: pixel.
    // 
    // >  In this case, the value of the RefHeight parameter is used as the reference. If the OffsetCorner parameter is set to TopLeft, the value of the YOffset parameter indicates the y-axis offset of the upper-left corner of the watermark relative to that of the background video. The directions from the coordinate axes to the center of the background video are positive. In other words, the y-axis is positive downward.
    shared_ptr<float> YOffset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
