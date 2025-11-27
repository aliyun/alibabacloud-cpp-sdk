// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCODEBLINDWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENCODEBLINDWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class EncodeBlindWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncodeBlindWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ImageQuality, imageQuality_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(StrengthLevel, strengthLevel_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
    };
    friend void from_json(const Darabonba::Json& j, EncodeBlindWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ImageQuality, imageQuality_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(StrengthLevel, strengthLevel_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
    };
    EncodeBlindWatermarkRequest() = default ;
    EncodeBlindWatermarkRequest(const EncodeBlindWatermarkRequest &) = default ;
    EncodeBlindWatermarkRequest(EncodeBlindWatermarkRequest &&) = default ;
    EncodeBlindWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncodeBlindWatermarkRequest() = default ;
    EncodeBlindWatermarkRequest& operator=(const EncodeBlindWatermarkRequest &) = default ;
    EncodeBlindWatermarkRequest& operator=(EncodeBlindWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->imageQuality_ == nullptr && return this->projectName_ == nullptr && return this->sourceURI_ == nullptr && return this->strengthLevel_ == nullptr && return this->targetURI_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline EncodeBlindWatermarkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // imageQuality Field Functions 
    bool hasImageQuality() const { return this->imageQuality_ != nullptr;};
    void deleteImageQuality() { this->imageQuality_ = nullptr;};
    inline int32_t imageQuality() const { DARABONBA_PTR_GET_DEFAULT(imageQuality_, 0) };
    inline EncodeBlindWatermarkRequest& setImageQuality(int32_t imageQuality) { DARABONBA_PTR_SET_VALUE(imageQuality_, imageQuality) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline EncodeBlindWatermarkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline EncodeBlindWatermarkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // strengthLevel Field Functions 
    bool hasStrengthLevel() const { return this->strengthLevel_ != nullptr;};
    void deleteStrengthLevel() { this->strengthLevel_ = nullptr;};
    inline string strengthLevel() const { DARABONBA_PTR_GET_DEFAULT(strengthLevel_, "") };
    inline EncodeBlindWatermarkRequest& setStrengthLevel(string strengthLevel) { DARABONBA_PTR_SET_VALUE(strengthLevel_, strengthLevel) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline EncodeBlindWatermarkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


  protected:
    // The text content of watermarks. It can be up to 256 characters in length.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter takes effect only if the input image format is JPG.
    // 
    // The storage quality of the output image that carries the watermarks. Default value: 90. Valid values: 70 to 100. The higher the quality, the larger the image size and the higher the watermark resolution quality.
    std::shared_ptr<int32_t> imageQuality_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The Object Storage Service (OSS) URI of the image.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region with the current project. `${Object}` specifies the path of the object with the extension included.
    // 
    // Supported image formats: JPG, PNG, BMP, TIFF, and WebP.
    // 
    // Image size limit: 10,000 px maximum and 80 px x 80 px minimum.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The watermark strength level. The higher the strength, the more resistant the watermarked image is to attacks, but the more the image is distorted. Default value: low. Valid values: [low, medium, high].
    std::shared_ptr<string> strengthLevel_ = nullptr;
    // The URI of the output image in OSS.
    // 
    // Specify the URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // > 
    // 
    // *   The format of the output image is the same as that of the input image.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetURI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
