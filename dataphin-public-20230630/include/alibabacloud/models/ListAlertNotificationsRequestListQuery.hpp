// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSREQUESTLISTQUERY_HPP_
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
  class ListAlertNotificationsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsRequestListQuery& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsRequestListQuery& obj) { 
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
    ListAlertNotificationsRequestListQuery() = default ;
    ListAlertNotificationsRequestListQuery(const ListAlertNotificationsRequestListQuery &) = default ;
    ListAlertNotificationsRequestListQuery(ListAlertNotificationsRequestListQuery &&) = default ;
    ListAlertNotificationsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsRequestListQuery() = default ;
    ListAlertNotificationsRequestListQuery& operator=(const ListAlertNotificationsRequestListQuery &) = default ;
    ListAlertNotificationsRequestListQuery& operator=(ListAlertNotificationsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertReasonList_ == nullptr
        && return this->channelTypeList_ == nullptr && return this->customChannelIdList_ == nullptr && return this->keyword_ == nullptr && return this->monitoredItemIdList_ == nullptr && return this->notifyEndTime_ == nullptr
        && return this->notifyStartTime_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->sourceSystem_ == nullptr && return this->statusList_ == nullptr
        && return this->userIdList_ == nullptr; };
    // alertReasonList Field Functions 
    bool hasAlertReasonList() const { return this->alertReasonList_ != nullptr;};
    void deleteAlertReasonList() { this->alertReasonList_ = nullptr;};
    inline const vector<string> & alertReasonList() const { DARABONBA_PTR_GET_CONST(alertReasonList_, vector<string>) };
    inline vector<string> alertReasonList() { DARABONBA_PTR_GET(alertReasonList_, vector<string>) };
    inline ListAlertNotificationsRequestListQuery& setAlertReasonList(const vector<string> & alertReasonList) { DARABONBA_PTR_SET_VALUE(alertReasonList_, alertReasonList) };
    inline ListAlertNotificationsRequestListQuery& setAlertReasonList(vector<string> && alertReasonList) { DARABONBA_PTR_SET_RVALUE(alertReasonList_, alertReasonList) };


    // channelTypeList Field Functions 
    bool hasChannelTypeList() const { return this->channelTypeList_ != nullptr;};
    void deleteChannelTypeList() { this->channelTypeList_ = nullptr;};
    inline const vector<string> & channelTypeList() const { DARABONBA_PTR_GET_CONST(channelTypeList_, vector<string>) };
    inline vector<string> channelTypeList() { DARABONBA_PTR_GET(channelTypeList_, vector<string>) };
    inline ListAlertNotificationsRequestListQuery& setChannelTypeList(const vector<string> & channelTypeList) { DARABONBA_PTR_SET_VALUE(channelTypeList_, channelTypeList) };
    inline ListAlertNotificationsRequestListQuery& setChannelTypeList(vector<string> && channelTypeList) { DARABONBA_PTR_SET_RVALUE(channelTypeList_, channelTypeList) };


    // customChannelIdList Field Functions 
    bool hasCustomChannelIdList() const { return this->customChannelIdList_ != nullptr;};
    void deleteCustomChannelIdList() { this->customChannelIdList_ = nullptr;};
    inline const vector<string> & customChannelIdList() const { DARABONBA_PTR_GET_CONST(customChannelIdList_, vector<string>) };
    inline vector<string> customChannelIdList() { DARABONBA_PTR_GET(customChannelIdList_, vector<string>) };
    inline ListAlertNotificationsRequestListQuery& setCustomChannelIdList(const vector<string> & customChannelIdList) { DARABONBA_PTR_SET_VALUE(customChannelIdList_, customChannelIdList) };
    inline ListAlertNotificationsRequestListQuery& setCustomChannelIdList(vector<string> && customChannelIdList) { DARABONBA_PTR_SET_RVALUE(customChannelIdList_, customChannelIdList) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAlertNotificationsRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // monitoredItemIdList Field Functions 
    bool hasMonitoredItemIdList() const { return this->monitoredItemIdList_ != nullptr;};
    void deleteMonitoredItemIdList() { this->monitoredItemIdList_ = nullptr;};
    inline const vector<string> & monitoredItemIdList() const { DARABONBA_PTR_GET_CONST(monitoredItemIdList_, vector<string>) };
    inline vector<string> monitoredItemIdList() { DARABONBA_PTR_GET(monitoredItemIdList_, vector<string>) };
    inline ListAlertNotificationsRequestListQuery& setMonitoredItemIdList(const vector<string> & monitoredItemIdList) { DARABONBA_PTR_SET_VALUE(monitoredItemIdList_, monitoredItemIdList) };
    inline ListAlertNotificationsRequestListQuery& setMonitoredItemIdList(vector<string> && monitoredItemIdList) { DARABONBA_PTR_SET_RVALUE(monitoredItemIdList_, monitoredItemIdList) };


    // notifyEndTime Field Functions 
    bool hasNotifyEndTime() const { return this->notifyEndTime_ != nullptr;};
    void deleteNotifyEndTime() { this->notifyEndTime_ = nullptr;};
    inline string notifyEndTime() const { DARABONBA_PTR_GET_DEFAULT(notifyEndTime_, "") };
    inline ListAlertNotificationsRequestListQuery& setNotifyEndTime(string notifyEndTime) { DARABONBA_PTR_SET_VALUE(notifyEndTime_, notifyEndTime) };


    // notifyStartTime Field Functions 
    bool hasNotifyStartTime() const { return this->notifyStartTime_ != nullptr;};
    void deleteNotifyStartTime() { this->notifyStartTime_ = nullptr;};
    inline string notifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(notifyStartTime_, "") };
    inline ListAlertNotificationsRequestListQuery& setNotifyStartTime(string notifyStartTime) { DARABONBA_PTR_SET_VALUE(notifyStartTime_, notifyStartTime) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAlertNotificationsRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertNotificationsRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceSystem Field Functions 
    bool hasSourceSystem() const { return this->sourceSystem_ != nullptr;};
    void deleteSourceSystem() { this->sourceSystem_ = nullptr;};
    inline string sourceSystem() const { DARABONBA_PTR_GET_DEFAULT(sourceSystem_, "") };
    inline ListAlertNotificationsRequestListQuery& setSourceSystem(string sourceSystem) { DARABONBA_PTR_SET_VALUE(sourceSystem_, sourceSystem) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListAlertNotificationsRequestListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListAlertNotificationsRequestListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline ListAlertNotificationsRequestListQuery& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline ListAlertNotificationsRequestListQuery& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    std::shared_ptr<vector<string>> alertReasonList_ = nullptr;
    std::shared_ptr<vector<string>> channelTypeList_ = nullptr;
    std::shared_ptr<vector<string>> customChannelIdList_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<vector<string>> monitoredItemIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> notifyEndTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> notifyStartTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceSystem_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
