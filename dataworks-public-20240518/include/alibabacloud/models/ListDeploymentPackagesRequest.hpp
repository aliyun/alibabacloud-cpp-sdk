// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_TO_JSON(EndExecuteTime, endExecuteTime_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_FROM_JSON(EndExecuteTime, endExecuteTime_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDeploymentPackagesRequest() = default ;
    ListDeploymentPackagesRequest(const ListDeploymentPackagesRequest &) = default ;
    ListDeploymentPackagesRequest(ListDeploymentPackagesRequest &&) = default ;
    ListDeploymentPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackagesRequest() = default ;
    ListDeploymentPackagesRequest& operator=(const ListDeploymentPackagesRequest &) = default ;
    ListDeploymentPackagesRequest& operator=(ListDeploymentPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->endCreateTime_ != nullptr && this->endExecuteTime_ != nullptr && this->executor_ != nullptr && this->keyword_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->status_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDeploymentPackagesRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // endCreateTime Field Functions 
    bool hasEndCreateTime() const { return this->endCreateTime_ != nullptr;};
    void deleteEndCreateTime() { this->endCreateTime_ = nullptr;};
    inline int64_t endCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endCreateTime_, 0L) };
    inline ListDeploymentPackagesRequest& setEndCreateTime(int64_t endCreateTime) { DARABONBA_PTR_SET_VALUE(endCreateTime_, endCreateTime) };


    // endExecuteTime Field Functions 
    bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
    void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
    inline int64_t endExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
    inline ListDeploymentPackagesRequest& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline ListDeploymentPackagesRequest& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListDeploymentPackagesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDeploymentPackagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeploymentPackagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDeploymentPackagesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline ListDeploymentPackagesRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDeploymentPackagesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int64_t> endCreateTime_ = nullptr;
    std::shared_ptr<int64_t> endExecuteTime_ = nullptr;
    std::shared_ptr<string> executor_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
