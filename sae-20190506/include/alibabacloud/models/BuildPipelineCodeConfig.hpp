// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINECODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINECODECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineCodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineCodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(CommitId, commitId_);
      DARABONBA_PTR_TO_JSON(CommitUrl, commitUrl_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineCodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(CommitId, commitId_);
      DARABONBA_PTR_FROM_JSON(CommitUrl, commitUrl_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    BuildPipelineCodeConfig() = default ;
    BuildPipelineCodeConfig(const BuildPipelineCodeConfig &) = default ;
    BuildPipelineCodeConfig(BuildPipelineCodeConfig &&) = default ;
    BuildPipelineCodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineCodeConfig() = default ;
    BuildPipelineCodeConfig& operator=(const BuildPipelineCodeConfig &) = default ;
    BuildPipelineCodeConfig& operator=(BuildPipelineCodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->branchName_ == nullptr && return this->commitId_ == nullptr && return this->commitUrl_ == nullptr && return this->organizationId_ == nullptr && return this->provider_ == nullptr
        && return this->repoFullName_ == nullptr && return this->repoId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline BuildPipelineCodeConfig& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline BuildPipelineCodeConfig& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline BuildPipelineCodeConfig& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // commitUrl Field Functions 
    bool hasCommitUrl() const { return this->commitUrl_ != nullptr;};
    void deleteCommitUrl() { this->commitUrl_ = nullptr;};
    inline string commitUrl() const { DARABONBA_PTR_GET_DEFAULT(commitUrl_, "") };
    inline BuildPipelineCodeConfig& setCommitUrl(string commitUrl) { DARABONBA_PTR_SET_VALUE(commitUrl_, commitUrl) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline BuildPipelineCodeConfig& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline BuildPipelineCodeConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // repoFullName Field Functions 
    bool hasRepoFullName() const { return this->repoFullName_ != nullptr;};
    void deleteRepoFullName() { this->repoFullName_ = nullptr;};
    inline string repoFullName() const { DARABONBA_PTR_GET_DEFAULT(repoFullName_, "") };
    inline BuildPipelineCodeConfig& setRepoFullName(string repoFullName) { DARABONBA_PTR_SET_VALUE(repoFullName_, repoFullName) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline BuildPipelineCodeConfig& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> branchName_ = nullptr;
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> commitUrl_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> provider_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repoFullName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
