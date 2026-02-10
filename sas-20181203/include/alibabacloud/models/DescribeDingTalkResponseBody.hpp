// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDINGTALKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDINGTALKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDingTalkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDingTalkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDingTalkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDingTalkResponseBody() = default ;
    DescribeDingTalkResponseBody(const DescribeDingTalkResponseBody &) = default ;
    DescribeDingTalkResponseBody(DescribeDingTalkResponseBody &&) = default ;
    DescribeDingTalkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDingTalkResponseBody() = default ;
    DescribeDingTalkResponseBody& operator=(const DescribeDingTalkResponseBody &) = default ;
    DescribeDingTalkResponseBody& operator=(DescribeDingTalkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of messages.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ActionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActionList& obj) { 
        DARABONBA_PTR_TO_JSON(ActionName, actionName_);
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ConfigList, configList_);
        DARABONBA_PTR_TO_JSON(DingTalkLang, dingTalkLang_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, ActionList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
        DARABONBA_PTR_FROM_JSON(DingTalkLang, dingTalkLang_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      ActionList() = default ;
      ActionList(const ActionList &) = default ;
      ActionList(ActionList &&) = default ;
      ActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActionList() = default ;
      ActionList& operator=(const ActionList &) = default ;
      ActionList& operator=(ActionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionName_ == nullptr
        && this->aliUid_ == nullptr && this->configList_ == nullptr && this->dingTalkLang_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->groupIdList_ == nullptr && this->id_ == nullptr && this->intervalTime_ == nullptr && this->status_ == nullptr && this->url_ == nullptr; };
      // actionName Field Functions 
      bool hasActionName() const { return this->actionName_ != nullptr;};
      void deleteActionName() { this->actionName_ = nullptr;};
      inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
      inline ActionList& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ActionList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // configList Field Functions 
      bool hasConfigList() const { return this->configList_ != nullptr;};
      void deleteConfigList() { this->configList_ = nullptr;};
      inline string getConfigList() const { DARABONBA_PTR_GET_DEFAULT(configList_, "") };
      inline ActionList& setConfigList(string configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };


      // dingTalkLang Field Functions 
      bool hasDingTalkLang() const { return this->dingTalkLang_ != nullptr;};
      void deleteDingTalkLang() { this->dingTalkLang_ = nullptr;};
      inline string getDingTalkLang() const { DARABONBA_PTR_GET_DEFAULT(dingTalkLang_, "") };
      inline ActionList& setDingTalkLang(string dingTalkLang) { DARABONBA_PTR_SET_VALUE(dingTalkLang_, dingTalkLang) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ActionList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ActionList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // groupIdList Field Functions 
      bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
      void deleteGroupIdList() { this->groupIdList_ = nullptr;};
      inline string getGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(groupIdList_, "") };
      inline ActionList& setGroupIdList(string groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline ActionList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intervalTime Field Functions 
      bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
      void deleteIntervalTime() { this->intervalTime_ = nullptr;};
      inline int32_t getIntervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0) };
      inline ActionList& setIntervalTime(int32_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ActionList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline ActionList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The name of the notification.
      shared_ptr<string> actionName_ {};
      // The UID of the user.
      shared_ptr<int64_t> aliUid_ {};
      // The list of notification settings.
      shared_ptr<string> configList_ {};
      // The language of the content within notifications. Valid values:
      // 
      // *   **zh**: Chinese
      // *   **en**: English
      shared_ptr<string> dingTalkLang_ {};
      // The creation time. unit:millisecond.
      shared_ptr<int64_t> gmtCreate_ {};
      // The modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // The group IDs.
      shared_ptr<string> groupIdList_ {};
      // The ID of the notification.
      shared_ptr<int32_t> id_ {};
      // The interval at which the notifications are sent.unit:minute.
      shared_ptr<int32_t> intervalTime_ {};
      // The status of the notification. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<int32_t> status_ {};
      // The parameters of the notification.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->actionList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const vector<DescribeDingTalkResponseBody::ActionList> & getActionList() const { DARABONBA_PTR_GET_CONST(actionList_, vector<DescribeDingTalkResponseBody::ActionList>) };
    inline vector<DescribeDingTalkResponseBody::ActionList> getActionList() { DARABONBA_PTR_GET(actionList_, vector<DescribeDingTalkResponseBody::ActionList>) };
    inline DescribeDingTalkResponseBody& setActionList(const vector<DescribeDingTalkResponseBody::ActionList> & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline DescribeDingTalkResponseBody& setActionList(vector<DescribeDingTalkResponseBody::ActionList> && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeDingTalkResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeDingTalkResponseBody::PageInfo) };
    inline DescribeDingTalkResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeDingTalkResponseBody::PageInfo) };
    inline DescribeDingTalkResponseBody& setPageInfo(const DescribeDingTalkResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeDingTalkResponseBody& setPageInfo(DescribeDingTalkResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDingTalkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of details of notifications.
    shared_ptr<vector<DescribeDingTalkResponseBody::ActionList>> actionList_ {};
    // The pagination information.
    shared_ptr<DescribeDingTalkResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
