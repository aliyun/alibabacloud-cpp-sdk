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
    virtual bool empty() const override { return this->beginBizdate_ == nullptr
        && this->bizName_ == nullptr && this->bizdate_ == nullptr && this->dagId_ == nullptr && this->endBizdate_ == nullptr && this->nodeId_ == nullptr
        && this->nodeName_ == nullptr && this->orderBy_ == nullptr && this->owner_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->programType_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
    // beginBizdate Field Functions 
    bool hasBeginBizdate() const { return this->beginBizdate_ != nullptr;};
    void deleteBeginBizdate() { this->beginBizdate_ = nullptr;};
    inline string getBeginBizdate() const { DARABONBA_PTR_GET_DEFAULT(beginBizdate_, "") };
    inline ListInstancesRequest& setBeginBizdate(string beginBizdate) { DARABONBA_PTR_SET_VALUE(beginBizdate_, beginBizdate) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ListInstancesRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline ListInstancesRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListInstancesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // endBizdate Field Functions 
    bool hasEndBizdate() const { return this->endBizdate_ != nullptr;};
    void deleteEndBizdate() { this->endBizdate_ = nullptr;};
    inline string getEndBizdate() const { DARABONBA_PTR_GET_DEFAULT(endBizdate_, "") };
    inline ListInstancesRequest& setEndBizdate(string endBizdate) { DARABONBA_PTR_SET_VALUE(endBizdate_, endBizdate) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListInstancesRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListInstancesRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListInstancesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListInstancesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline string getProgramType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
    inline ListInstancesRequest& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListInstancesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The start date for which to retrieve the instance list. Format: yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> beginBizdate_ {};
    // The name of the workflow. You can call [ListBusiness](https://help.aliyun.com/document_detail/173945.html) to query workflow information.
    shared_ptr<string> bizName_ {};
    // The date for which to retrieve the instance list. Format: yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> bizdate_ {};
    // The DAG ID. The DagId can be the DagId returned by operations such as [RunCycleDagNodes](https://help.aliyun.com/document_detail/212961.html) for data backfill, [RunSmokeTest](https://help.aliyun.com/document_detail/212949.html) for smoke testing, and [RunManualDagNodes](https://help.aliyun.com/document_detail/212830.html) for manual workflows.
    shared_ptr<int64_t> dagId_ {};
    // The end date for which to retrieve the instance list. Format: yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> endBizdate_ {};
    // The node ID. You can call [ListNodes](https://help.aliyun.com/document_detail/173979.html) to query the node ID.
    shared_ptr<int64_t> nodeId_ {};
    // The node name. You can call [ListNodes](https://help.aliyun.com/document_detail/173979.html) to query the node name.
    shared_ptr<string> nodeName_ {};
    // The sorting rule for the returned results. Valid values:
    // - CREATE_TIME_DESC: sorted by creation time in descending order.
    // - INSTANCE_ID_DESC: default value. Sorted by instance ID in descending order.
    shared_ptr<string> orderBy_ {};
    // The ID of the owner, which is the UID of the workspace administrator. You can logon to the Alibaba Cloud Management Console and view the UID in the Security Settings section of the storage management page.
    shared_ptr<string> owner_ {};
    // The page number. Minimum value: 1. Maximum value: 100.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The node type. You can call [ListNodes](https://help.aliyun.com/document_detail/173979.html) to query the node type.
    shared_ptr<string> programType_ {};
    // The runtime environment. Valid values:
    // 
    // - PROD: production environment.
    // - DEV: development environment.
    // 
    // This parameter is required.
    shared_ptr<string> projectEnv_ {};
    // The workspace ID. You can call [ListProjects](https://help.aliyun.com/document_detail/178393.html) to query the workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The status of the node. Valid values:
    // 
    // - NOT_RUN: The node is not run.
    // 
    // - WAIT_TIME: The node is waiting for the scheduled time (DueTime or CycTime) to arrive.
    // 
    // - WAIT_RESOURCE: The node is waiting for resources.
    // 
    // - RUNNING: The node is running.
    // - CHECKING: The node has been sent to Data Quality for data validation.
    // - CHECKING_CONDITION: The node is undergoing branch condition verification.
    // - FAILURE: Failed to execute.
    // - SUCCESS: Execute successfully.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
