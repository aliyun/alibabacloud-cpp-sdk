// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepositoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(RepoStatus, repoStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoStatus, repoStatus_);
    };
    ListRepositoryRequest() = default ;
    ListRepositoryRequest(const ListRepositoryRequest &) = default ;
    ListRepositoryRequest(ListRepositoryRequest &&) = default ;
    ListRepositoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryRequest() = default ;
    ListRepositoryRequest& operator=(const ListRepositoryRequest &) = default ;
    ListRepositoryRequest& operator=(ListRepositoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->repoName_ != nullptr && this->repoNamespaceName_ != nullptr && this->repoStatus_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepositoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepositoryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepositoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListRepositoryRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListRepositoryRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // repoStatus Field Functions 
    bool hasRepoStatus() const { return this->repoStatus_ != nullptr;};
    void deleteRepoStatus() { this->repoStatus_ = nullptr;};
    inline string repoStatus() const { DARABONBA_PTR_GET_DEFAULT(repoStatus_, "") };
    inline ListRepositoryRequest& setRepoStatus(string repoStatus) { DARABONBA_PTR_SET_VALUE(repoStatus_, repoStatus) };


  protected:
    // The ID of the Container Registry instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Maximum value: 100. If you specify a value larger than 100 for this parameter, the system reports a parameter error or uses 100 as the maximum value.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace to which the repository belongs.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
    std::shared_ptr<string> repoStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
