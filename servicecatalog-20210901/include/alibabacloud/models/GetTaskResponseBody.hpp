// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
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
  class GetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
    };
    GetTaskResponseBody() = default ;
    GetTaskResponseBody(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody(GetTaskResponseBody &&) = default ;
    GetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBody() = default ;
    GetTaskResponseBody& operator=(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody& operator=(GetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
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
        DARABONBA_PTR_TO_JSON(TaskTags, taskTags_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
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
        DARABONBA_PTR_FROM_JSON(TaskTags, taskTags_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TaskDetail() = default ;
      TaskDetail(const TaskDetail &) = default ;
      TaskDetail(TaskDetail &&) = default ;
      TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDetail() = default ;
      TaskDetail& operator=(const TaskDetail &) = default ;
      TaskDetail& operator=(TaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskTags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TaskTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        TaskTags() = default ;
        TaskTags(const TaskTags &) = default ;
        TaskTags(TaskTags &&) = default ;
        TaskTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskTags() = default ;
        TaskTags& operator=(const TaskTags &) = default ;
        TaskTags& operator=(TaskTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline TaskTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TaskTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The custom tag key.
        // 
        // The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
        shared_ptr<string> key_ {};
        // The custom tag value.
        // 
        // The value must be 1 to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
      };

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
        // The name of the input parameter for the template.
        shared_ptr<string> parameterKey_ {};
        // The value of the input parameter for the template.
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
        // The description of the output parameter for the template.
        shared_ptr<string> description_ {};
        // The name of the output parameter for the template.
        shared_ptr<string> outputKey_ {};
        // The value of the output parameter for the template.
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
          // The name of the Terraform command that is run. Valid values:
          // 
          // *   apply
          // *   plan
          // *   destroy
          // *   version
          // 
          // For more information about Terraform commands, see [Basic CLI Features](https://www.terraform.io/cli/commands).
          shared_ptr<string> command_ {};
          // The content of the output stream that is returned after the command is run.
          shared_ptr<string> content_ {};
          // The output stream. Valid values:
          // 
          // *   stdout: a standard output stream
          // *   stderr: a standard error stream
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
        // The Terraform logs.
        shared_ptr<vector<Log::TerraformLogs>> terraformLogs_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->log_ == nullptr && this->outputs_ == nullptr && this->parameters_ == nullptr && this->portfolioId_ == nullptr && this->productId_ == nullptr
        && this->productName_ == nullptr && this->productVersionId_ == nullptr && this->productVersionName_ == nullptr && this->provisionedProductId_ == nullptr && this->provisionedProductName_ == nullptr
        && this->status_ == nullptr && this->statusMessage_ == nullptr && this->taskId_ == nullptr && this->taskTags_ == nullptr && this->taskType_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TaskDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const TaskDetail::Log & getLog() const { DARABONBA_PTR_GET_CONST(log_, TaskDetail::Log) };
      inline TaskDetail::Log getLog() { DARABONBA_PTR_GET(log_, TaskDetail::Log) };
      inline TaskDetail& setLog(const TaskDetail::Log & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline TaskDetail& setLog(TaskDetail::Log && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const vector<TaskDetail::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<TaskDetail::Outputs>) };
      inline vector<TaskDetail::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<TaskDetail::Outputs>) };
      inline TaskDetail& setOutputs(const vector<TaskDetail::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline TaskDetail& setOutputs(vector<TaskDetail::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<TaskDetail::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<TaskDetail::Parameters>) };
      inline vector<TaskDetail::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<TaskDetail::Parameters>) };
      inline TaskDetail& setParameters(const vector<TaskDetail::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline TaskDetail& setParameters(vector<TaskDetail::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline TaskDetail& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline TaskDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline TaskDetail& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline TaskDetail& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline TaskDetail& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // provisionedProductId Field Functions 
      bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
      void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
      inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
      inline TaskDetail& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


      // provisionedProductName Field Functions 
      bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
      void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
      inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
      inline TaskDetail& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline TaskDetail& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskTags Field Functions 
      bool hasTaskTags() const { return this->taskTags_ != nullptr;};
      void deleteTaskTags() { this->taskTags_ = nullptr;};
      inline const vector<TaskDetail::TaskTags> & getTaskTags() const { DARABONBA_PTR_GET_CONST(taskTags_, vector<TaskDetail::TaskTags>) };
      inline vector<TaskDetail::TaskTags> getTaskTags() { DARABONBA_PTR_GET(taskTags_, vector<TaskDetail::TaskTags>) };
      inline TaskDetail& setTaskTags(const vector<TaskDetail::TaskTags> & taskTags) { DARABONBA_PTR_SET_VALUE(taskTags_, taskTags) };
      inline TaskDetail& setTaskTags(vector<TaskDetail::TaskTags> && taskTags) { DARABONBA_PTR_SET_RVALUE(taskTags_, taskTags) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskDetail& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TaskDetail& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the task was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The logs of the instance.
      shared_ptr<TaskDetail::Log> log_ {};
      // The output parameters of the template.
      shared_ptr<vector<TaskDetail::Outputs>> outputs_ {};
      // The parameters that are specified in the template.
      shared_ptr<vector<TaskDetail::Parameters>> parameters_ {};
      // The ID of the product portfolio.
      shared_ptr<string> portfolioId_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
      // The ID of the product version.
      shared_ptr<string> productVersionId_ {};
      // The name of the product version.
      shared_ptr<string> productVersionName_ {};
      // The ID of the product instance.
      shared_ptr<string> provisionedProductId_ {};
      // The name of the product instance.
      shared_ptr<string> provisionedProductName_ {};
      // The state of the task. Valid values:
      // 
      // *   Succeeded: The task was successful.
      // *   InProgress: The task was in progress.
      // *   Failed: The task failed.
      shared_ptr<string> status_ {};
      // The message that is returned for the status of the task.
      // 
      // > This parameter is returned only when Failed is returned for the Status parameter.
      shared_ptr<string> statusMessage_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
      // The custom tags.
      shared_ptr<vector<TaskDetail::TaskTags>> taskTags_ {};
      // The type of the task. Valid values:
      // 
      // *   LaunchProduct: a task that launches the product.
      // *   UpdateProvisionedProduct: a task that updates the information about the product instance.
      // *   TerminateProvisionedProduct: a task that terminates the product instance.
      shared_ptr<string> taskType_ {};
      // The time when the task was last modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const GetTaskResponseBody::TaskDetail & getTaskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, GetTaskResponseBody::TaskDetail) };
    inline GetTaskResponseBody::TaskDetail getTaskDetail() { DARABONBA_PTR_GET(taskDetail_, GetTaskResponseBody::TaskDetail) };
    inline GetTaskResponseBody& setTaskDetail(const GetTaskResponseBody::TaskDetail & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline GetTaskResponseBody& setTaskDetail(GetTaskResponseBody::TaskDetail && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the task.
    shared_ptr<GetTaskResponseBody::TaskDetail> taskDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
