// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYRESPONSEBODY_HPP_
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
  class ListRepositoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Repositories, repositories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Repositories, repositories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepositoryResponseBody() = default ;
    ListRepositoryResponseBody(const ListRepositoryResponseBody &) = default ;
    ListRepositoryResponseBody(ListRepositoryResponseBody &&) = default ;
    ListRepositoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryResponseBody() = default ;
    ListRepositoryResponseBody& operator=(const ListRepositoryResponseBody &) = default ;
    ListRepositoryResponseBody& operator=(ListRepositoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Repositories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Repositories& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Repositories& obj) { 
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
      Repositories() = default ;
      Repositories(const Repositories &) = default ;
      Repositories(Repositories &&) = default ;
      Repositories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Repositories() = default ;
      Repositories& operator=(const Repositories &) = default ;
      Repositories& operator=(Repositories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr && this->repoBuildType_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespaceName_ == nullptr && this->repoStatus_ == nullptr && this->repoType_ == nullptr && this->resourceGroupId_ == nullptr && this->summary_ == nullptr
        && this->tagImmutability_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Repositories& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Repositories& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline Repositories& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // repoBuildType Field Functions 
      bool hasRepoBuildType() const { return this->repoBuildType_ != nullptr;};
      void deleteRepoBuildType() { this->repoBuildType_ = nullptr;};
      inline string getRepoBuildType() const { DARABONBA_PTR_GET_DEFAULT(repoBuildType_, "") };
      inline Repositories& setRepoBuildType(string repoBuildType) { DARABONBA_PTR_SET_VALUE(repoBuildType_, repoBuildType) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline Repositories& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Repositories& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespaceName Field Functions 
      bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
      void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
      inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
      inline Repositories& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


      // repoStatus Field Functions 
      bool hasRepoStatus() const { return this->repoStatus_ != nullptr;};
      void deleteRepoStatus() { this->repoStatus_ = nullptr;};
      inline string getRepoStatus() const { DARABONBA_PTR_GET_DEFAULT(repoStatus_, "") };
      inline Repositories& setRepoStatus(string repoStatus) { DARABONBA_PTR_SET_VALUE(repoStatus_, repoStatus) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline Repositories& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Repositories& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Repositories& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // tagImmutability Field Functions 
      bool hasTagImmutability() const { return this->tagImmutability_ != nullptr;};
      void deleteTagImmutability() { this->tagImmutability_ = nullptr;};
      inline bool getTagImmutability() const { DARABONBA_PTR_GET_DEFAULT(tagImmutability_, false) };
      inline Repositories& setTagImmutability(bool tagImmutability) { DARABONBA_PTR_SET_VALUE(tagImmutability_, tagImmutability) };


    protected:
      // The time when the repository was created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the Container Registry instance to which the repository belongs.
      shared_ptr<string> instanceId_ {};
      // The time when the repository was last modified.
      shared_ptr<int64_t> modifiedTime_ {};
      // The type of the repository building. Valid values:
      // 
      // *   `AUTO`: The repository is automatically built.
      // *   `MANUAL`: The repository is manually built.
      shared_ptr<string> repoBuildType_ {};
      // The ID of the repository.
      shared_ptr<string> repoId_ {};
      // The name of the repository.
      shared_ptr<string> repoName_ {};
      // The name of the namespace to which the repository belongs.
      shared_ptr<string> repoNamespaceName_ {};
      // The status of the repository.
      shared_ptr<string> repoStatus_ {};
      // The type of the repository. Valid values:
      // 
      // *   `PUBLIC`
      // *   `PRIVATE`
      shared_ptr<string> repoType_ {};
      // The ID of the resource group to which the repository belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The summary of the repository.
      shared_ptr<string> summary_ {};
      // Indicates whether the feature of image tag immutability is enabled for the repository.
      shared_ptr<bool> tagImmutability_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->repositories_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepositoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepositoryResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepositoryResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepositoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repositories Field Functions 
    bool hasRepositories() const { return this->repositories_ != nullptr;};
    void deleteRepositories() { this->repositories_ = nullptr;};
    inline const vector<ListRepositoryResponseBody::Repositories> & getRepositories() const { DARABONBA_PTR_GET_CONST(repositories_, vector<ListRepositoryResponseBody::Repositories>) };
    inline vector<ListRepositoryResponseBody::Repositories> getRepositories() { DARABONBA_PTR_GET(repositories_, vector<ListRepositoryResponseBody::Repositories>) };
    inline ListRepositoryResponseBody& setRepositories(const vector<ListRepositoryResponseBody::Repositories> & repositories) { DARABONBA_PTR_SET_VALUE(repositories_, repositories) };
    inline ListRepositoryResponseBody& setRepositories(vector<ListRepositoryResponseBody::Repositories> && repositories) { DARABONBA_PTR_SET_RVALUE(repositories_, repositories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRepositoryResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The information about the repositories.
    shared_ptr<vector<ListRepositoryResponseBody::Repositories>> repositories_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of the queried image repositories.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
