// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESANDBOXTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESANDBOXTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateSandboxTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSandboxTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultCpu, defaultCpu_);
      DARABONBA_PTR_TO_JSON(DefaultMemory, defaultMemory_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSandboxTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultCpu, defaultCpu_);
      DARABONBA_PTR_FROM_JSON(DefaultMemory, defaultMemory_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateSandboxTemplateShrinkRequest() = default ;
    CreateSandboxTemplateShrinkRequest(const CreateSandboxTemplateShrinkRequest &) = default ;
    CreateSandboxTemplateShrinkRequest(CreateSandboxTemplateShrinkRequest &&) = default ;
    CreateSandboxTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSandboxTemplateShrinkRequest() = default ;
    CreateSandboxTemplateShrinkRequest& operator=(const CreateSandboxTemplateShrinkRequest &) = default ;
    CreateSandboxTemplateShrinkRequest& operator=(CreateSandboxTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultCpu_ == nullptr
        && this->defaultMemory_ == nullptr && this->description_ == nullptr && this->image_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr
        && this->replicas_ == nullptr && this->tagsShrink_ == nullptr && this->templateName_ == nullptr; };
    // defaultCpu Field Functions 
    bool hasDefaultCpu() const { return this->defaultCpu_ != nullptr;};
    void deleteDefaultCpu() { this->defaultCpu_ = nullptr;};
    inline string getDefaultCpu() const { DARABONBA_PTR_GET_DEFAULT(defaultCpu_, "") };
    inline CreateSandboxTemplateShrinkRequest& setDefaultCpu(string defaultCpu) { DARABONBA_PTR_SET_VALUE(defaultCpu_, defaultCpu) };


    // defaultMemory Field Functions 
    bool hasDefaultMemory() const { return this->defaultMemory_ != nullptr;};
    void deleteDefaultMemory() { this->defaultMemory_ = nullptr;};
    inline string getDefaultMemory() const { DARABONBA_PTR_GET_DEFAULT(defaultMemory_, "") };
    inline CreateSandboxTemplateShrinkRequest& setDefaultMemory(string defaultMemory) { DARABONBA_PTR_SET_VALUE(defaultMemory_, defaultMemory) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSandboxTemplateShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateSandboxTemplateShrinkRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateSandboxTemplateShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSandboxTemplateShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int64_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0L) };
    inline CreateSandboxTemplateShrinkRequest& setReplicas(int64_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateSandboxTemplateShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSandboxTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The number of CPUs for sandboxes created by using this template. Valid values: 1 to 4.
    shared_ptr<string> defaultCpu_ {};
    // The memory size for sandboxes created by using this template. Unit: Gi. Valid values: 1Gi to 8Gi.
    shared_ptr<string> defaultMemory_ {};
    // The description of the sandbox template. The description must be unique within the VPC.
    shared_ptr<string> description_ {};
    shared_ptr<string> image_ {};
    // The instance ID of the AI application.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The number of prewarmed sandboxes. Valid values: 1 to 1000.
    shared_ptr<int64_t> replicas_ {};
    shared_ptr<string> tagsShrink_ {};
    // The name of the sandbox template.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
