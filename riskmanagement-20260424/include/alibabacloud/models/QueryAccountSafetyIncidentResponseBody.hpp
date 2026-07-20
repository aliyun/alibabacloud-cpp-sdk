// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTRESPONSEBODY_HPP_
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
  class QueryAccountSafetyIncidentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountSafetyIncidentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountSafetyIncidentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccountSafetyIncidentResponseBody() = default ;
    QueryAccountSafetyIncidentResponseBody(const QueryAccountSafetyIncidentResponseBody &) = default ;
    QueryAccountSafetyIncidentResponseBody(QueryAccountSafetyIncidentResponseBody &&) = default ;
    QueryAccountSafetyIncidentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountSafetyIncidentResponseBody() = default ;
    QueryAccountSafetyIncidentResponseBody& operator=(const QueryAccountSafetyIncidentResponseBody &) = default ;
    QueryAccountSafetyIncidentResponseBody& operator=(QueryAccountSafetyIncidentResponseBody &&) = default ;
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
        inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
        inline PageInfo& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
        inline PageInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
        inline PageInfo& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<string> current_ {};
        shared_ptr<string> pageSize_ {};
        shared_ptr<string> total_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ActionCode, actionCode_);
          DARABONBA_PTR_TO_JSON(ActionName, actionName_);
          DARABONBA_PTR_TO_JSON(AntiPunishTime, antiPunishTime_);
          DARABONBA_PTR_TO_JSON(DateExtras, dateExtras_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(EventImpact, eventImpact_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(EventReason, eventReason_);
          DARABONBA_PTR_TO_JSON(PunishTime, punishTime_);
          DARABONBA_PTR_TO_JSON(Reinforcement, reinforcement_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tip, tip_);
          DARABONBA_PTR_TO_JSON(UserGuideName, userGuideName_);
          DARABONBA_PTR_TO_JSON(UserGuideUrl, userGuideUrl_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionCode, actionCode_);
          DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
          DARABONBA_PTR_FROM_JSON(AntiPunishTime, antiPunishTime_);
          DARABONBA_PTR_FROM_JSON(DateExtras, dateExtras_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(EventImpact, eventImpact_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(EventReason, eventReason_);
          DARABONBA_PTR_FROM_JSON(PunishTime, punishTime_);
          DARABONBA_PTR_FROM_JSON(Reinforcement, reinforcement_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tip, tip_);
          DARABONBA_PTR_FROM_JSON(UserGuideName, userGuideName_);
          DARABONBA_PTR_FROM_JSON(UserGuideUrl, userGuideUrl_);
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
        class DateExtras : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DateExtras& obj) { 
            DARABONBA_PTR_TO_JSON(AlertEndTime, alertEndTime_);
            DARABONBA_PTR_TO_JSON(AlertStartTime, alertStartTime_);
            DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
          };
          friend void from_json(const Darabonba::Json& j, DateExtras& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertEndTime, alertEndTime_);
            DARABONBA_PTR_FROM_JSON(AlertStartTime, alertStartTime_);
            DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
          };
          DateExtras() = default ;
          DateExtras(const DateExtras &) = default ;
          DateExtras(DateExtras &&) = default ;
          DateExtras(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DateExtras() = default ;
          DateExtras& operator=(const DateExtras &) = default ;
          DateExtras& operator=(DateExtras &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alertEndTime_ == nullptr
        && this->alertStartTime_ == nullptr && this->lastCheckTime_ == nullptr; };
          // alertEndTime Field Functions 
          bool hasAlertEndTime() const { return this->alertEndTime_ != nullptr;};
          void deleteAlertEndTime() { this->alertEndTime_ = nullptr;};
          inline string getAlertEndTime() const { DARABONBA_PTR_GET_DEFAULT(alertEndTime_, "") };
          inline DateExtras& setAlertEndTime(string alertEndTime) { DARABONBA_PTR_SET_VALUE(alertEndTime_, alertEndTime) };


          // alertStartTime Field Functions 
          bool hasAlertStartTime() const { return this->alertStartTime_ != nullptr;};
          void deleteAlertStartTime() { this->alertStartTime_ = nullptr;};
          inline string getAlertStartTime() const { DARABONBA_PTR_GET_DEFAULT(alertStartTime_, "") };
          inline DateExtras& setAlertStartTime(string alertStartTime) { DARABONBA_PTR_SET_VALUE(alertStartTime_, alertStartTime) };


          // lastCheckTime Field Functions 
          bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
          void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
          inline string getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
          inline DateExtras& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


        protected:
          shared_ptr<string> alertEndTime_ {};
          shared_ptr<string> alertStartTime_ {};
          shared_ptr<string> lastCheckTime_ {};
        };

        virtual bool empty() const override { return this->actionCode_ == nullptr
        && this->actionName_ == nullptr && this->antiPunishTime_ == nullptr && this->dateExtras_ == nullptr && this->eventId_ == nullptr && this->eventImpact_ == nullptr
        && this->eventName_ == nullptr && this->eventReason_ == nullptr && this->punishTime_ == nullptr && this->reinforcement_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr && this->tip_ == nullptr && this->userGuideName_ == nullptr && this->userGuideUrl_ == nullptr; };
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


        // antiPunishTime Field Functions 
        bool hasAntiPunishTime() const { return this->antiPunishTime_ != nullptr;};
        void deleteAntiPunishTime() { this->antiPunishTime_ = nullptr;};
        inline string getAntiPunishTime() const { DARABONBA_PTR_GET_DEFAULT(antiPunishTime_, "") };
        inline List& setAntiPunishTime(string antiPunishTime) { DARABONBA_PTR_SET_VALUE(antiPunishTime_, antiPunishTime) };


        // dateExtras Field Functions 
        bool hasDateExtras() const { return this->dateExtras_ != nullptr;};
        void deleteDateExtras() { this->dateExtras_ = nullptr;};
        inline const List::DateExtras & getDateExtras() const { DARABONBA_PTR_GET_CONST(dateExtras_, List::DateExtras) };
        inline List::DateExtras getDateExtras() { DARABONBA_PTR_GET(dateExtras_, List::DateExtras) };
        inline List& setDateExtras(const List::DateExtras & dateExtras) { DARABONBA_PTR_SET_VALUE(dateExtras_, dateExtras) };
        inline List& setDateExtras(List::DateExtras && dateExtras) { DARABONBA_PTR_SET_RVALUE(dateExtras_, dateExtras) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline List& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventImpact Field Functions 
        bool hasEventImpact() const { return this->eventImpact_ != nullptr;};
        void deleteEventImpact() { this->eventImpact_ = nullptr;};
        inline string getEventImpact() const { DARABONBA_PTR_GET_DEFAULT(eventImpact_, "") };
        inline List& setEventImpact(string eventImpact) { DARABONBA_PTR_SET_VALUE(eventImpact_, eventImpact) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline List& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventReason Field Functions 
        bool hasEventReason() const { return this->eventReason_ != nullptr;};
        void deleteEventReason() { this->eventReason_ = nullptr;};
        inline string getEventReason() const { DARABONBA_PTR_GET_DEFAULT(eventReason_, "") };
        inline List& setEventReason(string eventReason) { DARABONBA_PTR_SET_VALUE(eventReason_, eventReason) };


        // punishTime Field Functions 
        bool hasPunishTime() const { return this->punishTime_ != nullptr;};
        void deletePunishTime() { this->punishTime_ = nullptr;};
        inline string getPunishTime() const { DARABONBA_PTR_GET_DEFAULT(punishTime_, "") };
        inline List& setPunishTime(string punishTime) { DARABONBA_PTR_SET_VALUE(punishTime_, punishTime) };


        // reinforcement Field Functions 
        bool hasReinforcement() const { return this->reinforcement_ != nullptr;};
        void deleteReinforcement() { this->reinforcement_ = nullptr;};
        inline string getReinforcement() const { DARABONBA_PTR_GET_DEFAULT(reinforcement_, "") };
        inline List& setReinforcement(string reinforcement) { DARABONBA_PTR_SET_VALUE(reinforcement_, reinforcement) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline List& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline List& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tip Field Functions 
        bool hasTip() const { return this->tip_ != nullptr;};
        void deleteTip() { this->tip_ = nullptr;};
        inline string getTip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
        inline List& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


        // userGuideName Field Functions 
        bool hasUserGuideName() const { return this->userGuideName_ != nullptr;};
        void deleteUserGuideName() { this->userGuideName_ = nullptr;};
        inline string getUserGuideName() const { DARABONBA_PTR_GET_DEFAULT(userGuideName_, "") };
        inline List& setUserGuideName(string userGuideName) { DARABONBA_PTR_SET_VALUE(userGuideName_, userGuideName) };


        // userGuideUrl Field Functions 
        bool hasUserGuideUrl() const { return this->userGuideUrl_ != nullptr;};
        void deleteUserGuideUrl() { this->userGuideUrl_ = nullptr;};
        inline string getUserGuideUrl() const { DARABONBA_PTR_GET_DEFAULT(userGuideUrl_, "") };
        inline List& setUserGuideUrl(string userGuideUrl) { DARABONBA_PTR_SET_VALUE(userGuideUrl_, userGuideUrl) };


      protected:
        shared_ptr<string> actionCode_ {};
        shared_ptr<string> actionName_ {};
        shared_ptr<string> antiPunishTime_ {};
        shared_ptr<List::DateExtras> dateExtras_ {};
        shared_ptr<string> eventId_ {};
        shared_ptr<string> eventImpact_ {};
        shared_ptr<string> eventName_ {};
        shared_ptr<string> eventReason_ {};
        shared_ptr<string> punishTime_ {};
        shared_ptr<string> reinforcement_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> tip_ {};
        shared_ptr<string> userGuideName_ {};
        shared_ptr<string> userGuideUrl_ {};
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
    inline QueryAccountSafetyIncidentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAccountSafetyIncidentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAccountSafetyIncidentResponseBody::Data) };
    inline QueryAccountSafetyIncidentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAccountSafetyIncidentResponseBody::Data) };
    inline QueryAccountSafetyIncidentResponseBody& setData(const QueryAccountSafetyIncidentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAccountSafetyIncidentResponseBody& setData(QueryAccountSafetyIncidentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAccountSafetyIncidentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountSafetyIncidentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccountSafetyIncidentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryAccountSafetyIncidentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
