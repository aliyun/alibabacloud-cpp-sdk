// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetBatchExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetBatchExportTaskResponseBody() = default ;
    GetBatchExportTaskResponseBody(const GetBatchExportTaskResponseBody &) = default ;
    GetBatchExportTaskResponseBody(GetBatchExportTaskResponseBody &&) = default ;
    GetBatchExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchExportTaskResponseBody() = default ;
    GetBatchExportTaskResponseBody& operator=(const GetBatchExportTaskResponseBody &) = default ;
    GetBatchExportTaskResponseBody& operator=(GetBatchExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(processedCount, processedCount_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(processedCount, processedCount_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(apiType, apiType_);
          DARABONBA_PTR_TO_JSON(failureItems, failureItems_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(specContentBase64, specContentBase64_);
          DARABONBA_PTR_TO_JSON(successItems, successItems_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(apiType, apiType_);
          DARABONBA_PTR_FROM_JSON(failureItems, failureItems_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(specContentBase64, specContentBase64_);
          DARABONBA_PTR_FROM_JSON(successItems, successItems_);
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
        class SuccessItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SuccessItems& obj) { 
            DARABONBA_PTR_TO_JSON(apiId, apiId_);
            DARABONBA_PTR_TO_JSON(apiName, apiName_);
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, SuccessItems& obj) { 
            DARABONBA_PTR_FROM_JSON(apiId, apiId_);
            DARABONBA_PTR_FROM_JSON(apiName, apiName_);
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          };
          SuccessItems() = default ;
          SuccessItems(const SuccessItems &) = default ;
          SuccessItems(SuccessItems &&) = default ;
          SuccessItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SuccessItems() = default ;
          SuccessItems& operator=(const SuccessItems &) = default ;
          SuccessItems& operator=(SuccessItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->errorMessage_ == nullptr; };
          // apiId Field Functions 
          bool hasApiId() const { return this->apiId_ != nullptr;};
          void deleteApiId() { this->apiId_ = nullptr;};
          inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
          inline SuccessItems& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


          // apiName Field Functions 
          bool hasApiName() const { return this->apiName_ != nullptr;};
          void deleteApiName() { this->apiName_ = nullptr;};
          inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
          inline SuccessItems& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline SuccessItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          shared_ptr<string> apiId_ {};
          shared_ptr<string> apiName_ {};
          shared_ptr<string> errorMessage_ {};
        };

        class FailureItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailureItems& obj) { 
            DARABONBA_PTR_TO_JSON(apiId, apiId_);
            DARABONBA_PTR_TO_JSON(apiName, apiName_);
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          };
          friend void from_json(const Darabonba::Json& j, FailureItems& obj) { 
            DARABONBA_PTR_FROM_JSON(apiId, apiId_);
            DARABONBA_PTR_FROM_JSON(apiName, apiName_);
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          };
          FailureItems() = default ;
          FailureItems(const FailureItems &) = default ;
          FailureItems(FailureItems &&) = default ;
          FailureItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailureItems() = default ;
          FailureItems& operator=(const FailureItems &) = default ;
          FailureItems& operator=(FailureItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->errorMessage_ == nullptr; };
          // apiId Field Functions 
          bool hasApiId() const { return this->apiId_ != nullptr;};
          void deleteApiId() { this->apiId_ = nullptr;};
          inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
          inline FailureItems& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


          // apiName Field Functions 
          bool hasApiName() const { return this->apiName_ != nullptr;};
          void deleteApiName() { this->apiName_ = nullptr;};
          inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
          inline FailureItems& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FailureItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        protected:
          shared_ptr<string> apiId_ {};
          shared_ptr<string> apiName_ {};
          shared_ptr<string> errorMessage_ {};
        };

        virtual bool empty() const override { return this->apiType_ == nullptr
        && this->failureItems_ == nullptr && this->gatewayId_ == nullptr && this->specContentBase64_ == nullptr && this->successItems_ == nullptr; };
        // apiType Field Functions 
        bool hasApiType() const { return this->apiType_ != nullptr;};
        void deleteApiType() { this->apiType_ = nullptr;};
        inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
        inline Result& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


        // failureItems Field Functions 
        bool hasFailureItems() const { return this->failureItems_ != nullptr;};
        void deleteFailureItems() { this->failureItems_ = nullptr;};
        inline const vector<Result::FailureItems> & getFailureItems() const { DARABONBA_PTR_GET_CONST(failureItems_, vector<Result::FailureItems>) };
        inline vector<Result::FailureItems> getFailureItems() { DARABONBA_PTR_GET(failureItems_, vector<Result::FailureItems>) };
        inline Result& setFailureItems(const vector<Result::FailureItems> & failureItems) { DARABONBA_PTR_SET_VALUE(failureItems_, failureItems) };
        inline Result& setFailureItems(vector<Result::FailureItems> && failureItems) { DARABONBA_PTR_SET_RVALUE(failureItems_, failureItems) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Result& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // specContentBase64 Field Functions 
        bool hasSpecContentBase64() const { return this->specContentBase64_ != nullptr;};
        void deleteSpecContentBase64() { this->specContentBase64_ = nullptr;};
        inline string getSpecContentBase64() const { DARABONBA_PTR_GET_DEFAULT(specContentBase64_, "") };
        inline Result& setSpecContentBase64(string specContentBase64) { DARABONBA_PTR_SET_VALUE(specContentBase64_, specContentBase64) };


        // successItems Field Functions 
        bool hasSuccessItems() const { return this->successItems_ != nullptr;};
        void deleteSuccessItems() { this->successItems_ = nullptr;};
        inline const vector<Result::SuccessItems> & getSuccessItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<Result::SuccessItems>) };
        inline vector<Result::SuccessItems> getSuccessItems() { DARABONBA_PTR_GET(successItems_, vector<Result::SuccessItems>) };
        inline Result& setSuccessItems(const vector<Result::SuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
        inline Result& setSuccessItems(vector<Result::SuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


      protected:
        shared_ptr<string> apiType_ {};
        shared_ptr<vector<Result::FailureItems>> failureItems_ {};
        shared_ptr<string> gatewayId_ {};
        shared_ptr<string> specContentBase64_ {};
        shared_ptr<vector<Result::SuccessItems>> successItems_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorMessage_ == nullptr && this->processedCount_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // processedCount Field Functions 
      bool hasProcessedCount() const { return this->processedCount_ != nullptr;};
      void deleteProcessedCount() { this->processedCount_ = nullptr;};
      inline int32_t getProcessedCount() const { DARABONBA_PTR_GET_DEFAULT(processedCount_, 0) };
      inline Data& setProcessedCount(int32_t processedCount) { DARABONBA_PTR_SET_VALUE(processedCount_, processedCount) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<int32_t> processedCount_ {};
      shared_ptr<Data::Result> result_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchExportTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBatchExportTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBatchExportTaskResponseBody::Data) };
    inline GetBatchExportTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBatchExportTaskResponseBody::Data) };
    inline GetBatchExportTaskResponseBody& setData(const GetBatchExportTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBatchExportTaskResponseBody& setData(GetBatchExportTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBatchExportTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBatchExportTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
