// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ExecuteStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ExecuteStatementResponseBody() = default ;
    ExecuteStatementResponseBody(const ExecuteStatementResponseBody &) = default ;
    ExecuteStatementResponseBody(ExecuteStatementResponseBody &&) = default ;
    ExecuteStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBody() = default ;
    ExecuteStatementResponseBody& operator=(const ExecuteStatementResponseBody &) = default ;
    ExecuteStatementResponseBody& operator=(ExecuteStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(results, results_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(results, results_);
        DARABONBA_PTR_FROM_JSON(success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(columnMetadata, columnMetadata_);
          DARABONBA_PTR_TO_JSON(count, count_);
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(queryId, queryId_);
          DARABONBA_PTR_TO_JSON(records, records_);
          DARABONBA_PTR_TO_JSON(sql, sql_);
          DARABONBA_PTR_TO_JSON(success, success_);
          DARABONBA_PTR_TO_JSON(truncated, truncated_);
          DARABONBA_PTR_TO_JSON(updateCount, updateCount_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(columnMetadata, columnMetadata_);
          DARABONBA_PTR_FROM_JSON(count, count_);
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(queryId, queryId_);
          DARABONBA_PTR_FROM_JSON(records, records_);
          DARABONBA_PTR_FROM_JSON(sql, sql_);
          DARABONBA_PTR_FROM_JSON(success, success_);
          DARABONBA_PTR_FROM_JSON(truncated, truncated_);
          DARABONBA_PTR_FROM_JSON(updateCount, updateCount_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ColumnMetadata : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColumnMetadata& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(nullable, nullable_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ColumnMetadata& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(nullable, nullable_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          ColumnMetadata() = default ;
          ColumnMetadata(const ColumnMetadata &) = default ;
          ColumnMetadata(ColumnMetadata &&) = default ;
          ColumnMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColumnMetadata() = default ;
          ColumnMetadata& operator=(const ColumnMetadata &) = default ;
          ColumnMetadata& operator=(ColumnMetadata &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->nullable_ == nullptr && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ColumnMetadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nullable Field Functions 
          bool hasNullable() const { return this->nullable_ != nullptr;};
          void deleteNullable() { this->nullable_ = nullptr;};
          inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
          inline ColumnMetadata& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ColumnMetadata& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<bool> nullable_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->columnMetadata_ == nullptr
        && this->count_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->queryId_ == nullptr && this->records_ == nullptr
        && this->sql_ == nullptr && this->success_ == nullptr && this->truncated_ == nullptr && this->updateCount_ == nullptr; };
        // columnMetadata Field Functions 
        bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
        void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
        inline const vector<Results::ColumnMetadata> & getColumnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, vector<Results::ColumnMetadata>) };
        inline vector<Results::ColumnMetadata> getColumnMetadata() { DARABONBA_PTR_GET(columnMetadata_, vector<Results::ColumnMetadata>) };
        inline Results& setColumnMetadata(const vector<Results::ColumnMetadata> & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
        inline Results& setColumnMetadata(vector<Results::ColumnMetadata> && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Results& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Results& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Results& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // queryId Field Functions 
        bool hasQueryId() const { return this->queryId_ != nullptr;};
        void deleteQueryId() { this->queryId_ = nullptr;};
        inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
        inline Results& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


        // records Field Functions 
        bool hasRecords() const { return this->records_ != nullptr;};
        void deleteRecords() { this->records_ = nullptr;};
        inline const vector<vector<string>> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<vector<string>>) };
        inline vector<vector<string>> getRecords() { DARABONBA_PTR_GET(records_, vector<vector<string>>) };
        inline Results& setRecords(const vector<vector<string>> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
        inline Results& setRecords(vector<vector<string>> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


        // sql Field Functions 
        bool hasSql() const { return this->sql_ != nullptr;};
        void deleteSql() { this->sql_ = nullptr;};
        inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
        inline Results& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Results& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // truncated Field Functions 
        bool hasTruncated() const { return this->truncated_ != nullptr;};
        void deleteTruncated() { this->truncated_ = nullptr;};
        inline bool getTruncated() const { DARABONBA_PTR_GET_DEFAULT(truncated_, false) };
        inline Results& setTruncated(bool truncated) { DARABONBA_PTR_SET_VALUE(truncated_, truncated) };


        // updateCount Field Functions 
        bool hasUpdateCount() const { return this->updateCount_ != nullptr;};
        void deleteUpdateCount() { this->updateCount_ = nullptr;};
        inline int32_t getUpdateCount() const { DARABONBA_PTR_GET_DEFAULT(updateCount_, 0) };
        inline Results& setUpdateCount(int32_t updateCount) { DARABONBA_PTR_SET_VALUE(updateCount_, updateCount) };


      protected:
        shared_ptr<vector<Results::ColumnMetadata>> columnMetadata_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMessage_ {};
        // **Query ID**
        shared_ptr<string> queryId_ {};
        shared_ptr<vector<vector<string>>> records_ {};
        shared_ptr<string> sql_ {};
        shared_ptr<bool> success_ {};
        shared_ptr<bool> truncated_ {};
        shared_ptr<int32_t> updateCount_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->results_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<vector<Data::Results>> results_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteStatementResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteStatementResponseBody::Data) };
    inline ExecuteStatementResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteStatementResponseBody::Data) };
    inline ExecuteStatementResponseBody& setData(const ExecuteStatementResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteStatementResponseBody& setData(ExecuteStatementResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ExecuteStatementResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ExecuteStatementResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ExecuteStatementResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ExecuteStatementResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ExecuteStatementResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
