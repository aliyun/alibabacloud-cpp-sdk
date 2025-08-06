// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWATERMARKCONSOLERESPONSEBODYWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_ADDWATERMARKCONSOLERESPONSEBODYWATERMARK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddWatermarkConsoleResponseBodyWatermark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWatermarkConsoleResponseBodyWatermark& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(HorizontalOffset, horizontalOffset_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(ScreenMode, screenMode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VerticalOffset, verticalOffset_);
      DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, AddWatermarkConsoleResponseBodyWatermark& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(HorizontalOffset, horizontalOffset_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(ScreenMode, screenMode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VerticalOffset, verticalOffset_);
      DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    AddWatermarkConsoleResponseBodyWatermark() = default ;
    AddWatermarkConsoleResponseBodyWatermark(const AddWatermarkConsoleResponseBodyWatermark &) = default ;
    AddWatermarkConsoleResponseBodyWatermark(AddWatermarkConsoleResponseBodyWatermark &&) = default ;
    AddWatermarkConsoleResponseBodyWatermark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWatermarkConsoleResponseBodyWatermark() = default ;
    AddWatermarkConsoleResponseBodyWatermark& operator=(const AddWatermarkConsoleResponseBodyWatermark &) = default ;
    AddWatermarkConsoleResponseBodyWatermark& operator=(AddWatermarkConsoleResponseBodyWatermark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->height_ != nullptr && this->horizontalOffset_ != nullptr && this->isDefault_ != nullptr && this->name_ != nullptr && this->position_ != nullptr
        && this->screenMode_ != nullptr && this->url_ != nullptr && this->verticalOffset_ != nullptr && this->videoHeight_ != nullptr && this->videoWidth_ != nullptr
        && this->watermarkId_ != nullptr && this->width_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline AddWatermarkConsoleResponseBodyWatermark& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // horizontalOffset Field Functions 
    bool hasHorizontalOffset() const { return this->horizontalOffset_ != nullptr;};
    void deleteHorizontalOffset() { this->horizontalOffset_ = nullptr;};
    inline string horizontalOffset() const { DARABONBA_PTR_GET_DEFAULT(horizontalOffset_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setHorizontalOffset(string horizontalOffset) { DARABONBA_PTR_SET_VALUE(horizontalOffset_, horizontalOffset) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // screenMode Field Functions 
    bool hasScreenMode() const { return this->screenMode_ != nullptr;};
    void deleteScreenMode() { this->screenMode_ = nullptr;};
    inline string screenMode() const { DARABONBA_PTR_GET_DEFAULT(screenMode_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setScreenMode(string screenMode) { DARABONBA_PTR_SET_VALUE(screenMode_, screenMode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // verticalOffset Field Functions 
    bool hasVerticalOffset() const { return this->verticalOffset_ != nullptr;};
    void deleteVerticalOffset() { this->verticalOffset_ = nullptr;};
    inline string verticalOffset() const { DARABONBA_PTR_GET_DEFAULT(verticalOffset_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setVerticalOffset(string verticalOffset) { DARABONBA_PTR_SET_VALUE(verticalOffset_, verticalOffset) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline int32_t videoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0) };
    inline AddWatermarkConsoleResponseBodyWatermark& setVideoHeight(int32_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline int32_t videoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0) };
    inline AddWatermarkConsoleResponseBodyWatermark& setVideoWidth(int32_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string watermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline AddWatermarkConsoleResponseBodyWatermark& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> horizontalOffset_ = nullptr;
    std::shared_ptr<string> isDefault_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> screenMode_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> verticalOffset_ = nullptr;
    std::shared_ptr<int32_t> videoHeight_ = nullptr;
    std::shared_ptr<int32_t> videoWidth_ = nullptr;
    std::shared_ptr<string> watermarkId_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
