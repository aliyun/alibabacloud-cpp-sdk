// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERAGEVALUATORTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERAGEVALUATORTASKREQUEST_HPP_
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
  class CreateRagEvaluatorTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRagEvaluatorTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(app_name, appName_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_ANY_TO_JSON(data_source_config, dataSourceConfig_);
      DARABONBA_PTR_TO_JSON(emails, emails_);
      DARABONBA_PTR_TO_JSON(evaluate_config, evaluateConfig_);
      DARABONBA_PTR_TO_JSON(has_data_source, hasDataSource_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(task_name, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRagEvaluatorTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(app_name, appName_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_ANY_FROM_JSON(data_source_config, dataSourceConfig_);
      DARABONBA_PTR_FROM_JSON(emails, emails_);
      DARABONBA_PTR_FROM_JSON(evaluate_config, evaluateConfig_);
      DARABONBA_PTR_FROM_JSON(has_data_source, hasDataSource_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(task_name, taskName_);
    };
    CreateRagEvaluatorTaskRequest() = default ;
    CreateRagEvaluatorTaskRequest(const CreateRagEvaluatorTaskRequest &) = default ;
    CreateRagEvaluatorTaskRequest(CreateRagEvaluatorTaskRequest &&) = default ;
    CreateRagEvaluatorTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRagEvaluatorTaskRequest() = default ;
    CreateRagEvaluatorTaskRequest& operator=(const CreateRagEvaluatorTaskRequest &) = default ;
    CreateRagEvaluatorTaskRequest& operator=(CreateRagEvaluatorTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(prompt, prompt_);
        DARABONBA_PTR_TO_JSON(run_all_step, runAllStep_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(run_all_step, runAllStep_);
      };
      EvaluateConfig() = default ;
      EvaluateConfig(const EvaluateConfig &) = default ;
      EvaluateConfig(EvaluateConfig &&) = default ;
      EvaluateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluateConfig() = default ;
      EvaluateConfig& operator=(const EvaluateConfig &) = default ;
      EvaluateConfig& operator=(EvaluateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->model_ == nullptr
        && this->prompt_ == nullptr && this->runAllStep_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline EvaluateConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline EvaluateConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // runAllStep Field Functions 
      bool hasRunAllStep() const { return this->runAllStep_ != nullptr;};
      void deleteRunAllStep() { this->runAllStep_ = nullptr;};
      inline bool getRunAllStep() const { DARABONBA_PTR_GET_DEFAULT(runAllStep_, false) };
      inline EvaluateConfig& setRunAllStep(bool runAllStep) { DARABONBA_PTR_SET_VALUE(runAllStep_, runAllStep) };


    protected:
      // The model to use.
      shared_ptr<string> model_ {};
      // prompt
      shared_ptr<string> prompt_ {};
      // run_all_step
      shared_ptr<bool> runAllStep_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(model_answer, modelAnswer_);
        DARABONBA_PTR_TO_JSON(question, question_);
        DARABONBA_PTR_TO_JSON(recall_docs, recallDocs_);
        DARABONBA_PTR_TO_JSON(standard_answer, standardAnswer_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(model_answer, modelAnswer_);
        DARABONBA_PTR_FROM_JSON(question, question_);
        DARABONBA_PTR_FROM_JSON(recall_docs, recallDocs_);
        DARABONBA_PTR_FROM_JSON(standard_answer, standardAnswer_);
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
      virtual bool empty() const override { return this->modelAnswer_ == nullptr
        && this->question_ == nullptr && this->recallDocs_ == nullptr && this->standardAnswer_ == nullptr; };
      // modelAnswer Field Functions 
      bool hasModelAnswer() const { return this->modelAnswer_ != nullptr;};
      void deleteModelAnswer() { this->modelAnswer_ = nullptr;};
      inline string getModelAnswer() const { DARABONBA_PTR_GET_DEFAULT(modelAnswer_, "") };
      inline Data& setModelAnswer(string modelAnswer) { DARABONBA_PTR_SET_VALUE(modelAnswer_, modelAnswer) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Data& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      // recallDocs Field Functions 
      bool hasRecallDocs() const { return this->recallDocs_ != nullptr;};
      void deleteRecallDocs() { this->recallDocs_ = nullptr;};
      inline const vector<string> & getRecallDocs() const { DARABONBA_PTR_GET_CONST(recallDocs_, vector<string>) };
      inline vector<string> getRecallDocs() { DARABONBA_PTR_GET(recallDocs_, vector<string>) };
      inline Data& setRecallDocs(const vector<string> & recallDocs) { DARABONBA_PTR_SET_VALUE(recallDocs_, recallDocs) };
      inline Data& setRecallDocs(vector<string> && recallDocs) { DARABONBA_PTR_SET_RVALUE(recallDocs_, recallDocs) };


      // standardAnswer Field Functions 
      bool hasStandardAnswer() const { return this->standardAnswer_ != nullptr;};
      void deleteStandardAnswer() { this->standardAnswer_ = nullptr;};
      inline string getStandardAnswer() const { DARABONBA_PTR_GET_DEFAULT(standardAnswer_, "") };
      inline Data& setStandardAnswer(string standardAnswer) { DARABONBA_PTR_SET_VALUE(standardAnswer_, standardAnswer) };


    protected:
      // model_answer
      shared_ptr<string> modelAnswer_ {};
      // question
      shared_ptr<string> question_ {};
      // recall_docs
      shared_ptr<vector<string>> recallDocs_ {};
      // standard_answer
      shared_ptr<string> standardAnswer_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->data_ == nullptr && this->dataSourceConfig_ == nullptr && this->emails_ == nullptr && this->evaluateConfig_ == nullptr && this->hasDataSource_ == nullptr
        && this->metrics_ == nullptr && this->taskName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateRagEvaluatorTaskRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CreateRagEvaluatorTaskRequest::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CreateRagEvaluatorTaskRequest::Data>) };
    inline vector<CreateRagEvaluatorTaskRequest::Data> getData() { DARABONBA_PTR_GET(data_, vector<CreateRagEvaluatorTaskRequest::Data>) };
    inline CreateRagEvaluatorTaskRequest& setData(const vector<CreateRagEvaluatorTaskRequest::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateRagEvaluatorTaskRequest& setData(vector<CreateRagEvaluatorTaskRequest::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataSourceConfig Field Functions 
    bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
    void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
    inline     const Darabonba::Json & getDataSourceConfig() const { DARABONBA_GET(dataSourceConfig_) };
    Darabonba::Json & getDataSourceConfig() { DARABONBA_GET(dataSourceConfig_) };
    inline CreateRagEvaluatorTaskRequest& setDataSourceConfig(const Darabonba::Json & dataSourceConfig) { DARABONBA_SET_VALUE(dataSourceConfig_, dataSourceConfig) };
    inline CreateRagEvaluatorTaskRequest& setDataSourceConfig(Darabonba::Json && dataSourceConfig) { DARABONBA_SET_RVALUE(dataSourceConfig_, dataSourceConfig) };


    // emails Field Functions 
    bool hasEmails() const { return this->emails_ != nullptr;};
    void deleteEmails() { this->emails_ = nullptr;};
    inline const vector<string> & getEmails() const { DARABONBA_PTR_GET_CONST(emails_, vector<string>) };
    inline vector<string> getEmails() { DARABONBA_PTR_GET(emails_, vector<string>) };
    inline CreateRagEvaluatorTaskRequest& setEmails(const vector<string> & emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };
    inline CreateRagEvaluatorTaskRequest& setEmails(vector<string> && emails) { DARABONBA_PTR_SET_RVALUE(emails_, emails) };


    // evaluateConfig Field Functions 
    bool hasEvaluateConfig() const { return this->evaluateConfig_ != nullptr;};
    void deleteEvaluateConfig() { this->evaluateConfig_ = nullptr;};
    inline const CreateRagEvaluatorTaskRequest::EvaluateConfig & getEvaluateConfig() const { DARABONBA_PTR_GET_CONST(evaluateConfig_, CreateRagEvaluatorTaskRequest::EvaluateConfig) };
    inline CreateRagEvaluatorTaskRequest::EvaluateConfig getEvaluateConfig() { DARABONBA_PTR_GET(evaluateConfig_, CreateRagEvaluatorTaskRequest::EvaluateConfig) };
    inline CreateRagEvaluatorTaskRequest& setEvaluateConfig(const CreateRagEvaluatorTaskRequest::EvaluateConfig & evaluateConfig) { DARABONBA_PTR_SET_VALUE(evaluateConfig_, evaluateConfig) };
    inline CreateRagEvaluatorTaskRequest& setEvaluateConfig(CreateRagEvaluatorTaskRequest::EvaluateConfig && evaluateConfig) { DARABONBA_PTR_SET_RVALUE(evaluateConfig_, evaluateConfig) };


    // hasDataSource Field Functions 
    bool hasHasDataSource() const { return this->hasDataSource_ != nullptr;};
    void deleteHasDataSource() { this->hasDataSource_ = nullptr;};
    inline bool getHasDataSource() const { DARABONBA_PTR_GET_DEFAULT(hasDataSource_, false) };
    inline CreateRagEvaluatorTaskRequest& setHasDataSource(bool hasDataSource) { DARABONBA_PTR_SET_VALUE(hasDataSource_, hasDataSource) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Darabonba::Json> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Darabonba::Json>) };
    inline CreateRagEvaluatorTaskRequest& setMetrics(const vector<Darabonba::Json> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline CreateRagEvaluatorTaskRequest& setMetrics(vector<Darabonba::Json> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateRagEvaluatorTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // app_name
    shared_ptr<string> appName_ {};
    // The list of evaluation data.
    shared_ptr<vector<CreateRagEvaluatorTaskRequest::Data>> data_ {};
    // The datasource config.
    Darabonba::Json dataSourceConfig_ {};
    // emails
    shared_ptr<vector<string>> emails_ {};
    // The evaluation configuration.
    shared_ptr<CreateRagEvaluatorTaskRequest::EvaluateConfig> evaluateConfig_ {};
    // has_data_source
    shared_ptr<bool> hasDataSource_ {};
    // The metric values. Valid values:
    // - context_recall
    // - context_precision
    // - faithfulness
    // - satisfaction
    // - comprehensive_score.
    shared_ptr<vector<Darabonba::Json>> metrics_ {};
    // The evaluation task name.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
