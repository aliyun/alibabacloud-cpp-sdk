// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYRESPONSEBODYREPOSITORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYRESPONSEBODYREPOSITORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepositoryResponseBodyRepositories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryResponseBodyRepositories& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RepoBuildType, repoBuildType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(RepoStatus, repoStatus_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TagImmutability, tagImmutability_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryResponseBodyRepositories& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RepoBuildType, repoBuildType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoStatus, repoStatus_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TagImmutability, tagImmutability_);
    };
    ListRepositoryResponseBodyRepositories() = default ;
    ListRepositoryResponseBodyRepositories(const ListRepositoryResponseBodyRepositories &) = default ;
    ListRepositoryResponseBodyRepositories(ListRepositoryResponseBodyRepositories &&) = default ;
    ListRepositoryResponseBodyRepositories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryResponseBodyRepositories() = default ;
    ListRepositoryResponseBodyRepositories& operator=(const ListRepositoryResponseBodyRepositories &) = default ;
    ListRepositoryResponseBodyRepositories& operator=(ListRepositoryResponseBodyRepositories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->instanceId_ != nullptr && this->modifiedTime_ != nullptr && this->repoBuildType_ != nullptr && this->repoId_ != nullptr && this->repoName_ != nullptr
        && this->repoNamespaceName_ != nullptr && this->repoStatus_ != nullptr && this->repoType_ != nullptr && this->resourceGroupId_ != nullptr && this->summary_ != nullptr
        && this->tagImmutability_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListRepositoryResponseBodyRepositories& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepositoryResponseBodyRepositories& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListRepositoryResponseBodyRepositories& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // repoBuildType Field Functions 
    bool hasRepoBuildType() const { return this->repoBuildType_ != nullptr;};
    void deleteRepoBuildType() { this->repoBuildType_ = nullptr;};
    inline string repoBuildType() const { DARABONBA_PTR_GET_DEFAULT(repoBuildType_, "") };
    inline ListRepositoryResponseBodyRepositories& setRepoBuildType(string repoBuildType) { DARABONBA_PTR_SET_VALUE(repoBuildType_, repoBuildType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListRepositoryResponseBodyRepositories& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListRepositoryResponseBodyRepositories& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListRepositoryResponseBodyRepositories& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // repoStatus Field Functions 
    bool hasRepoStatus() const { return this->repoStatus_ != nullptr;};
    void deleteRepoStatus() { this->repoStatus_ = nullptr;};
    inline string repoStatus() const { DARABONBA_PTR_GET_DEFAULT(repoStatus_, "") };
    inline ListRepositoryResponseBodyRepositories& setRepoStatus(string repoStatus) { DARABONBA_PTR_SET_VALUE(repoStatus_, repoStatus) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline ListRepositoryResponseBodyRepositories& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListRepositoryResponseBodyRepositories& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListRepositoryResponseBodyRepositories& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tagImmutability Field Functions 
    bool hasTagImmutability() const { return this->tagImmutability_ != nullptr;};
    void deleteTagImmutability() { this->tagImmutability_ = nullptr;};
    inline bool tagImmutability() const { DARABONBA_PTR_GET_DEFAULT(tagImmutability_, false) };
    inline ListRepositoryResponseBodyRepositories& setTagImmutability(bool tagImmutability) { DARABONBA_PTR_SET_VALUE(tagImmutability_, tagImmutability) };


  protected:
    // The time when the repository was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Container Registry instance to which the repository belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the repository was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The type of the repository building. Valid values:
    // 
    // *   `AUTO`: The repository is automatically built.
    // *   `MANUAL`: The repository is manually built.
    std::shared_ptr<string> repoBuildType_ = nullptr;
    // The ID of the repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace to which the repository belongs.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
    // The status of the repository.
    std::shared_ptr<string> repoStatus_ = nullptr;
    // The type of the repository. Valid values:
    // 
    // *   `PUBLIC`
    // *   `PRIVATE`
    std::shared_ptr<string> repoType_ = nullptr;
    // The ID of the resource group to which the repository belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The summary of the repository.
    std::shared_ptr<string> summary_ = nullptr;
    // Indicates whether the feature of image tag immutability is enabled for the repository.
    std::shared_ptr<bool> tagImmutability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
