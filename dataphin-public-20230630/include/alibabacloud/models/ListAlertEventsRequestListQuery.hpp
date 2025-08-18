// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSREQUESTLISTQUERY_HPP_
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
  class ListAlertEventsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsRequestListQuery& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAlertEventsRequestListQuery& obj) { 
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
    ListAlertEventsRequestListQuery() = default ;
    ListAlertEventsRequestListQuery(const ListAlertEventsRequestListQuery &) = default ;
    ListAlertEventsRequestListQuery(ListAlertEventsRequestListQuery &&) = default ;
    ListAlertEventsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsRequestListQuery() = default ;
    ListAlertEventsRequestListQuery& operator=(const ListAlertEventsRequestListQuery &) = default ;
    ListAlertEventsRequestListQuery& operator=(ListAlertEventsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEndTime_ != nullptr
        && this->alertObjectTypeList_ != nullptr && this->alertReasonList_ != nullptr && this->alertStartTime_ != nullptr && this->bizNameList_ != nullptr && this->keyword_ != nullptr
        && this->monitoredItemIdList_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->projectNameList_ != nullptr && this->sourceSystem_ != nullptr
        && this->statusList_ != nullptr && this->userIdList_ != nullptr; };
    // alertEndTime Field Functions 
    bool hasAlertEndTime() const { return this->alertEndTime_ != nullptr;};
    void deleteAlertEndTime() { this->alertEndTime_ = nullptr;};
    inline string alertEndTime() const { DARABONBA_PTR_GET_DEFAULT(alertEndTime_, "") };
    inline ListAlertEventsRequestListQuery& setAlertEndTime(string alertEndTime) { DARABONBA_PTR_SET_VALUE(alertEndTime_, alertEndTime) };


    // alertObjectTypeList Field Functions 
    bool hasAlertObjectTypeList() const { return this->alertObjectTypeList_ != nullptr;};
    void deleteAlertObjectTypeList() { this->alertObjectTypeList_ = nullptr;};
    inline const vector<string> & alertObjectTypeList() const { DARABONBA_PTR_GET_CONST(alertObjectTypeList_, vector<string>) };
    inline vector<string> alertObjectTypeList() { DARABONBA_PTR_GET(alertObjectTypeList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setAlertObjectTypeList(const vector<string> & alertObjectTypeList) { DARABONBA_PTR_SET_VALUE(alertObjectTypeList_, alertObjectTypeList) };
    inline ListAlertEventsRequestListQuery& setAlertObjectTypeList(vector<string> && alertObjectTypeList) { DARABONBA_PTR_SET_RVALUE(alertObjectTypeList_, alertObjectTypeList) };


    // alertReasonList Field Functions 
    bool hasAlertReasonList() const { return this->alertReasonList_ != nullptr;};
    void deleteAlertReasonList() { this->alertReasonList_ = nullptr;};
    inline const vector<string> & alertReasonList() const { DARABONBA_PTR_GET_CONST(alertReasonList_, vector<string>) };
    inline vector<string> alertReasonList() { DARABONBA_PTR_GET(alertReasonList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setAlertReasonList(const vector<string> & alertReasonList) { DARABONBA_PTR_SET_VALUE(alertReasonList_, alertReasonList) };
    inline ListAlertEventsRequestListQuery& setAlertReasonList(vector<string> && alertReasonList) { DARABONBA_PTR_SET_RVALUE(alertReasonList_, alertReasonList) };


    // alertStartTime Field Functions 
    bool hasAlertStartTime() const { return this->alertStartTime_ != nullptr;};
    void deleteAlertStartTime() { this->alertStartTime_ = nullptr;};
    inline string alertStartTime() const { DARABONBA_PTR_GET_DEFAULT(alertStartTime_, "") };
    inline ListAlertEventsRequestListQuery& setAlertStartTime(string alertStartTime) { DARABONBA_PTR_SET_VALUE(alertStartTime_, alertStartTime) };


    // bizNameList Field Functions 
    bool hasBizNameList() const { return this->bizNameList_ != nullptr;};
    void deleteBizNameList() { this->bizNameList_ = nullptr;};
    inline const vector<string> & bizNameList() const { DARABONBA_PTR_GET_CONST(bizNameList_, vector<string>) };
    inline vector<string> bizNameList() { DARABONBA_PTR_GET(bizNameList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setBizNameList(const vector<string> & bizNameList) { DARABONBA_PTR_SET_VALUE(bizNameList_, bizNameList) };
    inline ListAlertEventsRequestListQuery& setBizNameList(vector<string> && bizNameList) { DARABONBA_PTR_SET_RVALUE(bizNameList_, bizNameList) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAlertEventsRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // monitoredItemIdList Field Functions 
    bool hasMonitoredItemIdList() const { return this->monitoredItemIdList_ != nullptr;};
    void deleteMonitoredItemIdList() { this->monitoredItemIdList_ = nullptr;};
    inline const vector<string> & monitoredItemIdList() const { DARABONBA_PTR_GET_CONST(monitoredItemIdList_, vector<string>) };
    inline vector<string> monitoredItemIdList() { DARABONBA_PTR_GET(monitoredItemIdList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setMonitoredItemIdList(const vector<string> & monitoredItemIdList) { DARABONBA_PTR_SET_VALUE(monitoredItemIdList_, monitoredItemIdList) };
    inline ListAlertEventsRequestListQuery& setMonitoredItemIdList(vector<string> && monitoredItemIdList) { DARABONBA_PTR_SET_RVALUE(monitoredItemIdList_, monitoredItemIdList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAlertEventsRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertEventsRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectNameList Field Functions 
    bool hasProjectNameList() const { return this->projectNameList_ != nullptr;};
    void deleteProjectNameList() { this->projectNameList_ = nullptr;};
    inline const vector<string> & projectNameList() const { DARABONBA_PTR_GET_CONST(projectNameList_, vector<string>) };
    inline vector<string> projectNameList() { DARABONBA_PTR_GET(projectNameList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setProjectNameList(const vector<string> & projectNameList) { DARABONBA_PTR_SET_VALUE(projectNameList_, projectNameList) };
    inline ListAlertEventsRequestListQuery& setProjectNameList(vector<string> && projectNameList) { DARABONBA_PTR_SET_RVALUE(projectNameList_, projectNameList) };


    // sourceSystem Field Functions 
    bool hasSourceSystem() const { return this->sourceSystem_ != nullptr;};
    void deleteSourceSystem() { this->sourceSystem_ = nullptr;};
    inline string sourceSystem() const { DARABONBA_PTR_GET_DEFAULT(sourceSystem_, "") };
    inline ListAlertEventsRequestListQuery& setSourceSystem(string sourceSystem) { DARABONBA_PTR_SET_VALUE(sourceSystem_, sourceSystem) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListAlertEventsRequestListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline ListAlertEventsRequestListQuery& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline ListAlertEventsRequestListQuery& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> alertEndTime_ = nullptr;
    std::shared_ptr<vector<string>> alertObjectTypeList_ = nullptr;
    std::shared_ptr<vector<string>> alertReasonList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> alertStartTime_ = nullptr;
    std::shared_ptr<vector<string>> bizNameList_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<vector<string>> monitoredItemIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> projectNameList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceSystem_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
