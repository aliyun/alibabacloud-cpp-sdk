// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLELINEAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLELINEAGESRESPONSEBODY_HPP_
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
  class GetTableLineagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableLineagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableLineageList, tableLineageList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableLineagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableLineageList, tableLineageList_);
    };
    GetTableLineagesResponseBody() = default ;
    GetTableLineagesResponseBody(const GetTableLineagesResponseBody &) = default ;
    GetTableLineagesResponseBody(GetTableLineagesResponseBody &&) = default ;
    GetTableLineagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableLineagesResponseBody() = default ;
    GetTableLineagesResponseBody& operator=(const GetTableLineagesResponseBody &) = default ;
    GetTableLineagesResponseBody& operator=(GetTableLineagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableLineageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableLineageList& obj) { 
        DARABONBA_PTR_TO_JSON(InputBizUnitId, inputBizUnitId_);
        DARABONBA_PTR_TO_JSON(InputDataSourceId, inputDataSourceId_);
        DARABONBA_PTR_TO_JSON(InputDataSourceType, inputDataSourceType_);
        DARABONBA_PTR_TO_JSON(InputProjectId, inputProjectId_);
        DARABONBA_PTR_TO_JSON(InputTableDeleted, inputTableDeleted_);
        DARABONBA_PTR_TO_JSON(InputTableEnv, inputTableEnv_);
        DARABONBA_PTR_TO_JSON(InputTableGuid, inputTableGuid_);
        DARABONBA_PTR_TO_JSON(InputTableName, inputTableName_);
        DARABONBA_PTR_TO_JSON(NodeEnv, nodeEnv_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(OutputBizUnitId, outputBizUnitId_);
        DARABONBA_PTR_TO_JSON(OutputDataSourceId, outputDataSourceId_);
        DARABONBA_PTR_TO_JSON(OutputDataSourceType, outputDataSourceType_);
        DARABONBA_PTR_TO_JSON(OutputProjectId, outputProjectId_);
        DARABONBA_PTR_TO_JSON(OutputTableDeleted, outputTableDeleted_);
        DARABONBA_PTR_TO_JSON(OutputTableEnv, outputTableEnv_);
        DARABONBA_PTR_TO_JSON(OutputTableGuid, outputTableGuid_);
        DARABONBA_PTR_TO_JSON(OutputTableName, outputTableName_);
      };
      friend void from_json(const Darabonba::Json& j, TableLineageList& obj) { 
        DARABONBA_PTR_FROM_JSON(InputBizUnitId, inputBizUnitId_);
        DARABONBA_PTR_FROM_JSON(InputDataSourceId, inputDataSourceId_);
        DARABONBA_PTR_FROM_JSON(InputDataSourceType, inputDataSourceType_);
        DARABONBA_PTR_FROM_JSON(InputProjectId, inputProjectId_);
        DARABONBA_PTR_FROM_JSON(InputTableDeleted, inputTableDeleted_);
        DARABONBA_PTR_FROM_JSON(InputTableEnv, inputTableEnv_);
        DARABONBA_PTR_FROM_JSON(InputTableGuid, inputTableGuid_);
        DARABONBA_PTR_FROM_JSON(InputTableName, inputTableName_);
        DARABONBA_PTR_FROM_JSON(NodeEnv, nodeEnv_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(OutputBizUnitId, outputBizUnitId_);
        DARABONBA_PTR_FROM_JSON(OutputDataSourceId, outputDataSourceId_);
        DARABONBA_PTR_FROM_JSON(OutputDataSourceType, outputDataSourceType_);
        DARABONBA_PTR_FROM_JSON(OutputProjectId, outputProjectId_);
        DARABONBA_PTR_FROM_JSON(OutputTableDeleted, outputTableDeleted_);
        DARABONBA_PTR_FROM_JSON(OutputTableEnv, outputTableEnv_);
        DARABONBA_PTR_FROM_JSON(OutputTableGuid, outputTableGuid_);
        DARABONBA_PTR_FROM_JSON(OutputTableName, outputTableName_);
      };
      TableLineageList() = default ;
      TableLineageList(const TableLineageList &) = default ;
      TableLineageList(TableLineageList &&) = default ;
      TableLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableLineageList() = default ;
      TableLineageList& operator=(const TableLineageList &) = default ;
      TableLineageList& operator=(TableLineageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inputBizUnitId_ == nullptr
        && this->inputDataSourceId_ == nullptr && this->inputDataSourceType_ == nullptr && this->inputProjectId_ == nullptr && this->inputTableDeleted_ == nullptr && this->inputTableEnv_ == nullptr
        && this->inputTableGuid_ == nullptr && this->inputTableName_ == nullptr && this->nodeEnv_ == nullptr && this->nodeId_ == nullptr && this->outputBizUnitId_ == nullptr
        && this->outputDataSourceId_ == nullptr && this->outputDataSourceType_ == nullptr && this->outputProjectId_ == nullptr && this->outputTableDeleted_ == nullptr && this->outputTableEnv_ == nullptr
        && this->outputTableGuid_ == nullptr && this->outputTableName_ == nullptr; };
      // inputBizUnitId Field Functions 
      bool hasInputBizUnitId() const { return this->inputBizUnitId_ != nullptr;};
      void deleteInputBizUnitId() { this->inputBizUnitId_ = nullptr;};
      inline int64_t getInputBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(inputBizUnitId_, 0L) };
      inline TableLineageList& setInputBizUnitId(int64_t inputBizUnitId) { DARABONBA_PTR_SET_VALUE(inputBizUnitId_, inputBizUnitId) };


      // inputDataSourceId Field Functions 
      bool hasInputDataSourceId() const { return this->inputDataSourceId_ != nullptr;};
      void deleteInputDataSourceId() { this->inputDataSourceId_ = nullptr;};
      inline int64_t getInputDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(inputDataSourceId_, 0L) };
      inline TableLineageList& setInputDataSourceId(int64_t inputDataSourceId) { DARABONBA_PTR_SET_VALUE(inputDataSourceId_, inputDataSourceId) };


      // inputDataSourceType Field Functions 
      bool hasInputDataSourceType() const { return this->inputDataSourceType_ != nullptr;};
      void deleteInputDataSourceType() { this->inputDataSourceType_ = nullptr;};
      inline string getInputDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(inputDataSourceType_, "") };
      inline TableLineageList& setInputDataSourceType(string inputDataSourceType) { DARABONBA_PTR_SET_VALUE(inputDataSourceType_, inputDataSourceType) };


      // inputProjectId Field Functions 
      bool hasInputProjectId() const { return this->inputProjectId_ != nullptr;};
      void deleteInputProjectId() { this->inputProjectId_ = nullptr;};
      inline int64_t getInputProjectId() const { DARABONBA_PTR_GET_DEFAULT(inputProjectId_, 0L) };
      inline TableLineageList& setInputProjectId(int64_t inputProjectId) { DARABONBA_PTR_SET_VALUE(inputProjectId_, inputProjectId) };


      // inputTableDeleted Field Functions 
      bool hasInputTableDeleted() const { return this->inputTableDeleted_ != nullptr;};
      void deleteInputTableDeleted() { this->inputTableDeleted_ = nullptr;};
      inline bool getInputTableDeleted() const { DARABONBA_PTR_GET_DEFAULT(inputTableDeleted_, false) };
      inline TableLineageList& setInputTableDeleted(bool inputTableDeleted) { DARABONBA_PTR_SET_VALUE(inputTableDeleted_, inputTableDeleted) };


      // inputTableEnv Field Functions 
      bool hasInputTableEnv() const { return this->inputTableEnv_ != nullptr;};
      void deleteInputTableEnv() { this->inputTableEnv_ = nullptr;};
      inline string getInputTableEnv() const { DARABONBA_PTR_GET_DEFAULT(inputTableEnv_, "") };
      inline TableLineageList& setInputTableEnv(string inputTableEnv) { DARABONBA_PTR_SET_VALUE(inputTableEnv_, inputTableEnv) };


      // inputTableGuid Field Functions 
      bool hasInputTableGuid() const { return this->inputTableGuid_ != nullptr;};
      void deleteInputTableGuid() { this->inputTableGuid_ = nullptr;};
      inline string getInputTableGuid() const { DARABONBA_PTR_GET_DEFAULT(inputTableGuid_, "") };
      inline TableLineageList& setInputTableGuid(string inputTableGuid) { DARABONBA_PTR_SET_VALUE(inputTableGuid_, inputTableGuid) };


      // inputTableName Field Functions 
      bool hasInputTableName() const { return this->inputTableName_ != nullptr;};
      void deleteInputTableName() { this->inputTableName_ = nullptr;};
      inline string getInputTableName() const { DARABONBA_PTR_GET_DEFAULT(inputTableName_, "") };
      inline TableLineageList& setInputTableName(string inputTableName) { DARABONBA_PTR_SET_VALUE(inputTableName_, inputTableName) };


      // nodeEnv Field Functions 
      bool hasNodeEnv() const { return this->nodeEnv_ != nullptr;};
      void deleteNodeEnv() { this->nodeEnv_ = nullptr;};
      inline string getNodeEnv() const { DARABONBA_PTR_GET_DEFAULT(nodeEnv_, "") };
      inline TableLineageList& setNodeEnv(string nodeEnv) { DARABONBA_PTR_SET_VALUE(nodeEnv_, nodeEnv) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline TableLineageList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // outputBizUnitId Field Functions 
      bool hasOutputBizUnitId() const { return this->outputBizUnitId_ != nullptr;};
      void deleteOutputBizUnitId() { this->outputBizUnitId_ = nullptr;};
      inline int64_t getOutputBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(outputBizUnitId_, 0L) };
      inline TableLineageList& setOutputBizUnitId(int64_t outputBizUnitId) { DARABONBA_PTR_SET_VALUE(outputBizUnitId_, outputBizUnitId) };


      // outputDataSourceId Field Functions 
      bool hasOutputDataSourceId() const { return this->outputDataSourceId_ != nullptr;};
      void deleteOutputDataSourceId() { this->outputDataSourceId_ = nullptr;};
      inline int64_t getOutputDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(outputDataSourceId_, 0L) };
      inline TableLineageList& setOutputDataSourceId(int64_t outputDataSourceId) { DARABONBA_PTR_SET_VALUE(outputDataSourceId_, outputDataSourceId) };


      // outputDataSourceType Field Functions 
      bool hasOutputDataSourceType() const { return this->outputDataSourceType_ != nullptr;};
      void deleteOutputDataSourceType() { this->outputDataSourceType_ = nullptr;};
      inline string getOutputDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(outputDataSourceType_, "") };
      inline TableLineageList& setOutputDataSourceType(string outputDataSourceType) { DARABONBA_PTR_SET_VALUE(outputDataSourceType_, outputDataSourceType) };


      // outputProjectId Field Functions 
      bool hasOutputProjectId() const { return this->outputProjectId_ != nullptr;};
      void deleteOutputProjectId() { this->outputProjectId_ = nullptr;};
      inline int64_t getOutputProjectId() const { DARABONBA_PTR_GET_DEFAULT(outputProjectId_, 0L) };
      inline TableLineageList& setOutputProjectId(int64_t outputProjectId) { DARABONBA_PTR_SET_VALUE(outputProjectId_, outputProjectId) };


      // outputTableDeleted Field Functions 
      bool hasOutputTableDeleted() const { return this->outputTableDeleted_ != nullptr;};
      void deleteOutputTableDeleted() { this->outputTableDeleted_ = nullptr;};
      inline bool getOutputTableDeleted() const { DARABONBA_PTR_GET_DEFAULT(outputTableDeleted_, false) };
      inline TableLineageList& setOutputTableDeleted(bool outputTableDeleted) { DARABONBA_PTR_SET_VALUE(outputTableDeleted_, outputTableDeleted) };


      // outputTableEnv Field Functions 
      bool hasOutputTableEnv() const { return this->outputTableEnv_ != nullptr;};
      void deleteOutputTableEnv() { this->outputTableEnv_ = nullptr;};
      inline string getOutputTableEnv() const { DARABONBA_PTR_GET_DEFAULT(outputTableEnv_, "") };
      inline TableLineageList& setOutputTableEnv(string outputTableEnv) { DARABONBA_PTR_SET_VALUE(outputTableEnv_, outputTableEnv) };


      // outputTableGuid Field Functions 
      bool hasOutputTableGuid() const { return this->outputTableGuid_ != nullptr;};
      void deleteOutputTableGuid() { this->outputTableGuid_ = nullptr;};
      inline string getOutputTableGuid() const { DARABONBA_PTR_GET_DEFAULT(outputTableGuid_, "") };
      inline TableLineageList& setOutputTableGuid(string outputTableGuid) { DARABONBA_PTR_SET_VALUE(outputTableGuid_, outputTableGuid) };


      // outputTableName Field Functions 
      bool hasOutputTableName() const { return this->outputTableName_ != nullptr;};
      void deleteOutputTableName() { this->outputTableName_ = nullptr;};
      inline string getOutputTableName() const { DARABONBA_PTR_GET_DEFAULT(outputTableName_, "") };
      inline TableLineageList& setOutputTableName(string outputTableName) { DARABONBA_PTR_SET_VALUE(outputTableName_, outputTableName) };


    protected:
      shared_ptr<int64_t> inputBizUnitId_ {};
      shared_ptr<int64_t> inputDataSourceId_ {};
      shared_ptr<string> inputDataSourceType_ {};
      shared_ptr<int64_t> inputProjectId_ {};
      shared_ptr<bool> inputTableDeleted_ {};
      shared_ptr<string> inputTableEnv_ {};
      shared_ptr<string> inputTableGuid_ {};
      shared_ptr<string> inputTableName_ {};
      shared_ptr<string> nodeEnv_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<int64_t> outputBizUnitId_ {};
      shared_ptr<int64_t> outputDataSourceId_ {};
      shared_ptr<string> outputDataSourceType_ {};
      shared_ptr<int64_t> outputProjectId_ {};
      shared_ptr<bool> outputTableDeleted_ {};
      shared_ptr<string> outputTableEnv_ {};
      shared_ptr<string> outputTableGuid_ {};
      shared_ptr<string> outputTableName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tableLineageList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTableLineagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTableLineagesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTableLineagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableLineagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableLineagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableLineageList Field Functions 
    bool hasTableLineageList() const { return this->tableLineageList_ != nullptr;};
    void deleteTableLineageList() { this->tableLineageList_ = nullptr;};
    inline const vector<GetTableLineagesResponseBody::TableLineageList> & getTableLineageList() const { DARABONBA_PTR_GET_CONST(tableLineageList_, vector<GetTableLineagesResponseBody::TableLineageList>) };
    inline vector<GetTableLineagesResponseBody::TableLineageList> getTableLineageList() { DARABONBA_PTR_GET(tableLineageList_, vector<GetTableLineagesResponseBody::TableLineageList>) };
    inline GetTableLineagesResponseBody& setTableLineageList(const vector<GetTableLineagesResponseBody::TableLineageList> & tableLineageList) { DARABONBA_PTR_SET_VALUE(tableLineageList_, tableLineageList) };
    inline GetTableLineagesResponseBody& setTableLineageList(vector<GetTableLineagesResponseBody::TableLineageList> && tableLineageList) { DARABONBA_PTR_SET_RVALUE(tableLineageList_, tableLineageList) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<GetTableLineagesResponseBody::TableLineageList>> tableLineageList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
