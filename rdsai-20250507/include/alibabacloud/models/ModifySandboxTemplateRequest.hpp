// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSANDBOXTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSANDBOXTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifySandboxTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySandboxTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultCpu, defaultCpu_);
      DARABONBA_PTR_TO_JSON(DefaultMemory, defaultMemory_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySandboxTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultCpu, defaultCpu_);
      DARABONBA_PTR_FROM_JSON(DefaultMemory, defaultMemory_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ModifySandboxTemplateRequest() = default ;
    ModifySandboxTemplateRequest(const ModifySandboxTemplateRequest &) = default ;
    ModifySandboxTemplateRequest(ModifySandboxTemplateRequest &&) = default ;
    ModifySandboxTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySandboxTemplateRequest() = default ;
    ModifySandboxTemplateRequest& operator=(const ModifySandboxTemplateRequest &) = default ;
    ModifySandboxTemplateRequest& operator=(ModifySandboxTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultCpu_ == nullptr
        && this->defaultMemory_ == nullptr && this->image_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr
        && this->tags_ == nullptr && this->templateId_ == nullptr; };
    // defaultCpu Field Functions 
    bool hasDefaultCpu() const { return this->defaultCpu_ != nullptr;};
    void deleteDefaultCpu() { this->defaultCpu_ = nullptr;};
    inline string getDefaultCpu() const { DARABONBA_PTR_GET_DEFAULT(defaultCpu_, "") };
    inline ModifySandboxTemplateRequest& setDefaultCpu(string defaultCpu) { DARABONBA_PTR_SET_VALUE(defaultCpu_, defaultCpu) };


    // defaultMemory Field Functions 
    bool hasDefaultMemory() const { return this->defaultMemory_ != nullptr;};
    void deleteDefaultMemory() { this->defaultMemory_ = nullptr;};
    inline string getDefaultMemory() const { DARABONBA_PTR_GET_DEFAULT(defaultMemory_, "") };
    inline ModifySandboxTemplateRequest& setDefaultMemory(string defaultMemory) { DARABONBA_PTR_SET_VALUE(defaultMemory_, defaultMemory) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ModifySandboxTemplateRequest& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifySandboxTemplateRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySandboxTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int64_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0L) };
    inline ModifySandboxTemplateRequest& setReplicas(int64_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline ModifySandboxTemplateRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ModifySandboxTemplateRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifySandboxTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The number of CPUs for sandboxes created from this template. Valid values: 1 to 4.
    shared_ptr<string> defaultCpu_ {};
    // The memory size of sandboxes created from this template. Unit: Gi. Valid values: 1Gi to 8Gi.
    shared_ptr<string> defaultMemory_ {};
    shared_ptr<string> image_ {};
    // The instance ID of the AI application.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The initial number of instances. Valid values: 1 to 1000.
    shared_ptr<int64_t> replicas_ {};
    shared_ptr<map<string, string>> tags_ {};
    // The sandbox template ID.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
