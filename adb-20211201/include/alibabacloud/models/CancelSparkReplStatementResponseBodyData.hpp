// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSPARKREPLSTATEMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CANCELSPARKREPLSTATEMENTRESPONSEBODYDATA_HPP_
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
  class CancelSparkReplStatementResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSparkReplStatementResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CancelSparkReplStatementResponseBodyData& obj) { 
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
    CancelSparkReplStatementResponseBodyData() = default ;
    CancelSparkReplStatementResponseBodyData(const CancelSparkReplStatementResponseBodyData &) = default ;
    CancelSparkReplStatementResponseBodyData(CancelSparkReplStatementResponseBodyData &&) = default ;
    CancelSparkReplStatementResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSparkReplStatementResponseBodyData() = default ;
    CancelSparkReplStatementResponseBodyData& operator=(const CancelSparkReplStatementResponseBodyData &) = default ;
    CancelSparkReplStatementResponseBodyData& operator=(CancelSparkReplStatementResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->code_ != nullptr && this->codeState_ != nullptr && this->codeType_ != nullptr && this->columns_ != nullptr && this->endTime_ != nullptr
        && this->error_ != nullptr && this->output_ != nullptr && this->outputType_ != nullptr && this->startTime_ != nullptr && this->statementId_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline int64_t aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
    inline CancelSparkReplStatementResponseBodyData& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CancelSparkReplStatementResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeState Field Functions 
    bool hasCodeState() const { return this->codeState_ != nullptr;};
    void deleteCodeState() { this->codeState_ = nullptr;};
    inline string codeState() const { DARABONBA_PTR_GET_DEFAULT(codeState_, "") };
    inline CancelSparkReplStatementResponseBodyData& setCodeState(string codeState) { DARABONBA_PTR_SET_VALUE(codeState_, codeState) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline CancelSparkReplStatementResponseBodyData& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline CancelSparkReplStatementResponseBodyData& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline CancelSparkReplStatementResponseBodyData& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CancelSparkReplStatementResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline CancelSparkReplStatementResponseBodyData& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline CancelSparkReplStatementResponseBodyData& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline CancelSparkReplStatementResponseBodyData& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CancelSparkReplStatementResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline int64_t statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
    inline CancelSparkReplStatementResponseBodyData& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The ID of the Alibaba Cloud account that owns the cluster.
    std::shared_ptr<int64_t> aliyunUid_ = nullptr;
    // The code that is executed.
    std::shared_ptr<string> code_ = nullptr;
    // The code execution status. Valid values:
    // 
    // *   CANCELLED
    // *   RUNNING
    // *   SUCCEEDED
    // *   ERROR
    std::shared_ptr<string> codeState_ = nullptr;
    // The code type. Valid values:
    // 
    // *   SCALA
    // *   PYTHON
    std::shared_ptr<string> codeType_ = nullptr;
    // The column names.
    std::shared_ptr<vector<string>> columns_ = nullptr;
    // The end time of the execution. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The error message.
    std::shared_ptr<string> error_ = nullptr;
    // The code execution result, which is a JSON string that conforms to Apache Livy.
    std::shared_ptr<string> output_ = nullptr;
    // The execution result type, which is in the JSON format. Valid values:
    // 
    // *   TEXT: the text content that conforms to Apache Livy.
    // *   TABLE: the table content that conforms to Apache Livy.
    std::shared_ptr<string> outputType_ = nullptr;
    // The start time of the execution. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The unique ID of the code block in the Spark job.
    std::shared_ptr<int64_t> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
