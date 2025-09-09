// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUESTARTIFACTBUILDPROPERTYCODEREPO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTREQUESTARTIFACTBUILDPROPERTYCODEREPO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateArtifactRequestArtifactBuildPropertyCodeRepo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactRequestArtifactBuildPropertyCodeRepo& obj) { 
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactRequestArtifactBuildPropertyCodeRepo& obj) { 
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
    };
    UpdateArtifactRequestArtifactBuildPropertyCodeRepo() = default ;
    UpdateArtifactRequestArtifactBuildPropertyCodeRepo(const UpdateArtifactRequestArtifactBuildPropertyCodeRepo &) = default ;
    UpdateArtifactRequestArtifactBuildPropertyCodeRepo(UpdateArtifactRequestArtifactBuildPropertyCodeRepo &&) = default ;
    UpdateArtifactRequestArtifactBuildPropertyCodeRepo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactRequestArtifactBuildPropertyCodeRepo() = default ;
    UpdateArtifactRequestArtifactBuildPropertyCodeRepo& operator=(const UpdateArtifactRequestArtifactBuildPropertyCodeRepo &) = default ;
    UpdateArtifactRequestArtifactBuildPropertyCodeRepo& operator=(UpdateArtifactRequestArtifactBuildPropertyCodeRepo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->branch_ != nullptr
        && this->endpoint_ != nullptr && this->orgId_ != nullptr && this->owner_ != nullptr && this->platform_ != nullptr && this->repoId_ != nullptr
        && this->repoName_ != nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline int64_t repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, 0L) };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setRepoId(int64_t repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline UpdateArtifactRequestArtifactBuildPropertyCodeRepo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


  protected:
    // The name of the branch in the code repository.
    std::shared_ptr<string> branch_ = nullptr;
    // The endpoint. 
    // The URL address used to access the privately deployed GitLab instance.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The organization ID.
    std::shared_ptr<string> orgId_ = nullptr;
    // The owner of the code repository.
    // 
    // >  This parameter is available only if the git repository is private.
    std::shared_ptr<string> owner_ = nullptr;
    // The platform type. Valid values:
    // 
    // - github
    // 
    // - gitee
    // 
    // - gitlab
    // 
    // - codeup
    std::shared_ptr<string> platform_ = nullptr;
    // The repository ID.
    std::shared_ptr<int64_t> repoId_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
