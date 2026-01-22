// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnsSchema, columnsSchema_);
      DARABONBA_PTR_TO_JSON(ColumnsValue, columnsValue_);
      DARABONBA_PTR_TO_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_ANY_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnsSchema, columnsSchema_);
      DARABONBA_PTR_FROM_JSON(ColumnsValue, columnsValue_);
      DARABONBA_PTR_FROM_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_ANY_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGovernanceItemReportResponseBody() = default ;
    GetGovernanceItemReportResponseBody(const GetGovernanceItemReportResponseBody &) = default ;
    GetGovernanceItemReportResponseBody(GetGovernanceItemReportResponseBody &&) = default ;
    GetGovernanceItemReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportResponseBody() = default ;
    GetGovernanceItemReportResponseBody& operator=(const GetGovernanceItemReportResponseBody &) = default ;
    GetGovernanceItemReportResponseBody& operator=(GetGovernanceItemReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ColumnsValue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnsValue& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnRow, columnRow_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnsValue& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnRow, columnRow_);
      };
      ColumnsValue() = default ;
      ColumnsValue(const ColumnsValue &) = default ;
      ColumnsValue(ColumnsValue &&) = default ;
      ColumnsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnsValue() = default ;
      ColumnsValue& operator=(const ColumnsValue &) = default ;
      ColumnsValue& operator=(ColumnsValue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ColumnRow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnRow& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnValue, columnValue_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnRow& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnValue, columnValue_);
        };
        ColumnRow() = default ;
        ColumnRow(const ColumnRow &) = default ;
        ColumnRow(ColumnRow &&) = default ;
        ColumnRow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnRow() = default ;
        ColumnRow& operator=(const ColumnRow &) = default ;
        ColumnRow& operator=(ColumnRow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnValue_ == nullptr; };
        // columnValue Field Functions 
        bool hasColumnValue() const { return this->columnValue_ != nullptr;};
        void deleteColumnValue() { this->columnValue_ = nullptr;};
        inline const vector<Darabonba::Json> & getColumnValue() const { DARABONBA_PTR_GET_CONST(columnValue_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getColumnValue() { DARABONBA_PTR_GET(columnValue_, vector<Darabonba::Json>) };
        inline ColumnRow& setColumnValue(const vector<Darabonba::Json> & columnValue) { DARABONBA_PTR_SET_VALUE(columnValue_, columnValue) };
        inline ColumnRow& setColumnValue(vector<Darabonba::Json> && columnValue) { DARABONBA_PTR_SET_RVALUE(columnValue_, columnValue) };


      protected:
        shared_ptr<vector<Darabonba::Json>> columnValue_ {};
      };

      virtual bool empty() const override { return this->columnRow_ == nullptr; };
      // columnRow Field Functions 
      bool hasColumnRow() const { return this->columnRow_ != nullptr;};
      void deleteColumnRow() { this->columnRow_ = nullptr;};
      inline const vector<ColumnsValue::ColumnRow> & getColumnRow() const { DARABONBA_PTR_GET_CONST(columnRow_, vector<ColumnsValue::ColumnRow>) };
      inline vector<ColumnsValue::ColumnRow> getColumnRow() { DARABONBA_PTR_GET(columnRow_, vector<ColumnsValue::ColumnRow>) };
      inline ColumnsValue& setColumnRow(const vector<ColumnsValue::ColumnRow> & columnRow) { DARABONBA_PTR_SET_VALUE(columnRow_, columnRow) };
      inline ColumnsValue& setColumnRow(vector<ColumnsValue::ColumnRow> && columnRow) { DARABONBA_PTR_SET_RVALUE(columnRow_, columnRow) };


    protected:
      shared_ptr<vector<ColumnsValue::ColumnRow>> columnRow_ {};
    };

    class ColumnsSchema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnsSchema& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnSchema, columnSchema_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnsSchema& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnSchema, columnSchema_);
      };
      ColumnsSchema() = default ;
      ColumnsSchema(const ColumnsSchema &) = default ;
      ColumnsSchema(ColumnsSchema &&) = default ;
      ColumnsSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnsSchema() = default ;
      ColumnsSchema& operator=(const ColumnsSchema &) = default ;
      ColumnsSchema& operator=(ColumnsSchema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ColumnSchema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnSchema& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnSchema& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
        };
        ColumnSchema() = default ;
        ColumnSchema(const ColumnSchema &) = default ;
        ColumnSchema(ColumnSchema &&) = default ;
        ColumnSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnSchema() = default ;
        ColumnSchema& operator=(const ColumnSchema &) = default ;
        ColumnSchema& operator=(ColumnSchema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnType_ == nullptr; };
        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline ColumnSchema& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline ColumnSchema& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


      protected:
        shared_ptr<string> columnName_ {};
        shared_ptr<string> columnType_ {};
      };

      virtual bool empty() const override { return this->columnSchema_ == nullptr; };
      // columnSchema Field Functions 
      bool hasColumnSchema() const { return this->columnSchema_ != nullptr;};
      void deleteColumnSchema() { this->columnSchema_ = nullptr;};
      inline const vector<ColumnsSchema::ColumnSchema> & getColumnSchema() const { DARABONBA_PTR_GET_CONST(columnSchema_, vector<ColumnsSchema::ColumnSchema>) };
      inline vector<ColumnsSchema::ColumnSchema> getColumnSchema() { DARABONBA_PTR_GET(columnSchema_, vector<ColumnsSchema::ColumnSchema>) };
      inline ColumnsSchema& setColumnSchema(const vector<ColumnsSchema::ColumnSchema> & columnSchema) { DARABONBA_PTR_SET_VALUE(columnSchema_, columnSchema) };
      inline ColumnsSchema& setColumnSchema(vector<ColumnsSchema::ColumnSchema> && columnSchema) { DARABONBA_PTR_SET_RVALUE(columnSchema_, columnSchema) };


    protected:
      shared_ptr<vector<ColumnsSchema::ColumnSchema>> columnSchema_ {};
    };

    virtual bool empty() const override { return this->columnsSchema_ == nullptr
        && this->columnsValue_ == nullptr && this->generateTime_ == nullptr && this->isTruncated_ == nullptr && this->marker_ == nullptr && this->metricType_ == nullptr
        && this->metricValue_ == nullptr && this->requestId_ == nullptr; };
    // columnsSchema Field Functions 
    bool hasColumnsSchema() const { return this->columnsSchema_ != nullptr;};
    void deleteColumnsSchema() { this->columnsSchema_ = nullptr;};
    inline const GetGovernanceItemReportResponseBody::ColumnsSchema & getColumnsSchema() const { DARABONBA_PTR_GET_CONST(columnsSchema_, GetGovernanceItemReportResponseBody::ColumnsSchema) };
    inline GetGovernanceItemReportResponseBody::ColumnsSchema getColumnsSchema() { DARABONBA_PTR_GET(columnsSchema_, GetGovernanceItemReportResponseBody::ColumnsSchema) };
    inline GetGovernanceItemReportResponseBody& setColumnsSchema(const GetGovernanceItemReportResponseBody::ColumnsSchema & columnsSchema) { DARABONBA_PTR_SET_VALUE(columnsSchema_, columnsSchema) };
    inline GetGovernanceItemReportResponseBody& setColumnsSchema(GetGovernanceItemReportResponseBody::ColumnsSchema && columnsSchema) { DARABONBA_PTR_SET_RVALUE(columnsSchema_, columnsSchema) };


    // columnsValue Field Functions 
    bool hasColumnsValue() const { return this->columnsValue_ != nullptr;};
    void deleteColumnsValue() { this->columnsValue_ = nullptr;};
    inline const GetGovernanceItemReportResponseBody::ColumnsValue & getColumnsValue() const { DARABONBA_PTR_GET_CONST(columnsValue_, GetGovernanceItemReportResponseBody::ColumnsValue) };
    inline GetGovernanceItemReportResponseBody::ColumnsValue getColumnsValue() { DARABONBA_PTR_GET(columnsValue_, GetGovernanceItemReportResponseBody::ColumnsValue) };
    inline GetGovernanceItemReportResponseBody& setColumnsValue(const GetGovernanceItemReportResponseBody::ColumnsValue & columnsValue) { DARABONBA_PTR_SET_VALUE(columnsValue_, columnsValue) };
    inline GetGovernanceItemReportResponseBody& setColumnsValue(GetGovernanceItemReportResponseBody::ColumnsValue && columnsValue) { DARABONBA_PTR_SET_RVALUE(columnsValue_, columnsValue) };


    // generateTime Field Functions 
    bool hasGenerateTime() const { return this->generateTime_ != nullptr;};
    void deleteGenerateTime() { this->generateTime_ = nullptr;};
    inline string getGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(generateTime_, "") };
    inline GetGovernanceItemReportResponseBody& setGenerateTime(string generateTime) { DARABONBA_PTR_SET_VALUE(generateTime_, generateTime) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline GetGovernanceItemReportResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline GetGovernanceItemReportResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetGovernanceItemReportResponseBody& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline     const Darabonba::Json & getMetricValue() const { DARABONBA_GET(metricValue_) };
    Darabonba::Json & getMetricValue() { DARABONBA_GET(metricValue_) };
    inline GetGovernanceItemReportResponseBody& setMetricValue(const Darabonba::Json & metricValue) { DARABONBA_SET_VALUE(metricValue_, metricValue) };
    inline GetGovernanceItemReportResponseBody& setMetricValue(Darabonba::Json && metricValue) { DARABONBA_SET_RVALUE(metricValue_, metricValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceItemReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetGovernanceItemReportResponseBody::ColumnsSchema> columnsSchema_ {};
    shared_ptr<GetGovernanceItemReportResponseBody::ColumnsValue> columnsValue_ {};
    shared_ptr<string> generateTime_ {};
    shared_ptr<bool> isTruncated_ {};
    shared_ptr<string> marker_ {};
    shared_ptr<string> metricType_ {};
    Darabonba::Json metricValue_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
