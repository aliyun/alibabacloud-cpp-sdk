// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCECONTROLEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCECONTROLEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryResourceControlEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceControlEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceControlEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryResourceControlEventsResponseBody() = default ;
    QueryResourceControlEventsResponseBody(const QueryResourceControlEventsResponseBody &) = default ;
    QueryResourceControlEventsResponseBody(QueryResourceControlEventsResponseBody &&) = default ;
    QueryResourceControlEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceControlEventsResponseBody() = default ;
    QueryResourceControlEventsResponseBody& operator=(const QueryResourceControlEventsResponseBody &) = default ;
    QueryResourceControlEventsResponseBody& operator=(QueryResourceControlEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
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
      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Current, current_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Current, current_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
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
        virtual bool empty() const override { return this->current_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
        // current Field Functions 
        bool hasCurrent() const { return this->current_ != nullptr;};
        void deleteCurrent() { this->current_ = nullptr;};
        inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
        inline PageInfo& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline PageInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int32_t> current_ {};
        shared_ptr<int32_t> pageSize_ {};
        shared_ptr<int32_t> total_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ActionCode, actionCode_);
          DARABONBA_PTR_TO_JSON(ActionName, actionName_);
          DARABONBA_PTR_TO_JSON(AlertEndTime, alertEndTime_);
          DARABONBA_PTR_TO_JSON(AlertStartTime, alertStartTime_);
          DARABONBA_PTR_TO_JSON(AntiPunishTime, antiPunishTime_);
          DARABONBA_PTR_TO_JSON(ApplyRecordCount, applyRecordCount_);
          DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
          DARABONBA_PTR_TO_JSON(ApplyTrial, applyTrial_);
          DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
          DARABONBA_PTR_TO_JSON(CaseCode, caseCode_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(Extras, extras_);
          DARABONBA_PTR_TO_JSON(FormType, formType_);
          DARABONBA_PTR_TO_JSON(GmtLatest, gmtLatest_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_TO_JSON(PreCloseTime, preCloseTime_);
          DARABONBA_PTR_TO_JSON(PunishFrom, punishFrom_);
          DARABONBA_PTR_TO_JSON(PunishTime, punishTime_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Reinforcement, reinforcement_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SupportBatchApply, supportBatchApply_);
          DARABONBA_PTR_TO_JSON(SupportSingleApply, supportSingleApply_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionCode, actionCode_);
          DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
          DARABONBA_PTR_FROM_JSON(AlertEndTime, alertEndTime_);
          DARABONBA_PTR_FROM_JSON(AlertStartTime, alertStartTime_);
          DARABONBA_PTR_FROM_JSON(AntiPunishTime, antiPunishTime_);
          DARABONBA_PTR_FROM_JSON(ApplyRecordCount, applyRecordCount_);
          DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
          DARABONBA_PTR_FROM_JSON(ApplyTrial, applyTrial_);
          DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
          DARABONBA_PTR_FROM_JSON(CaseCode, caseCode_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(Extras, extras_);
          DARABONBA_PTR_FROM_JSON(FormType, formType_);
          DARABONBA_PTR_FROM_JSON(GmtLatest, gmtLatest_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
          DARABONBA_PTR_FROM_JSON(PreCloseTime, preCloseTime_);
          DARABONBA_PTR_FROM_JSON(PunishFrom, punishFrom_);
          DARABONBA_PTR_FROM_JSON(PunishTime, punishTime_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Reinforcement, reinforcement_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SupportBatchApply, supportBatchApply_);
          DARABONBA_PTR_FROM_JSON(SupportSingleApply, supportSingleApply_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionCode_ == nullptr
        && this->actionName_ == nullptr && this->alertEndTime_ == nullptr && this->alertStartTime_ == nullptr && this->antiPunishTime_ == nullptr && this->applyRecordCount_ == nullptr
        && this->applyStatus_ == nullptr && this->applyTrial_ == nullptr && this->businessName_ == nullptr && this->caseCode_ == nullptr && this->domain_ == nullptr
        && this->eventId_ == nullptr && this->eventName_ == nullptr && this->extras_ == nullptr && this->formType_ == nullptr && this->gmtLatest_ == nullptr
        && this->instanceId_ == nullptr && this->ip_ == nullptr && this->lastCheckTime_ == nullptr && this->preCloseTime_ == nullptr && this->punishFrom_ == nullptr
        && this->punishTime_ == nullptr && this->reason_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr && this->reinforcement_ == nullptr
        && this->status_ == nullptr && this->supportBatchApply_ == nullptr && this->supportSingleApply_ == nullptr && this->triggerType_ == nullptr && this->url_ == nullptr; };
        // actionCode Field Functions 
        bool hasActionCode() const { return this->actionCode_ != nullptr;};
        void deleteActionCode() { this->actionCode_ = nullptr;};
        inline string getActionCode() const { DARABONBA_PTR_GET_DEFAULT(actionCode_, "") };
        inline List& setActionCode(string actionCode) { DARABONBA_PTR_SET_VALUE(actionCode_, actionCode) };


        // actionName Field Functions 
        bool hasActionName() const { return this->actionName_ != nullptr;};
        void deleteActionName() { this->actionName_ = nullptr;};
        inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
        inline List& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


        // alertEndTime Field Functions 
        bool hasAlertEndTime() const { return this->alertEndTime_ != nullptr;};
        void deleteAlertEndTime() { this->alertEndTime_ = nullptr;};
        inline string getAlertEndTime() const { DARABONBA_PTR_GET_DEFAULT(alertEndTime_, "") };
        inline List& setAlertEndTime(string alertEndTime) { DARABONBA_PTR_SET_VALUE(alertEndTime_, alertEndTime) };


        // alertStartTime Field Functions 
        bool hasAlertStartTime() const { return this->alertStartTime_ != nullptr;};
        void deleteAlertStartTime() { this->alertStartTime_ = nullptr;};
        inline string getAlertStartTime() const { DARABONBA_PTR_GET_DEFAULT(alertStartTime_, "") };
        inline List& setAlertStartTime(string alertStartTime) { DARABONBA_PTR_SET_VALUE(alertStartTime_, alertStartTime) };


        // antiPunishTime Field Functions 
        bool hasAntiPunishTime() const { return this->antiPunishTime_ != nullptr;};
        void deleteAntiPunishTime() { this->antiPunishTime_ = nullptr;};
        inline string getAntiPunishTime() const { DARABONBA_PTR_GET_DEFAULT(antiPunishTime_, "") };
        inline List& setAntiPunishTime(string antiPunishTime) { DARABONBA_PTR_SET_VALUE(antiPunishTime_, antiPunishTime) };


        // applyRecordCount Field Functions 
        bool hasApplyRecordCount() const { return this->applyRecordCount_ != nullptr;};
        void deleteApplyRecordCount() { this->applyRecordCount_ = nullptr;};
        inline int32_t getApplyRecordCount() const { DARABONBA_PTR_GET_DEFAULT(applyRecordCount_, 0) };
        inline List& setApplyRecordCount(int32_t applyRecordCount) { DARABONBA_PTR_SET_VALUE(applyRecordCount_, applyRecordCount) };


        // applyStatus Field Functions 
        bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
        void deleteApplyStatus() { this->applyStatus_ = nullptr;};
        inline string getApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, "") };
        inline List& setApplyStatus(string applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


        // applyTrial Field Functions 
        bool hasApplyTrial() const { return this->applyTrial_ != nullptr;};
        void deleteApplyTrial() { this->applyTrial_ = nullptr;};
        inline bool getApplyTrial() const { DARABONBA_PTR_GET_DEFAULT(applyTrial_, false) };
        inline List& setApplyTrial(bool applyTrial) { DARABONBA_PTR_SET_VALUE(applyTrial_, applyTrial) };


        // businessName Field Functions 
        bool hasBusinessName() const { return this->businessName_ != nullptr;};
        void deleteBusinessName() { this->businessName_ = nullptr;};
        inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
        inline List& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


        // caseCode Field Functions 
        bool hasCaseCode() const { return this->caseCode_ != nullptr;};
        void deleteCaseCode() { this->caseCode_ = nullptr;};
        inline string getCaseCode() const { DARABONBA_PTR_GET_DEFAULT(caseCode_, "") };
        inline List& setCaseCode(string caseCode) { DARABONBA_PTR_SET_VALUE(caseCode_, caseCode) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline List& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline List& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline List& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // extras Field Functions 
        bool hasExtras() const { return this->extras_ != nullptr;};
        void deleteExtras() { this->extras_ = nullptr;};
        inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
        inline List& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


        // formType Field Functions 
        bool hasFormType() const { return this->formType_ != nullptr;};
        void deleteFormType() { this->formType_ = nullptr;};
        inline string getFormType() const { DARABONBA_PTR_GET_DEFAULT(formType_, "") };
        inline List& setFormType(string formType) { DARABONBA_PTR_SET_VALUE(formType_, formType) };


        // gmtLatest Field Functions 
        bool hasGmtLatest() const { return this->gmtLatest_ != nullptr;};
        void deleteGmtLatest() { this->gmtLatest_ = nullptr;};
        inline string getGmtLatest() const { DARABONBA_PTR_GET_DEFAULT(gmtLatest_, "") };
        inline List& setGmtLatest(string gmtLatest) { DARABONBA_PTR_SET_VALUE(gmtLatest_, gmtLatest) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline List& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // lastCheckTime Field Functions 
        bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
        void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
        inline string getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
        inline List& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


        // preCloseTime Field Functions 
        bool hasPreCloseTime() const { return this->preCloseTime_ != nullptr;};
        void deletePreCloseTime() { this->preCloseTime_ = nullptr;};
        inline string getPreCloseTime() const { DARABONBA_PTR_GET_DEFAULT(preCloseTime_, "") };
        inline List& setPreCloseTime(string preCloseTime) { DARABONBA_PTR_SET_VALUE(preCloseTime_, preCloseTime) };


        // punishFrom Field Functions 
        bool hasPunishFrom() const { return this->punishFrom_ != nullptr;};
        void deletePunishFrom() { this->punishFrom_ = nullptr;};
        inline string getPunishFrom() const { DARABONBA_PTR_GET_DEFAULT(punishFrom_, "") };
        inline List& setPunishFrom(string punishFrom) { DARABONBA_PTR_SET_VALUE(punishFrom_, punishFrom) };


        // punishTime Field Functions 
        bool hasPunishTime() const { return this->punishTime_ != nullptr;};
        void deletePunishTime() { this->punishTime_ = nullptr;};
        inline string getPunishTime() const { DARABONBA_PTR_GET_DEFAULT(punishTime_, "") };
        inline List& setPunishTime(string punishTime) { DARABONBA_PTR_SET_VALUE(punishTime_, punishTime) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline List& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline List& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline List& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reinforcement Field Functions 
        bool hasReinforcement() const { return this->reinforcement_ != nullptr;};
        void deleteReinforcement() { this->reinforcement_ = nullptr;};
        inline string getReinforcement() const { DARABONBA_PTR_GET_DEFAULT(reinforcement_, "") };
        inline List& setReinforcement(string reinforcement) { DARABONBA_PTR_SET_VALUE(reinforcement_, reinforcement) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // supportBatchApply Field Functions 
        bool hasSupportBatchApply() const { return this->supportBatchApply_ != nullptr;};
        void deleteSupportBatchApply() { this->supportBatchApply_ = nullptr;};
        inline bool getSupportBatchApply() const { DARABONBA_PTR_GET_DEFAULT(supportBatchApply_, false) };
        inline List& setSupportBatchApply(bool supportBatchApply) { DARABONBA_PTR_SET_VALUE(supportBatchApply_, supportBatchApply) };


        // supportSingleApply Field Functions 
        bool hasSupportSingleApply() const { return this->supportSingleApply_ != nullptr;};
        void deleteSupportSingleApply() { this->supportSingleApply_ = nullptr;};
        inline bool getSupportSingleApply() const { DARABONBA_PTR_GET_DEFAULT(supportSingleApply_, false) };
        inline List& setSupportSingleApply(bool supportSingleApply) { DARABONBA_PTR_SET_VALUE(supportSingleApply_, supportSingleApply) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline List& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline List& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> actionCode_ {};
        shared_ptr<string> actionName_ {};
        shared_ptr<string> alertEndTime_ {};
        shared_ptr<string> alertStartTime_ {};
        shared_ptr<string> antiPunishTime_ {};
        shared_ptr<int32_t> applyRecordCount_ {};
        shared_ptr<string> applyStatus_ {};
        shared_ptr<bool> applyTrial_ {};
        shared_ptr<string> businessName_ {};
        shared_ptr<string> caseCode_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> eventId_ {};
        shared_ptr<string> eventName_ {};
        shared_ptr<string> extras_ {};
        shared_ptr<string> formType_ {};
        shared_ptr<string> gmtLatest_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> ip_ {};
        shared_ptr<string> lastCheckTime_ {};
        shared_ptr<string> preCloseTime_ {};
        shared_ptr<string> punishFrom_ {};
        shared_ptr<string> punishTime_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> reinforcement_ {};
        shared_ptr<string> status_ {};
        shared_ptr<bool> supportBatchApply_ {};
        shared_ptr<bool> supportSingleApply_ {};
        shared_ptr<string> triggerType_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<Data::PageInfo> pageInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryResourceControlEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryResourceControlEventsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryResourceControlEventsResponseBody::Data) };
    inline QueryResourceControlEventsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryResourceControlEventsResponseBody::Data) };
    inline QueryResourceControlEventsResponseBody& setData(const QueryResourceControlEventsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryResourceControlEventsResponseBody& setData(QueryResourceControlEventsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryResourceControlEventsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryResourceControlEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryResourceControlEventsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryResourceControlEventsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
