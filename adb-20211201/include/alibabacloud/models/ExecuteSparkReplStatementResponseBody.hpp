// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESPARKREPLSTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESPARKREPLSTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ExecuteSparkReplStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSparkReplStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSparkReplStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExecuteSparkReplStatementResponseBody() = default ;
    ExecuteSparkReplStatementResponseBody(const ExecuteSparkReplStatementResponseBody &) = default ;
    ExecuteSparkReplStatementResponseBody(ExecuteSparkReplStatementResponseBody &&) = default ;
    ExecuteSparkReplStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSparkReplStatementResponseBody() = default ;
    ExecuteSparkReplStatementResponseBody& operator=(const ExecuteSparkReplStatementResponseBody &) = default ;
    ExecuteSparkReplStatementResponseBody& operator=(ExecuteSparkReplStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CodeState, codeState_);
        DARABONBA_PTR_TO_JSON(CodeType, codeType_);
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(OutputType, outputType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StatementId, statementId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CodeState, codeState_);
        DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
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
      virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->code_ == nullptr && this->codeState_ == nullptr && this->codeType_ == nullptr && this->columns_ == nullptr && this->endTime_ == nullptr
        && this->error_ == nullptr && this->output_ == nullptr && this->outputType_ == nullptr && this->startTime_ == nullptr && this->statementId_ == nullptr; };
      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline int64_t getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
      inline Data& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // codeState Field Functions 
      bool hasCodeState() const { return this->codeState_ != nullptr;};
      void deleteCodeState() { this->codeState_ = nullptr;};
      inline string getCodeState() const { DARABONBA_PTR_GET_DEFAULT(codeState_, "") };
      inline Data& setCodeState(string codeState) { DARABONBA_PTR_SET_VALUE(codeState_, codeState) };


      // codeType Field Functions 
      bool hasCodeType() const { return this->codeType_ != nullptr;};
      void deleteCodeType() { this->codeType_ = nullptr;};
      inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
      inline Data& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
      inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
      inline Data& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Data& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Data& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Data& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // outputType Field Functions 
      bool hasOutputType() const { return this->outputType_ != nullptr;};
      void deleteOutputType() { this->outputType_ = nullptr;};
      inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
      inline Data& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // statementId Field Functions 
      bool hasStatementId() const { return this->statementId_ != nullptr;};
      void deleteStatementId() { this->statementId_ = nullptr;};
      inline int64_t getStatementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
      inline Data& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    protected:
      // The ID of the Alibaba Cloud account that owns the cluster.
      shared_ptr<int64_t> aliyunUid_ {};
      // The code that is executed.
      shared_ptr<string> code_ {};
      // The code execution status. Valid values:
      // 
      // *   CANCELLED
      // *   RUNNING
      // *   SUCCEEDED
      // *   ERROR
      shared_ptr<string> codeState_ {};
      // The code type. Valid values:
      // 
      // *   SCALA
      // *   PYTHON
      shared_ptr<string> codeType_ {};
      // The column names.
      shared_ptr<vector<string>> columns_ {};
      // The end time of the execution. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> endTime_ {};
      // The error message.
      shared_ptr<string> error_ {};
      // The code execution result, which is a JSON string that conforms to Apache Livy.
      shared_ptr<string> output_ {};
      // The execution result type, which is in the JSON format. Valid values:
      // 
      // *   TEXT: the text content that conforms to Apache Livy.
      // *   TABLE: the table content that conforms to Apache Livy.
      shared_ptr<string> outputType_ {};
      // The start time of the execution. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The unique ID of the code block in the Spark job.
      shared_ptr<int64_t> statementId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteSparkReplStatementResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteSparkReplStatementResponseBody::Data) };
    inline ExecuteSparkReplStatementResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteSparkReplStatementResponseBody::Data) };
    inline ExecuteSparkReplStatementResponseBody& setData(const ExecuteSparkReplStatementResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteSparkReplStatementResponseBody& setData(ExecuteSparkReplStatementResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteSparkReplStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ExecuteSparkReplStatementResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
