// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGECROPPINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGECROPPINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageCroppingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageCroppingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatios, aspectRatios_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageCroppingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatios, aspectRatios_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
    };
    DetectImageCroppingShrinkRequest() = default ;
    DetectImageCroppingShrinkRequest(const DetectImageCroppingShrinkRequest &) = default ;
    DetectImageCroppingShrinkRequest(DetectImageCroppingShrinkRequest &&) = default ;
    DetectImageCroppingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageCroppingShrinkRequest() = default ;
    DetectImageCroppingShrinkRequest& operator=(const DetectImageCroppingShrinkRequest &) = default ;
    DetectImageCroppingShrinkRequest& operator=(DetectImageCroppingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aspectRatios_ != nullptr
        && this->credentialConfigShrink_ != nullptr && this->projectName_ != nullptr && this->sourceURI_ != nullptr; };
    // aspectRatios Field Functions 
    bool hasAspectRatios() const { return this->aspectRatios_ != nullptr;};
    void deleteAspectRatios() { this->aspectRatios_ = nullptr;};
    inline string aspectRatios() const { DARABONBA_PTR_GET_DEFAULT(aspectRatios_, "") };
    inline DetectImageCroppingShrinkRequest& setAspectRatios(string aspectRatios) { DARABONBA_PTR_SET_VALUE(aspectRatios_, aspectRatios) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline DetectImageCroppingShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DetectImageCroppingShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline DetectImageCroppingShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


  protected:
    // The cropping ratios. You can specify up to five cropping ratios. Take note of the following requirements:
    // 
    // *   The ratio must be an integer between 0 and 20.
    // *   The ratio must range from 0.5 to 2.
    // *   If you leave this parameter empty, the default processing logic is `["auto"]`.
    // 
    // >  Errors are reported in one of the following cases:\\
    // You specify more than five cropping ratios.\\
    // You pass an empty list to the system.\\
    // You specify a ratio that is not an integer, such as `4.1:3`.\\
    // The ratio is beyond the range of 0.5 to 2.
    std::shared_ptr<string> aspectRatios_ = nullptr;
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The URI of the Object Storage Service (OSS) bucket in which you store the image.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region as the current project. `${Object}` specifies the complete path to the image file that has an extension.
    std::shared_ptr<string> sourceURI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
