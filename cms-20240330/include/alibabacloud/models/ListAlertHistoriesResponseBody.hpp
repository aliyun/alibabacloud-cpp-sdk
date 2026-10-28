// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AlertRuleSend.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListAlertHistoriesResponseBody() = default ;
    ListAlertHistoriesResponseBody(const ListAlertHistoriesResponseBody &) = default ;
    ListAlertHistoriesResponseBody(ListAlertHistoriesResponseBody &&) = default ;
    ListAlertHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertHistoriesResponseBody() = default ;
    ListAlertHistoriesResponseBody& operator=(const ListAlertHistoriesResponseBody &) = default ;
    ListAlertHistoriesResponseBody& operator=(ListAlertHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(alertHistoryId, alertHistoryId_);
        DARABONBA_PTR_TO_JSON(alertRuleId, alertRuleId_);
        DARABONBA_PTR_TO_JSON(annotations, annotations_);
        DARABONBA_PTR_TO_JSON(bizSource, bizSource_);
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(instanceDetail, instanceDetail_);
        DARABONBA_PTR_TO_JSON(instanceKey, instanceKey_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(latestLevel, latestLevel_);
        DARABONBA_PTR_TO_JSON(maxLevel, maxLevel_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
        DARABONBA_PTR_TO_JSON(observeResourceList, observeResourceList_);
        DARABONBA_PTR_TO_JSON(observeResourceType, observeResourceType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(ruleDisplayName, ruleDisplayName_);
        DARABONBA_PTR_TO_JSON(send, send_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(alertHistoryId, alertHistoryId_);
        DARABONBA_PTR_FROM_JSON(alertRuleId, alertRuleId_);
        DARABONBA_PTR_FROM_JSON(annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(bizSource, bizSource_);
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(instanceDetail, instanceDetail_);
        DARABONBA_PTR_FROM_JSON(instanceKey, instanceKey_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(latestLevel, latestLevel_);
        DARABONBA_PTR_FROM_JSON(maxLevel, maxLevel_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
        DARABONBA_PTR_FROM_JSON(observeResourceList, observeResourceList_);
        DARABONBA_PTR_FROM_JSON(observeResourceType, observeResourceType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ruleDisplayName, ruleDisplayName_);
        DARABONBA_PTR_FROM_JSON(send, send_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertHistoryId_ == nullptr
        && this->alertRuleId_ == nullptr && this->annotations_ == nullptr && this->bizSource_ == nullptr && this->count_ == nullptr && this->endTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceDetail_ == nullptr && this->instanceKey_ == nullptr && this->labels_ == nullptr
        && this->latestLevel_ == nullptr && this->maxLevel_ == nullptr && this->message_ == nullptr && this->observeResourceGlobalScope_ == nullptr && this->observeResourceList_ == nullptr
        && this->observeResourceType_ == nullptr && this->regionId_ == nullptr && this->ruleDisplayName_ == nullptr && this->send_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->workspace_ == nullptr; };
      // alertHistoryId Field Functions 
      bool hasAlertHistoryId() const { return this->alertHistoryId_ != nullptr;};
      void deleteAlertHistoryId() { this->alertHistoryId_ = nullptr;};
      inline string getAlertHistoryId() const { DARABONBA_PTR_GET_DEFAULT(alertHistoryId_, "") };
      inline Data& setAlertHistoryId(string alertHistoryId) { DARABONBA_PTR_SET_VALUE(alertHistoryId_, alertHistoryId) };


      // alertRuleId Field Functions 
      bool hasAlertRuleId() const { return this->alertRuleId_ != nullptr;};
      void deleteAlertRuleId() { this->alertRuleId_ = nullptr;};
      inline string getAlertRuleId() const { DARABONBA_PTR_GET_DEFAULT(alertRuleId_, "") };
      inline Data& setAlertRuleId(string alertRuleId) { DARABONBA_PTR_SET_VALUE(alertRuleId_, alertRuleId) };


      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const map<string, string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
      inline map<string, string> getAnnotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
      inline Data& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline Data& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // bizSource Field Functions 
      bool hasBizSource() const { return this->bizSource_ != nullptr;};
      void deleteBizSource() { this->bizSource_ = nullptr;};
      inline string getBizSource() const { DARABONBA_PTR_GET_DEFAULT(bizSource_, "") };
      inline Data& setBizSource(string bizSource) { DARABONBA_PTR_SET_VALUE(bizSource_, bizSource) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceDetail Field Functions 
      bool hasInstanceDetail() const { return this->instanceDetail_ != nullptr;};
      void deleteInstanceDetail() { this->instanceDetail_ = nullptr;};
      inline const map<string, string> & getInstanceDetail() const { DARABONBA_PTR_GET_CONST(instanceDetail_, map<string, string>) };
      inline map<string, string> getInstanceDetail() { DARABONBA_PTR_GET(instanceDetail_, map<string, string>) };
      inline Data& setInstanceDetail(const map<string, string> & instanceDetail) { DARABONBA_PTR_SET_VALUE(instanceDetail_, instanceDetail) };
      inline Data& setInstanceDetail(map<string, string> && instanceDetail) { DARABONBA_PTR_SET_RVALUE(instanceDetail_, instanceDetail) };


      // instanceKey Field Functions 
      bool hasInstanceKey() const { return this->instanceKey_ != nullptr;};
      void deleteInstanceKey() { this->instanceKey_ = nullptr;};
      inline string getInstanceKey() const { DARABONBA_PTR_GET_DEFAULT(instanceKey_, "") };
      inline Data& setInstanceKey(string instanceKey) { DARABONBA_PTR_SET_VALUE(instanceKey_, instanceKey) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
      inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
      inline Data& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // latestLevel Field Functions 
      bool hasLatestLevel() const { return this->latestLevel_ != nullptr;};
      void deleteLatestLevel() { this->latestLevel_ = nullptr;};
      inline string getLatestLevel() const { DARABONBA_PTR_GET_DEFAULT(latestLevel_, "") };
      inline Data& setLatestLevel(string latestLevel) { DARABONBA_PTR_SET_VALUE(latestLevel_, latestLevel) };


      // maxLevel Field Functions 
      bool hasMaxLevel() const { return this->maxLevel_ != nullptr;};
      void deleteMaxLevel() { this->maxLevel_ = nullptr;};
      inline string getMaxLevel() const { DARABONBA_PTR_GET_DEFAULT(maxLevel_, "") };
      inline Data& setMaxLevel(string maxLevel) { DARABONBA_PTR_SET_VALUE(maxLevel_, maxLevel) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // observeResourceGlobalScope Field Functions 
      bool hasObserveResourceGlobalScope() const { return this->observeResourceGlobalScope_ != nullptr;};
      void deleteObserveResourceGlobalScope() { this->observeResourceGlobalScope_ = nullptr;};
      inline bool getObserveResourceGlobalScope() const { DARABONBA_PTR_GET_DEFAULT(observeResourceGlobalScope_, false) };
      inline Data& setObserveResourceGlobalScope(bool observeResourceGlobalScope) { DARABONBA_PTR_SET_VALUE(observeResourceGlobalScope_, observeResourceGlobalScope) };


      // observeResourceList Field Functions 
      bool hasObserveResourceList() const { return this->observeResourceList_ != nullptr;};
      void deleteObserveResourceList() { this->observeResourceList_ = nullptr;};
      inline string getObserveResourceList() const { DARABONBA_PTR_GET_DEFAULT(observeResourceList_, "") };
      inline Data& setObserveResourceList(string observeResourceList) { DARABONBA_PTR_SET_VALUE(observeResourceList_, observeResourceList) };


      // observeResourceType Field Functions 
      bool hasObserveResourceType() const { return this->observeResourceType_ != nullptr;};
      void deleteObserveResourceType() { this->observeResourceType_ = nullptr;};
      inline string getObserveResourceType() const { DARABONBA_PTR_GET_DEFAULT(observeResourceType_, "") };
      inline Data& setObserveResourceType(string observeResourceType) { DARABONBA_PTR_SET_VALUE(observeResourceType_, observeResourceType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // ruleDisplayName Field Functions 
      bool hasRuleDisplayName() const { return this->ruleDisplayName_ != nullptr;};
      void deleteRuleDisplayName() { this->ruleDisplayName_ = nullptr;};
      inline string getRuleDisplayName() const { DARABONBA_PTR_GET_DEFAULT(ruleDisplayName_, "") };
      inline Data& setRuleDisplayName(string ruleDisplayName) { DARABONBA_PTR_SET_VALUE(ruleDisplayName_, ruleDisplayName) };


      // send Field Functions 
      bool hasSend() const { return this->send_ != nullptr;};
      void deleteSend() { this->send_ = nullptr;};
      inline const AlertRuleSend & getSend() const { DARABONBA_PTR_GET_CONST(send_, AlertRuleSend) };
      inline AlertRuleSend getSend() { DARABONBA_PTR_GET(send_, AlertRuleSend) };
      inline Data& setSend(const AlertRuleSend & send) { DARABONBA_PTR_SET_VALUE(send_, send) };
      inline Data& setSend(AlertRuleSend && send) { DARABONBA_PTR_SET_RVALUE(send_, send) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Data& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The unique identifier of the alert history.
      shared_ptr<string> alertHistoryId_ {};
      // The unique identifier of the alert rule that generated the alert history.
      shared_ptr<string> alertRuleId_ {};
      // The snapshot of the annotations of the alert rule. The annotations are stored as key-value pairs and copied from the rule when the alert is triggered.
      shared_ptr<map<string, string>> annotations_ {};
      // The business source.
      shared_ptr<string> bizSource_ {};
      // The cumulative number of alerts (alert events) during the alert duration.
      shared_ptr<int64_t> count_ {};
      // The end time (recovery time) of the alert. This field has a value only when the alert history enters the OK state. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The creation time of the alert history record. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time of the alert history record. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The detailed information of the alert object. The information is stored as key-value pairs.
      shared_ptr<map<string, string>> instanceDetail_ {};
      // The unique key (instanceKey) used to identify the alert object instance.
      shared_ptr<string> instanceKey_ {};
      // The snapshot of the labels of the alert rule. The labels are stored as key-value pairs and copied from the rule when the alert is triggered.
      shared_ptr<map<string, string>> labels_ {};
      // The level of the most recent alert during the alert duration, such as CRITICAL, WARN, or INFO.
      shared_ptr<string> latestLevel_ {};
      // The highest alert level reached during the alert duration.
      shared_ptr<string> maxLevel_ {};
      // The content of the latest alert message.
      shared_ptr<string> message_ {};
      // Indicates whether the observed object is in the global scope. The value is copied from the rule when the alert history is created.
      shared_ptr<bool> observeResourceGlobalScope_ {};
      // The serialized string of the observed object list. The value is copied from the rule when the alert history is created.
      shared_ptr<string> observeResourceList_ {};
      // The type of the observed object, such as PROMETHEUS, APM, RUM, or cms_basic. The value is copied from the rule when the alert history is created.
      shared_ptr<string> observeResourceType_ {};
      // The ID of the region to which the alert history belongs.
      shared_ptr<string> regionId_ {};
      // The display name of the corresponding rule.
      shared_ptr<string> ruleDisplayName_ {};
      // The notification sending configuration information corresponding to the alert history.
      shared_ptr<AlertRuleSend> send_ {};
      // The start time of the alert history. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The current alert status of the rule. Valid values: OK (recovered) and ALARM (alerting).
      shared_ptr<string> status_ {};
      // The identifier of the workspace to which the alert history belongs.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAlertHistoriesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAlertHistoriesResponseBody::Data>) };
    inline vector<ListAlertHistoriesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAlertHistoriesResponseBody::Data>) };
    inline ListAlertHistoriesResponseBody& setData(const vector<ListAlertHistoriesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAlertHistoriesResponseBody& setData(vector<ListAlertHistoriesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlertHistoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlertHistoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertHistoriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertHistoriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertHistoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of alert histories that match the query conditions.
    shared_ptr<vector<ListAlertHistoriesResponseBody::Data>> data_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // The total number of alert history records that match the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
