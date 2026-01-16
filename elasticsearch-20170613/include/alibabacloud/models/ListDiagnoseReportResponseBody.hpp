// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODY_HPP_
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
  class ListDiagnoseReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDiagnoseReportResponseBody() = default ;
    ListDiagnoseReportResponseBody(const ListDiagnoseReportResponseBody &) = default ;
    ListDiagnoseReportResponseBody(ListDiagnoseReportResponseBody &&) = default ;
    ListDiagnoseReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseReportResponseBody() = default ;
    ListDiagnoseReportResponseBody& operator=(const ListDiagnoseReportResponseBody &) = default ;
    ListDiagnoseReportResponseBody& operator=(ListDiagnoseReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(diagnoseItems, diagnoseItems_);
        DARABONBA_PTR_TO_JSON(health, health_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(reportId, reportId_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(trigger, trigger_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(diagnoseItems, diagnoseItems_);
        DARABONBA_PTR_FROM_JSON(health, health_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(reportId, reportId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(trigger, trigger_);
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
      class DiagnoseItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiagnoseItems& obj) { 
          DARABONBA_PTR_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(health, health_);
          DARABONBA_PTR_TO_JSON(item, item_);
        };
        friend void from_json(const Darabonba::Json& j, DiagnoseItems& obj) { 
          DARABONBA_PTR_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(health, health_);
          DARABONBA_PTR_FROM_JSON(item, item_);
        };
        DiagnoseItems() = default ;
        DiagnoseItems(const DiagnoseItems &) = default ;
        DiagnoseItems(DiagnoseItems &&) = default ;
        DiagnoseItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiagnoseItems() = default ;
        DiagnoseItems& operator=(const DiagnoseItems &) = default ;
        DiagnoseItems& operator=(DiagnoseItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(desc, desc_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(result, result_);
            DARABONBA_PTR_TO_JSON(suggest, suggest_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(desc, desc_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(result, result_);
            DARABONBA_PTR_FROM_JSON(suggest, suggest_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desc_ == nullptr
        && this->name_ == nullptr && this->result_ == nullptr && this->suggest_ == nullptr && this->type_ == nullptr; };
          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
          inline Detail& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Detail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
          inline Detail& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


          // suggest Field Functions 
          bool hasSuggest() const { return this->suggest_ != nullptr;};
          void deleteSuggest() { this->suggest_ = nullptr;};
          inline string getSuggest() const { DARABONBA_PTR_GET_DEFAULT(suggest_, "") };
          inline Detail& setSuggest(string suggest) { DARABONBA_PTR_SET_VALUE(suggest_, suggest) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Detail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The diagnosis.
          shared_ptr<string> desc_ {};
          // The description of the diagnostic item.
          shared_ptr<string> name_ {};
          // The suggestion for the diagnosis.
          shared_ptr<string> result_ {};
          shared_ptr<string> suggest_ {};
          // The full name of the diagnostic item.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->health_ == nullptr && this->item_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const DiagnoseItems::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, DiagnoseItems::Detail) };
        inline DiagnoseItems::Detail getDetail() { DARABONBA_PTR_GET(detail_, DiagnoseItems::Detail) };
        inline DiagnoseItems& setDetail(const DiagnoseItems::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline DiagnoseItems& setDetail(DiagnoseItems::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // health Field Functions 
        bool hasHealth() const { return this->health_ != nullptr;};
        void deleteHealth() { this->health_ = nullptr;};
        inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
        inline DiagnoseItems& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline DiagnoseItems& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      protected:
        // The type of the diagnostic result. Valid values:
        // 
        // *   TEXT: text description
        // *   CONSOLE_API: console-triggered
        // *   ES_API: API triggered
        shared_ptr<DiagnoseItems::Detail> detail_ {};
        // The details of the diagnostic item.
        shared_ptr<string> health_ {};
        // The health of the diagnostic item. Supported: GREEN, YELLOW, RED, and UNKNOWN.
        shared_ptr<string> item_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->diagnoseItems_ == nullptr && this->health_ == nullptr && this->instanceId_ == nullptr && this->reportId_ == nullptr && this->state_ == nullptr
        && this->trigger_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diagnoseItems Field Functions 
      bool hasDiagnoseItems() const { return this->diagnoseItems_ != nullptr;};
      void deleteDiagnoseItems() { this->diagnoseItems_ = nullptr;};
      inline const vector<Result::DiagnoseItems> & getDiagnoseItems() const { DARABONBA_PTR_GET_CONST(diagnoseItems_, vector<Result::DiagnoseItems>) };
      inline vector<Result::DiagnoseItems> getDiagnoseItems() { DARABONBA_PTR_GET(diagnoseItems_, vector<Result::DiagnoseItems>) };
      inline Result& setDiagnoseItems(const vector<Result::DiagnoseItems> & diagnoseItems) { DARABONBA_PTR_SET_VALUE(diagnoseItems_, diagnoseItems) };
      inline Result& setDiagnoseItems(vector<Result::DiagnoseItems> && diagnoseItems) { DARABONBA_PTR_SET_RVALUE(diagnoseItems_, diagnoseItems) };


      // health Field Functions 
      bool hasHealth() const { return this->health_ != nullptr;};
      void deleteHealth() { this->health_ = nullptr;};
      inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
      inline Result& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Result& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
      inline Result& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    protected:
      // The ID of the report.
      shared_ptr<int64_t> createTime_ {};
      // The name of the item.
      shared_ptr<vector<Result::DiagnoseItems>> diagnoseItems_ {};
      // Reports the list of diagnostic item information.
      shared_ptr<string> health_ {};
      // The overall health of the cluster in the report. Supported: GREEN, YELLOW, RED, and UNKNOWN.
      shared_ptr<string> instanceId_ {};
      // The diagnosis status. Valid values: Supported: SUCCESS, FAILED, and RUNNING.
      shared_ptr<string> reportId_ {};
      // The ID of the instance for diagnosis.
      shared_ptr<string> state_ {};
      // The timestamp when the report was created.
      shared_ptr<string> trigger_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The returned results.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDiagnoseReportResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListDiagnoseReportResponseBody::Headers) };
    inline ListDiagnoseReportResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListDiagnoseReportResponseBody::Headers) };
    inline ListDiagnoseReportResponseBody& setHeaders(const ListDiagnoseReportResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDiagnoseReportResponseBody& setHeaders(ListDiagnoseReportResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnoseReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDiagnoseReportResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDiagnoseReportResponseBody::Result>) };
    inline vector<ListDiagnoseReportResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDiagnoseReportResponseBody::Result>) };
    inline ListDiagnoseReportResponseBody& setResult(const vector<ListDiagnoseReportResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDiagnoseReportResponseBody& setResult(vector<ListDiagnoseReportResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The total number of entries returned.
    shared_ptr<ListDiagnoseReportResponseBody::Headers> headers_ {};
    // The header of the response.
    shared_ptr<string> requestId_ {};
    // The trigger mode of health diagnostics. Valid values:
    // 
    // *   SYSTEM: The system is automatically triggered.
    // *   INNER: internal trigger
    // *   USER: manually triggered by the user
    shared_ptr<vector<ListDiagnoseReportResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
