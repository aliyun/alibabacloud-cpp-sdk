// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUESTADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineRequestAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequestAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ImageNameSuffix, imageNameSuffix_);
      DARABONBA_PTR_TO_JSON(RetainCloudAssistant, retainCloudAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequestAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageNameSuffix, imageNameSuffix_);
      DARABONBA_PTR_FROM_JSON(RetainCloudAssistant, retainCloudAssistant_);
    };
    CreateImagePipelineRequestAdvancedOptions() = default ;
    CreateImagePipelineRequestAdvancedOptions(const CreateImagePipelineRequestAdvancedOptions &) = default ;
    CreateImagePipelineRequestAdvancedOptions(CreateImagePipelineRequestAdvancedOptions &&) = default ;
    CreateImagePipelineRequestAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequestAdvancedOptions() = default ;
    CreateImagePipelineRequestAdvancedOptions& operator=(const CreateImagePipelineRequestAdvancedOptions &) = default ;
    CreateImagePipelineRequestAdvancedOptions& operator=(CreateImagePipelineRequestAdvancedOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageNameSuffix_ != nullptr
        && this->retainCloudAssistant_ != nullptr; };
    // imageNameSuffix Field Functions 
    bool hasImageNameSuffix() const { return this->imageNameSuffix_ != nullptr;};
    void deleteImageNameSuffix() { this->imageNameSuffix_ = nullptr;};
    inline string imageNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(imageNameSuffix_, "") };
    inline CreateImagePipelineRequestAdvancedOptions& setImageNameSuffix(string imageNameSuffix) { DARABONBA_PTR_SET_VALUE(imageNameSuffix_, imageNameSuffix) };


    // retainCloudAssistant Field Functions 
    bool hasRetainCloudAssistant() const { return this->retainCloudAssistant_ != nullptr;};
    void deleteRetainCloudAssistant() { this->retainCloudAssistant_ = nullptr;};
    inline bool retainCloudAssistant() const { DARABONBA_PTR_GET_DEFAULT(retainCloudAssistant_, false) };
    inline CreateImagePipelineRequestAdvancedOptions& setRetainCloudAssistant(bool retainCloudAssistant) { DARABONBA_PTR_SET_VALUE(retainCloudAssistant_, retainCloudAssistant) };


  protected:
    // Specifies whether to disable the feature that automatically adds a suffix to the name of the image created based on the image template. Valid value:
    // 
    // *   disable
    std::shared_ptr<string> imageNameSuffix_ = nullptr;
    // Specifies whether to retain Cloud Assistant Agent that is installed during the image building process. During the image building process, the system automatically installs Cloud Assistant Agent on the intermediate instance to run commands. You can choose whether to retain Cloud Assistant Agent that is installed during the image building process in the new image. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  The setting of this parameter does not affect Cloud Assistant Agent that comes with your image.
    std::shared_ptr<bool> retainCloudAssistant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
