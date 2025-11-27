// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDECODEBLINDWATERMARKTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDECODEBLINDWATERMARKTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateDecodeBlindWatermarkTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDecodeBlindWatermarkTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageQuality, imageQuality_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(OriginalImageURI, originalImageURI_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(StrengthLevel, strengthLevel_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(WatermarkType, watermarkType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDecodeBlindWatermarkTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageQuality, imageQuality_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(OriginalImageURI, originalImageURI_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(StrengthLevel, strengthLevel_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(WatermarkType, watermarkType_);
    };
    CreateDecodeBlindWatermarkTaskShrinkRequest() = default ;
    CreateDecodeBlindWatermarkTaskShrinkRequest(const CreateDecodeBlindWatermarkTaskShrinkRequest &) = default ;
    CreateDecodeBlindWatermarkTaskShrinkRequest(CreateDecodeBlindWatermarkTaskShrinkRequest &&) = default ;
    CreateDecodeBlindWatermarkTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDecodeBlindWatermarkTaskShrinkRequest() = default ;
    CreateDecodeBlindWatermarkTaskShrinkRequest& operator=(const CreateDecodeBlindWatermarkTaskShrinkRequest &) = default ;
    CreateDecodeBlindWatermarkTaskShrinkRequest& operator=(CreateDecodeBlindWatermarkTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageQuality_ == nullptr
        && return this->model_ == nullptr && return this->notificationShrink_ == nullptr && return this->originalImageURI_ == nullptr && return this->projectName_ == nullptr && return this->sourceURI_ == nullptr
        && return this->strengthLevel_ == nullptr && return this->targetURI_ == nullptr && return this->watermarkType_ == nullptr; };
    // imageQuality Field Functions 
    bool hasImageQuality() const { return this->imageQuality_ != nullptr;};
    void deleteImageQuality() { this->imageQuality_ = nullptr;};
    inline int32_t imageQuality() const { DARABONBA_PTR_GET_DEFAULT(imageQuality_, 0) };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setImageQuality(int32_t imageQuality) { DARABONBA_PTR_SET_VALUE(imageQuality_, imageQuality) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // originalImageURI Field Functions 
    bool hasOriginalImageURI() const { return this->originalImageURI_ != nullptr;};
    void deleteOriginalImageURI() { this->originalImageURI_ = nullptr;};
    inline string originalImageURI() const { DARABONBA_PTR_GET_DEFAULT(originalImageURI_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setOriginalImageURI(string originalImageURI) { DARABONBA_PTR_SET_VALUE(originalImageURI_, originalImageURI) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // strengthLevel Field Functions 
    bool hasStrengthLevel() const { return this->strengthLevel_ != nullptr;};
    void deleteStrengthLevel() { this->strengthLevel_ = nullptr;};
    inline string strengthLevel() const { DARABONBA_PTR_GET_DEFAULT(strengthLevel_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setStrengthLevel(string strengthLevel) { DARABONBA_PTR_SET_VALUE(strengthLevel_, strengthLevel) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string watermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    // The quality of the output image. This parameter is also available in the earlier DecodeBlindWatermark operation.
    // 
    // Higher image quality indicates a larger image size and higher watermark resolution quality.
    std::shared_ptr<int32_t> imageQuality_ = nullptr;
    // The watermark algorithm model. This parameter is also available in the earlier DecodeBlindWatermark operation. Valid values: FFT, FFT_FULL, DWT, and DWT_IBG. Default value: FFT.
    // 
    // If this parameter is left empty, the CreateDecodeBlindWatermarkTask operation is called. Otherwise, the earlier DecodeBlindWatermark operation is called.
    std::shared_ptr<string> model_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The OSS URI of the image before the blind watermark is added. This parameter is also available in the earlier DecodeBlindWatermark operation.
    // 
    // Do not specify this parameter when you set the Model parameter to DWT or DWT_IBG.
    // 
    // Specify the OSS URI in the `oss://<bucket>/<object>` format, where `<bucket>` is the name of the bucket in the same region as the current project and `<object>` is the path of the object with the extension included.
    std::shared_ptr<string> originalImageURI_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // >  The project specified in the request must match the one in the EncodeBlindWatermark request to encode the blind watermark.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The OSS URI of the image.
    // 
    // Specify the OSS URI in the `oss://<bucket>/<object>` format, where `<bucket>` is the name of the bucket in the same region as the current project and `<object>` is the path of the object with the extension included.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The level of watermark extraction. A higher level indicates a longer time and a higher quality. Valid values:
    // 
    // *   low
    // *   medium
    // *   high
    std::shared_ptr<string> strengthLevel_ = nullptr;
    // The OSS URI of the output image. This parameter is also available in the earlier DecodeBlindWatermark operation.
    // 
    // Specify the OSS URI in the `oss://<bucket>/<object>` format, where `<bucket>` is the name of the bucket in the same region as the current project and `<object>` is the path of the object with the extension included.
    std::shared_ptr<string> targetURI_ = nullptr;
    // The type of the watermark. Valid value: text.
    // 
    // No image watermarks are supported.
    std::shared_ptr<string> watermarkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
