// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
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
  class ListAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAlertsResponseBody() = default ;
    ListAlertsResponseBody(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody(ListAlertsResponseBody &&) = default ;
    ListAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBody() = default ;
    ListAlertsResponseBody& operator=(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody& operator=(ListAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(ListAlerts, listAlerts_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(ListAlerts, listAlerts_);
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
      class ListAlerts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListAlerts& obj) { 
          DARABONBA_PTR_TO_JSON(AcknowledgeTime, acknowledgeTime_);
          DARABONBA_PTR_TO_JSON(Activities, activities_);
          DARABONBA_PTR_TO_JSON(AlertEvents, alertEvents_);
          DARABONBA_PTR_TO_JSON(AlertId, alertId_);
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Describe, describe_);
          DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
          DARABONBA_PTR_TO_JSON(DispatchRuleName, dispatchRuleName_);
          DARABONBA_PTR_TO_JSON(Handler, handler_);
          DARABONBA_PTR_TO_JSON(NotifyRobots, notifyRobots_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(Solution, solution_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, ListAlerts& obj) { 
          DARABONBA_PTR_FROM_JSON(AcknowledgeTime, acknowledgeTime_);
          DARABONBA_PTR_FROM_JSON(Activities, activities_);
          DARABONBA_PTR_FROM_JSON(AlertEvents, alertEvents_);
          DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Describe, describe_);
          DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
          DARABONBA_PTR_FROM_JSON(DispatchRuleName, dispatchRuleName_);
          DARABONBA_PTR_FROM_JSON(Handler, handler_);
          DARABONBA_PTR_FROM_JSON(NotifyRobots, notifyRobots_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(Solution, solution_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        ListAlerts() = default ;
        ListAlerts(const ListAlerts &) = default ;
        ListAlerts(ListAlerts &&) = default ;
        ListAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListAlerts() = default ;
        ListAlerts& operator=(const ListAlerts &) = default ;
        ListAlerts& operator=(ListAlerts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AlertEvents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertEvents& obj) { 
            DARABONBA_PTR_TO_JSON(AlertName, alertName_);
            DARABONBA_PTR_TO_JSON(Annotations, annotations_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(GeneratorURL, generatorURL_);
            DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
            DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
            DARABONBA_PTR_TO_JSON(Labels, labels_);
            DARABONBA_PTR_TO_JSON(ReceiveTime, receiveTime_);
            DARABONBA_PTR_TO_JSON(Severity, severity_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(State, state_);
          };
          friend void from_json(const Darabonba::Json& j, AlertEvents& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
            DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(GeneratorURL, generatorURL_);
            DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
            DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
            DARABONBA_PTR_FROM_JSON(Labels, labels_);
            DARABONBA_PTR_FROM_JSON(ReceiveTime, receiveTime_);
            DARABONBA_PTR_FROM_JSON(Severity, severity_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(State, state_);
          };
          AlertEvents() = default ;
          AlertEvents(const AlertEvents &) = default ;
          AlertEvents(AlertEvents &&) = default ;
          AlertEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertEvents() = default ;
          AlertEvents& operator=(const AlertEvents &) = default ;
          AlertEvents& operator=(AlertEvents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alertName_ == nullptr
        && this->annotations_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->generatorURL_ == nullptr && this->integrationName_ == nullptr
        && this->integrationType_ == nullptr && this->labels_ == nullptr && this->receiveTime_ == nullptr && this->severity_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr; };
          // alertName Field Functions 
          bool hasAlertName() const { return this->alertName_ != nullptr;};
          void deleteAlertName() { this->alertName_ = nullptr;};
          inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
          inline AlertEvents& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


          // annotations Field Functions 
          bool hasAnnotations() const { return this->annotations_ != nullptr;};
          void deleteAnnotations() { this->annotations_ = nullptr;};
          inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
          inline AlertEvents& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline AlertEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline AlertEvents& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // generatorURL Field Functions 
          bool hasGeneratorURL() const { return this->generatorURL_ != nullptr;};
          void deleteGeneratorURL() { this->generatorURL_ = nullptr;};
          inline string getGeneratorURL() const { DARABONBA_PTR_GET_DEFAULT(generatorURL_, "") };
          inline AlertEvents& setGeneratorURL(string generatorURL) { DARABONBA_PTR_SET_VALUE(generatorURL_, generatorURL) };


          // integrationName Field Functions 
          bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
          void deleteIntegrationName() { this->integrationName_ = nullptr;};
          inline string getIntegrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
          inline AlertEvents& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


          // integrationType Field Functions 
          bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
          void deleteIntegrationType() { this->integrationType_ = nullptr;};
          inline string getIntegrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
          inline AlertEvents& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
          inline AlertEvents& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


          // receiveTime Field Functions 
          bool hasReceiveTime() const { return this->receiveTime_ != nullptr;};
          void deleteReceiveTime() { this->receiveTime_ = nullptr;};
          inline string getReceiveTime() const { DARABONBA_PTR_GET_DEFAULT(receiveTime_, "") };
          inline AlertEvents& setReceiveTime(string receiveTime) { DARABONBA_PTR_SET_VALUE(receiveTime_, receiveTime) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline AlertEvents& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline AlertEvents& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline AlertEvents& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        protected:
          // The name of the event.
          shared_ptr<string> alertName_ {};
          // The annotations.
          shared_ptr<string> annotations_ {};
          // The description of the event.
          shared_ptr<string> description_ {};
          // The time when the event ended.
          shared_ptr<string> endTime_ {};
          // The URL of the event.
          shared_ptr<string> generatorURL_ {};
          // The name of the integration that corresponds to the alert event.
          shared_ptr<string> integrationName_ {};
          // The type of the integration that corresponds to the alert event. Valid values:
          // 
          // *   ARMS
          // *   CLOUD_MONITOR
          // *   MSE
          // *   ARMS_CLOUD_DIALTEST
          // *   PROMETHEUS
          // *   LOG_SERVICE
          // *   CUSTOM
          // *   ARMS_PROMETHEUS
          // *   ARMS_APP_MON
          // *   ARMS_FRONT_MON
          // *   ARMS_CUSTOM
          // *   XTRACE
          // *   GRAFANA
          // *   ZABBIX
          // *   SKYWALKING
          // *   EVENT_BRIDGE
          // *   NAGIOS
          // *   OPENFALCON
          // *   ARMS_INSIGHTS
          shared_ptr<string> integrationType_ {};
          // The tags.
          shared_ptr<string> labels_ {};
          // The time when the event was created.
          shared_ptr<string> receiveTime_ {};
          // The severity level of the event. Valid values:
          // 
          // *   critical
          // *   error
          // *   warning
          // *   info
          shared_ptr<string> severity_ {};
          // The time when the event started.
          shared_ptr<string> startTime_ {};
          // The status of the event. Valid values:
          // 
          // *   Active: The event is not cleared.
          // *   Silenced: The event is silenced.
          // *   Resolved: The event is cleared.
          shared_ptr<string> state_ {};
        };

        class Activities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Activities& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
            DARABONBA_PTR_TO_JSON(Time, time_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Activities& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
            DARABONBA_PTR_FROM_JSON(Time, time_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Activities() = default ;
          Activities(const Activities &) = default ;
          Activities(Activities &&) = default ;
          Activities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Activities() = default ;
          Activities& operator=(const Activities &) = default ;
          Activities& operator=(Activities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->handlerName_ == nullptr && this->time_ == nullptr && this->type_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Activities& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Activities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // handlerName Field Functions 
          bool hasHandlerName() const { return this->handlerName_ != nullptr;};
          void deleteHandlerName() { this->handlerName_ = nullptr;};
          inline string getHandlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
          inline Activities& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


          // time Field Functions 
          bool hasTime() const { return this->time_ != nullptr;};
          void deleteTime() { this->time_ = nullptr;};
          inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
          inline Activities& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
          inline Activities& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The content of the alert notification.
          shared_ptr<string> content_ {};
          // The description of the activity.
          shared_ptr<string> description_ {};
          // The name of the handler.
          shared_ptr<string> handlerName_ {};
          // The operation time of the activity.
          shared_ptr<string> time_ {};
          // The type of the activity. Valid values:
          // 
          // *   1: The alert is claimed.
          // *   2: The alert is disclaimed.
          // *   3: A comment is added for the alert.
          // *   4: The alert is disabled.
          // *   5: An alert notification is sent.
          shared_ptr<int64_t> type_ {};
        };

        virtual bool empty() const override { return this->acknowledgeTime_ == nullptr
        && this->activities_ == nullptr && this->alertEvents_ == nullptr && this->alertId_ == nullptr && this->alertName_ == nullptr && this->createTime_ == nullptr
        && this->describe_ == nullptr && this->dispatchRuleId_ == nullptr && this->dispatchRuleName_ == nullptr && this->handler_ == nullptr && this->notifyRobots_ == nullptr
        && this->owner_ == nullptr && this->recoverTime_ == nullptr && this->severity_ == nullptr && this->solution_ == nullptr && this->state_ == nullptr; };
        // acknowledgeTime Field Functions 
        bool hasAcknowledgeTime() const { return this->acknowledgeTime_ != nullptr;};
        void deleteAcknowledgeTime() { this->acknowledgeTime_ = nullptr;};
        inline int64_t getAcknowledgeTime() const { DARABONBA_PTR_GET_DEFAULT(acknowledgeTime_, 0L) };
        inline ListAlerts& setAcknowledgeTime(int64_t acknowledgeTime) { DARABONBA_PTR_SET_VALUE(acknowledgeTime_, acknowledgeTime) };


        // activities Field Functions 
        bool hasActivities() const { return this->activities_ != nullptr;};
        void deleteActivities() { this->activities_ = nullptr;};
        inline const vector<ListAlerts::Activities> & getActivities() const { DARABONBA_PTR_GET_CONST(activities_, vector<ListAlerts::Activities>) };
        inline vector<ListAlerts::Activities> getActivities() { DARABONBA_PTR_GET(activities_, vector<ListAlerts::Activities>) };
        inline ListAlerts& setActivities(const vector<ListAlerts::Activities> & activities) { DARABONBA_PTR_SET_VALUE(activities_, activities) };
        inline ListAlerts& setActivities(vector<ListAlerts::Activities> && activities) { DARABONBA_PTR_SET_RVALUE(activities_, activities) };


        // alertEvents Field Functions 
        bool hasAlertEvents() const { return this->alertEvents_ != nullptr;};
        void deleteAlertEvents() { this->alertEvents_ = nullptr;};
        inline const vector<ListAlerts::AlertEvents> & getAlertEvents() const { DARABONBA_PTR_GET_CONST(alertEvents_, vector<ListAlerts::AlertEvents>) };
        inline vector<ListAlerts::AlertEvents> getAlertEvents() { DARABONBA_PTR_GET(alertEvents_, vector<ListAlerts::AlertEvents>) };
        inline ListAlerts& setAlertEvents(const vector<ListAlerts::AlertEvents> & alertEvents) { DARABONBA_PTR_SET_VALUE(alertEvents_, alertEvents) };
        inline ListAlerts& setAlertEvents(vector<ListAlerts::AlertEvents> && alertEvents) { DARABONBA_PTR_SET_RVALUE(alertEvents_, alertEvents) };


        // alertId Field Functions 
        bool hasAlertId() const { return this->alertId_ != nullptr;};
        void deleteAlertId() { this->alertId_ = nullptr;};
        inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
        inline ListAlerts& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline ListAlerts& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ListAlerts& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // describe Field Functions 
        bool hasDescribe() const { return this->describe_ != nullptr;};
        void deleteDescribe() { this->describe_ = nullptr;};
        inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
        inline ListAlerts& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


        // dispatchRuleId Field Functions 
        bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
        void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
        inline float getDispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0.0) };
        inline ListAlerts& setDispatchRuleId(float dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


        // dispatchRuleName Field Functions 
        bool hasDispatchRuleName() const { return this->dispatchRuleName_ != nullptr;};
        void deleteDispatchRuleName() { this->dispatchRuleName_ = nullptr;};
        inline string getDispatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleName_, "") };
        inline ListAlerts& setDispatchRuleName(string dispatchRuleName) { DARABONBA_PTR_SET_VALUE(dispatchRuleName_, dispatchRuleName) };


        // handler Field Functions 
        bool hasHandler() const { return this->handler_ != nullptr;};
        void deleteHandler() { this->handler_ = nullptr;};
        inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
        inline ListAlerts& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


        // notifyRobots Field Functions 
        bool hasNotifyRobots() const { return this->notifyRobots_ != nullptr;};
        void deleteNotifyRobots() { this->notifyRobots_ = nullptr;};
        inline string getNotifyRobots() const { DARABONBA_PTR_GET_DEFAULT(notifyRobots_, "") };
        inline ListAlerts& setNotifyRobots(string notifyRobots) { DARABONBA_PTR_SET_VALUE(notifyRobots_, notifyRobots) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline ListAlerts& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // recoverTime Field Functions 
        bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
        void deleteRecoverTime() { this->recoverTime_ = nullptr;};
        inline int64_t getRecoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
        inline ListAlerts& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline ListAlerts& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // solution Field Functions 
        bool hasSolution() const { return this->solution_ != nullptr;};
        void deleteSolution() { this->solution_ = nullptr;};
        inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
        inline ListAlerts& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline int64_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
        inline ListAlerts& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // Time to claim the alarm.
        shared_ptr<int64_t> acknowledgeTime_ {};
        // The list of activities.
        shared_ptr<vector<ListAlerts::Activities>> activities_ {};
        // The list of events.
        shared_ptr<vector<ListAlerts::AlertEvents>> alertEvents_ {};
        // The alert ID.
        shared_ptr<int64_t> alertId_ {};
        // The name of the alert rule.
        shared_ptr<string> alertName_ {};
        // The time when the alert was created.
        shared_ptr<string> createTime_ {};
        // The description of a event execution status.
        shared_ptr<string> describe_ {};
        // The ID of the notification policy.
        shared_ptr<float> dispatchRuleId_ {};
        // The name of the notification policy.
        shared_ptr<string> dispatchRuleName_ {};
        // Alarm handler.
        shared_ptr<string> handler_ {};
        // The contact card of an instant messaging app.
        shared_ptr<string> notifyRobots_ {};
        // The notification object configured in the notification policy, responsible for handling alerts.
        shared_ptr<string> owner_ {};
        // Alarm recovery time.
        shared_ptr<int64_t> recoverTime_ {};
        // The severity level of the alert. Valid values: P6, P5, P4, P3, P2, and P1. The preceding values are listed in ascending order of severity.
        shared_ptr<string> severity_ {};
        // The Alert solution.
        shared_ptr<string> solution_ {};
        // The status of the alert. Valid values:
        // 
        // *   0: The alert is pending.
        // *   1: The alert is being handled.
        // *   2: The alert is handled.
        shared_ptr<int64_t> state_ {};
      };

      virtual bool empty() const override { return this->listAlerts_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // listAlerts Field Functions 
      bool hasListAlerts() const { return this->listAlerts_ != nullptr;};
      void deleteListAlerts() { this->listAlerts_ = nullptr;};
      inline const vector<PageBean::ListAlerts> & getListAlerts() const { DARABONBA_PTR_GET_CONST(listAlerts_, vector<PageBean::ListAlerts>) };
      inline vector<PageBean::ListAlerts> getListAlerts() { DARABONBA_PTR_GET(listAlerts_, vector<PageBean::ListAlerts>) };
      inline PageBean& setListAlerts(const vector<PageBean::ListAlerts> & listAlerts) { DARABONBA_PTR_SET_VALUE(listAlerts_, listAlerts) };
      inline PageBean& setListAlerts(vector<PageBean::ListAlerts> && listAlerts) { DARABONBA_PTR_SET_RVALUE(listAlerts_, listAlerts) };


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
      // The queried alert notification history records.
      shared_ptr<vector<PageBean::ListAlerts>> listAlerts_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of alerts returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of queried alerts.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->pageBean_ == nullptr && this->requestId_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlertsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const ListAlertsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListAlertsResponseBody::PageBean) };
    inline ListAlertsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, ListAlertsResponseBody::PageBean) };
    inline ListAlertsResponseBody& setPageBean(const ListAlertsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListAlertsResponseBody& setPageBean(ListAlertsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned error message.
    shared_ptr<string> message_ {};
    // The struct returned.
    shared_ptr<ListAlertsResponseBody::PageBean> pageBean_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
