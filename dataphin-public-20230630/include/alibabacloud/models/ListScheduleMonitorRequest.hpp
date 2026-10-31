// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListScheduleMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListScheduleMonitorRequest() = default ;
    ListScheduleMonitorRequest(const ListScheduleMonitorRequest &) = default ;
    ListScheduleMonitorRequest(ListScheduleMonitorRequest &&) = default ;
    ListScheduleMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleMonitorRequest() = default ;
    ListScheduleMonitorRequest& operator=(const ListScheduleMonitorRequest &) = default ;
    ListScheduleMonitorRequest& operator=(ListScheduleMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(AlertReasonList, alertReasonList_);
        DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
        DARABONBA_PTR_TO_JSON(LogicFieldIdList, logicFieldIdList_);
        DARABONBA_PTR_TO_JSON(LogicalTableIdList, logicalTableIdList_);
        DARABONBA_PTR_TO_JSON(OnCallTableList, onCallTableList_);
        DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(ReceivedWayTypeList, receivedWayTypeList_);
        DARABONBA_PTR_TO_JSON(ReceiverList, receiverList_);
        DARABONBA_PTR_TO_JSON(TypeList, typeList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertReasonList, alertReasonList_);
        DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
        DARABONBA_PTR_FROM_JSON(LogicFieldIdList, logicFieldIdList_);
        DARABONBA_PTR_FROM_JSON(LogicalTableIdList, logicalTableIdList_);
        DARABONBA_PTR_FROM_JSON(OnCallTableList, onCallTableList_);
        DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(ReceivedWayTypeList, receivedWayTypeList_);
        DARABONBA_PTR_FROM_JSON(ReceiverList, receiverList_);
        DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertReasonList_ == nullptr
        && this->keyWord_ == nullptr && this->logicFieldIdList_ == nullptr && this->logicalTableIdList_ == nullptr && this->onCallTableList_ == nullptr && this->ownerList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->projectIds_ == nullptr && this->receivedWayTypeList_ == nullptr && this->receiverList_ == nullptr
        && this->typeList_ == nullptr; };
      // alertReasonList Field Functions 
      bool hasAlertReasonList() const { return this->alertReasonList_ != nullptr;};
      void deleteAlertReasonList() { this->alertReasonList_ = nullptr;};
      inline const vector<string> & getAlertReasonList() const { DARABONBA_PTR_GET_CONST(alertReasonList_, vector<string>) };
      inline vector<string> getAlertReasonList() { DARABONBA_PTR_GET(alertReasonList_, vector<string>) };
      inline ListQuery& setAlertReasonList(const vector<string> & alertReasonList) { DARABONBA_PTR_SET_VALUE(alertReasonList_, alertReasonList) };
      inline ListQuery& setAlertReasonList(vector<string> && alertReasonList) { DARABONBA_PTR_SET_RVALUE(alertReasonList_, alertReasonList) };


      // keyWord Field Functions 
      bool hasKeyWord() const { return this->keyWord_ != nullptr;};
      void deleteKeyWord() { this->keyWord_ = nullptr;};
      inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
      inline ListQuery& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


      // logicFieldIdList Field Functions 
      bool hasLogicFieldIdList() const { return this->logicFieldIdList_ != nullptr;};
      void deleteLogicFieldIdList() { this->logicFieldIdList_ = nullptr;};
      inline const vector<int64_t> & getLogicFieldIdList() const { DARABONBA_PTR_GET_CONST(logicFieldIdList_, vector<int64_t>) };
      inline vector<int64_t> getLogicFieldIdList() { DARABONBA_PTR_GET(logicFieldIdList_, vector<int64_t>) };
      inline ListQuery& setLogicFieldIdList(const vector<int64_t> & logicFieldIdList) { DARABONBA_PTR_SET_VALUE(logicFieldIdList_, logicFieldIdList) };
      inline ListQuery& setLogicFieldIdList(vector<int64_t> && logicFieldIdList) { DARABONBA_PTR_SET_RVALUE(logicFieldIdList_, logicFieldIdList) };


      // logicalTableIdList Field Functions 
      bool hasLogicalTableIdList() const { return this->logicalTableIdList_ != nullptr;};
      void deleteLogicalTableIdList() { this->logicalTableIdList_ = nullptr;};
      inline const vector<int64_t> & getLogicalTableIdList() const { DARABONBA_PTR_GET_CONST(logicalTableIdList_, vector<int64_t>) };
      inline vector<int64_t> getLogicalTableIdList() { DARABONBA_PTR_GET(logicalTableIdList_, vector<int64_t>) };
      inline ListQuery& setLogicalTableIdList(const vector<int64_t> & logicalTableIdList) { DARABONBA_PTR_SET_VALUE(logicalTableIdList_, logicalTableIdList) };
      inline ListQuery& setLogicalTableIdList(vector<int64_t> && logicalTableIdList) { DARABONBA_PTR_SET_RVALUE(logicalTableIdList_, logicalTableIdList) };


      // onCallTableList Field Functions 
      bool hasOnCallTableList() const { return this->onCallTableList_ != nullptr;};
      void deleteOnCallTableList() { this->onCallTableList_ = nullptr;};
      inline const vector<string> & getOnCallTableList() const { DARABONBA_PTR_GET_CONST(onCallTableList_, vector<string>) };
      inline vector<string> getOnCallTableList() { DARABONBA_PTR_GET(onCallTableList_, vector<string>) };
      inline ListQuery& setOnCallTableList(const vector<string> & onCallTableList) { DARABONBA_PTR_SET_VALUE(onCallTableList_, onCallTableList) };
      inline ListQuery& setOnCallTableList(vector<string> && onCallTableList) { DARABONBA_PTR_SET_RVALUE(onCallTableList_, onCallTableList) };


      // ownerList Field Functions 
      bool hasOwnerList() const { return this->ownerList_ != nullptr;};
      void deleteOwnerList() { this->ownerList_ = nullptr;};
      inline const vector<string> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
      inline vector<string> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
      inline ListQuery& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
      inline ListQuery& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline ListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
      inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
      inline ListQuery& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline ListQuery& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // receivedWayTypeList Field Functions 
      bool hasReceivedWayTypeList() const { return this->receivedWayTypeList_ != nullptr;};
      void deleteReceivedWayTypeList() { this->receivedWayTypeList_ = nullptr;};
      inline const vector<string> & getReceivedWayTypeList() const { DARABONBA_PTR_GET_CONST(receivedWayTypeList_, vector<string>) };
      inline vector<string> getReceivedWayTypeList() { DARABONBA_PTR_GET(receivedWayTypeList_, vector<string>) };
      inline ListQuery& setReceivedWayTypeList(const vector<string> & receivedWayTypeList) { DARABONBA_PTR_SET_VALUE(receivedWayTypeList_, receivedWayTypeList) };
      inline ListQuery& setReceivedWayTypeList(vector<string> && receivedWayTypeList) { DARABONBA_PTR_SET_RVALUE(receivedWayTypeList_, receivedWayTypeList) };


      // receiverList Field Functions 
      bool hasReceiverList() const { return this->receiverList_ != nullptr;};
      void deleteReceiverList() { this->receiverList_ = nullptr;};
      inline const vector<string> & getReceiverList() const { DARABONBA_PTR_GET_CONST(receiverList_, vector<string>) };
      inline vector<string> getReceiverList() { DARABONBA_PTR_GET(receiverList_, vector<string>) };
      inline ListQuery& setReceiverList(const vector<string> & receiverList) { DARABONBA_PTR_SET_VALUE(receiverList_, receiverList) };
      inline ListQuery& setReceiverList(vector<string> && receiverList) { DARABONBA_PTR_SET_RVALUE(receiverList_, receiverList) };


      // typeList Field Functions 
      bool hasTypeList() const { return this->typeList_ != nullptr;};
      void deleteTypeList() { this->typeList_ = nullptr;};
      inline const vector<string> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
      inline vector<string> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
      inline ListQuery& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
      inline ListQuery& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    protected:
      // The list of alert cause types. Valid values: FAILED (the task execution failed), TIME_OUT (the task execution timed out), UNFINISHED (the task did not generate output), SUCCESS (the task execution succeeded), and DATA_DELAY (the data is delayed).
      shared_ptr<vector<string>> alertReasonList_ {};
      // The keyword for search. Supports fuzzy matching for monitored task names. If this parameter is empty or not specified, no filtering is applied.
      shared_ptr<string> keyWord_ {};
      // The list of logical field IDs.
      shared_ptr<vector<int64_t>> logicFieldIdList_ {};
      // The list of logical table IDs.
      shared_ptr<vector<int64_t>> logicalTableIdList_ {};
      // The list of on-call schedule IDs.
      shared_ptr<vector<string>> onCallTableList_ {};
      // The list of user IDs of the creators of monitored objects.
      shared_ptr<vector<string>> ownerList_ {};
      // The current page number. Pages start from 1. Default value: 1.
      // 
      // This parameter is required.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page. Default value: 20.
      // 
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      // The list of project IDs. If this parameter is empty, all projects that the current user has permissions on are automatically queried.
      shared_ptr<vector<int64_t>> projectIds_ {};
      // The list of notification method types. Valid values: PHONE (phone call), MESSAGE (text message), EMAIL (email), DING_TALK (DingTalk), FEISHU (Lark), WECHAT (WeChat), and CUSTOM (custom channel).
      shared_ptr<vector<string>> receivedWayTypeList_ {};
      // The list of user IDs of the recipients.
      shared_ptr<vector<string>> receiverList_ {};
      // The list of monitored object types. Valid values: LOGICAL_FIELD (logical field), OND_ID_NODE (logical table node), SCHEDULE_PHYSICAL_NODE (periodically scheduled physical task), MANUAL_PHYSICAL_NODE (manually scheduled physical task), ODM_NODE (source path task), LOGICAL_TABLE_NODE (logical table task), and PROJECT (project).
      // 
      // This parameter is required.
      shared_ptr<vector<string>> typeList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListScheduleMonitorRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListScheduleMonitorRequest::ListQuery) };
    inline ListScheduleMonitorRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListScheduleMonitorRequest::ListQuery) };
    inline ListScheduleMonitorRequest& setListQuery(const ListScheduleMonitorRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListScheduleMonitorRequest& setListQuery(ListScheduleMonitorRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListScheduleMonitorRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListScheduleMonitorRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The query conditions for scheduling monitoring and alerting.
    // 
    // This parameter is required.
    shared_ptr<ListScheduleMonitorRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The user ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
