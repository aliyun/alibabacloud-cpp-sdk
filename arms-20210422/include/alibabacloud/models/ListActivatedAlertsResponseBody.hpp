// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListActivatedAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActivatedAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListActivatedAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListActivatedAlertsResponseBody() = default ;
    ListActivatedAlertsResponseBody(const ListActivatedAlertsResponseBody &) = default ;
    ListActivatedAlertsResponseBody(ListActivatedAlertsResponseBody &&) = default ;
    ListActivatedAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActivatedAlertsResponseBody() = default ;
    ListActivatedAlertsResponseBody& operator=(const ListActivatedAlertsResponseBody &) = default ;
    ListActivatedAlertsResponseBody& operator=(ListActivatedAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(Alerts, alerts_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(Alerts, alerts_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Alerts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alerts& obj) { 
          DARABONBA_PTR_TO_JSON(AlertId, alertId_);
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DispatchRules, dispatchRules_);
          DARABONBA_PTR_TO_JSON(EndsAt, endsAt_);
          DARABONBA_ANY_TO_JSON(ExpandFields, expandFields_);
          DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
          DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
          DARABONBA_PTR_TO_JSON(InvolvedObjectKind, involvedObjectKind_);
          DARABONBA_PTR_TO_JSON(InvolvedObjectName, involvedObjectName_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(StartsAt, startsAt_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Alerts& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DispatchRules, dispatchRules_);
          DARABONBA_PTR_FROM_JSON(EndsAt, endsAt_);
          DARABONBA_ANY_FROM_JSON(ExpandFields, expandFields_);
          DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
          DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
          DARABONBA_PTR_FROM_JSON(InvolvedObjectKind, involvedObjectKind_);
          DARABONBA_PTR_FROM_JSON(InvolvedObjectName, involvedObjectName_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(StartsAt, startsAt_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Alerts() = default ;
        Alerts(const Alerts &) = default ;
        Alerts(Alerts &&) = default ;
        Alerts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Alerts() = default ;
        Alerts& operator=(const Alerts &) = default ;
        Alerts& operator=(Alerts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DispatchRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DispatchRules& obj) { 
            DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          };
          friend void from_json(const Darabonba::Json& j, DispatchRules& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          };
          DispatchRules() = default ;
          DispatchRules(const DispatchRules &) = default ;
          DispatchRules(DispatchRules &&) = default ;
          DispatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DispatchRules() = default ;
          DispatchRules& operator=(const DispatchRules &) = default ;
          DispatchRules& operator=(DispatchRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr; };
          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
          inline DispatchRules& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline DispatchRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        protected:
          shared_ptr<int32_t> ruleId_ {};
          shared_ptr<string> ruleName_ {};
        };

        virtual bool empty() const override { return this->alertId_ == nullptr
        && this->alertName_ == nullptr && this->alertType_ == nullptr && this->count_ == nullptr && this->createTime_ == nullptr && this->dispatchRules_ == nullptr
        && this->endsAt_ == nullptr && this->expandFields_ == nullptr && this->integrationName_ == nullptr && this->integrationType_ == nullptr && this->involvedObjectKind_ == nullptr
        && this->involvedObjectName_ == nullptr && this->message_ == nullptr && this->severity_ == nullptr && this->startsAt_ == nullptr && this->status_ == nullptr; };
        // alertId Field Functions 
        bool hasAlertId() const { return this->alertId_ != nullptr;};
        void deleteAlertId() { this->alertId_ = nullptr;};
        inline string getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, "") };
        inline Alerts& setAlertId(string alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline Alerts& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
        inline Alerts& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Alerts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Alerts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dispatchRules Field Functions 
        bool hasDispatchRules() const { return this->dispatchRules_ != nullptr;};
        void deleteDispatchRules() { this->dispatchRules_ = nullptr;};
        inline const vector<Alerts::DispatchRules> & getDispatchRules() const { DARABONBA_PTR_GET_CONST(dispatchRules_, vector<Alerts::DispatchRules>) };
        inline vector<Alerts::DispatchRules> getDispatchRules() { DARABONBA_PTR_GET(dispatchRules_, vector<Alerts::DispatchRules>) };
        inline Alerts& setDispatchRules(const vector<Alerts::DispatchRules> & dispatchRules) { DARABONBA_PTR_SET_VALUE(dispatchRules_, dispatchRules) };
        inline Alerts& setDispatchRules(vector<Alerts::DispatchRules> && dispatchRules) { DARABONBA_PTR_SET_RVALUE(dispatchRules_, dispatchRules) };


        // endsAt Field Functions 
        bool hasEndsAt() const { return this->endsAt_ != nullptr;};
        void deleteEndsAt() { this->endsAt_ = nullptr;};
        inline int64_t getEndsAt() const { DARABONBA_PTR_GET_DEFAULT(endsAt_, 0L) };
        inline Alerts& setEndsAt(int64_t endsAt) { DARABONBA_PTR_SET_VALUE(endsAt_, endsAt) };


        // expandFields Field Functions 
        bool hasExpandFields() const { return this->expandFields_ != nullptr;};
        void deleteExpandFields() { this->expandFields_ = nullptr;};
        inline         const Darabonba::Json & getExpandFields() const { DARABONBA_GET(expandFields_) };
        Darabonba::Json & getExpandFields() { DARABONBA_GET(expandFields_) };
        inline Alerts& setExpandFields(const Darabonba::Json & expandFields) { DARABONBA_SET_VALUE(expandFields_, expandFields) };
        inline Alerts& setExpandFields(Darabonba::Json && expandFields) { DARABONBA_SET_RVALUE(expandFields_, expandFields) };


        // integrationName Field Functions 
        bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
        void deleteIntegrationName() { this->integrationName_ = nullptr;};
        inline string getIntegrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
        inline Alerts& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


        // integrationType Field Functions 
        bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
        void deleteIntegrationType() { this->integrationType_ = nullptr;};
        inline string getIntegrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
        inline Alerts& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


        // involvedObjectKind Field Functions 
        bool hasInvolvedObjectKind() const { return this->involvedObjectKind_ != nullptr;};
        void deleteInvolvedObjectKind() { this->involvedObjectKind_ = nullptr;};
        inline string getInvolvedObjectKind() const { DARABONBA_PTR_GET_DEFAULT(involvedObjectKind_, "") };
        inline Alerts& setInvolvedObjectKind(string involvedObjectKind) { DARABONBA_PTR_SET_VALUE(involvedObjectKind_, involvedObjectKind) };


        // involvedObjectName Field Functions 
        bool hasInvolvedObjectName() const { return this->involvedObjectName_ != nullptr;};
        void deleteInvolvedObjectName() { this->involvedObjectName_ = nullptr;};
        inline string getInvolvedObjectName() const { DARABONBA_PTR_GET_DEFAULT(involvedObjectName_, "") };
        inline Alerts& setInvolvedObjectName(string involvedObjectName) { DARABONBA_PTR_SET_VALUE(involvedObjectName_, involvedObjectName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Alerts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline Alerts& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // startsAt Field Functions 
        bool hasStartsAt() const { return this->startsAt_ != nullptr;};
        void deleteStartsAt() { this->startsAt_ = nullptr;};
        inline int64_t getStartsAt() const { DARABONBA_PTR_GET_DEFAULT(startsAt_, 0L) };
        inline Alerts& setStartsAt(int64_t startsAt) { DARABONBA_PTR_SET_VALUE(startsAt_, startsAt) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Alerts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> alertId_ {};
        shared_ptr<string> alertName_ {};
        shared_ptr<string> alertType_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<vector<Alerts::DispatchRules>> dispatchRules_ {};
        shared_ptr<int64_t> endsAt_ {};
        Darabonba::Json expandFields_ {};
        shared_ptr<string> integrationName_ {};
        shared_ptr<string> integrationType_ {};
        shared_ptr<string> involvedObjectKind_ {};
        shared_ptr<string> involvedObjectName_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> severity_ {};
        shared_ptr<int64_t> startsAt_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->alerts_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // alerts Field Functions 
      bool hasAlerts() const { return this->alerts_ != nullptr;};
      void deleteAlerts() { this->alerts_ = nullptr;};
      inline const vector<Page::Alerts> & getAlerts() const { DARABONBA_PTR_GET_CONST(alerts_, vector<Page::Alerts>) };
      inline vector<Page::Alerts> getAlerts() { DARABONBA_PTR_GET(alerts_, vector<Page::Alerts>) };
      inline Page& setAlerts(const vector<Page::Alerts> & alerts) { DARABONBA_PTR_SET_VALUE(alerts_, alerts) };
      inline Page& setAlerts(vector<Page::Alerts> && alerts) { DARABONBA_PTR_SET_RVALUE(alerts_, alerts) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Page& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Page& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Page::Alerts>> alerts_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->requestId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListActivatedAlertsResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListActivatedAlertsResponseBody::Page) };
    inline ListActivatedAlertsResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListActivatedAlertsResponseBody::Page) };
    inline ListActivatedAlertsResponseBody& setPage(const ListActivatedAlertsResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListActivatedAlertsResponseBody& setPage(ListActivatedAlertsResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActivatedAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListActivatedAlertsResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
