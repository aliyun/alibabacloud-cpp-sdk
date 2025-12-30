// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSREQUEST_HPP_
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
  class ListAlertNotificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListAlertNotificationsRequest() = default ;
    ListAlertNotificationsRequest(const ListAlertNotificationsRequest &) = default ;
    ListAlertNotificationsRequest(ListAlertNotificationsRequest &&) = default ;
    ListAlertNotificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsRequest() = default ;
    ListAlertNotificationsRequest& operator=(const ListAlertNotificationsRequest &) = default ;
    ListAlertNotificationsRequest& operator=(ListAlertNotificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(AlertReasonList, alertReasonList_);
        DARABONBA_PTR_TO_JSON(ChannelTypeList, channelTypeList_);
        DARABONBA_PTR_TO_JSON(CustomChannelIdList, customChannelIdList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(MonitoredItemIdList, monitoredItemIdList_);
        DARABONBA_PTR_TO_JSON(NotifyEndTime, notifyEndTime_);
        DARABONBA_PTR_TO_JSON(NotifyStartTime, notifyStartTime_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(SourceSystem, sourceSystem_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertReasonList, alertReasonList_);
        DARABONBA_PTR_FROM_JSON(ChannelTypeList, channelTypeList_);
        DARABONBA_PTR_FROM_JSON(CustomChannelIdList, customChannelIdList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(MonitoredItemIdList, monitoredItemIdList_);
        DARABONBA_PTR_FROM_JSON(NotifyEndTime, notifyEndTime_);
        DARABONBA_PTR_FROM_JSON(NotifyStartTime, notifyStartTime_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      virtual bool empty() const override { return this->alertReasonList_ == nullptr
        && this->channelTypeList_ == nullptr && this->customChannelIdList_ == nullptr && this->keyword_ == nullptr && this->monitoredItemIdList_ == nullptr && this->notifyEndTime_ == nullptr
        && this->notifyStartTime_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->sourceSystem_ == nullptr && this->statusList_ == nullptr
        && this->userIdList_ == nullptr; };
      // alertReasonList Field Functions 
      bool hasAlertReasonList() const { return this->alertReasonList_ != nullptr;};
      void deleteAlertReasonList() { this->alertReasonList_ = nullptr;};
      inline const vector<string> & getAlertReasonList() const { DARABONBA_PTR_GET_CONST(alertReasonList_, vector<string>) };
      inline vector<string> getAlertReasonList() { DARABONBA_PTR_GET(alertReasonList_, vector<string>) };
      inline ListQuery& setAlertReasonList(const vector<string> & alertReasonList) { DARABONBA_PTR_SET_VALUE(alertReasonList_, alertReasonList) };
      inline ListQuery& setAlertReasonList(vector<string> && alertReasonList) { DARABONBA_PTR_SET_RVALUE(alertReasonList_, alertReasonList) };


      // channelTypeList Field Functions 
      bool hasChannelTypeList() const { return this->channelTypeList_ != nullptr;};
      void deleteChannelTypeList() { this->channelTypeList_ = nullptr;};
      inline const vector<string> & getChannelTypeList() const { DARABONBA_PTR_GET_CONST(channelTypeList_, vector<string>) };
      inline vector<string> getChannelTypeList() { DARABONBA_PTR_GET(channelTypeList_, vector<string>) };
      inline ListQuery& setChannelTypeList(const vector<string> & channelTypeList) { DARABONBA_PTR_SET_VALUE(channelTypeList_, channelTypeList) };
      inline ListQuery& setChannelTypeList(vector<string> && channelTypeList) { DARABONBA_PTR_SET_RVALUE(channelTypeList_, channelTypeList) };


      // customChannelIdList Field Functions 
      bool hasCustomChannelIdList() const { return this->customChannelIdList_ != nullptr;};
      void deleteCustomChannelIdList() { this->customChannelIdList_ = nullptr;};
      inline const vector<string> & getCustomChannelIdList() const { DARABONBA_PTR_GET_CONST(customChannelIdList_, vector<string>) };
      inline vector<string> getCustomChannelIdList() { DARABONBA_PTR_GET(customChannelIdList_, vector<string>) };
      inline ListQuery& setCustomChannelIdList(const vector<string> & customChannelIdList) { DARABONBA_PTR_SET_VALUE(customChannelIdList_, customChannelIdList) };
      inline ListQuery& setCustomChannelIdList(vector<string> && customChannelIdList) { DARABONBA_PTR_SET_RVALUE(customChannelIdList_, customChannelIdList) };


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


      // notifyEndTime Field Functions 
      bool hasNotifyEndTime() const { return this->notifyEndTime_ != nullptr;};
      void deleteNotifyEndTime() { this->notifyEndTime_ = nullptr;};
      inline string getNotifyEndTime() const { DARABONBA_PTR_GET_DEFAULT(notifyEndTime_, "") };
      inline ListQuery& setNotifyEndTime(string notifyEndTime) { DARABONBA_PTR_SET_VALUE(notifyEndTime_, notifyEndTime) };


      // notifyStartTime Field Functions 
      bool hasNotifyStartTime() const { return this->notifyStartTime_ != nullptr;};
      void deleteNotifyStartTime() { this->notifyStartTime_ = nullptr;};
      inline string getNotifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(notifyStartTime_, "") };
      inline ListQuery& setNotifyStartTime(string notifyStartTime) { DARABONBA_PTR_SET_VALUE(notifyStartTime_, notifyStartTime) };


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
      shared_ptr<vector<string>> alertReasonList_ {};
      shared_ptr<vector<string>> channelTypeList_ {};
      shared_ptr<vector<string>> customChannelIdList_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<vector<string>> monitoredItemIdList_ {};
      // This parameter is required.
      shared_ptr<string> notifyEndTime_ {};
      // This parameter is required.
      shared_ptr<string> notifyStartTime_ {};
      // This parameter is required.
      shared_ptr<int32_t> page_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
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
    inline const ListAlertNotificationsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListAlertNotificationsRequest::ListQuery) };
    inline ListAlertNotificationsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListAlertNotificationsRequest::ListQuery) };
    inline ListAlertNotificationsRequest& setListQuery(const ListAlertNotificationsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListAlertNotificationsRequest& setListQuery(ListAlertNotificationsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListAlertNotificationsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<ListAlertNotificationsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
