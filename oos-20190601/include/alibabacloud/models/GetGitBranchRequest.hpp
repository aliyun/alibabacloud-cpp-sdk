// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGITBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGITBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetGitBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGitBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGitBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    GetGitBranchRequest() = default ;
    GetGitBranchRequest(const GetGitBranchRequest &) = default ;
    GetGitBranchRequest(GetGitBranchRequest &&) = default ;
    GetGitBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGitBranchRequest() = default ;
    GetGitBranchRequest& operator=(const GetGitBranchRequest &) = default ;
    GetGitBranchRequest& operator=(GetGitBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branch_ == nullptr
        && return this->orgId_ == nullptr && return this->owner_ == nullptr && return this->platform_ == nullptr && return this->regionId_ == nullptr && return this->repoFullName_ == nullptr
        && return this->repoId_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetGitBranchRequest& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetGitBranchRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetGitBranchRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetGitBranchRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetGitBranchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoFullName Field Functions 
    bool hasRepoFullName() const { return this->repoFullName_ != nullptr;};
    void deleteRepoFullName() { this->repoFullName_ = nullptr;};
    inline string repoFullName() const { DARABONBA_PTR_GET_DEFAULT(repoFullName_, "") };
    inline GetGitBranchRequest& setRepoFullName(string repoFullName) { DARABONBA_PTR_SET_VALUE(repoFullName_, repoFullName) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline int64_t repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, 0L) };
    inline GetGitBranchRequest& setRepoId(int64_t repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> orgId_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repoFullName_ = nullptr;
    std::shared_ptr<int64_t> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
