// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateArtifactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildProperty, artifactBuildProperty_);
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(ArtifactProperty, artifactProperty_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(SupportRegionIds, supportRegionIds_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    UpdateArtifactRequest() = default ;
    UpdateArtifactRequest(const UpdateArtifactRequest &) = default ;
    UpdateArtifactRequest(UpdateArtifactRequest &&) = default ;
    UpdateArtifactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactRequest() = default ;
    UpdateArtifactRequest& operator=(const UpdateArtifactRequest &) = default ;
    UpdateArtifactRequest& operator=(UpdateArtifactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ArtifactProperty : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ArtifactProperty& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityVersion, commodityVersion_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoType, repoType_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, ArtifactProperty& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityVersion, commodityVersion_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      ArtifactProperty() = default ;
      ArtifactProperty(const ArtifactProperty &) = default ;
      ArtifactProperty(ArtifactProperty &&) = default ;
      ArtifactProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ArtifactProperty() = default ;
      ArtifactProperty& operator=(const ArtifactProperty &) = default ;
      ArtifactProperty& operator=(ArtifactProperty &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->commodityVersion_ == nullptr && this->imageId_ == nullptr && this->regionId_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr
        && this->repoType_ == nullptr && this->tag_ == nullptr && this->url_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline ArtifactProperty& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityVersion Field Functions 
      bool hasCommodityVersion() const { return this->commodityVersion_ != nullptr;};
      void deleteCommodityVersion() { this->commodityVersion_ = nullptr;};
      inline string getCommodityVersion() const { DARABONBA_PTR_GET_DEFAULT(commodityVersion_, "") };
      inline ArtifactProperty& setCommodityVersion(string commodityVersion) { DARABONBA_PTR_SET_VALUE(commodityVersion_, commodityVersion) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ArtifactProperty& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ArtifactProperty& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline ArtifactProperty& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ArtifactProperty& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline ArtifactProperty& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ArtifactProperty& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline ArtifactProperty& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The code of the Alibaba Cloud Marketplace product.
      // 
      // You can obtain the product code in the [Alibaba Cloud Marketplace console](https://market.console.aliyun.com/?spm=a2c4g.11186623.0.0.599d6787eMBBxu#/apiTools?_k=d7j8gk).
      // 
      // > This parameter is available only for image artifacts.
      shared_ptr<string> commodityCode_ {};
      // The version of the Alibaba Cloud Marketplace product.
      // 
      // You can view the product version on the [Alibaba Cloud Marketplace page](https://market.aliyun.com/?spm=5176.24779694.0.0.b2144d22sksKM5).
      // 
      // > This parameter is available only for image artifacts.
      shared_ptr<string> commodityVersion_ {};
      // The ID of the image.
      // 
      // After you specify a region ID, call the [DescribeImages](https://help.aliyun.com/document_detail/2679797.html) operation to query available image IDs in that region.
      // 
      // > This parameter is available only for image artifacts.
      shared_ptr<string> imageId_ {};
      // The region of the image.
      // 
      // > This parameter is available only for image artifacts.
      shared_ptr<string> regionId_ {};
      // The ID of the image repository.
      // 
      // To obtain the image repository ID, call the [ListAcrImageRepositories](https://help.aliyun.com/document_detail/2539919.html) operation.
      // 
      // > This parameter is available only for container image artifacts and Helm Chart artifacts.
      shared_ptr<string> repoId_ {};
      // The name of the image repository.
      // 
      // > This parameter is available only for container image artifacts and Helm Chart artifacts.
      shared_ptr<string> repoName_ {};
      // The permission type of the repository. Valid values:
      // 
      // - `Public`: public repository
      // 
      // - `Private`: private repository
      // 
      // > This parameter is available only for container image artifacts and Helm Chart artifacts.
      shared_ptr<string> repoType_ {};
      // The version tag of the image in the repository.
      // 
      // To obtain the version tag, call the [ListAcrImageTags](https://help.aliyun.com/document_detail/2539920.html) operation.
      // 
      // > This parameter is available only for container image artifacts and Helm Chart artifacts.
      shared_ptr<string> tag_ {};
      // The URL of the file artifact.
      // 
      // You can upload the file and obtain its URL in the [Object Storage Service console](https://oss.console.aliyun.com/bucket).
      shared_ptr<string> url_ {};
    };

    class ArtifactBuildProperty : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ArtifactBuildProperty& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ArtifactBuildProperty& obj) { 
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
      ArtifactBuildProperty() = default ;
      ArtifactBuildProperty(const ArtifactBuildProperty &) = default ;
      ArtifactBuildProperty(ArtifactBuildProperty &&) = default ;
      ArtifactBuildProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ArtifactBuildProperty() = default ;
      ArtifactBuildProperty& operator=(const ArtifactBuildProperty &) = default ;
      ArtifactBuildProperty& operator=(ArtifactBuildProperty &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CodeRepo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodeRepo& obj) { 
          DARABONBA_PTR_TO_JSON(Branch, branch_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(RepoId, repoId_);
          DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        };
        friend void from_json(const Darabonba::Json& j, CodeRepo& obj) { 
          DARABONBA_PTR_FROM_JSON(Branch, branch_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
          DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        };
        CodeRepo() = default ;
        CodeRepo(const CodeRepo &) = default ;
        CodeRepo(CodeRepo &&) = default ;
        CodeRepo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodeRepo() = default ;
        CodeRepo& operator=(const CodeRepo &) = default ;
        CodeRepo& operator=(CodeRepo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->branch_ == nullptr
        && this->endpoint_ == nullptr && this->orgId_ == nullptr && this->owner_ == nullptr && this->platform_ == nullptr && this->repoId_ == nullptr
        && this->repoName_ == nullptr; };
        // branch Field Functions 
        bool hasBranch() const { return this->branch_ != nullptr;};
        void deleteBranch() { this->branch_ = nullptr;};
        inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
        inline CodeRepo& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline CodeRepo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // orgId Field Functions 
        bool hasOrgId() const { return this->orgId_ != nullptr;};
        void deleteOrgId() { this->orgId_ = nullptr;};
        inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
        inline CodeRepo& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline CodeRepo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline CodeRepo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // repoId Field Functions 
        bool hasRepoId() const { return this->repoId_ != nullptr;};
        void deleteRepoId() { this->repoId_ = nullptr;};
        inline int64_t getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, 0L) };
        inline CodeRepo& setRepoId(int64_t repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


        // repoName Field Functions 
        bool hasRepoName() const { return this->repoName_ != nullptr;};
        void deleteRepoName() { this->repoName_ = nullptr;};
        inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
        inline CodeRepo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      protected:
        // The branch name of the code repository.
        shared_ptr<string> branch_ {};
        // The endpoint. This parameter is required for a private GitLab deployment.
        shared_ptr<string> endpoint_ {};
        // The organization ID.
        shared_ptr<string> orgId_ {};
        // The owner of the code repository.
        // 
        // > This parameter is required only if the code repository is private.
        shared_ptr<string> owner_ {};
        // The platform of the code repository. Valid values:
        // 
        // - github
        // 
        // - gitee
        // 
        // - gitlab
        // 
        // - codeup
        shared_ptr<string> platform_ {};
        // The repository ID.
        shared_ptr<int64_t> repoId_ {};
        // The repository name.
        shared_ptr<string> repoName_ {};
      };

      class BuildArgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BuildArgs& obj) { 
          DARABONBA_PTR_TO_JSON(ArgumentName, argumentName_);
          DARABONBA_PTR_TO_JSON(ArgumentValue, argumentValue_);
        };
        friend void from_json(const Darabonba::Json& j, BuildArgs& obj) { 
          DARABONBA_PTR_FROM_JSON(ArgumentName, argumentName_);
          DARABONBA_PTR_FROM_JSON(ArgumentValue, argumentValue_);
        };
        BuildArgs() = default ;
        BuildArgs(const BuildArgs &) = default ;
        BuildArgs(BuildArgs &&) = default ;
        BuildArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BuildArgs() = default ;
        BuildArgs& operator=(const BuildArgs &) = default ;
        BuildArgs& operator=(BuildArgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->argumentName_ == nullptr
        && this->argumentValue_ == nullptr; };
        // argumentName Field Functions 
        bool hasArgumentName() const { return this->argumentName_ != nullptr;};
        void deleteArgumentName() { this->argumentName_ = nullptr;};
        inline string getArgumentName() const { DARABONBA_PTR_GET_DEFAULT(argumentName_, "") };
        inline BuildArgs& setArgumentName(string argumentName) { DARABONBA_PTR_SET_VALUE(argumentName_, argumentName) };


        // argumentValue Field Functions 
        bool hasArgumentValue() const { return this->argumentValue_ != nullptr;};
        void deleteArgumentValue() { this->argumentValue_ = nullptr;};
        inline string getArgumentValue() const { DARABONBA_PTR_GET_DEFAULT(argumentValue_, "") };
        inline BuildArgs& setArgumentValue(string argumentValue) { DARABONBA_PTR_SET_VALUE(argumentValue_, argumentValue) };


      protected:
        // The name of the build argument.
        shared_ptr<string> argumentName_ {};
        // The value of the build argument.
        shared_ptr<string> argumentValue_ {};
      };

      virtual bool empty() const override { return this->buildArgs_ == nullptr
        && this->codeRepo_ == nullptr && this->commandContent_ == nullptr && this->commandType_ == nullptr && this->dockerfilePath_ == nullptr && this->enableGpu_ == nullptr
        && this->regionId_ == nullptr && this->sourceContainerImage_ == nullptr && this->sourceImageId_ == nullptr && this->systemDiskSize_ == nullptr; };
      // buildArgs Field Functions 
      bool hasBuildArgs() const { return this->buildArgs_ != nullptr;};
      void deleteBuildArgs() { this->buildArgs_ = nullptr;};
      inline const vector<ArtifactBuildProperty::BuildArgs> & getBuildArgs() const { DARABONBA_PTR_GET_CONST(buildArgs_, vector<ArtifactBuildProperty::BuildArgs>) };
      inline vector<ArtifactBuildProperty::BuildArgs> getBuildArgs() { DARABONBA_PTR_GET(buildArgs_, vector<ArtifactBuildProperty::BuildArgs>) };
      inline ArtifactBuildProperty& setBuildArgs(const vector<ArtifactBuildProperty::BuildArgs> & buildArgs) { DARABONBA_PTR_SET_VALUE(buildArgs_, buildArgs) };
      inline ArtifactBuildProperty& setBuildArgs(vector<ArtifactBuildProperty::BuildArgs> && buildArgs) { DARABONBA_PTR_SET_RVALUE(buildArgs_, buildArgs) };


      // codeRepo Field Functions 
      bool hasCodeRepo() const { return this->codeRepo_ != nullptr;};
      void deleteCodeRepo() { this->codeRepo_ = nullptr;};
      inline const ArtifactBuildProperty::CodeRepo & getCodeRepo() const { DARABONBA_PTR_GET_CONST(codeRepo_, ArtifactBuildProperty::CodeRepo) };
      inline ArtifactBuildProperty::CodeRepo getCodeRepo() { DARABONBA_PTR_GET(codeRepo_, ArtifactBuildProperty::CodeRepo) };
      inline ArtifactBuildProperty& setCodeRepo(const ArtifactBuildProperty::CodeRepo & codeRepo) { DARABONBA_PTR_SET_VALUE(codeRepo_, codeRepo) };
      inline ArtifactBuildProperty& setCodeRepo(ArtifactBuildProperty::CodeRepo && codeRepo) { DARABONBA_PTR_SET_RVALUE(codeRepo_, codeRepo) };


      // commandContent Field Functions 
      bool hasCommandContent() const { return this->commandContent_ != nullptr;};
      void deleteCommandContent() { this->commandContent_ = nullptr;};
      inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
      inline ArtifactBuildProperty& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


      // commandType Field Functions 
      bool hasCommandType() const { return this->commandType_ != nullptr;};
      void deleteCommandType() { this->commandType_ = nullptr;};
      inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
      inline ArtifactBuildProperty& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


      // dockerfilePath Field Functions 
      bool hasDockerfilePath() const { return this->dockerfilePath_ != nullptr;};
      void deleteDockerfilePath() { this->dockerfilePath_ = nullptr;};
      inline string getDockerfilePath() const { DARABONBA_PTR_GET_DEFAULT(dockerfilePath_, "") };
      inline ArtifactBuildProperty& setDockerfilePath(string dockerfilePath) { DARABONBA_PTR_SET_VALUE(dockerfilePath_, dockerfilePath) };


      // enableGpu Field Functions 
      bool hasEnableGpu() const { return this->enableGpu_ != nullptr;};
      void deleteEnableGpu() { this->enableGpu_ = nullptr;};
      inline bool getEnableGpu() const { DARABONBA_PTR_GET_DEFAULT(enableGpu_, false) };
      inline ArtifactBuildProperty& setEnableGpu(bool enableGpu) { DARABONBA_PTR_SET_VALUE(enableGpu_, enableGpu) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ArtifactBuildProperty& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sourceContainerImage Field Functions 
      bool hasSourceContainerImage() const { return this->sourceContainerImage_ != nullptr;};
      void deleteSourceContainerImage() { this->sourceContainerImage_ = nullptr;};
      inline string getSourceContainerImage() const { DARABONBA_PTR_GET_DEFAULT(sourceContainerImage_, "") };
      inline ArtifactBuildProperty& setSourceContainerImage(string sourceContainerImage) { DARABONBA_PTR_SET_VALUE(sourceContainerImage_, sourceContainerImage) };


      // sourceImageId Field Functions 
      bool hasSourceImageId() const { return this->sourceImageId_ != nullptr;};
      void deleteSourceImageId() { this->sourceImageId_ = nullptr;};
      inline string getSourceImageId() const { DARABONBA_PTR_GET_DEFAULT(sourceImageId_, "") };
      inline ArtifactBuildProperty& setSourceImageId(string sourceImageId) { DARABONBA_PTR_SET_VALUE(sourceImageId_, sourceImageId) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline ArtifactBuildProperty& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The build arguments.
      // 
      // > This parameter is available only when \\`ArtifactBuildType\\` is set to \\`Dockerfile\\`.
      shared_ptr<vector<ArtifactBuildProperty::BuildArgs>> buildArgs_ {};
      // The code repository address.
      // 
      // > This parameter is available only when \\`ArtifactBuildType\\` is set to \\`Dockerfile\\` or \\`Buildpacks\\`.
      shared_ptr<ArtifactBuildProperty::CodeRepo> codeRepo_ {};
      // The content of the command.
      // 
      // > This parameter is available only for ECS image artifacts.
      shared_ptr<string> commandContent_ {};
      // The command type. Valid values:
      // 
      // - RunBatScript: The command is a batch script that runs on a Windows instance.
      // 
      // - RunPowerShellScript: The command is a PowerShell script that runs on a Windows instance.
      // 
      // - RunShellScript: The command is a shell script that runs on a Linux instance.
      // 
      // > This parameter is available only for ECS image artifacts.
      shared_ptr<string> commandType_ {};
      // The relative path of the Dockerfile in the code repository.
      // 
      // Default value: Dockerfile
      // 
      // > This parameter is available only when \\`ArtifactBuildType\\` is set to \\`Dockerfile\\`.
      shared_ptr<string> dockerfilePath_ {};
      // Specifies whether to use a GPU-accelerated instance for the build. By default, a CPU instance is used.
      shared_ptr<bool> enableGpu_ {};
      // The ID of the region where the source image is located.
      // 
      // > This parameter is available only for ECS image artifacts.
      shared_ptr<string> regionId_ {};
      // The pull URL of the source container image.
      // 
      // Used for \\`docker pull ${SourceContainerImage}\\`.
      // 
      // > This parameter is available only when \\`ArtifactBuildType\\` is set to \\`ContainerImage\\`.
      shared_ptr<string> sourceContainerImage_ {};
      // The source image ID. The following types are supported:
      // 
      // - Image ID: The ID of the ECS image.
      // 
      // - OOS common parameter name: The system automatically obtains the corresponding image ID based on the OOS common parameter name.
      // 
      // > This parameter is available only for ECS image artifacts.
      shared_ptr<string> sourceImageId_ {};
      // The size of the system disk. Unit: GiB.
      shared_ptr<int64_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->artifactBuildProperty_ == nullptr
        && this->artifactId_ == nullptr && this->artifactProperty_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->permissionType_ == nullptr
        && this->supportRegionIds_ == nullptr && this->versionName_ == nullptr; };
    // artifactBuildProperty Field Functions 
    bool hasArtifactBuildProperty() const { return this->artifactBuildProperty_ != nullptr;};
    void deleteArtifactBuildProperty() { this->artifactBuildProperty_ = nullptr;};
    inline const UpdateArtifactRequest::ArtifactBuildProperty & getArtifactBuildProperty() const { DARABONBA_PTR_GET_CONST(artifactBuildProperty_, UpdateArtifactRequest::ArtifactBuildProperty) };
    inline UpdateArtifactRequest::ArtifactBuildProperty getArtifactBuildProperty() { DARABONBA_PTR_GET(artifactBuildProperty_, UpdateArtifactRequest::ArtifactBuildProperty) };
    inline UpdateArtifactRequest& setArtifactBuildProperty(const UpdateArtifactRequest::ArtifactBuildProperty & artifactBuildProperty) { DARABONBA_PTR_SET_VALUE(artifactBuildProperty_, artifactBuildProperty) };
    inline UpdateArtifactRequest& setArtifactBuildProperty(UpdateArtifactRequest::ArtifactBuildProperty && artifactBuildProperty) { DARABONBA_PTR_SET_RVALUE(artifactBuildProperty_, artifactBuildProperty) };


    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline UpdateArtifactRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // artifactProperty Field Functions 
    bool hasArtifactProperty() const { return this->artifactProperty_ != nullptr;};
    void deleteArtifactProperty() { this->artifactProperty_ = nullptr;};
    inline const UpdateArtifactRequest::ArtifactProperty & getArtifactProperty() const { DARABONBA_PTR_GET_CONST(artifactProperty_, UpdateArtifactRequest::ArtifactProperty) };
    inline UpdateArtifactRequest::ArtifactProperty getArtifactProperty() { DARABONBA_PTR_GET(artifactProperty_, UpdateArtifactRequest::ArtifactProperty) };
    inline UpdateArtifactRequest& setArtifactProperty(const UpdateArtifactRequest::ArtifactProperty & artifactProperty) { DARABONBA_PTR_SET_VALUE(artifactProperty_, artifactProperty) };
    inline UpdateArtifactRequest& setArtifactProperty(UpdateArtifactRequest::ArtifactProperty && artifactProperty) { DARABONBA_PTR_SET_RVALUE(artifactProperty_, artifactProperty) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateArtifactRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateArtifactRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline UpdateArtifactRequest& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // supportRegionIds Field Functions 
    bool hasSupportRegionIds() const { return this->supportRegionIds_ != nullptr;};
    void deleteSupportRegionIds() { this->supportRegionIds_ = nullptr;};
    inline const vector<string> & getSupportRegionIds() const { DARABONBA_PTR_GET_CONST(supportRegionIds_, vector<string>) };
    inline vector<string> getSupportRegionIds() { DARABONBA_PTR_GET(supportRegionIds_, vector<string>) };
    inline UpdateArtifactRequest& setSupportRegionIds(const vector<string> & supportRegionIds) { DARABONBA_PTR_SET_VALUE(supportRegionIds_, supportRegionIds) };
    inline UpdateArtifactRequest& setSupportRegionIds(vector<string> && supportRegionIds) { DARABONBA_PTR_SET_RVALUE(supportRegionIds_, supportRegionIds) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline UpdateArtifactRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The properties for building the artifact. This is used for managed artifact builds.
    shared_ptr<UpdateArtifactRequest::ArtifactBuildProperty> artifactBuildProperty_ {};
    // The ID of the artifact.
    // 
    // To obtain the artifact ID, call the [ListArtifacts](https://help.aliyun.com/document_detail/469993.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> artifactId_ {};
    // The properties of the artifact.
    shared_ptr<UpdateArtifactRequest::ArtifactProperty> artifactProperty_ {};
    // A client token to ensure the idempotence of the request. Generate a unique token for each request from your client. The **ClientToken** can contain only ASCII characters and must be no more than 64 characters long.
    shared_ptr<string> clientToken_ {};
    // The description of the artifact.
    shared_ptr<string> description_ {};
    // The permission type. This parameter is valid for container image artifacts and Helm Chart artifacts. The value can be changed only from \\`Automatic\\` to \\`Public\\`. Valid values:
    // 
    // - Public
    // 
    // - Automatic
    shared_ptr<string> permissionType_ {};
    // The IDs of regions to which the image can be distributed.
    shared_ptr<vector<string>> supportRegionIds_ {};
    // The name of the artifact version.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
