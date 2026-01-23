// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSITORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepositoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepositoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RepoBuildType, repoBuildType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(RepoStatus, repoStatus_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TagImmutability, tagImmutability_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepositoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RepoBuildType, repoBuildType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoStatus, repoStatus_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TagImmutability, tagImmutability_);
    };
    GetRepositoryResponseBody() = default ;
    GetRepositoryResponseBody(const GetRepositoryResponseBody &) = default ;
    GetRepositoryResponseBody(GetRepositoryResponseBody &&) = default ;
    GetRepositoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepositoryResponseBody() = default ;
    GetRepositoryResponseBody& operator=(const GetRepositoryResponseBody &) = default ;
    GetRepositoryResponseBody& operator=(GetRepositoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->createTime_ == nullptr && this->detail_ == nullptr && this->instanceId_ == nullptr && this->isSuccess_ == nullptr && this->modifiedTime_ == nullptr
        && this->repoBuildType_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr && this->repoStatus_ == nullptr
        && this->repoType_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->summary_ == nullptr && this->tagImmutability_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepositoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetRepositoryResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetRepositoryResponseBody& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepositoryResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepositoryResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetRepositoryResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // repoBuildType Field Functions 
    bool hasRepoBuildType() const { return this->repoBuildType_ != nullptr;};
    void deleteRepoBuildType() { this->repoBuildType_ = nullptr;};
    inline string getRepoBuildType() const { DARABONBA_PTR_GET_DEFAULT(repoBuildType_, "") };
    inline GetRepositoryResponseBody& setRepoBuildType(string repoBuildType) { DARABONBA_PTR_SET_VALUE(repoBuildType_, repoBuildType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetRepositoryResponseBody& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetRepositoryResponseBody& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline GetRepositoryResponseBody& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // repoStatus Field Functions 
    bool hasRepoStatus() const { return this->repoStatus_ != nullptr;};
    void deleteRepoStatus() { this->repoStatus_ = nullptr;};
    inline string getRepoStatus() const { DARABONBA_PTR_GET_DEFAULT(repoStatus_, "") };
    inline GetRepositoryResponseBody& setRepoStatus(string repoStatus) { DARABONBA_PTR_SET_VALUE(repoStatus_, repoStatus) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline GetRepositoryResponseBody& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRepositoryResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetRepositoryResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tagImmutability Field Functions 
    bool hasTagImmutability() const { return this->tagImmutability_ != nullptr;};
    void deleteTagImmutability() { this->tagImmutability_ = nullptr;};
    inline bool getTagImmutability() const { DARABONBA_PTR_GET_DEFAULT(tagImmutability_, false) };
    inline GetRepositoryResponseBody& setTagImmutability(bool tagImmutability) { DARABONBA_PTR_SET_VALUE(tagImmutability_, tagImmutability) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // The time when the repository was created.
    shared_ptr<int64_t> createTime_ {};
    // The details of the repository.
    shared_ptr<string> detail_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The time when the repository was last modified.
    shared_ptr<int64_t> modifiedTime_ {};
    // Indicates how the repository was created. Valid values:
    // 
    // *   `MANUAL`: The repository was manually created.
    // *   `AUTO`: The repository was automatically created.
    shared_ptr<string> repoBuildType_ {};
    // The ID of the repository.
    shared_ptr<string> repoId_ {};
    // The name of the repository.
    shared_ptr<string> repoName_ {};
    // The name of the namespace.
    shared_ptr<string> repoNamespaceName_ {};
    // The status of the repository.
    shared_ptr<string> repoStatus_ {};
    // The type of the repository. Valid values:
    // 
    // *   `PUBLIC`: public repository.
    // *   `PRIVATE`: private repository.
    shared_ptr<string> repoType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The summary of the repository.
    shared_ptr<string> summary_ {};
    // Indicates whether the feature of image tag immutability is enabled. Valid values:
    // 
    // *   `true`: The feature of image tag immutability is enabled.
    // *   `false`: The feature of image tag immutability is disabled.
    shared_ptr<bool> tagImmutability_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
