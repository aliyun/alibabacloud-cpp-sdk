// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITBRANCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGITBRANCHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitBranchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitBranchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitBranchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    ListGitBranchesRequest() = default ;
    ListGitBranchesRequest(const ListGitBranchesRequest &) = default ;
    ListGitBranchesRequest(ListGitBranchesRequest &&) = default ;
    ListGitBranchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitBranchesRequest() = default ;
    ListGitBranchesRequest& operator=(const ListGitBranchesRequest &) = default ;
    ListGitBranchesRequest& operator=(ListGitBranchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->orgId_ == nullptr && this->owner_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->repoFullName_ == nullptr
        && this->repoId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListGitBranchesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline ListGitBranchesRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListGitBranchesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListGitBranchesRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListGitBranchesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoFullName Field Functions 
    bool hasRepoFullName() const { return this->repoFullName_ != nullptr;};
    void deleteRepoFullName() { this->repoFullName_ = nullptr;};
    inline string getRepoFullName() const { DARABONBA_PTR_GET_DEFAULT(repoFullName_, "") };
    inline ListGitBranchesRequest& setRepoFullName(string repoFullName) { DARABONBA_PTR_SET_VALUE(repoFullName_, repoFullName) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline int64_t getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, 0L) };
    inline ListGitBranchesRequest& setRepoId(int64_t repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> orgId_ {};
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // This parameter is required.
    shared_ptr<string> platform_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> repoFullName_ {};
    shared_ptr<int64_t> repoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
