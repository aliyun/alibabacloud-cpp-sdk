// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEMOSAICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEMOSAICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AddImageMosaicShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageMosaicShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(Targets, targetsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageMosaicShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ImageFormat, imageFormat_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(Targets, targetsShrink_);
    };
    AddImageMosaicShrinkRequest() = default ;
    AddImageMosaicShrinkRequest(const AddImageMosaicShrinkRequest &) = default ;
    AddImageMosaicShrinkRequest(AddImageMosaicShrinkRequest &&) = default ;
    AddImageMosaicShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageMosaicShrinkRequest() = default ;
    AddImageMosaicShrinkRequest& operator=(const AddImageMosaicShrinkRequest &) = default ;
    AddImageMosaicShrinkRequest& operator=(AddImageMosaicShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && return this->imageFormat_ == nullptr && return this->projectName_ == nullptr && return this->quality_ == nullptr && return this->sourceURI_ == nullptr && return this->targetURI_ == nullptr
        && return this->targetsShrink_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline AddImageMosaicShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // imageFormat Field Functions 
    bool hasImageFormat() const { return this->imageFormat_ != nullptr;};
    void deleteImageFormat() { this->imageFormat_ = nullptr;};
    inline string imageFormat() const { DARABONBA_PTR_GET_DEFAULT(imageFormat_, "") };
    inline AddImageMosaicShrinkRequest& setImageFormat(string imageFormat) { DARABONBA_PTR_SET_VALUE(imageFormat_, imageFormat) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline AddImageMosaicShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int32_t quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
    inline AddImageMosaicShrinkRequest& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline AddImageMosaicShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline AddImageMosaicShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // targetsShrink Field Functions 
    bool hasTargetsShrink() const { return this->targetsShrink_ != nullptr;};
    void deleteTargetsShrink() { this->targetsShrink_ = nullptr;};
    inline string targetsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetsShrink_, "") };
    inline AddImageMosaicShrinkRequest& setTargetsShrink(string targetsShrink) { DARABONBA_PTR_SET_VALUE(targetsShrink_, targetsShrink) };


  protected:
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The encoding of the output image. By default, the output image uses the same encoding as the input image. Valid values: jpg, png, and webp.
    std::shared_ptr<string> imageFormat_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The quality of the output image. This parameter applies only to JPG and WebP images. Valid values: 0 to 100. Default value: 80.
    std::shared_ptr<int32_t> quality_ = nullptr;
    // The OSS URI of the input image.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // Supported formats of input images include JPG, PNG, TIFF, JP2, and BMP.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The OSS URI of the output image.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetURI_ = nullptr;
    // The bounding boxes and processing parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
