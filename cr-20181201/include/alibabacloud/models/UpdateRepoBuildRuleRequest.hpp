// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOBUILDRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOBUILDRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateRepoBuildRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepoBuildRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildArgs, buildArgs_);
      DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_TO_JSON(DockerfileLocation, dockerfileLocation_);
      DARABONBA_PTR_TO_JSON(DockerfileName, dockerfileName_);
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
      DARABONBA_PTR_TO_JSON(PushName, pushName_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepoBuildRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildArgs, buildArgs_);
      DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_FROM_JSON(DockerfileLocation, dockerfileLocation_);
      DARABONBA_PTR_FROM_JSON(DockerfileName, dockerfileName_);
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
      DARABONBA_PTR_FROM_JSON(PushName, pushName_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    UpdateRepoBuildRuleRequest() = default ;
    UpdateRepoBuildRuleRequest(const UpdateRepoBuildRuleRequest &) = default ;
    UpdateRepoBuildRuleRequest(UpdateRepoBuildRuleRequest &&) = default ;
    UpdateRepoBuildRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepoBuildRuleRequest() = default ;
    UpdateRepoBuildRuleRequest& operator=(const UpdateRepoBuildRuleRequest &) = default ;
    UpdateRepoBuildRuleRequest& operator=(UpdateRepoBuildRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildArgs_ != nullptr
        && this->buildRuleId_ != nullptr && this->dockerfileLocation_ != nullptr && this->dockerfileName_ != nullptr && this->imageTag_ != nullptr && this->instanceId_ != nullptr
        && this->platforms_ != nullptr && this->pushName_ != nullptr && this->pushType_ != nullptr && this->repoId_ != nullptr; };
    // buildArgs Field Functions 
    bool hasBuildArgs() const { return this->buildArgs_ != nullptr;};
    void deleteBuildArgs() { this->buildArgs_ = nullptr;};
    inline const vector<string> & buildArgs() const { DARABONBA_PTR_GET_CONST(buildArgs_, vector<string>) };
    inline vector<string> buildArgs() { DARABONBA_PTR_GET(buildArgs_, vector<string>) };
    inline UpdateRepoBuildRuleRequest& setBuildArgs(const vector<string> & buildArgs) { DARABONBA_PTR_SET_VALUE(buildArgs_, buildArgs) };
    inline UpdateRepoBuildRuleRequest& setBuildArgs(vector<string> && buildArgs) { DARABONBA_PTR_SET_RVALUE(buildArgs_, buildArgs) };


    // buildRuleId Field Functions 
    bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
    void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
    inline string buildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
    inline UpdateRepoBuildRuleRequest& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


    // dockerfileLocation Field Functions 
    bool hasDockerfileLocation() const { return this->dockerfileLocation_ != nullptr;};
    void deleteDockerfileLocation() { this->dockerfileLocation_ = nullptr;};
    inline string dockerfileLocation() const { DARABONBA_PTR_GET_DEFAULT(dockerfileLocation_, "") };
    inline UpdateRepoBuildRuleRequest& setDockerfileLocation(string dockerfileLocation) { DARABONBA_PTR_SET_VALUE(dockerfileLocation_, dockerfileLocation) };


    // dockerfileName Field Functions 
    bool hasDockerfileName() const { return this->dockerfileName_ != nullptr;};
    void deleteDockerfileName() { this->dockerfileName_ = nullptr;};
    inline string dockerfileName() const { DARABONBA_PTR_GET_DEFAULT(dockerfileName_, "") };
    inline UpdateRepoBuildRuleRequest& setDockerfileName(string dockerfileName) { DARABONBA_PTR_SET_VALUE(dockerfileName_, dockerfileName) };


    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline UpdateRepoBuildRuleRequest& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRepoBuildRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline const vector<string> & platforms() const { DARABONBA_PTR_GET_CONST(platforms_, vector<string>) };
    inline vector<string> platforms() { DARABONBA_PTR_GET(platforms_, vector<string>) };
    inline UpdateRepoBuildRuleRequest& setPlatforms(const vector<string> & platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };
    inline UpdateRepoBuildRuleRequest& setPlatforms(vector<string> && platforms) { DARABONBA_PTR_SET_RVALUE(platforms_, platforms) };


    // pushName Field Functions 
    bool hasPushName() const { return this->pushName_ != nullptr;};
    void deletePushName() { this->pushName_ = nullptr;};
    inline string pushName() const { DARABONBA_PTR_GET_DEFAULT(pushName_, "") };
    inline UpdateRepoBuildRuleRequest& setPushName(string pushName) { DARABONBA_PTR_SET_VALUE(pushName_, pushName) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline UpdateRepoBuildRuleRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline UpdateRepoBuildRuleRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // Building arguments.
    std::shared_ptr<vector<string>> buildArgs_ = nullptr;
    // The ID of the building rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> buildRuleId_ = nullptr;
    // The path of the Dockerfile.
    std::shared_ptr<string> dockerfileLocation_ = nullptr;
    // The name of the Dockerfile.
    std::shared_ptr<string> dockerfileName_ = nullptr;
    // The tag of the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Architecture for image building. Valid values:
    // 
    // *   `linux/amd64`
    // *   `linux/arm64`
    // *   `linux/386`
    // *   `linux/arm/v7`
    // *   `linux/arm/v6`
    // 
    // Default value: `linux/amd64`
    std::shared_ptr<vector<string>> platforms_ = nullptr;
    // The name of the push that triggers the building rule.
    std::shared_ptr<string> pushName_ = nullptr;
    // The type of the push that triggers the building rule. Valid values:
    // 
    // *   `GIT_TAG`: tag push
    // *   `GIT_BRANCH`: branch push
    std::shared_ptr<string> pushType_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
