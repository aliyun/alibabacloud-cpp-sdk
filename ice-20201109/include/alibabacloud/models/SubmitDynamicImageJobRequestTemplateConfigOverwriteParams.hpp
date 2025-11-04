// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUESTTEMPLATECONFIGOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicImageJobRequestTemplateConfigOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParams() = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParams(const SubmitDynamicImageJobRequestTemplateConfigOverwriteParams &) = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParams(SubmitDynamicImageJobRequestTemplateConfigOverwriteParams &&) = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobRequestTemplateConfigOverwriteParams() = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& operator=(const SubmitDynamicImageJobRequestTemplateConfigOverwriteParams &) = default ;
    SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& operator=(SubmitDynamicImageJobRequestTemplateConfigOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->fps_ == nullptr && return this->height_ == nullptr && return this->longShortMode_ == nullptr && return this->scanMode_ == nullptr && return this->timeSpan_ == nullptr
        && return this->width_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline int32_t fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // longShortMode Field Functions 
    bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
    void deleteLongShortMode() { this->longShortMode_ = nullptr;};
    inline bool longShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, false) };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setLongShortMode(bool longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string scanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // timeSpan Field Functions 
    bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
    void deleteTimeSpan() { this->timeSpan_ = nullptr;};
    inline const Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan & timeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan) };
    inline Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan timeSpan() { DARABONBA_PTR_GET(timeSpan_, Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan) };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setTimeSpan(const Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setTimeSpan(Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline SubmitDynamicImageJobRequestTemplateConfigOverwriteParams& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The format of the animated image. Valid values:
    // 
    // *   **gif**
    // *   **webp**
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate. Valid values: [1,60].
    std::shared_ptr<int32_t> fps_ = nullptr;
    // The height of the animated image. Valid values: [128,4096].
    std::shared_ptr<int32_t> height_ = nullptr;
    // Specifies whether to enable the auto-rotate screen feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **true**.
    // 
    // >  If this feature is enabled, the width of the output video corresponds to the long side of the input video, which is the height of the input video in portrait mode. The height of the output video corresponds to the short side of the input video, which is the width of the input video in portrait mode.
    std::shared_ptr<bool> longShortMode_ = nullptr;
    // The scan mode. Valid values:
    // 
    // *   **interlaced**
    // *   **progressive** This is the default value.
    std::shared_ptr<string> scanMode_ = nullptr;
    // The timeline parameters.
    std::shared_ptr<Models::SubmitDynamicImageJobRequestTemplateConfigOverwriteParamsTimeSpan> timeSpan_ = nullptr;
    // The width of the animated image. Valid values: [128,4096].
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
