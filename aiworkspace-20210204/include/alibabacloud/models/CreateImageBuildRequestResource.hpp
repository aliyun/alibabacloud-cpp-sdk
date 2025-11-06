// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateImageBuildRequestResourceResourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequestResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequestResource& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(ResourceConfig, resourceConfig_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequestResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceConfig, resourceConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateImageBuildRequestResource() = default ;
    CreateImageBuildRequestResource(const CreateImageBuildRequestResource &) = default ;
    CreateImageBuildRequestResource(CreateImageBuildRequestResource &&) = default ;
    CreateImageBuildRequestResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequestResource() = default ;
    CreateImageBuildRequestResource& operator=(const CreateImageBuildRequestResource &) = default ;
    CreateImageBuildRequestResource& operator=(CreateImageBuildRequestResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsSpec_ == nullptr
        && return this->resourceConfig_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr; };
    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline CreateImageBuildRequestResource& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // resourceConfig Field Functions 
    bool hasResourceConfig() const { return this->resourceConfig_ != nullptr;};
    void deleteResourceConfig() { this->resourceConfig_ = nullptr;};
    inline const Models::CreateImageBuildRequestResourceResourceConfig & resourceConfig() const { DARABONBA_PTR_GET_CONST(resourceConfig_, Models::CreateImageBuildRequestResourceResourceConfig) };
    inline Models::CreateImageBuildRequestResourceResourceConfig resourceConfig() { DARABONBA_PTR_GET(resourceConfig_, Models::CreateImageBuildRequestResourceResourceConfig) };
    inline CreateImageBuildRequestResource& setResourceConfig(const Models::CreateImageBuildRequestResourceResourceConfig & resourceConfig) { DARABONBA_PTR_SET_VALUE(resourceConfig_, resourceConfig) };
    inline CreateImageBuildRequestResource& setResourceConfig(Models::CreateImageBuildRequestResourceResourceConfig && resourceConfig) { DARABONBA_PTR_SET_RVALUE(resourceConfig_, resourceConfig) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateImageBuildRequestResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateImageBuildRequestResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // 后付费资源规格
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<Models::CreateImageBuildRequestResourceResourceConfig> resourceConfig_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
