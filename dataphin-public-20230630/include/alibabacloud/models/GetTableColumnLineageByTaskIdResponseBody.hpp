// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableColumnLineageByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineageByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineageByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableColumnLineageByTaskIdResponseBody() = default ;
    GetTableColumnLineageByTaskIdResponseBody(const GetTableColumnLineageByTaskIdResponseBody &) = default ;
    GetTableColumnLineageByTaskIdResponseBody(GetTableColumnLineageByTaskIdResponseBody &&) = default ;
    GetTableColumnLineageByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineageByTaskIdResponseBody() = default ;
    GetTableColumnLineageByTaskIdResponseBody& operator=(const GetTableColumnLineageByTaskIdResponseBody &) = default ;
    GetTableColumnLineageByTaskIdResponseBody& operator=(GetTableColumnLineageByTaskIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InputBizUnitId, inputBizUnitId_);
        DARABONBA_PTR_TO_JSON(InputColumnId, inputColumnId_);
        DARABONBA_PTR_TO_JSON(InputColumnName, inputColumnName_);
        DARABONBA_PTR_TO_JSON(InputDataSourceId, inputDataSourceId_);
        DARABONBA_PTR_TO_JSON(InputDataSourceType, inputDataSourceType_);
        DARABONBA_PTR_TO_JSON(InputDbType, inputDbType_);
        DARABONBA_PTR_TO_JSON(InputEnv, inputEnv_);
        DARABONBA_PTR_TO_JSON(InputProjectId, inputProjectId_);
        DARABONBA_PTR_TO_JSON(InputTableDeleted, inputTableDeleted_);
        DARABONBA_PTR_TO_JSON(InputTableId, inputTableId_);
        DARABONBA_PTR_TO_JSON(InputTableName, inputTableName_);
        DARABONBA_PTR_TO_JSON(InputTableType, inputTableType_);
        DARABONBA_PTR_TO_JSON(OutputBizUnitId, outputBizUnitId_);
        DARABONBA_PTR_TO_JSON(OutputColumnId, outputColumnId_);
        DARABONBA_PTR_TO_JSON(OutputColumnName, outputColumnName_);
        DARABONBA_PTR_TO_JSON(OutputDataSourceId, outputDataSourceId_);
        DARABONBA_PTR_TO_JSON(OutputDataSourceType, outputDataSourceType_);
        DARABONBA_PTR_TO_JSON(OutputDbType, outputDbType_);
        DARABONBA_PTR_TO_JSON(OutputEnv, outputEnv_);
        DARABONBA_PTR_TO_JSON(OutputProjectId, outputProjectId_);
        DARABONBA_PTR_TO_JSON(OutputTableDeleted, outputTableDeleted_);
        DARABONBA_PTR_TO_JSON(OutputTableId, outputTableId_);
        DARABONBA_PTR_TO_JSON(OutputTableName, outputTableName_);
        DARABONBA_PTR_TO_JSON(OutputTableType, outputTableType_);
        DARABONBA_PTR_TO_JSON(TaskEnv, taskEnv_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InputBizUnitId, inputBizUnitId_);
        DARABONBA_PTR_FROM_JSON(InputColumnId, inputColumnId_);
        DARABONBA_PTR_FROM_JSON(InputColumnName, inputColumnName_);
        DARABONBA_PTR_FROM_JSON(InputDataSourceId, inputDataSourceId_);
        DARABONBA_PTR_FROM_JSON(InputDataSourceType, inputDataSourceType_);
        DARABONBA_PTR_FROM_JSON(InputDbType, inputDbType_);
        DARABONBA_PTR_FROM_JSON(InputEnv, inputEnv_);
        DARABONBA_PTR_FROM_JSON(InputProjectId, inputProjectId_);
        DARABONBA_PTR_FROM_JSON(InputTableDeleted, inputTableDeleted_);
        DARABONBA_PTR_FROM_JSON(InputTableId, inputTableId_);
        DARABONBA_PTR_FROM_JSON(InputTableName, inputTableName_);
        DARABONBA_PTR_FROM_JSON(InputTableType, inputTableType_);
        DARABONBA_PTR_FROM_JSON(OutputBizUnitId, outputBizUnitId_);
        DARABONBA_PTR_FROM_JSON(OutputColumnId, outputColumnId_);
        DARABONBA_PTR_FROM_JSON(OutputColumnName, outputColumnName_);
        DARABONBA_PTR_FROM_JSON(OutputDataSourceId, outputDataSourceId_);
        DARABONBA_PTR_FROM_JSON(OutputDataSourceType, outputDataSourceType_);
        DARABONBA_PTR_FROM_JSON(OutputDbType, outputDbType_);
        DARABONBA_PTR_FROM_JSON(OutputEnv, outputEnv_);
        DARABONBA_PTR_FROM_JSON(OutputProjectId, outputProjectId_);
        DARABONBA_PTR_FROM_JSON(OutputTableDeleted, outputTableDeleted_);
        DARABONBA_PTR_FROM_JSON(OutputTableId, outputTableId_);
        DARABONBA_PTR_FROM_JSON(OutputTableName, outputTableName_);
        DARABONBA_PTR_FROM_JSON(OutputTableType, outputTableType_);
        DARABONBA_PTR_FROM_JSON(TaskEnv, taskEnv_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
      virtual bool empty() const override { return this->inputBizUnitId_ == nullptr
        && this->inputColumnId_ == nullptr && this->inputColumnName_ == nullptr && this->inputDataSourceId_ == nullptr && this->inputDataSourceType_ == nullptr && this->inputDbType_ == nullptr
        && this->inputEnv_ == nullptr && this->inputProjectId_ == nullptr && this->inputTableDeleted_ == nullptr && this->inputTableId_ == nullptr && this->inputTableName_ == nullptr
        && this->inputTableType_ == nullptr && this->outputBizUnitId_ == nullptr && this->outputColumnId_ == nullptr && this->outputColumnName_ == nullptr && this->outputDataSourceId_ == nullptr
        && this->outputDataSourceType_ == nullptr && this->outputDbType_ == nullptr && this->outputEnv_ == nullptr && this->outputProjectId_ == nullptr && this->outputTableDeleted_ == nullptr
        && this->outputTableId_ == nullptr && this->outputTableName_ == nullptr && this->outputTableType_ == nullptr && this->taskEnv_ == nullptr && this->taskId_ == nullptr
        && this->tenantId_ == nullptr; };
      // inputBizUnitId Field Functions 
      bool hasInputBizUnitId() const { return this->inputBizUnitId_ != nullptr;};
      void deleteInputBizUnitId() { this->inputBizUnitId_ = nullptr;};
      inline int64_t getInputBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(inputBizUnitId_, 0L) };
      inline Data& setInputBizUnitId(int64_t inputBizUnitId) { DARABONBA_PTR_SET_VALUE(inputBizUnitId_, inputBizUnitId) };


      // inputColumnId Field Functions 
      bool hasInputColumnId() const { return this->inputColumnId_ != nullptr;};
      void deleteInputColumnId() { this->inputColumnId_ = nullptr;};
      inline string getInputColumnId() const { DARABONBA_PTR_GET_DEFAULT(inputColumnId_, "") };
      inline Data& setInputColumnId(string inputColumnId) { DARABONBA_PTR_SET_VALUE(inputColumnId_, inputColumnId) };


      // inputColumnName Field Functions 
      bool hasInputColumnName() const { return this->inputColumnName_ != nullptr;};
      void deleteInputColumnName() { this->inputColumnName_ = nullptr;};
      inline string getInputColumnName() const { DARABONBA_PTR_GET_DEFAULT(inputColumnName_, "") };
      inline Data& setInputColumnName(string inputColumnName) { DARABONBA_PTR_SET_VALUE(inputColumnName_, inputColumnName) };


      // inputDataSourceId Field Functions 
      bool hasInputDataSourceId() const { return this->inputDataSourceId_ != nullptr;};
      void deleteInputDataSourceId() { this->inputDataSourceId_ = nullptr;};
      inline int64_t getInputDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(inputDataSourceId_, 0L) };
      inline Data& setInputDataSourceId(int64_t inputDataSourceId) { DARABONBA_PTR_SET_VALUE(inputDataSourceId_, inputDataSourceId) };


      // inputDataSourceType Field Functions 
      bool hasInputDataSourceType() const { return this->inputDataSourceType_ != nullptr;};
      void deleteInputDataSourceType() { this->inputDataSourceType_ = nullptr;};
      inline string getInputDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(inputDataSourceType_, "") };
      inline Data& setInputDataSourceType(string inputDataSourceType) { DARABONBA_PTR_SET_VALUE(inputDataSourceType_, inputDataSourceType) };


      // inputDbType Field Functions 
      bool hasInputDbType() const { return this->inputDbType_ != nullptr;};
      void deleteInputDbType() { this->inputDbType_ = nullptr;};
      inline string getInputDbType() const { DARABONBA_PTR_GET_DEFAULT(inputDbType_, "") };
      inline Data& setInputDbType(string inputDbType) { DARABONBA_PTR_SET_VALUE(inputDbType_, inputDbType) };


      // inputEnv Field Functions 
      bool hasInputEnv() const { return this->inputEnv_ != nullptr;};
      void deleteInputEnv() { this->inputEnv_ = nullptr;};
      inline string getInputEnv() const { DARABONBA_PTR_GET_DEFAULT(inputEnv_, "") };
      inline Data& setInputEnv(string inputEnv) { DARABONBA_PTR_SET_VALUE(inputEnv_, inputEnv) };


      // inputProjectId Field Functions 
      bool hasInputProjectId() const { return this->inputProjectId_ != nullptr;};
      void deleteInputProjectId() { this->inputProjectId_ = nullptr;};
      inline int64_t getInputProjectId() const { DARABONBA_PTR_GET_DEFAULT(inputProjectId_, 0L) };
      inline Data& setInputProjectId(int64_t inputProjectId) { DARABONBA_PTR_SET_VALUE(inputProjectId_, inputProjectId) };


      // inputTableDeleted Field Functions 
      bool hasInputTableDeleted() const { return this->inputTableDeleted_ != nullptr;};
      void deleteInputTableDeleted() { this->inputTableDeleted_ = nullptr;};
      inline bool getInputTableDeleted() const { DARABONBA_PTR_GET_DEFAULT(inputTableDeleted_, false) };
      inline Data& setInputTableDeleted(bool inputTableDeleted) { DARABONBA_PTR_SET_VALUE(inputTableDeleted_, inputTableDeleted) };


      // inputTableId Field Functions 
      bool hasInputTableId() const { return this->inputTableId_ != nullptr;};
      void deleteInputTableId() { this->inputTableId_ = nullptr;};
      inline string getInputTableId() const { DARABONBA_PTR_GET_DEFAULT(inputTableId_, "") };
      inline Data& setInputTableId(string inputTableId) { DARABONBA_PTR_SET_VALUE(inputTableId_, inputTableId) };


      // inputTableName Field Functions 
      bool hasInputTableName() const { return this->inputTableName_ != nullptr;};
      void deleteInputTableName() { this->inputTableName_ = nullptr;};
      inline string getInputTableName() const { DARABONBA_PTR_GET_DEFAULT(inputTableName_, "") };
      inline Data& setInputTableName(string inputTableName) { DARABONBA_PTR_SET_VALUE(inputTableName_, inputTableName) };


      // inputTableType Field Functions 
      bool hasInputTableType() const { return this->inputTableType_ != nullptr;};
      void deleteInputTableType() { this->inputTableType_ = nullptr;};
      inline string getInputTableType() const { DARABONBA_PTR_GET_DEFAULT(inputTableType_, "") };
      inline Data& setInputTableType(string inputTableType) { DARABONBA_PTR_SET_VALUE(inputTableType_, inputTableType) };


      // outputBizUnitId Field Functions 
      bool hasOutputBizUnitId() const { return this->outputBizUnitId_ != nullptr;};
      void deleteOutputBizUnitId() { this->outputBizUnitId_ = nullptr;};
      inline int64_t getOutputBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(outputBizUnitId_, 0L) };
      inline Data& setOutputBizUnitId(int64_t outputBizUnitId) { DARABONBA_PTR_SET_VALUE(outputBizUnitId_, outputBizUnitId) };


      // outputColumnId Field Functions 
      bool hasOutputColumnId() const { return this->outputColumnId_ != nullptr;};
      void deleteOutputColumnId() { this->outputColumnId_ = nullptr;};
      inline string getOutputColumnId() const { DARABONBA_PTR_GET_DEFAULT(outputColumnId_, "") };
      inline Data& setOutputColumnId(string outputColumnId) { DARABONBA_PTR_SET_VALUE(outputColumnId_, outputColumnId) };


      // outputColumnName Field Functions 
      bool hasOutputColumnName() const { return this->outputColumnName_ != nullptr;};
      void deleteOutputColumnName() { this->outputColumnName_ = nullptr;};
      inline string getOutputColumnName() const { DARABONBA_PTR_GET_DEFAULT(outputColumnName_, "") };
      inline Data& setOutputColumnName(string outputColumnName) { DARABONBA_PTR_SET_VALUE(outputColumnName_, outputColumnName) };


      // outputDataSourceId Field Functions 
      bool hasOutputDataSourceId() const { return this->outputDataSourceId_ != nullptr;};
      void deleteOutputDataSourceId() { this->outputDataSourceId_ = nullptr;};
      inline int64_t getOutputDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(outputDataSourceId_, 0L) };
      inline Data& setOutputDataSourceId(int64_t outputDataSourceId) { DARABONBA_PTR_SET_VALUE(outputDataSourceId_, outputDataSourceId) };


      // outputDataSourceType Field Functions 
      bool hasOutputDataSourceType() const { return this->outputDataSourceType_ != nullptr;};
      void deleteOutputDataSourceType() { this->outputDataSourceType_ = nullptr;};
      inline string getOutputDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(outputDataSourceType_, "") };
      inline Data& setOutputDataSourceType(string outputDataSourceType) { DARABONBA_PTR_SET_VALUE(outputDataSourceType_, outputDataSourceType) };


      // outputDbType Field Functions 
      bool hasOutputDbType() const { return this->outputDbType_ != nullptr;};
      void deleteOutputDbType() { this->outputDbType_ = nullptr;};
      inline string getOutputDbType() const { DARABONBA_PTR_GET_DEFAULT(outputDbType_, "") };
      inline Data& setOutputDbType(string outputDbType) { DARABONBA_PTR_SET_VALUE(outputDbType_, outputDbType) };


      // outputEnv Field Functions 
      bool hasOutputEnv() const { return this->outputEnv_ != nullptr;};
      void deleteOutputEnv() { this->outputEnv_ = nullptr;};
      inline string getOutputEnv() const { DARABONBA_PTR_GET_DEFAULT(outputEnv_, "") };
      inline Data& setOutputEnv(string outputEnv) { DARABONBA_PTR_SET_VALUE(outputEnv_, outputEnv) };


      // outputProjectId Field Functions 
      bool hasOutputProjectId() const { return this->outputProjectId_ != nullptr;};
      void deleteOutputProjectId() { this->outputProjectId_ = nullptr;};
      inline int64_t getOutputProjectId() const { DARABONBA_PTR_GET_DEFAULT(outputProjectId_, 0L) };
      inline Data& setOutputProjectId(int64_t outputProjectId) { DARABONBA_PTR_SET_VALUE(outputProjectId_, outputProjectId) };


      // outputTableDeleted Field Functions 
      bool hasOutputTableDeleted() const { return this->outputTableDeleted_ != nullptr;};
      void deleteOutputTableDeleted() { this->outputTableDeleted_ = nullptr;};
      inline bool getOutputTableDeleted() const { DARABONBA_PTR_GET_DEFAULT(outputTableDeleted_, false) };
      inline Data& setOutputTableDeleted(bool outputTableDeleted) { DARABONBA_PTR_SET_VALUE(outputTableDeleted_, outputTableDeleted) };


      // outputTableId Field Functions 
      bool hasOutputTableId() const { return this->outputTableId_ != nullptr;};
      void deleteOutputTableId() { this->outputTableId_ = nullptr;};
      inline string getOutputTableId() const { DARABONBA_PTR_GET_DEFAULT(outputTableId_, "") };
      inline Data& setOutputTableId(string outputTableId) { DARABONBA_PTR_SET_VALUE(outputTableId_, outputTableId) };


      // outputTableName Field Functions 
      bool hasOutputTableName() const { return this->outputTableName_ != nullptr;};
      void deleteOutputTableName() { this->outputTableName_ = nullptr;};
      inline string getOutputTableName() const { DARABONBA_PTR_GET_DEFAULT(outputTableName_, "") };
      inline Data& setOutputTableName(string outputTableName) { DARABONBA_PTR_SET_VALUE(outputTableName_, outputTableName) };


      // outputTableType Field Functions 
      bool hasOutputTableType() const { return this->outputTableType_ != nullptr;};
      void deleteOutputTableType() { this->outputTableType_ = nullptr;};
      inline string getOutputTableType() const { DARABONBA_PTR_GET_DEFAULT(outputTableType_, "") };
      inline Data& setOutputTableType(string outputTableType) { DARABONBA_PTR_SET_VALUE(outputTableType_, outputTableType) };


      // taskEnv Field Functions 
      bool hasTaskEnv() const { return this->taskEnv_ != nullptr;};
      void deleteTaskEnv() { this->taskEnv_ = nullptr;};
      inline string getTaskEnv() const { DARABONBA_PTR_GET_DEFAULT(taskEnv_, "") };
      inline Data& setTaskEnv(string taskEnv) { DARABONBA_PTR_SET_VALUE(taskEnv_, taskEnv) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<int64_t> inputBizUnitId_ {};
      shared_ptr<string> inputColumnId_ {};
      shared_ptr<string> inputColumnName_ {};
      shared_ptr<int64_t> inputDataSourceId_ {};
      shared_ptr<string> inputDataSourceType_ {};
      shared_ptr<string> inputDbType_ {};
      shared_ptr<string> inputEnv_ {};
      shared_ptr<int64_t> inputProjectId_ {};
      shared_ptr<bool> inputTableDeleted_ {};
      shared_ptr<string> inputTableId_ {};
      shared_ptr<string> inputTableName_ {};
      shared_ptr<string> inputTableType_ {};
      shared_ptr<int64_t> outputBizUnitId_ {};
      shared_ptr<string> outputColumnId_ {};
      shared_ptr<string> outputColumnName_ {};
      shared_ptr<int64_t> outputDataSourceId_ {};
      shared_ptr<string> outputDataSourceType_ {};
      shared_ptr<string> outputDbType_ {};
      shared_ptr<string> outputEnv_ {};
      shared_ptr<int64_t> outputProjectId_ {};
      shared_ptr<bool> outputTableDeleted_ {};
      shared_ptr<string> outputTableId_ {};
      shared_ptr<string> outputTableName_ {};
      shared_ptr<string> outputTableType_ {};
      shared_ptr<string> taskEnv_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTableColumnLineageByTaskIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetTableColumnLineageByTaskIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetTableColumnLineageByTaskIdResponseBody::Data>) };
    inline vector<GetTableColumnLineageByTaskIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetTableColumnLineageByTaskIdResponseBody::Data>) };
    inline GetTableColumnLineageByTaskIdResponseBody& setData(const vector<GetTableColumnLineageByTaskIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTableColumnLineageByTaskIdResponseBody& setData(vector<GetTableColumnLineageByTaskIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTableColumnLineageByTaskIdResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTableColumnLineageByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableColumnLineageByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableColumnLineageByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetTableColumnLineageByTaskIdResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
