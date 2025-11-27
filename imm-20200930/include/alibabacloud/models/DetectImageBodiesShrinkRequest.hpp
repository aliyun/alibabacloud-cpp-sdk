// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGEBODIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGEBODIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageBodiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageBodiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sensitivity, sensitivity_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageBodiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sensitivity, sensitivity_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
    };
    DetectImageBodiesShrinkRequest() = default ;
    DetectImageBodiesShrinkRequest(const DetectImageBodiesShrinkRequest &) = default ;
    DetectImageBodiesShrinkRequest(DetectImageBodiesShrinkRequest &&) = default ;
    DetectImageBodiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageBodiesShrinkRequest() = default ;
    DetectImageBodiesShrinkRequest& operator=(const DetectImageBodiesShrinkRequest &) = default ;
    DetectImageBodiesShrinkRequest& operator=(DetectImageBodiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && return this->projectName_ == nullptr && return this->sensitivity_ == nullptr && return this->sourceURI_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline DetectImageBodiesShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DetectImageBodiesShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline float sensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, 0.0) };
    inline DetectImageBodiesShrinkRequest& setSensitivity(float sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline DetectImageBodiesShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The accuracy level of detecting and recognizing specific content in the image. Valid values: 0 to 1. Default value: 0.6. A higher sensitivity specifies that more image details can be detected.
    std::shared_ptr<float> sensitivity_ = nullptr;
    // The URI of the Object Storage Service (OSS) bucket in which the image file is stored.
    // 
    // Specify the value in the oss://${Bucket}/${Object} format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region as the current project. `${Object}` specifies the complete path to the file that has an extension.
    std::shared_ptr<string> sourceURI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
