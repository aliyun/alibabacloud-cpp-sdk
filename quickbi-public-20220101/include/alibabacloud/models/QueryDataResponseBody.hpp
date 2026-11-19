// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARESPONSEBODY_HPP_
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
  class QueryDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDataResponseBody() = default ;
    QueryDataResponseBody(const QueryDataResponseBody &) = default ;
    QueryDataResponseBody(QueryDataResponseBody &&) = default ;
    QueryDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataResponseBody() = default ;
    QueryDataResponseBody& operator=(const QueryDataResponseBody &) = default ;
    QueryDataResponseBody& operator=(QueryDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Headers, headers_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(Values, values_);
        DARABONBA_PTR_TO_JSON(ValuesV2, valuesV2_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Headers, headers_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
        DARABONBA_PTR_FROM_JSON(ValuesV2, valuesV2_);
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
      class ValuesV2 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValuesV2& obj) { 
          DARABONBA_PTR_TO_JSON(RowValue, rowValue_);
        };
        friend void from_json(const Darabonba::Json& j, ValuesV2& obj) { 
          DARABONBA_PTR_FROM_JSON(RowValue, rowValue_);
        };
        ValuesV2() = default ;
        ValuesV2(const ValuesV2 &) = default ;
        ValuesV2(ValuesV2 &&) = default ;
        ValuesV2(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValuesV2() = default ;
        ValuesV2& operator=(const ValuesV2 &) = default ;
        ValuesV2& operator=(ValuesV2 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RowValue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RowValue& obj) { 
            DARABONBA_PTR_TO_JSON(L, l_);
            DARABONBA_PTR_TO_JSON(R, r_);
            DARABONBA_PTR_TO_JSON(V, v_);
          };
          friend void from_json(const Darabonba::Json& j, RowValue& obj) { 
            DARABONBA_PTR_FROM_JSON(L, l_);
            DARABONBA_PTR_FROM_JSON(R, r_);
            DARABONBA_PTR_FROM_JSON(V, v_);
          };
          RowValue() = default ;
          RowValue(const RowValue &) = default ;
          RowValue(RowValue &&) = default ;
          RowValue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RowValue() = default ;
          RowValue& operator=(const RowValue &) = default ;
          RowValue& operator=(RowValue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->l_ == nullptr
        && this->r_ == nullptr && this->v_ == nullptr; };
          // l Field Functions 
          bool hasL() const { return this->l_ != nullptr;};
          void deleteL() { this->l_ = nullptr;};
          inline string getL() const { DARABONBA_PTR_GET_DEFAULT(l_, "") };
          inline RowValue& setL(string l) { DARABONBA_PTR_SET_VALUE(l_, l) };


          // r Field Functions 
          bool hasR() const { return this->r_ != nullptr;};
          void deleteR() { this->r_ = nullptr;};
          inline string getR() const { DARABONBA_PTR_GET_DEFAULT(r_, "") };
          inline RowValue& setR(string r) { DARABONBA_PTR_SET_VALUE(r_, r) };


          // v Field Functions 
          bool hasV() const { return this->v_ != nullptr;};
          void deleteV() { this->v_ = nullptr;};
          inline string getV() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
          inline RowValue& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


        protected:
          // The field alias set in Data Service.
          shared_ptr<string> l_ {};
          // The original value.
          shared_ptr<string> r_ {};
          // The display value.
          shared_ptr<string> v_ {};
        };

        virtual bool empty() const override { return this->rowValue_ == nullptr; };
        // rowValue Field Functions 
        bool hasRowValue() const { return this->rowValue_ != nullptr;};
        void deleteRowValue() { this->rowValue_ = nullptr;};
        inline const vector<ValuesV2::RowValue> & getRowValue() const { DARABONBA_PTR_GET_CONST(rowValue_, vector<ValuesV2::RowValue>) };
        inline vector<ValuesV2::RowValue> getRowValue() { DARABONBA_PTR_GET(rowValue_, vector<ValuesV2::RowValue>) };
        inline ValuesV2& setRowValue(const vector<ValuesV2::RowValue> & rowValue) { DARABONBA_PTR_SET_VALUE(rowValue_, rowValue) };
        inline ValuesV2& setRowValue(vector<ValuesV2::RowValue> && rowValue) { DARABONBA_PTR_SET_RVALUE(rowValue_, rowValue) };


      protected:
        // The row values.
        shared_ptr<vector<ValuesV2::RowValue>> rowValue_ {};
      };

      class Headers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Headers& obj) { 
          DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
          DARABONBA_PTR_TO_JSON(Column, column_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Granularity, granularity_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(OriginalColumn, originalColumn_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Headers& obj) { 
          DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
          DARABONBA_PTR_FROM_JSON(Column, column_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(OriginalColumn, originalColumn_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->aggregator_ == nullptr
        && this->column_ == nullptr && this->dataType_ == nullptr && this->granularity_ == nullptr && this->label_ == nullptr && this->originalColumn_ == nullptr
        && this->type_ == nullptr; };
        // aggregator Field Functions 
        bool hasAggregator() const { return this->aggregator_ != nullptr;};
        void deleteAggregator() { this->aggregator_ = nullptr;};
        inline string getAggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, "") };
        inline Headers& setAggregator(string aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


        // column Field Functions 
        bool hasColumn() const { return this->column_ != nullptr;};
        void deleteColumn() { this->column_ = nullptr;};
        inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
        inline Headers& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Headers& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // granularity Field Functions 
        bool hasGranularity() const { return this->granularity_ != nullptr;};
        void deleteGranularity() { this->granularity_ = nullptr;};
        inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
        inline Headers& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Headers& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // originalColumn Field Functions 
        bool hasOriginalColumn() const { return this->originalColumn_ != nullptr;};
        void deleteOriginalColumn() { this->originalColumn_ = nullptr;};
        inline string getOriginalColumn() const { DARABONBA_PTR_GET_DEFAULT(originalColumn_, "") };
        inline Headers& setOriginalColumn(string originalColumn) { DARABONBA_PTR_SET_VALUE(originalColumn_, originalColumn) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Headers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The aggregation operator. This field is available only for measure fields, such as SUM, AVG, and MAX. Valid values:
        // - SUM: Sum.
        // - MAX: Maximum value.
        // - MIN: Minimum value.
        // - AVG: Average value.
        // - COUNT: Count.
        // - COUNTD: Deduplicate count.
        // - STDDEV_POP: Population standard deviation.
        // - STDDEV_SAMP: Sample standard deviation.
        // - VAR_POP: Population variance.
        // - VAR_SAMP: Sample variance.
        shared_ptr<string> aggregator_ {};
        // The name of the field, which corresponds to the field name in the physical table.
        shared_ptr<string> column_ {};
        // The data type of the field. Valid values:
        // - number: Numeric.
        // - string: String.
        // - date: Date.
        // - time: Time.
        // - datetime: Date and time.
        shared_ptr<string> dataType_ {};
        // The granularity of the dimension field. This field is returned only when the requested field is a date dimension or a geographic dimension. Valid values:
        // 
        // - Date granularity: yearRegion (year), monthRegion (month), weekRegion (week), dayRegion (day), hourRegion (hour), minRegion (minute), and secRegion (second).
        // 
        // - Geographic granularity: COUNTRY (country), PROVINCE (province), CITY (city), XIAN (district/county), and REGION (region).
        shared_ptr<string> granularity_ {};
        // The alias of the field, which is the key of the map data row in the values result parameter.
        shared_ptr<string> label_ {};
        // The original name of the corresponding field in the dataset.
        shared_ptr<string> originalColumn_ {};
        // The type of the field, which is used to distinguish whether the field is a dimension or a measure. Valid values:
        // - Dimension: Dimension.
        // - Measure: Measure.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->headers_ == nullptr
        && this->sql_ == nullptr && this->values_ == nullptr && this->valuesV2_ == nullptr; };
      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline const vector<Result::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<Result::Headers>) };
      inline vector<Result::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<Result::Headers>) };
      inline Result& setHeaders(const vector<Result::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
      inline Result& setHeaders(vector<Result::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Result& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<Darabonba::Json> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getValues() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
      inline Result& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Result& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      // valuesV2 Field Functions 
      bool hasValuesV2() const { return this->valuesV2_ != nullptr;};
      void deleteValuesV2() { this->valuesV2_ = nullptr;};
      inline const vector<Result::ValuesV2> & getValuesV2() const { DARABONBA_PTR_GET_CONST(valuesV2_, vector<Result::ValuesV2>) };
      inline vector<Result::ValuesV2> getValuesV2() { DARABONBA_PTR_GET(valuesV2_, vector<Result::ValuesV2>) };
      inline Result& setValuesV2(const vector<Result::ValuesV2> & valuesV2) { DARABONBA_PTR_SET_VALUE(valuesV2_, valuesV2) };
      inline Result& setValuesV2(vector<Result::ValuesV2> && valuesV2) { DARABONBA_PTR_SET_RVALUE(valuesV2_, valuesV2) };


    protected:
      // The column headers.
      shared_ptr<vector<Result::Headers>> headers_ {};
      // The SQL statement of the query.
      // > In addition to the parameter conditions of the current API, the filter conditions in the returned SQL statement also include the row-level and column-level permission configurations.
      shared_ptr<string> sql_ {};
      // The returned query results.
      shared_ptr<vector<Darabonba::Json>> values_ {};
      // The returned query results, including the original value fields.
      shared_ptr<vector<Result::ValuesV2>> valuesV2_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDataResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryDataResponseBody::Result) };
    inline QueryDataResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryDataResponseBody::Result) };
    inline QueryDataResponseBody& setResult(const QueryDataResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDataResponseBody& setResult(QueryDataResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The execution result of the API. Valid values:
    // 
    // - true: The execution is successful.
    // - false: The execution fails.
    shared_ptr<QueryDataResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
