// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ImageNameSuffix, imageNameSuffix_);
      DARABONBA_PTR_TO_JSON(RetainCloudAssistant, retainCloudAssistant_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageNameSuffix, imageNameSuffix_);
      DARABONBA_PTR_FROM_JSON(RetainCloudAssistant, retainCloudAssistant_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageNameSuffix_ == nullptr
        && return this->retainCloudAssistant_ == nullptr; };
    // imageNameSuffix Field Functions 
    bool hasImageNameSuffix() const { return this->imageNameSuffix_ != nullptr;};
    void deleteImageNameSuffix() { this->imageNameSuffix_ = nullptr;};
    inline string imageNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(imageNameSuffix_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions& setImageNameSuffix(string imageNameSuffix) { DARABONBA_PTR_SET_VALUE(imageNameSuffix_, imageNameSuffix) };


    // retainCloudAssistant Field Functions 
    bool hasRetainCloudAssistant() const { return this->retainCloudAssistant_ != nullptr;};
    void deleteRetainCloudAssistant() { this->retainCloudAssistant_ = nullptr;};
    inline bool retainCloudAssistant() const { DARABONBA_PTR_GET_DEFAULT(retainCloudAssistant_, false) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions& setRetainCloudAssistant(bool retainCloudAssistant) { DARABONBA_PTR_SET_VALUE(retainCloudAssistant_, retainCloudAssistant) };


  protected:
    // Indicates whether to disable the feature that automatically adds a suffix to the name of the image created based on the image template. Valid value:
    // 
    // *   disable
    std::shared_ptr<string> imageNameSuffix_ = nullptr;
    // Indicates whether to retain Cloud Assistant. During the image building process, the system automatically installs Cloud Assistant in the intermediate instance to run commands. You can choose whether to retain Cloud Assistant in the new image created based on the image template. Valid values:
    // 
    // *   true: retains Cloud Assistant.
    // *   false: does not retain Cloud Assistant.
    // 
    // >  This parameter does not affect Cloud Assistant that comes with your image.
    std::shared_ptr<bool> retainCloudAssistant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
