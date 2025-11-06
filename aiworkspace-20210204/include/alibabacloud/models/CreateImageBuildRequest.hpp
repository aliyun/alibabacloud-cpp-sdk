// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateImageBuildRequestBuildConfig.hpp>
#include <alibabacloud/models/CreateImageBuildRequestImage.hpp>
#include <alibabacloud/models/CreateImageBuildRequestResource.hpp>
#include <alibabacloud/models/CreateImageBuildRequestTargetRegistry.hpp>
#include <alibabacloud/models/CreateImageBuildRequestUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageBuildJobName, imageBuildJobName_);
      DARABONBA_PTR_TO_JSON(OverwriteImageTag, overwriteImageTag_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(TargetRegistry, targetRegistry_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageBuildJobName, imageBuildJobName_);
      DARABONBA_PTR_FROM_JSON(OverwriteImageTag, overwriteImageTag_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(TargetRegistry, targetRegistry_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateImageBuildRequest() = default ;
    CreateImageBuildRequest(const CreateImageBuildRequest &) = default ;
    CreateImageBuildRequest(CreateImageBuildRequest &&) = default ;
    CreateImageBuildRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequest() = default ;
    CreateImageBuildRequest& operator=(const CreateImageBuildRequest &) = default ;
    CreateImageBuildRequest& operator=(CreateImageBuildRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->accessibility_ == nullptr && return this->buildConfig_ == nullptr && return this->image_ == nullptr && return this->imageBuildJobName_ == nullptr && return this->overwriteImageTag_ == nullptr
        && return this->regionId_ == nullptr && return this->resource_ == nullptr && return this->targetRegistry_ == nullptr && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageBuildRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateImageBuildRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const CreateImageBuildRequestBuildConfig & buildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, CreateImageBuildRequestBuildConfig) };
    inline CreateImageBuildRequestBuildConfig buildConfig() { DARABONBA_PTR_GET(buildConfig_, CreateImageBuildRequestBuildConfig) };
    inline CreateImageBuildRequest& setBuildConfig(const CreateImageBuildRequestBuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline CreateImageBuildRequest& setBuildConfig(CreateImageBuildRequestBuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const CreateImageBuildRequestImage & image() const { DARABONBA_PTR_GET_CONST(image_, CreateImageBuildRequestImage) };
    inline CreateImageBuildRequestImage image() { DARABONBA_PTR_GET(image_, CreateImageBuildRequestImage) };
    inline CreateImageBuildRequest& setImage(const CreateImageBuildRequestImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline CreateImageBuildRequest& setImage(CreateImageBuildRequestImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // imageBuildJobName Field Functions 
    bool hasImageBuildJobName() const { return this->imageBuildJobName_ != nullptr;};
    void deleteImageBuildJobName() { this->imageBuildJobName_ = nullptr;};
    inline string imageBuildJobName() const { DARABONBA_PTR_GET_DEFAULT(imageBuildJobName_, "") };
    inline CreateImageBuildRequest& setImageBuildJobName(string imageBuildJobName) { DARABONBA_PTR_SET_VALUE(imageBuildJobName_, imageBuildJobName) };


    // overwriteImageTag Field Functions 
    bool hasOverwriteImageTag() const { return this->overwriteImageTag_ != nullptr;};
    void deleteOverwriteImageTag() { this->overwriteImageTag_ = nullptr;};
    inline bool overwriteImageTag() const { DARABONBA_PTR_GET_DEFAULT(overwriteImageTag_, false) };
    inline CreateImageBuildRequest& setOverwriteImageTag(bool overwriteImageTag) { DARABONBA_PTR_SET_VALUE(overwriteImageTag_, overwriteImageTag) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageBuildRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const CreateImageBuildRequestResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, CreateImageBuildRequestResource) };
    inline CreateImageBuildRequestResource resource() { DARABONBA_PTR_GET(resource_, CreateImageBuildRequestResource) };
    inline CreateImageBuildRequest& setResource(const CreateImageBuildRequestResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateImageBuildRequest& setResource(CreateImageBuildRequestResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // targetRegistry Field Functions 
    bool hasTargetRegistry() const { return this->targetRegistry_ != nullptr;};
    void deleteTargetRegistry() { this->targetRegistry_ = nullptr;};
    inline const CreateImageBuildRequestTargetRegistry & targetRegistry() const { DARABONBA_PTR_GET_CONST(targetRegistry_, CreateImageBuildRequestTargetRegistry) };
    inline CreateImageBuildRequestTargetRegistry targetRegistry() { DARABONBA_PTR_GET(targetRegistry_, CreateImageBuildRequestTargetRegistry) };
    inline CreateImageBuildRequest& setTargetRegistry(const CreateImageBuildRequestTargetRegistry & targetRegistry) { DARABONBA_PTR_SET_VALUE(targetRegistry_, targetRegistry) };
    inline CreateImageBuildRequest& setTargetRegistry(CreateImageBuildRequestTargetRegistry && targetRegistry) { DARABONBA_PTR_SET_RVALUE(targetRegistry_, targetRegistry) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateImageBuildRequestUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateImageBuildRequestUserVpc) };
    inline CreateImageBuildRequestUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, CreateImageBuildRequestUserVpc) };
    inline CreateImageBuildRequest& setUserVpc(const CreateImageBuildRequestUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateImageBuildRequest& setUserVpc(CreateImageBuildRequestUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateImageBuildRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // 镜像构建的可见性，可能值： - PUBLIC：当前工作空间所有成员都可以操作。 - PRIVATE：只有创建者可以操作。
    std::shared_ptr<string> accessibility_ = nullptr;
    // 构建配置，指定待构建的 Dockerfile 文件内容。
    // 
    // This parameter is required.
    std::shared_ptr<CreateImageBuildRequestBuildConfig> buildConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateImageBuildRequestImage> image_ = nullptr;
    std::shared_ptr<string> imageBuildJobName_ = nullptr;
    // 是否覆盖更新 ACR 镜像仓库中已存在的镜像 tag。
    std::shared_ptr<bool> overwriteImageTag_ = nullptr;
    // 代表region的资源属性字段
    std::shared_ptr<string> regionId_ = nullptr;
    // 构建任务运行资源
    // 
    // This parameter is required.
    std::shared_ptr<CreateImageBuildRequestResource> resource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateImageBuildRequestTargetRegistry> targetRegistry_ = nullptr;
    // 用户专有网络信息。使用企业版 ACR 实例时，此参数必填，指定在用户 ACR 实例的访问控制里已添加的专有网络。
    std::shared_ptr<CreateImageBuildRequestUserVpc> userVpc_ = nullptr;
    // 镜像构建所属的工作空间ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
