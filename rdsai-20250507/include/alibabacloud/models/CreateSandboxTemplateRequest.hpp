// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESANDBOXTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESANDBOXTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateSandboxTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSandboxTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultCpu, defaultCpu_);
      DARABONBA_PTR_TO_JSON(DefaultMemory, defaultMemory_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSandboxTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultCpu, defaultCpu_);
      DARABONBA_PTR_FROM_JSON(DefaultMemory, defaultMemory_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateSandboxTemplateRequest() = default ;
    CreateSandboxTemplateRequest(const CreateSandboxTemplateRequest &) = default ;
    CreateSandboxTemplateRequest(CreateSandboxTemplateRequest &&) = default ;
    CreateSandboxTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSandboxTemplateRequest() = default ;
    CreateSandboxTemplateRequest& operator=(const CreateSandboxTemplateRequest &) = default ;
    CreateSandboxTemplateRequest& operator=(CreateSandboxTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultCpu_ == nullptr
        && this->defaultMemory_ == nullptr && this->description_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->replicas_ == nullptr
        && this->templateName_ == nullptr; };
    // defaultCpu Field Functions 
    bool hasDefaultCpu() const { return this->defaultCpu_ != nullptr;};
    void deleteDefaultCpu() { this->defaultCpu_ = nullptr;};
    inline string getDefaultCpu() const { DARABONBA_PTR_GET_DEFAULT(defaultCpu_, "") };
    inline CreateSandboxTemplateRequest& setDefaultCpu(string defaultCpu) { DARABONBA_PTR_SET_VALUE(defaultCpu_, defaultCpu) };


    // defaultMemory Field Functions 
    bool hasDefaultMemory() const { return this->defaultMemory_ != nullptr;};
    void deleteDefaultMemory() { this->defaultMemory_ = nullptr;};
    inline string getDefaultMemory() const { DARABONBA_PTR_GET_DEFAULT(defaultMemory_, "") };
    inline CreateSandboxTemplateRequest& setDefaultMemory(string defaultMemory) { DARABONBA_PTR_SET_VALUE(defaultMemory_, defaultMemory) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSandboxTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateSandboxTemplateRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSandboxTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int64_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0L) };
    inline CreateSandboxTemplateRequest& setReplicas(int64_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSandboxTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<string> defaultCpu_ {};
    shared_ptr<string> defaultMemory_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> replicas_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
