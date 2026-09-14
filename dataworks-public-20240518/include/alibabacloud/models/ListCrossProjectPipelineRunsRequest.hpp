// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectPipelineRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectPipelineRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_TO_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectPipelineRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_FROM_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCrossProjectPipelineRunsRequest() = default ;
    ListCrossProjectPipelineRunsRequest(const ListCrossProjectPipelineRunsRequest &) = default ;
    ListCrossProjectPipelineRunsRequest(ListCrossProjectPipelineRunsRequest &&) = default ;
    ListCrossProjectPipelineRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectPipelineRunsRequest() = default ;
    ListCrossProjectPipelineRunsRequest& operator=(const ListCrossProjectPipelineRunsRequest &) = default ;
    ListCrossProjectPipelineRunsRequest& operator=(ListCrossProjectPipelineRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeFrom_ == nullptr
        && this->createTimeTo_ == nullptr && this->creator_ == nullptr && this->deploymentEnvironmentId_ == nullptr && this->executor_ == nullptr && this->objectId_ == nullptr
        && this->objectType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
    // createTimeFrom Field Functions 
    bool hasCreateTimeFrom() const { return this->createTimeFrom_ != nullptr;};
    void deleteCreateTimeFrom() { this->createTimeFrom_ = nullptr;};
    inline int64_t getCreateTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(createTimeFrom_, 0L) };
    inline ListCrossProjectPipelineRunsRequest& setCreateTimeFrom(int64_t createTimeFrom) { DARABONBA_PTR_SET_VALUE(createTimeFrom_, createTimeFrom) };


    // createTimeTo Field Functions 
    bool hasCreateTimeTo() const { return this->createTimeTo_ != nullptr;};
    void deleteCreateTimeTo() { this->createTimeTo_ = nullptr;};
    inline int64_t getCreateTimeTo() const { DARABONBA_PTR_GET_DEFAULT(createTimeTo_, 0L) };
    inline ListCrossProjectPipelineRunsRequest& setCreateTimeTo(int64_t createTimeTo) { DARABONBA_PTR_SET_VALUE(createTimeTo_, createTimeTo) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListCrossProjectPipelineRunsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deploymentEnvironmentId Field Functions 
    bool hasDeploymentEnvironmentId() const { return this->deploymentEnvironmentId_ != nullptr;};
    void deleteDeploymentEnvironmentId() { this->deploymentEnvironmentId_ = nullptr;};
    inline int64_t getDeploymentEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentEnvironmentId_, 0L) };
    inline ListCrossProjectPipelineRunsRequest& setDeploymentEnvironmentId(int64_t deploymentEnvironmentId) { DARABONBA_PTR_SET_VALUE(deploymentEnvironmentId_, deploymentEnvironmentId) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline ListCrossProjectPipelineRunsRequest& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ListCrossProjectPipelineRunsRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListCrossProjectPipelineRunsRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCrossProjectPipelineRunsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCrossProjectPipelineRunsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCrossProjectPipelineRunsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCrossProjectPipelineRunsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The start of the creation time range. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> createTimeFrom_ {};
    // The end of the creation time range. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> createTimeTo_ {};
    // The creator.
    shared_ptr<string> creator_ {};
    // The cross-workspace publish environment ID.
    shared_ptr<int64_t> deploymentEnvironmentId_ {};
    // The executor.
    shared_ptr<string> executor_ {};
    // The publish object ID.
    shared_ptr<string> objectId_ {};
    // The publish object type.
    shared_ptr<string> objectType_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The publish flow status. Valid values:
    // - Building: Building.
    // - Ready: Ready and waiting for execution.
    // - Running: Running.
    // - Termination: Terminated.
    // - Success: Succeeded.
    // - Fail: Failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
