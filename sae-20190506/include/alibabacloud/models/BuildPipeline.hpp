// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BuildPipelineBuildConfig.hpp>
#include <alibabacloud/models/BuildPipelineCodeConfig.hpp>
#include <alibabacloud/models/BuildPipelineDeployConfig.hpp>
#include <alibabacloud/models/BuildPipelineImageConfig.hpp>
#include <alibabacloud/models/BuildPipelinePackageConfig.hpp>
#include <alibabacloud/models/BuildPipelineTriggerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(CodeConfig, codeConfig_);
      DARABONBA_PTR_TO_JSON(DeployConfig, deployConfig_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(CodeConfig, codeConfig_);
      DARABONBA_PTR_FROM_JSON(DeployConfig, deployConfig_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
    };
    BuildPipeline() = default ;
    BuildPipeline(const BuildPipeline &) = default ;
    BuildPipeline(BuildPipeline &&) = default ;
    BuildPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipeline() = default ;
    BuildPipeline& operator=(const BuildPipeline &) = default ;
    BuildPipeline& operator=(BuildPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr && this->buildConfig_ != nullptr && this->codeConfig_ != nullptr && this->deployConfig_ != nullptr && this->enabled_ != nullptr
        && this->imageConfig_ != nullptr && this->packageConfig_ != nullptr && this->triggerConfig_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BuildPipeline& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline BuildPipeline& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const BuildPipelineBuildConfig & buildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, BuildPipelineBuildConfig) };
    inline BuildPipelineBuildConfig buildConfig() { DARABONBA_PTR_GET(buildConfig_, BuildPipelineBuildConfig) };
    inline BuildPipeline& setBuildConfig(const BuildPipelineBuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline BuildPipeline& setBuildConfig(BuildPipelineBuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // codeConfig Field Functions 
    bool hasCodeConfig() const { return this->codeConfig_ != nullptr;};
    void deleteCodeConfig() { this->codeConfig_ = nullptr;};
    inline const BuildPipelineCodeConfig & codeConfig() const { DARABONBA_PTR_GET_CONST(codeConfig_, BuildPipelineCodeConfig) };
    inline BuildPipelineCodeConfig codeConfig() { DARABONBA_PTR_GET(codeConfig_, BuildPipelineCodeConfig) };
    inline BuildPipeline& setCodeConfig(const BuildPipelineCodeConfig & codeConfig) { DARABONBA_PTR_SET_VALUE(codeConfig_, codeConfig) };
    inline BuildPipeline& setCodeConfig(BuildPipelineCodeConfig && codeConfig) { DARABONBA_PTR_SET_RVALUE(codeConfig_, codeConfig) };


    // deployConfig Field Functions 
    bool hasDeployConfig() const { return this->deployConfig_ != nullptr;};
    void deleteDeployConfig() { this->deployConfig_ = nullptr;};
    inline const BuildPipelineDeployConfig & deployConfig() const { DARABONBA_PTR_GET_CONST(deployConfig_, BuildPipelineDeployConfig) };
    inline BuildPipelineDeployConfig deployConfig() { DARABONBA_PTR_GET(deployConfig_, BuildPipelineDeployConfig) };
    inline BuildPipeline& setDeployConfig(const BuildPipelineDeployConfig & deployConfig) { DARABONBA_PTR_SET_VALUE(deployConfig_, deployConfig) };
    inline BuildPipeline& setDeployConfig(BuildPipelineDeployConfig && deployConfig) { DARABONBA_PTR_SET_RVALUE(deployConfig_, deployConfig) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline BuildPipeline& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const BuildPipelineImageConfig & imageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, BuildPipelineImageConfig) };
    inline BuildPipelineImageConfig imageConfig() { DARABONBA_PTR_GET(imageConfig_, BuildPipelineImageConfig) };
    inline BuildPipeline& setImageConfig(const BuildPipelineImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline BuildPipeline& setImageConfig(BuildPipelineImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const BuildPipelinePackageConfig & packageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, BuildPipelinePackageConfig) };
    inline BuildPipelinePackageConfig packageConfig() { DARABONBA_PTR_GET(packageConfig_, BuildPipelinePackageConfig) };
    inline BuildPipeline& setPackageConfig(const BuildPipelinePackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline BuildPipeline& setPackageConfig(BuildPipelinePackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const BuildPipelineTriggerConfig & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, BuildPipelineTriggerConfig) };
    inline BuildPipelineTriggerConfig triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, BuildPipelineTriggerConfig) };
    inline BuildPipeline& setTriggerConfig(const BuildPipelineTriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline BuildPipeline& setTriggerConfig(BuildPipelineTriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<BuildPipelineBuildConfig> buildConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<BuildPipelineCodeConfig> codeConfig_ = nullptr;
    std::shared_ptr<BuildPipelineDeployConfig> deployConfig_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<BuildPipelineImageConfig> imageConfig_ = nullptr;
    std::shared_ptr<BuildPipelinePackageConfig> packageConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<BuildPipelineTriggerConfig> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
