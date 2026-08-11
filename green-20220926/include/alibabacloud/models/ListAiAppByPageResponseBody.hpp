// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAPPBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAPPBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAiAppByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiAppByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiAppByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAiAppByPageResponseBody() = default ;
    ListAiAppByPageResponseBody(const ListAiAppByPageResponseBody &) = default ;
    ListAiAppByPageResponseBody(ListAiAppByPageResponseBody &&) = default ;
    ListAiAppByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiAppByPageResponseBody() = default ;
    ListAiAppByPageResponseBody& operator=(const ListAiAppByPageResponseBody &) = default ;
    ListAiAppByPageResponseBody& operator=(ListAiAppByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppStatus, appStatus_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(LastTraceTime, lastTraceTime_);
        DARABONBA_PTR_TO_JSON(RiskEvents, riskEvents_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(WarningCount, warningCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppStatus, appStatus_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(LastTraceTime, lastTraceTime_);
        DARABONBA_PTR_FROM_JSON(RiskEvents, riskEvents_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(WarningCount, warningCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskEvents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskEvents& obj) { 
          DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
          DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
          DARABONBA_PTR_TO_JSON(EventDescs, eventDescs_);
          DARABONBA_PTR_TO_JSON(EventIds, eventIds_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
        };
        friend void from_json(const Darabonba::Json& j, RiskEvents& obj) { 
          DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
          DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
          DARABONBA_PTR_FROM_JSON(EventDescs, eventDescs_);
          DARABONBA_PTR_FROM_JSON(EventIds, eventIds_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
        };
        RiskEvents() = default ;
        RiskEvents(const RiskEvents &) = default ;
        RiskEvents(RiskEvents &&) = default ;
        RiskEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskEvents() = default ;
        RiskEvents& operator=(const RiskEvents &) = default ;
        RiskEvents& operator=(RiskEvents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Labels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Labels& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Labels& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(LabelDesc, labelDesc_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Labels() = default ;
          Labels(const Labels &) = default ;
          Labels(Labels &&) = default ;
          Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Labels() = default ;
          Labels& operator=(const Labels &) = default ;
          Labels& operator=(Labels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->label_ == nullptr
        && this->labelDesc_ == nullptr && this->type_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Labels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // labelDesc Field Functions 
          bool hasLabelDesc() const { return this->labelDesc_ != nullptr;};
          void deleteLabelDesc() { this->labelDesc_ = nullptr;};
          inline string getLabelDesc() const { DARABONBA_PTR_GET_DEFAULT(labelDesc_, "") };
          inline Labels& setLabelDesc(string labelDesc) { DARABONBA_PTR_SET_VALUE(labelDesc_, labelDesc) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Labels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The label name.
          shared_ptr<string> label_ {};
          // The label description.
          shared_ptr<string> labelDesc_ {};
          // The type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventCount_ == nullptr && this->eventDescs_ == nullptr && this->eventIds_ == nullptr && this->eventName_ == nullptr && this->eventStatus_ == nullptr
        && this->labels_ == nullptr; };
        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline RiskEvents& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventCount Field Functions 
        bool hasEventCount() const { return this->eventCount_ != nullptr;};
        void deleteEventCount() { this->eventCount_ = nullptr;};
        inline int64_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
        inline RiskEvents& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


        // eventDescs Field Functions 
        bool hasEventDescs() const { return this->eventDescs_ != nullptr;};
        void deleteEventDescs() { this->eventDescs_ = nullptr;};
        inline const vector<string> & getEventDescs() const { DARABONBA_PTR_GET_CONST(eventDescs_, vector<string>) };
        inline vector<string> getEventDescs() { DARABONBA_PTR_GET(eventDescs_, vector<string>) };
        inline RiskEvents& setEventDescs(const vector<string> & eventDescs) { DARABONBA_PTR_SET_VALUE(eventDescs_, eventDescs) };
        inline RiskEvents& setEventDescs(vector<string> && eventDescs) { DARABONBA_PTR_SET_RVALUE(eventDescs_, eventDescs) };


        // eventIds Field Functions 
        bool hasEventIds() const { return this->eventIds_ != nullptr;};
        void deleteEventIds() { this->eventIds_ = nullptr;};
        inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
        inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
        inline RiskEvents& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
        inline RiskEvents& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline RiskEvents& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventStatus Field Functions 
        bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
        void deleteEventStatus() { this->eventStatus_ = nullptr;};
        inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
        inline RiskEvents& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<RiskEvents::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<RiskEvents::Labels>) };
        inline vector<RiskEvents::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<RiskEvents::Labels>) };
        inline RiskEvents& setLabels(const vector<RiskEvents::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline RiskEvents& setLabels(vector<RiskEvents::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      protected:
        // The risk event code.
        shared_ptr<string> eventCode_ {};
        // The number of events.
        shared_ptr<int64_t> eventCount_ {};
        // The event descriptions.
        shared_ptr<vector<string>> eventDescs_ {};
        // The list of risk event IDs.
        shared_ptr<vector<string>> eventIds_ {};
        // The risk event name.
        shared_ptr<string> eventName_ {};
        // The event status. Valid values:
        // 
        // - **unhandled**: Not handled.
        // - **resolved**: Handled.
        shared_ptr<string> eventStatus_ {};
        // The list of label items.
        shared_ptr<vector<RiskEvents::Labels>> labels_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appStatus_ == nullptr && this->channel_ == nullptr && this->lastTraceTime_ == nullptr && this->riskEvents_ == nullptr
        && this->riskLevel_ == nullptr && this->traceStatus_ == nullptr && this->uid_ == nullptr && this->warningCount_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Items& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Items& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appStatus Field Functions 
      bool hasAppStatus() const { return this->appStatus_ != nullptr;};
      void deleteAppStatus() { this->appStatus_ = nullptr;};
      inline string getAppStatus() const { DARABONBA_PTR_GET_DEFAULT(appStatus_, "") };
      inline Items& setAppStatus(string appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Items& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // lastTraceTime Field Functions 
      bool hasLastTraceTime() const { return this->lastTraceTime_ != nullptr;};
      void deleteLastTraceTime() { this->lastTraceTime_ = nullptr;};
      inline string getLastTraceTime() const { DARABONBA_PTR_GET_DEFAULT(lastTraceTime_, "") };
      inline Items& setLastTraceTime(string lastTraceTime) { DARABONBA_PTR_SET_VALUE(lastTraceTime_, lastTraceTime) };


      // riskEvents Field Functions 
      bool hasRiskEvents() const { return this->riskEvents_ != nullptr;};
      void deleteRiskEvents() { this->riskEvents_ = nullptr;};
      inline const vector<Items::RiskEvents> & getRiskEvents() const { DARABONBA_PTR_GET_CONST(riskEvents_, vector<Items::RiskEvents>) };
      inline vector<Items::RiskEvents> getRiskEvents() { DARABONBA_PTR_GET(riskEvents_, vector<Items::RiskEvents>) };
      inline Items& setRiskEvents(const vector<Items::RiskEvents> & riskEvents) { DARABONBA_PTR_SET_VALUE(riskEvents_, riskEvents) };
      inline Items& setRiskEvents(vector<Items::RiskEvents> && riskEvents) { DARABONBA_PTR_SET_RVALUE(riskEvents_, riskEvents) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Items& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // traceStatus Field Functions 
      bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
      void deleteTraceStatus() { this->traceStatus_ = nullptr;};
      inline string getTraceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, "") };
      inline Items& setTraceStatus(string traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Items& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // warningCount Field Functions 
      bool hasWarningCount() const { return this->warningCount_ != nullptr;};
      void deleteWarningCount() { this->warningCount_ = nullptr;};
      inline int32_t getWarningCount() const { DARABONBA_PTR_GET_DEFAULT(warningCount_, 0) };
      inline Items& setWarningCount(int32_t warningCount) { DARABONBA_PTR_SET_VALUE(warningCount_, warningCount) };


    protected:
      // appId。
      shared_ptr<string> appId_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The application status.
      shared_ptr<string> appStatus_ {};
      // The channel.
      shared_ptr<string> channel_ {};
      // The last active time.
      shared_ptr<string> lastTraceTime_ {};
      // The risk events.
      shared_ptr<vector<Items::RiskEvents>> riskEvents_ {};
      // The risk level.
      shared_ptr<string> riskLevel_ {};
      // The Tracing Analysis status.
      shared_ptr<string> traceStatus_ {};
      // UID。
      shared_ptr<string> uid_ {};
      // The number of alerts.
      shared_ptr<int32_t> warningCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAiAppByPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAiAppByPageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAiAppByPageResponseBody::Items>) };
    inline vector<ListAiAppByPageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAiAppByPageResponseBody::Items>) };
    inline ListAiAppByPageResponseBody& setItems(const vector<ListAiAppByPageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAiAppByPageResponseBody& setItems(vector<ListAiAppByPageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAiAppByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAiAppByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAiAppByPageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The data on the current page.
    shared_ptr<vector<ListAiAppByPageResponseBody::Items>> items_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID assigned by the backend to uniquely identify the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
