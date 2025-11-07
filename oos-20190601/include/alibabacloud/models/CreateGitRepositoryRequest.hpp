// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGITREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGITREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateGitRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGitRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceRepoBranch, sourceRepoBranch_);
      DARABONBA_PTR_TO_JSON(SourceRepoName, sourceRepoName_);
      DARABONBA_PTR_TO_JSON(SourceRepoOwner, sourceRepoOwner_);
      DARABONBA_PTR_TO_JSON(TargetRepoName, targetRepoName_);
      DARABONBA_PTR_TO_JSON(TargetRepoOwner, targetRepoOwner_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGitRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceRepoBranch, sourceRepoBranch_);
      DARABONBA_PTR_FROM_JSON(SourceRepoName, sourceRepoName_);
      DARABONBA_PTR_FROM_JSON(SourceRepoOwner, sourceRepoOwner_);
      DARABONBA_PTR_FROM_JSON(TargetRepoName, targetRepoName_);
      DARABONBA_PTR_FROM_JSON(TargetRepoOwner, targetRepoOwner_);
    };
    CreateGitRepositoryRequest() = default ;
    CreateGitRepositoryRequest(const CreateGitRepositoryRequest &) = default ;
    CreateGitRepositoryRequest(CreateGitRepositoryRequest &&) = default ;
    CreateGitRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGitRepositoryRequest() = default ;
    CreateGitRepositoryRequest& operator=(const CreateGitRepositoryRequest &) = default ;
    CreateGitRepositoryRequest& operator=(CreateGitRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->isPrivate_ == nullptr && return this->orgId_ == nullptr && return this->owner_ == nullptr && return this->platform_ == nullptr && return this->regionId_ == nullptr
        && return this->sourceRepoBranch_ == nullptr && return this->sourceRepoName_ == nullptr && return this->sourceRepoOwner_ == nullptr && return this->targetRepoName_ == nullptr && return this->targetRepoOwner_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGitRepositoryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline bool isPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
    inline CreateGitRepositoryRequest& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline CreateGitRepositoryRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateGitRepositoryRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateGitRepositoryRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGitRepositoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceRepoBranch Field Functions 
    bool hasSourceRepoBranch() const { return this->sourceRepoBranch_ != nullptr;};
    void deleteSourceRepoBranch() { this->sourceRepoBranch_ = nullptr;};
    inline string sourceRepoBranch() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoBranch_, "") };
    inline CreateGitRepositoryRequest& setSourceRepoBranch(string sourceRepoBranch) { DARABONBA_PTR_SET_VALUE(sourceRepoBranch_, sourceRepoBranch) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string sourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline CreateGitRepositoryRequest& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // sourceRepoOwner Field Functions 
    bool hasSourceRepoOwner() const { return this->sourceRepoOwner_ != nullptr;};
    void deleteSourceRepoOwner() { this->sourceRepoOwner_ = nullptr;};
    inline string sourceRepoOwner() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoOwner_, "") };
    inline CreateGitRepositoryRequest& setSourceRepoOwner(string sourceRepoOwner) { DARABONBA_PTR_SET_VALUE(sourceRepoOwner_, sourceRepoOwner) };


    // targetRepoName Field Functions 
    bool hasTargetRepoName() const { return this->targetRepoName_ != nullptr;};
    void deleteTargetRepoName() { this->targetRepoName_ = nullptr;};
    inline string targetRepoName() const { DARABONBA_PTR_GET_DEFAULT(targetRepoName_, "") };
    inline CreateGitRepositoryRequest& setTargetRepoName(string targetRepoName) { DARABONBA_PTR_SET_VALUE(targetRepoName_, targetRepoName) };


    // targetRepoOwner Field Functions 
    bool hasTargetRepoOwner() const { return this->targetRepoOwner_ != nullptr;};
    void deleteTargetRepoOwner() { this->targetRepoOwner_ = nullptr;};
    inline string targetRepoOwner() const { DARABONBA_PTR_GET_DEFAULT(targetRepoOwner_, "") };
    inline CreateGitRepositoryRequest& setTargetRepoOwner(string targetRepoOwner) { DARABONBA_PTR_SET_VALUE(targetRepoOwner_, targetRepoOwner) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> isPrivate_ = nullptr;
    std::shared_ptr<string> orgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> sourceRepoBranch_ = nullptr;
    std::shared_ptr<string> sourceRepoName_ = nullptr;
    std::shared_ptr<string> sourceRepoOwner_ = nullptr;
    std::shared_ptr<string> targetRepoName_ = nullptr;
    std::shared_ptr<string> targetRepoOwner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
