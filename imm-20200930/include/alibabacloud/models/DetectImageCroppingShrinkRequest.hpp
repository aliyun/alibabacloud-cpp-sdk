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
      DARABONBA_PTR_TO_JSON(InclusionHints, inclusionHintsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageCroppingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatios, aspectRatios_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InclusionHints, inclusionHintsShrink_);
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
    virtual bool empty() const override { return this->aspectRatios_ == nullptr
        && this->credentialConfigShrink_ == nullptr && this->inclusionHintsShrink_ == nullptr && this->projectName_ == nullptr && this->sourceURI_ == nullptr; };
    // aspectRatios Field Functions 
    bool hasAspectRatios() const { return this->aspectRatios_ != nullptr;};
    void deleteAspectRatios() { this->aspectRatios_ = nullptr;};
    inline string getAspectRatios() const { DARABONBA_PTR_GET_DEFAULT(aspectRatios_, "") };
    inline DetectImageCroppingShrinkRequest& setAspectRatios(string aspectRatios) { DARABONBA_PTR_SET_VALUE(aspectRatios_, aspectRatios) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline DetectImageCroppingShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // inclusionHintsShrink Field Functions 
    bool hasInclusionHintsShrink() const { return this->inclusionHintsShrink_ != nullptr;};
    void deleteInclusionHintsShrink() { this->inclusionHintsShrink_ = nullptr;};
    inline string getInclusionHintsShrink() const { DARABONBA_PTR_GET_DEFAULT(inclusionHintsShrink_, "") };
    inline DetectImageCroppingShrinkRequest& setInclusionHintsShrink(string inclusionHintsShrink) { DARABONBA_PTR_SET_VALUE(inclusionHintsShrink_, inclusionHintsShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DetectImageCroppingShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline DetectImageCroppingShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


  protected:
    // The list of cropping aspect ratios. You can specify up to 5 ratios. Each ratio must meet the following requirements:
    // 
    // - The ratio must consist of integers in the range of (0, 20).
    // 
    // - The ratio value must be in the range of [0.5, 2].
    // 
    // - If you do not specify this parameter, the default value `["auto"]` is used.
    // 
    // > The following cases cause an error:<br>- More than 5 ratios are specified.<br>- An empty list is passed.<br>- The ratio contains non-integer values, such as `4.1:3`.<br>- The ratio value is less than 0.5 or greater than 2.
    shared_ptr<string> aspectRatios_ {};
    // **Leave this parameter empty unless otherwise required.**
    // 
    // The China authorization configuration. This parameter is optional. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The list of semantic text descriptions for objects that you want the cropping result to include. Each element is free-form text, such as "signboard" or "dish".
    // 
    // > Usage limits of the InclusionHints parameter:
    // <br>- You can pass in up to 1 hint in the array to specify the type of object to include in the cropping result, such as "signboard".
    // <br>- The algorithm detects all objects in the image that match the hint and generates cropping regions that include as many matched objects as possible.
    // <br>- Each cropping region includes up to 10 matched objects. If more than 10 objects match in the image, the cropping region includes up to 10 of them.
    // <br>- You can use the MatchedInclusionHints response field to determine whether the hint was successfully matched.
    // <br>- This parameter is supported only in regions in the Chinese mainland.
    shared_ptr<string> inclusionHintsShrink_ {};
    // The project name.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The OSS URI of the image.
    // 
    // The OSS URI follows the format oss://${Bucket}/${Object}, where `${Bucket}` is the name of an OSS bucket in the same region as the current project, and `${Object}` is the full path of the file including the file name extension.
    shared_ptr<string> sourceURI_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
