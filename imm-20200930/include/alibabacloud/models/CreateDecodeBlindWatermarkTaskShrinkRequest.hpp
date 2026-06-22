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
        && this->model_ == nullptr && this->notificationShrink_ == nullptr && this->originalImageURI_ == nullptr && this->projectName_ == nullptr && this->sourceURI_ == nullptr
        && this->strengthLevel_ == nullptr && this->targetURI_ == nullptr && this->watermarkType_ == nullptr; };
    // imageQuality Field Functions 
    bool hasImageQuality() const { return this->imageQuality_ != nullptr;};
    void deleteImageQuality() { this->imageQuality_ = nullptr;};
    inline int32_t getImageQuality() const { DARABONBA_PTR_GET_DEFAULT(imageQuality_, 0) };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setImageQuality(int32_t imageQuality) { DARABONBA_PTR_SET_VALUE(imageQuality_, imageQuality) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // originalImageURI Field Functions 
    bool hasOriginalImageURI() const { return this->originalImageURI_ != nullptr;};
    void deleteOriginalImageURI() { this->originalImageURI_ = nullptr;};
    inline string getOriginalImageURI() const { DARABONBA_PTR_GET_DEFAULT(originalImageURI_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setOriginalImageURI(string originalImageURI) { DARABONBA_PTR_SET_VALUE(originalImageURI_, originalImageURI) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // strengthLevel Field Functions 
    bool hasStrengthLevel() const { return this->strengthLevel_ != nullptr;};
    void deleteStrengthLevel() { this->strengthLevel_ = nullptr;};
    inline string getStrengthLevel() const { DARABONBA_PTR_GET_DEFAULT(strengthLevel_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setStrengthLevel(string strengthLevel) { DARABONBA_PTR_SET_VALUE(strengthLevel_, strengthLevel) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // watermarkType Field Functions 
    bool hasWatermarkType() const { return this->watermarkType_ != nullptr;};
    void deleteWatermarkType() { this->watermarkType_ = nullptr;};
    inline string getWatermarkType() const { DARABONBA_PTR_GET_DEFAULT(watermarkType_, "") };
    inline CreateDecodeBlindWatermarkTaskShrinkRequest& setWatermarkType(string watermarkType) { DARABONBA_PTR_SET_VALUE(watermarkType_, watermarkType) };


  protected:
    // A parameter from the earlier DecodeBlindWatermark API. It specifies the quality of the output image. The default value is 90. The value must be in the range of 70 to 100.
    // 
    // A higher quality results in a larger image size and better watermark parsing quality.
    shared_ptr<int32_t> imageQuality_ {};
    // A parameter from the earlier DecodeBlindWatermark API. It specifies the watermark algorithm model. Valid values include FFT, FFT_FULL, DWT, and DWT_IBG. The default value is FFT.
    // 
    // If this parameter is left empty, the new version of the blind watermarking feature is used. Otherwise, the earlier version is used.
    shared_ptr<string> model_ {};
    // The notification configuration. For more information, click Notification. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // A parameter from the earlier DecodeBlindWatermark API. It specifies the OSS URI of the image before the blind watermark was added.
    // 
    // This parameter is not required when Model is set to DWT or DWT_IBG.
    // 
    // The OSS URI must be in the `oss://<bucket>/<object>` format. `<bucket>` is the name of the OSS bucket that is in the same region as the current project. `<object>` is the full path of the file, including the file name extension.
    shared_ptr<string> originalImageURI_ {};
    // The project name. For information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // >Notice: The project name must be the same as the one used to add the blind watermark with the [EncodeBlindWatermark](https://help.aliyun.com/document_detail/2743655.html) operation. Otherwise, the watermark cannot be extracted.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The Object Storage Service (OSS) URI of the image.
    // 
    // The OSS URI must be in the `oss://<bucket>/<object>` format. `<bucket>` is the name of the OSS bucket that is in the same region as the current project. `<object>` is the full path of the file, including the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // The watermark extraction level, which controls the extraction precision. A higher level indicates a longer processing time and a better extraction effect. Valid values:
    // 
    // - low
    // 
    // - medium
    // 
    // - high
    shared_ptr<string> strengthLevel_ {};
    // A parameter from the earlier DecodeBlindWatermark API. It specifies the OSS URI where the image is saved after the blind watermark is parsed.
    // 
    // The OSS URI must be in the `oss://<bucket>/<object>` format. `<bucket>` is the name of the OSS bucket that is in the same region as the current project. `<object>` is the full path of the file, including the file name extension.
    shared_ptr<string> targetURI_ {};
    // The type of the embedded watermark. Valid value: text
    // 
    // (Image watermarks are not supported. Therefore, this parameter can only be set to text.)
    shared_ptr<string> watermarkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
