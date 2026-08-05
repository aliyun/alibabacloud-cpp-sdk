// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetFunctionInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(latency, latency_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(latency, latency_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetFunctionInstanceResponseBody() = default ;
    GetFunctionInstanceResponseBody(const GetFunctionInstanceResponseBody &) = default ;
    GetFunctionInstanceResponseBody(GetFunctionInstanceResponseBody &&) = default ;
    GetFunctionInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionInstanceResponseBody() = default ;
    GetFunctionInstanceResponseBody& operator=(const GetFunctionInstanceResponseBody &) = default ;
    GetFunctionInstanceResponseBody& operator=(GetFunctionInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(belongs, belongs_);
        DARABONBA_PTR_TO_JSON(createParameters, createParameters_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(extendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(functionName, functionName_);
        DARABONBA_PTR_TO_JSON(functionType, functionType_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(modelType, modelType_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(task, task_);
        DARABONBA_PTR_TO_JSON(versionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(belongs, belongs_);
        DARABONBA_PTR_FROM_JSON(createParameters, createParameters_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(extendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(functionName, functionName_);
        DARABONBA_PTR_FROM_JSON(functionType, functionType_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(modelType, modelType_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(task, task_);
        DARABONBA_PTR_FROM_JSON(versionId, versionId_);
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
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
          DARABONBA_PTR_TO_JSON(dagStatus, dagStatus_);
          DARABONBA_PTR_TO_JSON(lastRunTime, lastRunTime_);
        };
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
          DARABONBA_PTR_FROM_JSON(dagStatus, dagStatus_);
          DARABONBA_PTR_FROM_JSON(lastRunTime, lastRunTime_);
        };
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dagStatus_ == nullptr
        && this->lastRunTime_ == nullptr; };
        // dagStatus Field Functions 
        bool hasDagStatus() const { return this->dagStatus_ != nullptr;};
        void deleteDagStatus() { this->dagStatus_ = nullptr;};
        inline string getDagStatus() const { DARABONBA_PTR_GET_DEFAULT(dagStatus_, "") };
        inline Task& setDagStatus(string dagStatus) { DARABONBA_PTR_SET_VALUE(dagStatus_, dagStatus) };


        // lastRunTime Field Functions 
        bool hasLastRunTime() const { return this->lastRunTime_ != nullptr;};
        void deleteLastRunTime() { this->lastRunTime_ = nullptr;};
        inline int64_t getLastRunTime() const { DARABONBA_PTR_GET_DEFAULT(lastRunTime_, 0L) };
        inline Task& setLastRunTime(int64_t lastRunTime) { DARABONBA_PTR_SET_VALUE(lastRunTime_, lastRunTime) };


      protected:
        // The task status. Valid values:
        // - success: Succeeded.
        // - failed: Failed.
        // - untrained: Pending training.
        // - pending: Scheduling.
        // - running: Training in progress.
        shared_ptr<string> dagStatus_ {};
        // The last training time.
        shared_ptr<int64_t> lastRunTime_ {};
      };

      class CreateParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreateParameters& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CreateParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        CreateParameters() = default ;
        CreateParameters(const CreateParameters &) = default ;
        CreateParameters(CreateParameters &&) = default ;
        CreateParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreateParameters() = default ;
        CreateParameters& operator=(const CreateParameters &) = default ;
        CreateParameters& operator=(CreateParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CreateParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline CreateParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The parameter name.
        shared_ptr<string> name_ {};
        // The parameter value.
        shared_ptr<string> value_ {};
      };

      class Belongs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Belongs& obj) { 
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(domain, domain_);
          DARABONBA_PTR_TO_JSON(language, language_);
        };
        friend void from_json(const Darabonba::Json& j, Belongs& obj) { 
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(domain, domain_);
          DARABONBA_PTR_FROM_JSON(language, language_);
        };
        Belongs() = default ;
        Belongs(const Belongs &) = default ;
        Belongs(Belongs &&) = default ;
        Belongs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Belongs() = default ;
        Belongs& operator=(const Belongs &) = default ;
        Belongs& operator=(Belongs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->domain_ == nullptr && this->language_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Belongs& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline Belongs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Belongs& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      protected:
        // The category.
        shared_ptr<string> category_ {};
        // The industry type.
        shared_ptr<string> domain_ {};
        // The language.
        shared_ptr<string> language_ {};
      };

      virtual bool empty() const override { return this->belongs_ == nullptr
        && this->createParameters_ == nullptr && this->createTime_ == nullptr && this->cron_ == nullptr && this->description_ == nullptr && this->extendInfo_ == nullptr
        && this->functionName_ == nullptr && this->functionType_ == nullptr && this->instanceName_ == nullptr && this->modelType_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->task_ == nullptr && this->versionId_ == nullptr; };
      // belongs Field Functions 
      bool hasBelongs() const { return this->belongs_ != nullptr;};
      void deleteBelongs() { this->belongs_ = nullptr;};
      inline const Result::Belongs & getBelongs() const { DARABONBA_PTR_GET_CONST(belongs_, Result::Belongs) };
      inline Result::Belongs getBelongs() { DARABONBA_PTR_GET(belongs_, Result::Belongs) };
      inline Result& setBelongs(const Result::Belongs & belongs) { DARABONBA_PTR_SET_VALUE(belongs_, belongs) };
      inline Result& setBelongs(Result::Belongs && belongs) { DARABONBA_PTR_SET_RVALUE(belongs_, belongs) };


      // createParameters Field Functions 
      bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
      void deleteCreateParameters() { this->createParameters_ = nullptr;};
      inline const vector<Result::CreateParameters> & getCreateParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<Result::CreateParameters>) };
      inline vector<Result::CreateParameters> getCreateParameters() { DARABONBA_PTR_GET(createParameters_, vector<Result::CreateParameters>) };
      inline Result& setCreateParameters(const vector<Result::CreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
      inline Result& setCreateParameters(vector<Result::CreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Result& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline Result& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Result& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // functionType Field Functions 
      bool hasFunctionType() const { return this->functionType_ != nullptr;};
      void deleteFunctionType() { this->functionType_ = nullptr;};
      inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
      inline Result& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Result& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Result& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const Result::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, Result::Task) };
      inline Result::Task getTask() { DARABONBA_PTR_GET(task_, Result::Task) };
      inline Result& setTask(const Result::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline Result& setTask(Result::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
      inline Result& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The ownership information.
      shared_ptr<Result::Belongs> belongs_ {};
      // The specific configuration items.
      shared_ptr<vector<Result::CreateParameters>> createParameters_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The cron expression for the timed scheduling task.
      shared_ptr<string> cron_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The extended information.
      shared_ptr<string> extendInfo_ {};
      // The configuration type. Valid values:
      // - nl2sql
      // - embedding-tuning
      // - deployment
      // - notebook.
      shared_ptr<string> functionName_ {};
      // The configuration type. PAAS (default): requires training before use.
      shared_ptr<string> functionType_ {};
      // The configuration name.
      shared_ptr<string> instanceName_ {};
      // The model type. The valid values vary based on the configuration type (functionName):
      // 
      // - ops-query-analyze-nl2sql-001 (nl2sql)
      // - ops-embedding-dim-reduction-001 (embedding-tuning)
      // - native (deployment)
      // - dsw (notebook).
      shared_ptr<string> modelType_ {};
      // The source.
      shared_ptr<string> source_ {};
      // The status. Valid values:
      // - available
      // - unavailable.
      shared_ptr<string> status_ {};
      // The task information.
      shared_ptr<Result::Task> task_ {};
      // The training version ID.
      shared_ptr<int64_t> versionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFunctionInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline GetFunctionInstanceResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline GetFunctionInstanceResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFunctionInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFunctionInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetFunctionInstanceResponseBody::Result) };
    inline GetFunctionInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetFunctionInstanceResponseBody::Result) };
    inline GetFunctionInstanceResponseBody& setResult(const GetFunctionInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFunctionInstanceResponseBody& setResult(GetFunctionInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The time consumed.
    shared_ptr<int64_t> latency_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetFunctionInstanceResponseBody::Result> result_ {};
    // The request status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
