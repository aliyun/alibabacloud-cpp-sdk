// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDetails, taskDetails_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDetails, taskDetails_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTasksResponseBody() = default ;
    ListTasksResponseBody(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody(ListTasksResponseBody &&) = default ;
    ListTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBody() = default ;
    ListTasksResponseBody& operator=(const ListTasksResponseBody &) = default ;
    ListTasksResponseBody& operator=(ListTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Log, log_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Log, log_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TaskDetails() = default ;
      TaskDetails(const TaskDetails &) = default ;
      TaskDetails(TaskDetails &&) = default ;
      TaskDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDetails() = default ;
      TaskDetails& operator=(const TaskDetails &) = default ;
      TaskDetails& operator=(TaskDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
        // parameterKey Field Functions 
        bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
        void deleteParameterKey() { this->parameterKey_ = nullptr;};
        inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
        inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        shared_ptr<string> parameterKey_ {};
        shared_ptr<string> parameterValue_ {};
      };

      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(OutputKey, outputKey_);
          DARABONBA_PTR_TO_JSON(OutputValue, outputValue_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(OutputKey, outputKey_);
          DARABONBA_PTR_FROM_JSON(OutputValue, outputValue_);
        };
        Outputs() = default ;
        Outputs(const Outputs &) = default ;
        Outputs(Outputs &&) = default ;
        Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outputs() = default ;
        Outputs& operator=(const Outputs &) = default ;
        Outputs& operator=(Outputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->outputKey_ == nullptr && this->outputValue_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Outputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // outputKey Field Functions 
        bool hasOutputKey() const { return this->outputKey_ != nullptr;};
        void deleteOutputKey() { this->outputKey_ = nullptr;};
        inline string getOutputKey() const { DARABONBA_PTR_GET_DEFAULT(outputKey_, "") };
        inline Outputs& setOutputKey(string outputKey) { DARABONBA_PTR_SET_VALUE(outputKey_, outputKey) };


        // outputValue Field Functions 
        bool hasOutputValue() const { return this->outputValue_ != nullptr;};
        void deleteOutputValue() { this->outputValue_ = nullptr;};
        inline string getOutputValue() const { DARABONBA_PTR_GET_DEFAULT(outputValue_, "") };
        inline Outputs& setOutputValue(string outputValue) { DARABONBA_PTR_SET_VALUE(outputValue_, outputValue) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> outputKey_ {};
        shared_ptr<string> outputValue_ {};
      };

      class Log : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Log& obj) { 
          DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
        };
        friend void from_json(const Darabonba::Json& j, Log& obj) { 
          DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
        };
        Log() = default ;
        Log(const Log &) = default ;
        Log(Log &&) = default ;
        Log(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Log() = default ;
        Log& operator=(const Log &) = default ;
        Log& operator=(Log &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TerraformLogs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TerraformLogs& obj) { 
            DARABONBA_PTR_TO_JSON(Command, command_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Stream, stream_);
          };
          friend void from_json(const Darabonba::Json& j, TerraformLogs& obj) { 
            DARABONBA_PTR_FROM_JSON(Command, command_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Stream, stream_);
          };
          TerraformLogs() = default ;
          TerraformLogs(const TerraformLogs &) = default ;
          TerraformLogs(TerraformLogs &&) = default ;
          TerraformLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TerraformLogs() = default ;
          TerraformLogs& operator=(const TerraformLogs &) = default ;
          TerraformLogs& operator=(TerraformLogs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->command_ == nullptr
        && this->content_ == nullptr && this->stream_ == nullptr; };
          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
          inline TerraformLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline TerraformLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // stream Field Functions 
          bool hasStream() const { return this->stream_ != nullptr;};
          void deleteStream() { this->stream_ = nullptr;};
          inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
          inline TerraformLogs& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        protected:
          shared_ptr<string> command_ {};
          shared_ptr<string> content_ {};
          shared_ptr<string> stream_ {};
        };

        virtual bool empty() const override { return this->terraformLogs_ == nullptr; };
        // terraformLogs Field Functions 
        bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
        void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
        inline const vector<Log::TerraformLogs> & getTerraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Log::TerraformLogs>) };
        inline vector<Log::TerraformLogs> getTerraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Log::TerraformLogs>) };
        inline Log& setTerraformLogs(const vector<Log::TerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
        inline Log& setTerraformLogs(vector<Log::TerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


      protected:
        shared_ptr<vector<Log::TerraformLogs>> terraformLogs_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->log_ == nullptr && this->outputs_ == nullptr && this->parameters_ == nullptr && this->portfolioId_ == nullptr && this->productId_ == nullptr
        && this->productName_ == nullptr && this->productVersionId_ == nullptr && this->productVersionName_ == nullptr && this->provisionedProductId_ == nullptr && this->provisionedProductName_ == nullptr
        && this->status_ == nullptr && this->statusMessage_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TaskDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const TaskDetails::Log & getLog() const { DARABONBA_PTR_GET_CONST(log_, TaskDetails::Log) };
      inline TaskDetails::Log getLog() { DARABONBA_PTR_GET(log_, TaskDetails::Log) };
      inline TaskDetails& setLog(const TaskDetails::Log & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline TaskDetails& setLog(TaskDetails::Log && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const vector<TaskDetails::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<TaskDetails::Outputs>) };
      inline vector<TaskDetails::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<TaskDetails::Outputs>) };
      inline TaskDetails& setOutputs(const vector<TaskDetails::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline TaskDetails& setOutputs(vector<TaskDetails::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<TaskDetails::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<TaskDetails::Parameters>) };
      inline vector<TaskDetails::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<TaskDetails::Parameters>) };
      inline TaskDetails& setParameters(const vector<TaskDetails::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline TaskDetails& setParameters(vector<TaskDetails::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline TaskDetails& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline TaskDetails& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline TaskDetails& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline TaskDetails& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline TaskDetails& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // provisionedProductId Field Functions 
      bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
      void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
      inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
      inline TaskDetails& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


      // provisionedProductName Field Functions 
      bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
      void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
      inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
      inline TaskDetails& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline TaskDetails& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskDetails& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskDetails& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TaskDetails& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<TaskDetails::Log> log_ {};
      shared_ptr<vector<TaskDetails::Outputs>> outputs_ {};
      shared_ptr<vector<TaskDetails::Parameters>> parameters_ {};
      shared_ptr<string> portfolioId_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<string> productVersionId_ {};
      shared_ptr<string> productVersionName_ {};
      shared_ptr<string> provisionedProductId_ {};
      shared_ptr<string> provisionedProductName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusMessage_ {};
      // 代表资源名称的资源属性字段
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->taskDetails_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDetails Field Functions 
    bool hasTaskDetails() const { return this->taskDetails_ != nullptr;};
    void deleteTaskDetails() { this->taskDetails_ = nullptr;};
    inline const vector<ListTasksResponseBody::TaskDetails> & getTaskDetails() const { DARABONBA_PTR_GET_CONST(taskDetails_, vector<ListTasksResponseBody::TaskDetails>) };
    inline vector<ListTasksResponseBody::TaskDetails> getTaskDetails() { DARABONBA_PTR_GET(taskDetails_, vector<ListTasksResponseBody::TaskDetails>) };
    inline ListTasksResponseBody& setTaskDetails(const vector<ListTasksResponseBody::TaskDetails> & taskDetails) { DARABONBA_PTR_SET_VALUE(taskDetails_, taskDetails) };
    inline ListTasksResponseBody& setTaskDetails(vector<ListTasksResponseBody::TaskDetails> && taskDetails) { DARABONBA_PTR_SET_RVALUE(taskDetails_, taskDetails) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTasksResponseBody::TaskDetails>> taskDetails_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
