// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEINSTANCERESPONSEBODY_HPP_
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
  class DiagnoseInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DiagnoseInstanceResponseBody() = default ;
    DiagnoseInstanceResponseBody(const DiagnoseInstanceResponseBody &) = default ;
    DiagnoseInstanceResponseBody(DiagnoseInstanceResponseBody &&) = default ;
    DiagnoseInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseInstanceResponseBody() = default ;
    DiagnoseInstanceResponseBody& operator=(const DiagnoseInstanceResponseBody &) = default ;
    DiagnoseInstanceResponseBody& operator=(DiagnoseInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(diagnosisMode, diagnosisMode_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(reportId, reportId_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(diagnosisMode, diagnosisMode_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(reportId, reportId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(desc, desc_);
          DARABONBA_ANY_TO_JSON(detail, detail_);
          DARABONBA_PTR_TO_JSON(item, item_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(state, state_);
          DARABONBA_PTR_TO_JSON(suggest, suggest_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(desc, desc_);
          DARABONBA_ANY_FROM_JSON(detail, detail_);
          DARABONBA_PTR_FROM_JSON(item, item_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(state, state_);
          DARABONBA_PTR_FROM_JSON(suggest, suggest_);
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
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->detail_ == nullptr && this->item_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->suggest_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Items& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline         const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
        Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
        inline Items& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
        inline Items& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline Items& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Items& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // suggest Field Functions 
        bool hasSuggest() const { return this->suggest_ != nullptr;};
        void deleteSuggest() { this->suggest_ = nullptr;};
        inline string getSuggest() const { DARABONBA_PTR_GET_DEFAULT(suggest_, "") };
        inline Items& setSuggest(string suggest) { DARABONBA_PTR_SET_VALUE(suggest_, suggest) };


      protected:
        shared_ptr<string> desc_ {};
        Darabonba::Json detail_ {};
        shared_ptr<string> item_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> suggest_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->diagnosisMode_ == nullptr && this->instanceId_ == nullptr && this->items_ == nullptr && this->reportId_ == nullptr && this->state_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // diagnosisMode Field Functions 
      bool hasDiagnosisMode() const { return this->diagnosisMode_ != nullptr;};
      void deleteDiagnosisMode() { this->diagnosisMode_ = nullptr;};
      inline string getDiagnosisMode() const { DARABONBA_PTR_GET_DEFAULT(diagnosisMode_, "") };
      inline Result& setDiagnosisMode(string diagnosisMode) { DARABONBA_PTR_SET_VALUE(diagnosisMode_, diagnosisMode) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Result::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Result::Items>) };
      inline vector<Result::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Result::Items>) };
      inline Result& setItems(const vector<Result::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Result& setItems(vector<Result::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


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


    protected:
      // The timestamp when the diagnostic report was generated.
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> diagnosisMode_ {};
      // The instance ID of the diagnosed instance.
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<Result::Items>> items_ {};
      // The report ID.
      shared_ptr<string> reportId_ {};
      // The diagnostic status. Valid values: SUCCESS, FAILED, and RUNNING.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiagnoseInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DiagnoseInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DiagnoseInstanceResponseBody::Result) };
    inline DiagnoseInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DiagnoseInstanceResponseBody::Result) };
    inline DiagnoseInstanceResponseBody& setResult(const DiagnoseInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DiagnoseInstanceResponseBody& setResult(DiagnoseInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<DiagnoseInstanceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
