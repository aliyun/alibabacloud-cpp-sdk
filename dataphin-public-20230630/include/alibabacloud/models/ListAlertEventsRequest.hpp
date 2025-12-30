// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSREQUEST_HPP_
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
  class ListAlertEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListAlertEventsRequest() = default ;
    ListAlertEventsRequest(const ListAlertEventsRequest &) = default ;
    ListAlertEventsRequest(ListAlertEventsRequest &&) = default ;
    ListAlertEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsRequest() = default ;
    ListAlertEventsRequest& operator=(const ListAlertEventsRequest &) = default ;
    ListAlertEventsRequest& operator=(ListAlertEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(AlertEndTime, alertEndTime_);
        DARABONBA_PTR_TO_JSON(AlertObjectTypeList, alertObjectTypeList_);
        DARABONBA_PTR_TO_JSON(AlertReasonList, alertReasonList_);
        DARABONBA_PTR_TO_JSON(AlertStartTime, alertStartTime_);
        DARABONBA_PTR_TO_JSON(BizNameList, bizNameList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(MonitoredItemIdList, monitoredItemIdList_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectNameList, projectNameList_);
        DARABONBA_PTR_TO_JSON(SourceSystem, sourceSystem_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertEndTime, alertEndTime_);
        DARABONBA_PTR_FROM_JSON(AlertObjectTypeList, alertObjectTypeList_);
        DARABONBA_PTR_FROM_JSON(AlertReasonList, alertReasonList_);
        DARABONBA_PTR_FROM_JSON(AlertStartTime, alertStartTime_);
        DARABONBA_PTR_FROM_JSON(BizNameList, bizNameList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(MonitoredItemIdList, monitoredItemIdList_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectNameList, projectNameList_);
        DARABONBA_PTR_FROM_JSON(SourceSystem, sourceSystem_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
        DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
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
      virtual bool empty() const override { return this->alertEndTime_ == nullptr
        && this->alertObjectTypeList_ == nullptr && this->alertReasonList_ == nullptr && this->alertStartTime_ == nullptr && this->bizNameList_ == nullptr && this->keyword_ == nullptr
        && this->monitoredItemIdList_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->projectNameList_ == nullptr && this->sourceSystem_ == nullptr
        && this->statusList_ == nullptr && this->userIdList_ == nullptr; };
      // alertEndTime Field Functions 
      bool hasAlertEndTime() const { return this->alertEndTime_ != nullptr;};
      void deleteAlertEndTime() { this->alertEndTime_ = nullptr;};
      inline string getAlertEndTime() const { DARABONBA_PTR_GET_DEFAULT(alertEndTime_, "") };
      inline ListQuery& setAlertEndTime(string alertEndTime) { DARABONBA_PTR_SET_VALUE(alertEndTime_, alertEndTime) };


      // alertObjectTypeList Field Functions 
      bool hasAlertObjectTypeList() const { return this->alertObjectTypeList_ != nullptr;};
      void deleteAlertObjectTypeList() { this->alertObjectTypeList_ = nullptr;};
      inline const vector<string> & getAlertObjectTypeList() const { DARABONBA_PTR_GET_CONST(alertObjectTypeList_, vector<string>) };
      inline vector<string> getAlertObjectTypeList() { DARABONBA_PTR_GET(alertObjectTypeList_, vector<string>) };
      inline ListQuery& setAlertObjectTypeList(const vector<string> & alertObjectTypeList) { DARABONBA_PTR_SET_VALUE(alertObjectTypeList_, alertObjectTypeList) };
      inline ListQuery& setAlertObjectTypeList(vector<string> && alertObjectTypeList) { DARABONBA_PTR_SET_RVALUE(alertObjectTypeList_, alertObjectTypeList) };


      // alertReasonList Field Functions 
      bool hasAlertReasonList() const { return this->alertReasonList_ != nullptr;};
      void deleteAlertReasonList() { this->alertReasonList_ = nullptr;};
      inline const vector<string> & getAlertReasonList() const { DARABONBA_PTR_GET_CONST(alertReasonList_, vector<string>) };
      inline vector<string> getAlertReasonList() { DARABONBA_PTR_GET(alertReasonList_, vector<string>) };
      inline ListQuery& setAlertReasonList(const vector<string> & alertReasonList) { DARABONBA_PTR_SET_VALUE(alertReasonList_, alertReasonList) };
      inline ListQuery& setAlertReasonList(vector<string> && alertReasonList) { DARABONBA_PTR_SET_RVALUE(alertReasonList_, alertReasonList) };


      // alertStartTime Field Functions 
      bool hasAlertStartTime() const { return this->alertStartTime_ != nullptr;};
      void deleteAlertStartTime() { this->alertStartTime_ = nullptr;};
      inline string getAlertStartTime() const { DARABONBA_PTR_GET_DEFAULT(alertStartTime_, "") };
      inline ListQuery& setAlertStartTime(string alertStartTime) { DARABONBA_PTR_SET_VALUE(alertStartTime_, alertStartTime) };


      // bizNameList Field Functions 
      bool hasBizNameList() const { return this->bizNameList_ != nullptr;};
      void deleteBizNameList() { this->bizNameList_ = nullptr;};
      inline const vector<string> & getBizNameList() const { DARABONBA_PTR_GET_CONST(bizNameList_, vector<string>) };
      inline vector<string> getBizNameList() { DARABONBA_PTR_GET(bizNameList_, vector<string>) };
      inline ListQuery& setBizNameList(const vector<string> & bizNameList) { DARABONBA_PTR_SET_VALUE(bizNameList_, bizNameList) };
      inline ListQuery& setBizNameList(vector<string> && bizNameList) { DARABONBA_PTR_SET_RVALUE(bizNameList_, bizNameList) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // monitoredItemIdList Field Functions 
      bool hasMonitoredItemIdList() const { return this->monitoredItemIdList_ != nullptr;};
      void deleteMonitoredItemIdList() { this->monitoredItemIdList_ = nullptr;};
      inline const vector<string> & getMonitoredItemIdList() const { DARABONBA_PTR_GET_CONST(monitoredItemIdList_, vector<string>) };
      inline vector<string> getMonitoredItemIdList() { DARABONBA_PTR_GET(monitoredItemIdList_, vector<string>) };
      inline ListQuery& setMonitoredItemIdList(const vector<string> & monitoredItemIdList) { DARABONBA_PTR_SET_VALUE(monitoredItemIdList_, monitoredItemIdList) };
      inline ListQuery& setMonitoredItemIdList(vector<string> && monitoredItemIdList) { DARABONBA_PTR_SET_RVALUE(monitoredItemIdList_, monitoredItemIdList) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline ListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectNameList Field Functions 
      bool hasProjectNameList() const { return this->projectNameList_ != nullptr;};
      void deleteProjectNameList() { this->projectNameList_ = nullptr;};
      inline const vector<string> & getProjectNameList() const { DARABONBA_PTR_GET_CONST(projectNameList_, vector<string>) };
      inline vector<string> getProjectNameList() { DARABONBA_PTR_GET(projectNameList_, vector<string>) };
      inline ListQuery& setProjectNameList(const vector<string> & projectNameList) { DARABONBA_PTR_SET_VALUE(projectNameList_, projectNameList) };
      inline ListQuery& setProjectNameList(vector<string> && projectNameList) { DARABONBA_PTR_SET_RVALUE(projectNameList_, projectNameList) };


      // sourceSystem Field Functions 
      bool hasSourceSystem() const { return this->sourceSystem_ != nullptr;};
      void deleteSourceSystem() { this->sourceSystem_ = nullptr;};
      inline string getSourceSystem() const { DARABONBA_PTR_GET_DEFAULT(sourceSystem_, "") };
      inline ListQuery& setSourceSystem(string sourceSystem) { DARABONBA_PTR_SET_VALUE(sourceSystem_, sourceSystem) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline ListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline ListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      // userIdList Field Functions 
      bool hasUserIdList() const { return this->userIdList_ != nullptr;};
      void deleteUserIdList() { this->userIdList_ = nullptr;};
      inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
      inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
      inline ListQuery& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
      inline ListQuery& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


    protected:
      // This parameter is required.
      shared_ptr<string> alertEndTime_ {};
      shared_ptr<vector<string>> alertObjectTypeList_ {};
      shared_ptr<vector<string>> alertReasonList_ {};
      // This parameter is required.
      shared_ptr<string> alertStartTime_ {};
      shared_ptr<vector<string>> bizNameList_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<vector<string>> monitoredItemIdList_ {};
      // This parameter is required.
      shared_ptr<int32_t> page_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> projectNameList_ {};
      // This parameter is required.
      shared_ptr<string> sourceSystem_ {};
      shared_ptr<vector<string>> statusList_ {};
      shared_ptr<vector<string>> userIdList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListAlertEventsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListAlertEventsRequest::ListQuery) };
    inline ListAlertEventsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListAlertEventsRequest::ListQuery) };
    inline ListAlertEventsRequest& setListQuery(const ListAlertEventsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListAlertEventsRequest& setListQuery(ListAlertEventsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListAlertEventsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListAlertEventsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
