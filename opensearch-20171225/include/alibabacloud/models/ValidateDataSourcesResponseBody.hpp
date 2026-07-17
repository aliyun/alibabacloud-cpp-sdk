// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ValidateDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ValidateDataSourcesResponseBody() = default ;
    ValidateDataSourcesResponseBody(const ValidateDataSourcesResponseBody &) = default ;
    ValidateDataSourcesResponseBody(ValidateDataSourcesResponseBody &&) = default ;
    ValidateDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDataSourcesResponseBody() = default ;
    ValidateDataSourcesResponseBody& operator=(const ValidateDataSourcesResponseBody &) = default ;
    ValidateDataSourcesResponseBody& operator=(ValidateDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(message, message_);
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
      class DataSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
          DARABONBA_ANY_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(tableName, tableName_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
          DARABONBA_ANY_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(tableName, tableName_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        DataSource() = default ;
        DataSource(const DataSource &) = default ;
        DataSource(DataSource &&) = default ;
        DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSource() = default ;
        DataSource& operator=(const DataSource &) = default ;
        DataSource& operator=(DataSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameters_ == nullptr
        && this->tableName_ == nullptr && this->type_ == nullptr; };
        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline         const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
        Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
        inline DataSource& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
        inline DataSource& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline DataSource& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The parameter body.
        Darabonba::Json parameters_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
        // The data source type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->dataSource_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline const Result::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Result::DataSource) };
      inline Result::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Result::DataSource) };
      inline Result& setDataSource(const Result::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
      inline Result& setDataSource(Result::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Result& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The status code.
      shared_ptr<string> code_ {};
      // The data source.
      shared_ptr<Result::DataSource> dataSource_ {};
      // The response message.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ValidateDataSourcesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ValidateDataSourcesResponseBody::Result>) };
    inline vector<ValidateDataSourcesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ValidateDataSourcesResponseBody::Result>) };
    inline ValidateDataSourcesResponseBody& setResult(const vector<ValidateDataSourcesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ValidateDataSourcesResponseBody& setResult(vector<ValidateDataSourcesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The request results.
    shared_ptr<vector<ValidateDataSourcesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
