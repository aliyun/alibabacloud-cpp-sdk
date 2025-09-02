// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBizdate, beginBizdate_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(EndBizdate, endBizdate_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBizdate, beginBizdate_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(EndBizdate, endBizdate_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstancesRequest() = default ;
    ListInstancesRequest(const ListInstancesRequest &) = default ;
    ListInstancesRequest(ListInstancesRequest &&) = default ;
    ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesRequest() = default ;
    ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
    ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginBizdate_ != nullptr
        && this->bizName_ != nullptr && this->bizdate_ != nullptr && this->dagId_ != nullptr && this->endBizdate_ != nullptr && this->nodeId_ != nullptr
        && this->nodeName_ != nullptr && this->orderBy_ != nullptr && this->owner_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->programType_ != nullptr && this->projectEnv_ != nullptr && this->projectId_ != nullptr && this->status_ != nullptr; };
    // beginBizdate Field Functions 
    bool hasBeginBizdate() const { return this->beginBizdate_ != nullptr;};
    void deleteBeginBizdate() { this->beginBizdate_ = nullptr;};
    inline string beginBizdate() const { DARABONBA_PTR_GET_DEFAULT(beginBizdate_, "") };
    inline ListInstancesRequest& setBeginBizdate(string beginBizdate) { DARABONBA_PTR_SET_VALUE(beginBizdate_, beginBizdate) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ListInstancesRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline ListInstancesRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListInstancesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // endBizdate Field Functions 
    bool hasEndBizdate() const { return this->endBizdate_ != nullptr;};
    void deleteEndBizdate() { this->endBizdate_ = nullptr;};
    inline string endBizdate() const { DARABONBA_PTR_GET_DEFAULT(endBizdate_, "") };
    inline ListInstancesRequest& setEndBizdate(string endBizdate) { DARABONBA_PTR_SET_VALUE(endBizdate_, endBizdate) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListInstancesRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListInstancesRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListInstancesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListInstancesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline ListInstancesRequest& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListInstancesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The parameters related to the node.
    std::shared_ptr<string> beginBizdate_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> bizName_ = nullptr;
    // The number of entries returned per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<string> bizdate_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV. The value PROD indicates the production environment. The value DEV indicates the development environment.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the workflow.
    std::shared_ptr<string> endBizdate_ = nullptr;
    // Indicates whether the instance is associated with a monitoring rule in Data Quality. Valid values:
    // 
    // *   0: The instance is associated with a monitoring rule in Data Quality.
    // *   1: The instance is not associated with a monitoring rule in Data Quality.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // Indicates whether the node can be rerun.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The sorting rule of the instances to be returned. Valid values:
    // 
    // *   CREATE_TIME_DESC: The instances are sorted in descending order of their creation time.
    // *   INSTANCE_ID_DESC (default): The instances are sorted in descending order of their IDs.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The connection string.
    std::shared_ptr<string> owner_ = nullptr;
    // The operation that you want to perform.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> programType_ = nullptr;
    // The environment in which the node runs. Valid values: DEV and PROD.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The ID of the baseline.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the node. Valid values:
    // 
    // *   NOT_RUN: The node is not run.
    // *   WAIT_TIME: The node is waiting for the scheduling time to arrive.
    // *   WAIT_RESOURCE: The node is waiting for resources.
    // *   RUNNING: The node is running.
    // *   CHECKING: Data quality is being checked for the node.
    // *   CHECKING_CONDITION: Branch conditions are being checked for the node.
    // *   FAILURE: The node fails to run.
    // *   SUCCESS: The node is successfully run.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
