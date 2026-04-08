// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListPermissionApplyOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionApplyOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(FlowStatus, flowStatus_);
      DARABONBA_PTR_TO_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionApplyOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(FlowStatus, flowStatus_);
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListPermissionApplyOrdersRequest() = default ;
    ListPermissionApplyOrdersRequest(const ListPermissionApplyOrdersRequest &) = default ;
    ListPermissionApplyOrdersRequest(ListPermissionApplyOrdersRequest &&) = default ;
    ListPermissionApplyOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionApplyOrdersRequest() = default ;
    ListPermissionApplyOrdersRequest& operator=(const ListPermissionApplyOrdersRequest &) = default ;
    ListPermissionApplyOrdersRequest& operator=(ListPermissionApplyOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyType_ == nullptr
        && this->catalogName_ == nullptr && this->endTime_ == nullptr && this->engineType_ == nullptr && this->flowStatus_ == nullptr && this->maxComputeProjectName_ == nullptr
        && this->orderType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->queryType_ == nullptr && this->startTime_ == nullptr
        && this->tableName_ == nullptr && this->workspaceId_ == nullptr; };
    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline ListPermissionApplyOrdersRequest& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline ListPermissionApplyOrdersRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListPermissionApplyOrdersRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ListPermissionApplyOrdersRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // flowStatus Field Functions 
    bool hasFlowStatus() const { return this->flowStatus_ != nullptr;};
    void deleteFlowStatus() { this->flowStatus_ = nullptr;};
    inline int32_t getFlowStatus() const { DARABONBA_PTR_GET_DEFAULT(flowStatus_, 0) };
    inline ListPermissionApplyOrdersRequest& setFlowStatus(int32_t flowStatus) { DARABONBA_PTR_SET_VALUE(flowStatus_, flowStatus) };


    // maxComputeProjectName Field Functions 
    bool hasMaxComputeProjectName() const { return this->maxComputeProjectName_ != nullptr;};
    void deleteMaxComputeProjectName() { this->maxComputeProjectName_ = nullptr;};
    inline string getMaxComputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectName_, "") };
    inline ListPermissionApplyOrdersRequest& setMaxComputeProjectName(string maxComputeProjectName) { DARABONBA_PTR_SET_VALUE(maxComputeProjectName_, maxComputeProjectName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline ListPermissionApplyOrdersRequest& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListPermissionApplyOrdersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPermissionApplyOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline int32_t getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, 0) };
    inline ListPermissionApplyOrdersRequest& setQueryType(int32_t queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListPermissionApplyOrdersRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListPermissionApplyOrdersRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int32_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0) };
    inline ListPermissionApplyOrdersRequest& setWorkspaceId(int32_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The type of permission request. Valid values:
    // 
    // *   MaxComputeTable: Permission request for MaxCompute tables
    // *   MaxComputeFunction: Permission request for MaxCompute functions
    // *   MaxComputeResource: Permission request for MaxCompute resources
    // *   DLFSchema: Permission request for DLF 1.0 schemas
    // *   DLFTable: Permission request for DLF 1.0 tables
    // *   DLFColumn: Permission request for DLF 1.0 columns
    // *   DsApiDeploy: Permission request for publishing data services
    shared_ptr<string> applyType_ {};
    // The name of the data catalog to query.
    shared_ptr<string> catalogName_ {};
    // The end of the time range to query. You can query all the permissions request orders that have been submitted before the time. The parameter value is a UNIX timestamp. If you do not specify the parameter, all permission request orders that are submitted before the current time are queried.
    shared_ptr<int64_t> endTime_ {};
    // This parameter is deprecated and does not take effect.
    // 
    // Valid values:
    // 
    // *   odps
    shared_ptr<string> engineType_ {};
    // The status of the permission request. Valid values:
    // 
    // *   1: Pending approval
    // *   2: Approved and authorization succeeded
    // *   3: Approved but authorization failed
    // *   4: Rejected
    // *   5: Withdrawn
    // 
    // Valid values:
    // 
    // *   0
    // *   1
    // *   2
    // *   3
    // *   4
    // *   5
    shared_ptr<int32_t> flowStatus_ {};
    // The name of the MaxCompute project with which the permission request order is associated. If you do not specify the parameter, the permission request orders of all MaxCompute projects are returned.
    shared_ptr<string> maxComputeProjectName_ {};
    // This parameter is deprecated and does not take effect.
    // 
    // Valid values:
    // 
    // *   1
    // *   0
    shared_ptr<int32_t> orderType_ {};
    // The page number for pagination. The value must be a positive integer greater than or equal to 1. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The query type for permission requests. Valid values:
    // 
    // *   0: Permission requests submitted by me
    // *   1: Permission requests pending my approval
    // *   2: All permission requests
    // 
    // This parameter is required.
    shared_ptr<int32_t> queryType_ {};
    // The beginning of the time range to query. You can query all the permissions request orders that have been submitted after the time. The parameter value is a UNIX timestamp. If you do not specify the parameter, all permission request orders are queried.
    shared_ptr<int64_t> startTime_ {};
    // The name of the table with which the permission request order is associated. If you do not specify the parameter, the permission request orders of all tables are returned.
    shared_ptr<string> tableName_ {};
    // The ID of the workspace to which the permission request belongs. If you do not specify this parameter, permission requests from all workspaces are returned. To obtain the workspace ID, log on to the DataWorks console and navigate to the workspace configuration page.
    shared_ptr<int32_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
