// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINERUNCODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINERUNCODECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineRunCodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineRunCodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(CommitId, commitId_);
      DARABONBA_PTR_TO_JSON(CommitUrl, commitUrl_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineRunCodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(CommitId, commitId_);
      DARABONBA_PTR_FROM_JSON(CommitUrl, commitUrl_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RepoFullName, repoFullName_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    BuildPipelineRunCodeConfig() = default ;
    BuildPipelineRunCodeConfig(const BuildPipelineRunCodeConfig &) = default ;
    BuildPipelineRunCodeConfig(BuildPipelineRunCodeConfig &&) = default ;
    BuildPipelineRunCodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineRunCodeConfig() = default ;
    BuildPipelineRunCodeConfig& operator=(const BuildPipelineRunCodeConfig &) = default ;
    BuildPipelineRunCodeConfig& operator=(BuildPipelineRunCodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->branchName_ != nullptr && this->commitId_ != nullptr && this->commitUrl_ != nullptr && this->organizationId_ != nullptr && this->provider_ != nullptr
        && this->repoFullName_ != nullptr && this->repoId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline BuildPipelineRunCodeConfig& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string branchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline BuildPipelineRunCodeConfig& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline BuildPipelineRunCodeConfig& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // commitUrl Field Functions 
    bool hasCommitUrl() const { return this->commitUrl_ != nullptr;};
    void deleteCommitUrl() { this->commitUrl_ = nullptr;};
    inline string commitUrl() const { DARABONBA_PTR_GET_DEFAULT(commitUrl_, "") };
    inline BuildPipelineRunCodeConfig& setCommitUrl(string commitUrl) { DARABONBA_PTR_SET_VALUE(commitUrl_, commitUrl) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline BuildPipelineRunCodeConfig& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline BuildPipelineRunCodeConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // repoFullName Field Functions 
    bool hasRepoFullName() const { return this->repoFullName_ != nullptr;};
    void deleteRepoFullName() { this->repoFullName_ = nullptr;};
    inline string repoFullName() const { DARABONBA_PTR_GET_DEFAULT(repoFullName_, "") };
    inline BuildPipelineRunCodeConfig& setRepoFullName(string repoFullName) { DARABONBA_PTR_SET_VALUE(repoFullName_, repoFullName) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline BuildPipelineRunCodeConfig& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


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
