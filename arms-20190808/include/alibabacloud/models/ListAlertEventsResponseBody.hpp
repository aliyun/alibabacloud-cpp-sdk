// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAlertEventsResponseBody() = default ;
    ListAlertEventsResponseBody(const ListAlertEventsResponseBody &) = default ;
    ListAlertEventsResponseBody(ListAlertEventsResponseBody &&) = default ;
    ListAlertEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsResponseBody() = default ;
    ListAlertEventsResponseBody& operator=(const ListAlertEventsResponseBody &) = default ;
    ListAlertEventsResponseBody& operator=(ListAlertEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(Events, events_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(Events, events_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Events : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Events& obj) { 
          DARABONBA_PTR_TO_JSON(Alarms, alarms_);
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
          DARABONBA_PTR_TO_JSON(Annotations, annotations_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(GeneratorURL, generatorURL_);
          DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
          DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
          DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(NotificationPolicies, notificationPolicies_);
          DARABONBA_PTR_TO_JSON(ReceiveTime, receiveTime_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TriggerCount, triggerCount_);
        };
        friend void from_json(const Darabonba::Json& j, Events& obj) { 
          DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
          DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(GeneratorURL, generatorURL_);
          DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
          DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
          DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(NotificationPolicies, notificationPolicies_);
          DARABONBA_PTR_FROM_JSON(ReceiveTime, receiveTime_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TriggerCount, triggerCount_);
        };
        Events() = default ;
        Events(const Events &) = default ;
        Events(Events &&) = default ;
        Events(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Events() = default ;
        Events& operator=(const Events &) = default ;
        Events& operator=(Events &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NotificationPolicies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotificationPolicies& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, NotificationPolicies& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          NotificationPolicies() = default ;
          NotificationPolicies(const NotificationPolicies &) = default ;
          NotificationPolicies(NotificationPolicies &&) = default ;
          NotificationPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NotificationPolicies() = default ;
          NotificationPolicies& operator=(const NotificationPolicies &) = default ;
          NotificationPolicies& operator=(NotificationPolicies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline NotificationPolicies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NotificationPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the notification policy.
          shared_ptr<int64_t> id_ {};
          // The name of the notification policy.
          shared_ptr<string> name_ {};
        };

        class Alarms : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Alarms& obj) { 
            DARABONBA_PTR_TO_JSON(AlarmId, alarmId_);
            DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(State, state_);
          };
          friend void from_json(const Darabonba::Json& j, Alarms& obj) { 
            DARABONBA_PTR_FROM_JSON(AlarmId, alarmId_);
            DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(State, state_);
          };
          Alarms() = default ;
          Alarms(const Alarms &) = default ;
          Alarms(Alarms &&) = default ;
          Alarms(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Alarms() = default ;
          Alarms& operator=(const Alarms &) = default ;
          Alarms& operator=(Alarms &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alarmId_ == nullptr
        && this->alarmName_ == nullptr && this->createTime_ == nullptr && this->state_ == nullptr; };
          // alarmId Field Functions 
          bool hasAlarmId() const { return this->alarmId_ != nullptr;};
          void deleteAlarmId() { this->alarmId_ = nullptr;};
          inline int64_t getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, 0L) };
          inline Alarms& setAlarmId(int64_t alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


          // alarmName Field Functions 
          bool hasAlarmName() const { return this->alarmName_ != nullptr;};
          void deleteAlarmName() { this->alarmName_ = nullptr;};
          inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
          inline Alarms& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline Alarms& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
          inline Alarms& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        protected:
          // The ID of the alert.
          shared_ptr<int64_t> alarmId_ {};
          // The name of the alert.
          shared_ptr<string> alarmName_ {};
          // The time when the alert was created.
          shared_ptr<string> createTime_ {};
          // The status of the alert. Valid values:
          // 
          // *   0: The alert is pending.
          // *   1: The alert is being handled.
          // *   2: The alert is cleared.
          shared_ptr<int32_t> state_ {};
        };

        virtual bool empty() const override { return this->alarms_ == nullptr
        && this->alertName_ == nullptr && this->annotations_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->generatorURL_ == nullptr
        && this->handlerName_ == nullptr && this->integrationName_ == nullptr && this->integrationType_ == nullptr && this->labels_ == nullptr && this->notificationPolicies_ == nullptr
        && this->receiveTime_ == nullptr && this->severity_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->triggerCount_ == nullptr; };
        // alarms Field Functions 
        bool hasAlarms() const { return this->alarms_ != nullptr;};
        void deleteAlarms() { this->alarms_ = nullptr;};
        inline const vector<Events::Alarms> & getAlarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<Events::Alarms>) };
        inline vector<Events::Alarms> getAlarms() { DARABONBA_PTR_GET(alarms_, vector<Events::Alarms>) };
        inline Events& setAlarms(const vector<Events::Alarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
        inline Events& setAlarms(vector<Events::Alarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline Events& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // annotations Field Functions 
        bool hasAnnotations() const { return this->annotations_ != nullptr;};
        void deleteAnnotations() { this->annotations_ = nullptr;};
        inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
        inline Events& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Events& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Events& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // generatorURL Field Functions 
        bool hasGeneratorURL() const { return this->generatorURL_ != nullptr;};
        void deleteGeneratorURL() { this->generatorURL_ = nullptr;};
        inline string getGeneratorURL() const { DARABONBA_PTR_GET_DEFAULT(generatorURL_, "") };
        inline Events& setGeneratorURL(string generatorURL) { DARABONBA_PTR_SET_VALUE(generatorURL_, generatorURL) };


        // handlerName Field Functions 
        bool hasHandlerName() const { return this->handlerName_ != nullptr;};
        void deleteHandlerName() { this->handlerName_ = nullptr;};
        inline string getHandlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
        inline Events& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


        // integrationName Field Functions 
        bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
        void deleteIntegrationName() { this->integrationName_ = nullptr;};
        inline string getIntegrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
        inline Events& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


        // integrationType Field Functions 
        bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
        void deleteIntegrationType() { this->integrationType_ = nullptr;};
        inline string getIntegrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
        inline Events& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline Events& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // notificationPolicies Field Functions 
        bool hasNotificationPolicies() const { return this->notificationPolicies_ != nullptr;};
        void deleteNotificationPolicies() { this->notificationPolicies_ = nullptr;};
        inline const vector<Events::NotificationPolicies> & getNotificationPolicies() const { DARABONBA_PTR_GET_CONST(notificationPolicies_, vector<Events::NotificationPolicies>) };
        inline vector<Events::NotificationPolicies> getNotificationPolicies() { DARABONBA_PTR_GET(notificationPolicies_, vector<Events::NotificationPolicies>) };
        inline Events& setNotificationPolicies(const vector<Events::NotificationPolicies> & notificationPolicies) { DARABONBA_PTR_SET_VALUE(notificationPolicies_, notificationPolicies) };
        inline Events& setNotificationPolicies(vector<Events::NotificationPolicies> && notificationPolicies) { DARABONBA_PTR_SET_RVALUE(notificationPolicies_, notificationPolicies) };


        // receiveTime Field Functions 
        bool hasReceiveTime() const { return this->receiveTime_ != nullptr;};
        void deleteReceiveTime() { this->receiveTime_ = nullptr;};
        inline string getReceiveTime() const { DARABONBA_PTR_GET_DEFAULT(receiveTime_, "") };
        inline Events& setReceiveTime(string receiveTime) { DARABONBA_PTR_SET_VALUE(receiveTime_, receiveTime) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline Events& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Events& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Events& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // triggerCount Field Functions 
        bool hasTriggerCount() const { return this->triggerCount_ != nullptr;};
        void deleteTriggerCount() { this->triggerCount_ = nullptr;};
        inline int64_t getTriggerCount() const { DARABONBA_PTR_GET_DEFAULT(triggerCount_, 0L) };
        inline Events& setTriggerCount(int64_t triggerCount) { DARABONBA_PTR_SET_VALUE(triggerCount_, triggerCount) };


      protected:
        // The associated alerts.
        shared_ptr<vector<Events::Alarms>> alarms_ {};
        // The name of the alert.
        shared_ptr<string> alertName_ {};
        // The annotations.
        shared_ptr<string> annotations_ {};
        // The description of the alert event.
        shared_ptr<string> description_ {};
        // The end time.
        shared_ptr<string> endTime_ {};
        // The URL of the alert event.
        shared_ptr<string> generatorURL_ {};
        // The user who handled the alert.
        shared_ptr<string> handlerName_ {};
        // The name of the alert integration.
        shared_ptr<string> integrationName_ {};
        // The type of the alert integration.
        shared_ptr<string> integrationType_ {};
        // The tags.
        shared_ptr<string> labels_ {};
        // The associated notification policies.
        shared_ptr<vector<Events::NotificationPolicies>> notificationPolicies_ {};
        // The time when the alert event was received.
        shared_ptr<string> receiveTime_ {};
        // The severity level of the alert. Valid values:
        // 
        // *   critical: P1
        // *   error: P2
        // *   warning: P3
        // *   page: P4
        // *   default: P6
        shared_ptr<string> severity_ {};
        // The start time.
        shared_ptr<string> startTime_ {};
        // The status of the alert event. Valid values:
        // 
        // *   Active
        // *   Silenced
        // *   Resolved
        shared_ptr<string> status_ {};
        // The number of times the event is triggered.
        shared_ptr<int64_t> triggerCount_ {};
      };

      virtual bool empty() const override { return this->events_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // events Field Functions 
      bool hasEvents() const { return this->events_ != nullptr;};
      void deleteEvents() { this->events_ = nullptr;};
      inline const vector<PageBean::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<PageBean::Events>) };
      inline vector<PageBean::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<PageBean::Events>) };
      inline PageBean& setEvents(const vector<PageBean::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
      inline PageBean& setEvents(vector<PageBean::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The queried historical alert events.
      shared_ptr<vector<PageBean::Events>> events_ {};
      // The number of the page returned.
      shared_ptr<int64_t> page_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const ListAlertEventsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListAlertEventsResponseBody::PageBean) };
    inline ListAlertEventsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, ListAlertEventsResponseBody::PageBean) };
    inline ListAlertEventsResponseBody& setPageBean(const ListAlertEventsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListAlertEventsResponseBody& setPageBean(ListAlertEventsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    shared_ptr<ListAlertEventsResponseBody::PageBean> pageBean_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
