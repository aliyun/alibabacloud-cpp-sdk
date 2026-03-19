// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEventRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListEventRecordsResponseBody() = default ;
    ListEventRecordsResponseBody(const ListEventRecordsResponseBody &) = default ;
    ListEventRecordsResponseBody(ListEventRecordsResponseBody &&) = default ;
    ListEventRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventRecordsResponseBody() = default ;
    ListEventRecordsResponseBody& operator=(const ListEventRecordsResponseBody &) = default ;
    ListEventRecordsResponseBody& operator=(ListEventRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultItem& obj) { 
          DARABONBA_PTR_TO_JSON(autoAlarm, autoAlarm_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(mustOps, mustOps_);
          DARABONBA_PTR_TO_JSON(product, product_);
          DARABONBA_PTR_TO_JSON(scheduleExecuteTime, scheduleExecuteTime_);
          DARABONBA_PTR_TO_JSON(scheduleFinishTime, scheduleFinishTime_);
          DARABONBA_PTR_TO_JSON(showContent, showContent_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ResultItem& obj) { 
          DARABONBA_PTR_FROM_JSON(autoAlarm, autoAlarm_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(mustOps, mustOps_);
          DARABONBA_PTR_FROM_JSON(product, product_);
          DARABONBA_PTR_FROM_JSON(scheduleExecuteTime, scheduleExecuteTime_);
          DARABONBA_PTR_FROM_JSON(scheduleFinishTime, scheduleFinishTime_);
          DARABONBA_PTR_FROM_JSON(showContent, showContent_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ResultItem() = default ;
        ResultItem(const ResultItem &) = default ;
        ResultItem(ResultItem &&) = default ;
        ResultItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultItem() = default ;
        ResultItem& operator=(const ResultItem &) = default ;
        ResultItem& operator=(ResultItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ShowContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ShowContent& obj) { 
            DARABONBA_PTR_TO_JSON(actionSuggest, actionSuggest_);
            DARABONBA_PTR_TO_JSON(desc, desc_);
            DARABONBA_PTR_TO_JSON(eventStatus, eventStatus_);
            DARABONBA_PTR_TO_JSON(eventTime, eventTime_);
            DARABONBA_PTR_TO_JSON(executeFinishTime, executeFinishTime_);
            DARABONBA_PTR_TO_JSON(executeStartTime, executeStartTime_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(opsChangeId, opsChangeId_);
          };
          friend void from_json(const Darabonba::Json& j, ShowContent& obj) { 
            DARABONBA_PTR_FROM_JSON(actionSuggest, actionSuggest_);
            DARABONBA_PTR_FROM_JSON(desc, desc_);
            DARABONBA_PTR_FROM_JSON(eventStatus, eventStatus_);
            DARABONBA_PTR_FROM_JSON(eventTime, eventTime_);
            DARABONBA_PTR_FROM_JSON(executeFinishTime, executeFinishTime_);
            DARABONBA_PTR_FROM_JSON(executeStartTime, executeStartTime_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(opsChangeId, opsChangeId_);
          };
          ShowContent() = default ;
          ShowContent(const ShowContent &) = default ;
          ShowContent(ShowContent &&) = default ;
          ShowContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ShowContent() = default ;
          ShowContent& operator=(const ShowContent &) = default ;
          ShowContent& operator=(ShowContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ActionSuggest : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ActionSuggest& obj) { 
              DARABONBA_PTR_TO_JSON(suggestActions, suggestActions_);
              DARABONBA_PTR_TO_JSON(suggestText, suggestText_);
              DARABONBA_PTR_TO_JSON(suggestType, suggestType_);
            };
            friend void from_json(const Darabonba::Json& j, ActionSuggest& obj) { 
              DARABONBA_PTR_FROM_JSON(suggestActions, suggestActions_);
              DARABONBA_PTR_FROM_JSON(suggestText, suggestText_);
              DARABONBA_PTR_FROM_JSON(suggestType, suggestType_);
            };
            ActionSuggest() = default ;
            ActionSuggest(const ActionSuggest &) = default ;
            ActionSuggest(ActionSuggest &&) = default ;
            ActionSuggest(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ActionSuggest() = default ;
            ActionSuggest& operator=(const ActionSuggest &) = default ;
            ActionSuggest& operator=(ActionSuggest &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->suggestActions_ == nullptr
        && this->suggestText_ == nullptr && this->suggestType_ == nullptr; };
            // suggestActions Field Functions 
            bool hasSuggestActions() const { return this->suggestActions_ != nullptr;};
            void deleteSuggestActions() { this->suggestActions_ = nullptr;};
            inline const vector<string> & getSuggestActions() const { DARABONBA_PTR_GET_CONST(suggestActions_, vector<string>) };
            inline vector<string> getSuggestActions() { DARABONBA_PTR_GET(suggestActions_, vector<string>) };
            inline ActionSuggest& setSuggestActions(const vector<string> & suggestActions) { DARABONBA_PTR_SET_VALUE(suggestActions_, suggestActions) };
            inline ActionSuggest& setSuggestActions(vector<string> && suggestActions) { DARABONBA_PTR_SET_RVALUE(suggestActions_, suggestActions) };


            // suggestText Field Functions 
            bool hasSuggestText() const { return this->suggestText_ != nullptr;};
            void deleteSuggestText() { this->suggestText_ = nullptr;};
            inline string getSuggestText() const { DARABONBA_PTR_GET_DEFAULT(suggestText_, "") };
            inline ActionSuggest& setSuggestText(string suggestText) { DARABONBA_PTR_SET_VALUE(suggestText_, suggestText) };


            // suggestType Field Functions 
            bool hasSuggestType() const { return this->suggestType_ != nullptr;};
            void deleteSuggestType() { this->suggestType_ = nullptr;};
            inline string getSuggestType() const { DARABONBA_PTR_GET_DEFAULT(suggestType_, "") };
            inline ActionSuggest& setSuggestType(string suggestType) { DARABONBA_PTR_SET_VALUE(suggestType_, suggestType) };


          protected:
            shared_ptr<vector<string>> suggestActions_ {};
            shared_ptr<string> suggestText_ {};
            shared_ptr<string> suggestType_ {};
          };

          virtual bool empty() const override { return this->actionSuggest_ == nullptr
        && this->desc_ == nullptr && this->eventStatus_ == nullptr && this->eventTime_ == nullptr && this->executeFinishTime_ == nullptr && this->executeStartTime_ == nullptr
        && this->instanceId_ == nullptr && this->opsChangeId_ == nullptr; };
          // actionSuggest Field Functions 
          bool hasActionSuggest() const { return this->actionSuggest_ != nullptr;};
          void deleteActionSuggest() { this->actionSuggest_ = nullptr;};
          inline const ShowContent::ActionSuggest & getActionSuggest() const { DARABONBA_PTR_GET_CONST(actionSuggest_, ShowContent::ActionSuggest) };
          inline ShowContent::ActionSuggest getActionSuggest() { DARABONBA_PTR_GET(actionSuggest_, ShowContent::ActionSuggest) };
          inline ShowContent& setActionSuggest(const ShowContent::ActionSuggest & actionSuggest) { DARABONBA_PTR_SET_VALUE(actionSuggest_, actionSuggest) };
          inline ShowContent& setActionSuggest(ShowContent::ActionSuggest && actionSuggest) { DARABONBA_PTR_SET_RVALUE(actionSuggest_, actionSuggest) };


          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline ShowContent& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // eventStatus Field Functions 
          bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
          void deleteEventStatus() { this->eventStatus_ = nullptr;};
          inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
          inline ShowContent& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


          // eventTime Field Functions 
          bool hasEventTime() const { return this->eventTime_ != nullptr;};
          void deleteEventTime() { this->eventTime_ = nullptr;};
          inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
          inline ShowContent& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


          // executeFinishTime Field Functions 
          bool hasExecuteFinishTime() const { return this->executeFinishTime_ != nullptr;};
          void deleteExecuteFinishTime() { this->executeFinishTime_ = nullptr;};
          inline string getExecuteFinishTime() const { DARABONBA_PTR_GET_DEFAULT(executeFinishTime_, "") };
          inline ShowContent& setExecuteFinishTime(string executeFinishTime) { DARABONBA_PTR_SET_VALUE(executeFinishTime_, executeFinishTime) };


          // executeStartTime Field Functions 
          bool hasExecuteStartTime() const { return this->executeStartTime_ != nullptr;};
          void deleteExecuteStartTime() { this->executeStartTime_ = nullptr;};
          inline string getExecuteStartTime() const { DARABONBA_PTR_GET_DEFAULT(executeStartTime_, "") };
          inline ShowContent& setExecuteStartTime(string executeStartTime) { DARABONBA_PTR_SET_VALUE(executeStartTime_, executeStartTime) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline ShowContent& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // opsChangeId Field Functions 
          bool hasOpsChangeId() const { return this->opsChangeId_ != nullptr;};
          void deleteOpsChangeId() { this->opsChangeId_ = nullptr;};
          inline string getOpsChangeId() const { DARABONBA_PTR_GET_DEFAULT(opsChangeId_, "") };
          inline ShowContent& setOpsChangeId(string opsChangeId) { DARABONBA_PTR_SET_VALUE(opsChangeId_, opsChangeId) };


        protected:
          shared_ptr<ShowContent::ActionSuggest> actionSuggest_ {};
          shared_ptr<string> desc_ {};
          shared_ptr<string> eventStatus_ {};
          shared_ptr<string> eventTime_ {};
          shared_ptr<string> executeFinishTime_ {};
          shared_ptr<string> executeStartTime_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> opsChangeId_ {};
        };

        virtual bool empty() const override { return this->autoAlarm_ == nullptr
        && this->displayName_ == nullptr && this->dryRun_ == nullptr && this->level_ == nullptr && this->mustOps_ == nullptr && this->product_ == nullptr
        && this->scheduleExecuteTime_ == nullptr && this->scheduleFinishTime_ == nullptr && this->showContent_ == nullptr && this->source_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
        // autoAlarm Field Functions 
        bool hasAutoAlarm() const { return this->autoAlarm_ != nullptr;};
        void deleteAutoAlarm() { this->autoAlarm_ = nullptr;};
        inline bool getAutoAlarm() const { DARABONBA_PTR_GET_DEFAULT(autoAlarm_, false) };
        inline ResultItem& setAutoAlarm(bool autoAlarm) { DARABONBA_PTR_SET_VALUE(autoAlarm_, autoAlarm) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ResultItem& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // dryRun Field Functions 
        bool hasDryRun() const { return this->dryRun_ != nullptr;};
        void deleteDryRun() { this->dryRun_ = nullptr;};
        inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
        inline ResultItem& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ResultItem& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // mustOps Field Functions 
        bool hasMustOps() const { return this->mustOps_ != nullptr;};
        void deleteMustOps() { this->mustOps_ = nullptr;};
        inline bool getMustOps() const { DARABONBA_PTR_GET_DEFAULT(mustOps_, false) };
        inline ResultItem& setMustOps(bool mustOps) { DARABONBA_PTR_SET_VALUE(mustOps_, mustOps) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline ResultItem& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // scheduleExecuteTime Field Functions 
        bool hasScheduleExecuteTime() const { return this->scheduleExecuteTime_ != nullptr;};
        void deleteScheduleExecuteTime() { this->scheduleExecuteTime_ = nullptr;};
        inline string getScheduleExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleExecuteTime_, "") };
        inline ResultItem& setScheduleExecuteTime(string scheduleExecuteTime) { DARABONBA_PTR_SET_VALUE(scheduleExecuteTime_, scheduleExecuteTime) };


        // scheduleFinishTime Field Functions 
        bool hasScheduleFinishTime() const { return this->scheduleFinishTime_ != nullptr;};
        void deleteScheduleFinishTime() { this->scheduleFinishTime_ = nullptr;};
        inline string getScheduleFinishTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleFinishTime_, "") };
        inline ResultItem& setScheduleFinishTime(string scheduleFinishTime) { DARABONBA_PTR_SET_VALUE(scheduleFinishTime_, scheduleFinishTime) };


        // showContent Field Functions 
        bool hasShowContent() const { return this->showContent_ != nullptr;};
        void deleteShowContent() { this->showContent_ = nullptr;};
        inline const ResultItem::ShowContent & getShowContent() const { DARABONBA_PTR_GET_CONST(showContent_, ResultItem::ShowContent) };
        inline ResultItem::ShowContent getShowContent() { DARABONBA_PTR_GET(showContent_, ResultItem::ShowContent) };
        inline ResultItem& setShowContent(const ResultItem::ShowContent & showContent) { DARABONBA_PTR_SET_VALUE(showContent_, showContent) };
        inline ResultItem& setShowContent(ResultItem::ShowContent && showContent) { DARABONBA_PTR_SET_RVALUE(showContent_, showContent) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ResultItem& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResultItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ResultItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<bool> autoAlarm_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<bool> dryRun_ {};
        shared_ptr<string> level_ {};
        shared_ptr<bool> mustOps_ {};
        shared_ptr<string> product_ {};
        shared_ptr<string> scheduleExecuteTime_ {};
        shared_ptr<string> scheduleFinishTime_ {};
        shared_ptr<ResultItem::ShowContent> showContent_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr
        && this->total_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Result::ResultItem> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Result::ResultItem>) };
      inline vector<Result::ResultItem> getResult() { DARABONBA_PTR_GET(result_, vector<Result::ResultItem>) };
      inline Result& setResult(const vector<Result::ResultItem> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Result& setResult(vector<Result::ResultItem> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Result& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Result::ResultItem>> result_ {};
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListEventRecordsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListEventRecordsResponseBody::Result) };
    inline ListEventRecordsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListEventRecordsResponseBody::Result) };
    inline ListEventRecordsResponseBody& setResult(const ListEventRecordsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListEventRecordsResponseBody& setResult(ListEventRecordsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<ListEventRecordsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
