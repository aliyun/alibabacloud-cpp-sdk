// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUESTARTIFACTBUILDPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUESTARTIFACTBUILDPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateArtifactRequestArtifactBuildPropertyBuildArgs.hpp>
#include <alibabacloud/models/UpdateArtifactRequestArtifactBuildPropertyCodeRepo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateArtifactRequestArtifactBuildProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactRequestArtifactBuildProperty& obj) { 
      DARABONBA_PTR_TO_JSON(BuildArgs, buildArgs_);
      DARABONBA_PTR_TO_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(DockerfilePath, dockerfilePath_);
      DARABONBA_PTR_TO_JSON(EnableGpu, enableGpu_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceContainerImage, sourceContainerImage_);
      DARABONBA_PTR_TO_JSON(SourceImageId, sourceImageId_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactRequestArtifactBuildProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildArgs, buildArgs_);
      DARABONBA_PTR_FROM_JSON(CodeRepo, codeRepo_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(DockerfilePath, dockerfilePath_);
      DARABONBA_PTR_FROM_JSON(EnableGpu, enableGpu_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceContainerImage, sourceContainerImage_);
      DARABONBA_PTR_FROM_JSON(SourceImageId, sourceImageId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    UpdateArtifactRequestArtifactBuildProperty() = default ;
    UpdateArtifactRequestArtifactBuildProperty(const UpdateArtifactRequestArtifactBuildProperty &) = default ;
    UpdateArtifactRequestArtifactBuildProperty(UpdateArtifactRequestArtifactBuildProperty &&) = default ;
    UpdateArtifactRequestArtifactBuildProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactRequestArtifactBuildProperty() = default ;
    UpdateArtifactRequestArtifactBuildProperty& operator=(const UpdateArtifactRequestArtifactBuildProperty &) = default ;
    UpdateArtifactRequestArtifactBuildProperty& operator=(UpdateArtifactRequestArtifactBuildProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildArgs_ != nullptr
        && this->codeRepo_ != nullptr && this->commandContent_ != nullptr && this->commandType_ != nullptr && this->dockerfilePath_ != nullptr && this->enableGpu_ != nullptr
        && this->regionId_ != nullptr && this->sourceContainerImage_ != nullptr && this->sourceImageId_ != nullptr && this->systemDiskSize_ != nullptr; };
    // buildArgs Field Functions 
    bool hasBuildArgs() const { return this->buildArgs_ != nullptr;};
    void deleteBuildArgs() { this->buildArgs_ = nullptr;};
    inline const vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs> & buildArgs() const { DARABONBA_PTR_GET_CONST(buildArgs_, vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs>) };
    inline vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs> buildArgs() { DARABONBA_PTR_GET(buildArgs_, vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs>) };
    inline UpdateArtifactRequestArtifactBuildProperty& setBuildArgs(const vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs> & buildArgs) { DARABONBA_PTR_SET_VALUE(buildArgs_, buildArgs) };
    inline UpdateArtifactRequestArtifactBuildProperty& setBuildArgs(vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs> && buildArgs) { DARABONBA_PTR_SET_RVALUE(buildArgs_, buildArgs) };


    // codeRepo Field Functions 
    bool hasCodeRepo() const { return this->codeRepo_ != nullptr;};
    void deleteCodeRepo() { this->codeRepo_ = nullptr;};
    inline const Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo & codeRepo() const { DARABONBA_PTR_GET_CONST(codeRepo_, Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo) };
    inline Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo codeRepo() { DARABONBA_PTR_GET(codeRepo_, Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo) };
    inline UpdateArtifactRequestArtifactBuildProperty& setCodeRepo(const Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo & codeRepo) { DARABONBA_PTR_SET_VALUE(codeRepo_, codeRepo) };
    inline UpdateArtifactRequestArtifactBuildProperty& setCodeRepo(Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo && codeRepo) { DARABONBA_PTR_SET_RVALUE(codeRepo_, codeRepo) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline UpdateArtifactRequestArtifactBuildProperty& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string commandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline UpdateArtifactRequestArtifactBuildProperty& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // dockerfilePath Field Functions 
    bool hasDockerfilePath() const { return this->dockerfilePath_ != nullptr;};
    void deleteDockerfilePath() { this->dockerfilePath_ = nullptr;};
    inline string dockerfilePath() const { DARABONBA_PTR_GET_DEFAULT(dockerfilePath_, "") };
    inline UpdateArtifactRequestArtifactBuildProperty& setDockerfilePath(string dockerfilePath) { DARABONBA_PTR_SET_VALUE(dockerfilePath_, dockerfilePath) };


    // enableGpu Field Functions 
    bool hasEnableGpu() const { return this->enableGpu_ != nullptr;};
    void deleteEnableGpu() { this->enableGpu_ = nullptr;};
    inline bool enableGpu() const { DARABONBA_PTR_GET_DEFAULT(enableGpu_, false) };
    inline UpdateArtifactRequestArtifactBuildProperty& setEnableGpu(bool enableGpu) { DARABONBA_PTR_SET_VALUE(enableGpu_, enableGpu) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateArtifactRequestArtifactBuildProperty& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceContainerImage Field Functions 
    bool hasSourceContainerImage() const { return this->sourceContainerImage_ != nullptr;};
    void deleteSourceContainerImage() { this->sourceContainerImage_ = nullptr;};
    inline string sourceContainerImage() const { DARABONBA_PTR_GET_DEFAULT(sourceContainerImage_, "") };
    inline UpdateArtifactRequestArtifactBuildProperty& setSourceContainerImage(string sourceContainerImage) { DARABONBA_PTR_SET_VALUE(sourceContainerImage_, sourceContainerImage) };


    // sourceImageId Field Functions 
    bool hasSourceImageId() const { return this->sourceImageId_ != nullptr;};
    void deleteSourceImageId() { this->sourceImageId_ = nullptr;};
    inline string sourceImageId() const { DARABONBA_PTR_GET_DEFAULT(sourceImageId_, "") };
    inline UpdateArtifactRequestArtifactBuildProperty& setSourceImageId(string sourceImageId) { DARABONBA_PTR_SET_VALUE(sourceImageId_, sourceImageId) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline UpdateArtifactRequestArtifactBuildProperty& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The build arguments used during the image build process.
    // 
    // >  This parameter is available only if the ArtifactBuildType is Dockerfile type.
    std::shared_ptr<vector<Models::UpdateArtifactRequestArtifactBuildPropertyBuildArgs>> buildArgs_ = nullptr;
    // The address of the code repository.
    // 
    // >  This parameter is available only if the ArtifactBuildType is Dockerfile or Buildpacks type.
    std::shared_ptr<Models::UpdateArtifactRequestArtifactBuildPropertyCodeRepo> codeRepo_ = nullptr;
    // The command content.
    // 
    // >  This parameter is available only if the deployment package is a ecs image type.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The command type. Valid values:
    // 
    // *   RunBatScript: batch command, applicable to Windows instances.
    // *   RunPowerShellScript: PowerShell command, applicable to Windows instances.
    // *   RunShellScript: shell command, applicable to Linux instances.
    // 
    // >  This parameter is available only if the deployment package is a ecs image type.
    std::shared_ptr<string> commandType_ = nullptr;
    // The relative path to the Dockerfile within the code repository.
    // 
    // >  This parameter is available only if the ArtifactBuildType is Dockerfile type.
    std::shared_ptr<string> dockerfilePath_ = nullptr;
    // Whether GPU is required. CPU instance is used by default.
    std::shared_ptr<bool> enableGpu_ = nullptr;
    // The region ID where the source mirror image is located.
    // 
    // >  This parameter is available only if the deployment package is a ecs image type.
    std::shared_ptr<string> regionId_ = nullptr;
    // The pull location of the source container image. This is used for the command docker pull ${SourceContainerImage}.
    // 
    // >  This parameter is available only if the ArtifactBuildType is ContainerImage type.
    std::shared_ptr<string> sourceContainerImage_ = nullptr;
    // The source image id. Supported Types:
    // 
    // - Image ID: Pass the Image ID of the Ecs image directly.
    // 
    // - OOS Common Parameter Name: Obtain the corresponding Image ID automatically by using the OOS common parameter name.
    // 
    // >  This parameter is available only if the deployment package is a ecs image type.
    std::shared_ptr<string> sourceImageId_ = nullptr;
    // The size of the system disk. Unit: GiB.
    // 
    // >  The system disk must be at least as large as the image.
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
