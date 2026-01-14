// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqQueryAbilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqQueryAbilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqQueryAbilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SmartqQueryAbilityResponseBody() = default ;
    SmartqQueryAbilityResponseBody(const SmartqQueryAbilityResponseBody &) = default ;
    SmartqQueryAbilityResponseBody(SmartqQueryAbilityResponseBody &&) = default ;
    SmartqQueryAbilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqQueryAbilityResponseBody() = default ;
    SmartqQueryAbilityResponseBody& operator=(const SmartqQueryAbilityResponseBody &) = default ;
    SmartqQueryAbilityResponseBody& operator=(SmartqQueryAbilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ChartType, chartType_);
        DARABONBA_PTR_TO_JSON(ConclusionText, conclusionText_);
        DARABONBA_PTR_TO_JSON(DataList, dataList_);
        DARABONBA_PTR_TO_JSON(LogicSql, logicSql_);
        DARABONBA_PTR_TO_JSON(MetaType, metaType_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ChartType, chartType_);
        DARABONBA_PTR_FROM_JSON(ConclusionText, conclusionText_);
        DARABONBA_PTR_FROM_JSON(DataList, dataList_);
        DARABONBA_PTR_FROM_JSON(LogicSql, logicSql_);
        DARABONBA_PTR_FROM_JSON(MetaType, metaType_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
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
      class Values : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Values& obj) { 
          DARABONBA_PTR_TO_JSON(Row, row_);
        };
        friend void from_json(const Darabonba::Json& j, Values& obj) { 
          DARABONBA_PTR_FROM_JSON(Row, row_);
        };
        Values() = default ;
        Values(const Values &) = default ;
        Values(Values &&) = default ;
        Values(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Values() = default ;
        Values& operator=(const Values &) = default ;
        Values& operator=(Values &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->row_ == nullptr; };
        // row Field Functions 
        bool hasRow() const { return this->row_ != nullptr;};
        void deleteRow() { this->row_ = nullptr;};
        inline const vector<string> & getRow() const { DARABONBA_PTR_GET_CONST(row_, vector<string>) };
        inline vector<string> getRow() { DARABONBA_PTR_GET(row_, vector<string>) };
        inline Values& setRow(const vector<string> & row) { DARABONBA_PTR_SET_VALUE(row_, row) };
        inline Values& setRow(vector<string> && row) { DARABONBA_PTR_SET_RVALUE(row_, row) };


      protected:
        // Data values for each row.
        shared_ptr<vector<string>> row_ {};
      };

      class MetaType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaType& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MetaType& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MetaType() = default ;
        MetaType(const MetaType &) = default ;
        MetaType(MetaType &&) = default ;
        MetaType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaType() = default ;
        MetaType& operator=(const MetaType &) = default ;
        MetaType& operator=(MetaType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline MetaType& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MetaType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline MetaType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Column tuple name.
        shared_ptr<string> key_ {};
        shared_ptr<string> type_ {};
        // Column tuple type.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->chartType_ == nullptr
        && this->conclusionText_ == nullptr && this->dataList_ == nullptr && this->logicSql_ == nullptr && this->metaType_ == nullptr && this->values_ == nullptr; };
      // chartType Field Functions 
      bool hasChartType() const { return this->chartType_ != nullptr;};
      void deleteChartType() { this->chartType_ = nullptr;};
      inline string getChartType() const { DARABONBA_PTR_GET_DEFAULT(chartType_, "") };
      inline Result& setChartType(string chartType) { DARABONBA_PTR_SET_VALUE(chartType_, chartType) };


      // conclusionText Field Functions 
      bool hasConclusionText() const { return this->conclusionText_ != nullptr;};
      void deleteConclusionText() { this->conclusionText_ = nullptr;};
      inline string getConclusionText() const { DARABONBA_PTR_GET_DEFAULT(conclusionText_, "") };
      inline Result& setConclusionText(string conclusionText) { DARABONBA_PTR_SET_VALUE(conclusionText_, conclusionText) };


      // dataList Field Functions 
      bool hasDataList() const { return this->dataList_ != nullptr;};
      void deleteDataList() { this->dataList_ = nullptr;};
      inline const vector<string> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<string>) };
      inline vector<string> getDataList() { DARABONBA_PTR_GET(dataList_, vector<string>) };
      inline Result& setDataList(const vector<string> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
      inline Result& setDataList(vector<string> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


      // logicSql Field Functions 
      bool hasLogicSql() const { return this->logicSql_ != nullptr;};
      void deleteLogicSql() { this->logicSql_ = nullptr;};
      inline string getLogicSql() const { DARABONBA_PTR_GET_DEFAULT(logicSql_, "") };
      inline Result& setLogicSql(string logicSql) { DARABONBA_PTR_SET_VALUE(logicSql_, logicSql) };


      // metaType Field Functions 
      bool hasMetaType() const { return this->metaType_ != nullptr;};
      void deleteMetaType() { this->metaType_ = nullptr;};
      inline const vector<Result::MetaType> & getMetaType() const { DARABONBA_PTR_GET_CONST(metaType_, vector<Result::MetaType>) };
      inline vector<Result::MetaType> getMetaType() { DARABONBA_PTR_GET(metaType_, vector<Result::MetaType>) };
      inline Result& setMetaType(const vector<Result::MetaType> & metaType) { DARABONBA_PTR_SET_VALUE(metaType_, metaType) };
      inline Result& setMetaType(vector<Result::MetaType> && metaType) { DARABONBA_PTR_SET_RVALUE(metaType_, metaType) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<Result::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Result::Values>) };
      inline vector<Result::Values> getValues() { DARABONBA_PTR_GET(values_, vector<Result::Values>) };
      inline Result& setValues(const vector<Result::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Result& setValues(vector<Result::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // Suggested chart type.
      shared_ptr<string> chartType_ {};
      // Summary information.
      shared_ptr<string> conclusionText_ {};
      shared_ptr<vector<string>> dataList_ {};
      // Visualized logical SQL.
      shared_ptr<string> logicSql_ {};
      // List of column tuple types.
      shared_ptr<vector<Result::MetaType>> metaType_ {};
      // Array of data value lists.
      shared_ptr<vector<Result::Values>> values_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SmartqQueryAbilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const SmartqQueryAbilityResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, SmartqQueryAbilityResponseBody::Result) };
    inline SmartqQueryAbilityResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, SmartqQueryAbilityResponseBody::Result) };
    inline SmartqQueryAbilityResponseBody& setResult(const SmartqQueryAbilityResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SmartqQueryAbilityResponseBody& setResult(SmartqQueryAbilityResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SmartqQueryAbilityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<SmartqQueryAbilityResponseBody::Result> result_ {};
    // Whether the operation was successful.
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
