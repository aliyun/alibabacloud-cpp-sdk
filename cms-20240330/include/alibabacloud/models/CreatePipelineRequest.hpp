// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executePolicy, executePolicy_);
      DARABONBA_PTR_TO_JSON(pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(sink, sink_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executePolicy, executePolicy_);
      DARABONBA_PTR_FROM_JSON(pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(sink, sink_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    CreatePipelineRequest() = default ;
    CreatePipelineRequest(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest(CreatePipelineRequest &&) = default ;
    CreatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineRequest() = default ;
    CreatePipelineRequest& operator=(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest& operator=(CreatePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Source : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Source& obj) { 
        DARABONBA_PTR_TO_JSON(logstore, logstore_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(logstore, logstore_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Source() = default ;
      Source(const Source &) = default ;
      Source(Source &&) = default ;
      Source(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Source() = default ;
      Source& operator=(const Source &) = default ;
      Source& operator=(Source &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Logstore : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logstore& obj) { 
          DARABONBA_PTR_TO_JSON(logstore, logstore_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(query, query_);
        };
        friend void from_json(const Darabonba::Json& j, Logstore& obj) { 
          DARABONBA_PTR_FROM_JSON(logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(query, query_);
        };
        Logstore() = default ;
        Logstore(const Logstore &) = default ;
        Logstore(Logstore &&) = default ;
        Logstore(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logstore() = default ;
        Logstore& operator=(const Logstore &) = default ;
        Logstore& operator=(Logstore &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->query_ == nullptr; };
        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline Logstore& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Logstore& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline Logstore& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      protected:
        // The Logstore name.
        shared_ptr<string> logstore_ {};
        // The Log Service Project name.
        shared_ptr<string> project_ {};
        // The query statement to filter logs.
        shared_ptr<string> query_ {};
      };

      virtual bool empty() const override { return this->logstore_ == nullptr
        && this->type_ == nullptr; };
      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline const Source::Logstore & getLogstore() const { DARABONBA_PTR_GET_CONST(logstore_, Source::Logstore) };
      inline Source::Logstore getLogstore() { DARABONBA_PTR_GET(logstore_, Source::Logstore) };
      inline Source& setLogstore(const Source::Logstore & logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };
      inline Source& setLogstore(Source::Logstore && logstore) { DARABONBA_PTR_SET_RVALUE(logstore_, logstore) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The Log Service Logstore configuration. This parameter is required when `source.type` is set to `logstore`.
      shared_ptr<Source::Logstore> logstore_ {};
      // The data source type.
      shared_ptr<string> type_ {};
    };

    class Sink : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sink& obj) { 
        DARABONBA_PTR_TO_JSON(dataset, dataset_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Sink& obj) { 
        DARABONBA_PTR_FROM_JSON(dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Sink() = default ;
      Sink(const Sink &) = default ;
      Sink(Sink &&) = default ;
      Sink(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sink() = default ;
      Sink& operator=(const Sink &) = default ;
      Sink& operator=(Sink &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dataset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
          DARABONBA_PTR_TO_JSON(dataset, dataset_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
          DARABONBA_PTR_FROM_JSON(dataset, dataset_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        Dataset() = default ;
        Dataset(const Dataset &) = default ;
        Dataset(Dataset &&) = default ;
        Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dataset() = default ;
        Dataset& operator=(const Dataset &) = default ;
        Dataset& operator=(Dataset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataset_ == nullptr
        && this->workspace_ == nullptr; };
        // dataset Field Functions 
        bool hasDataset() const { return this->dataset_ != nullptr;};
        void deleteDataset() { this->dataset_ = nullptr;};
        inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
        inline Dataset& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline Dataset& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // The dataset name.
        shared_ptr<string> dataset_ {};
        // The workspace ID.
        shared_ptr<string> workspace_ {};
      };

      virtual bool empty() const override { return this->dataset_ == nullptr
        && this->type_ == nullptr; };
      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline const Sink::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, Sink::Dataset) };
      inline Sink::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, Sink::Dataset) };
      inline Sink& setDataset(const Sink::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
      inline Sink& setDataset(Sink::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Sink& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The destination dataset configuration. This parameter is required when `sink.type` is set to `dataset`.
      shared_ptr<Sink::Dataset> dataset_ {};
      // The sink type.
      shared_ptr<string> type_ {};
    };

    class Pipeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipeline& obj) { 
        DARABONBA_PTR_TO_JSON(nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, Pipeline& obj) { 
        DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      };
      Pipeline() = default ;
      Pipeline(const Pipeline &) = default ;
      Pipeline(Pipeline &&) = default ;
      Pipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipeline() = default ;
      Pipeline& operator=(const Pipeline &) = default ;
      Pipeline& operator=(Pipeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_ANY_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_ANY_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->parameters_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Nodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline         const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
        Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
        inline Nodes& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
        inline Nodes& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Nodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The node ID.
        shared_ptr<string> id_ {};
        // The node parameters.
        Darabonba::Json parameters_ {};
        // The node type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Pipeline::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Pipeline::Nodes>) };
      inline vector<Pipeline::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Pipeline::Nodes>) };
      inline Pipeline& setNodes(const vector<Pipeline::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Pipeline& setNodes(vector<Pipeline::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      // The pipeline nodes.
      shared_ptr<vector<Pipeline::Nodes>> nodes_ {};
    };

    class ExecutePolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutePolicy& obj) { 
        DARABONBA_PTR_TO_JSON(mode, mode_);
        DARABONBA_PTR_TO_JSON(runOnce, runOnce_);
        DARABONBA_PTR_TO_JSON(scheduled, scheduled_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutePolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(mode, mode_);
        DARABONBA_PTR_FROM_JSON(runOnce, runOnce_);
        DARABONBA_PTR_FROM_JSON(scheduled, scheduled_);
      };
      ExecutePolicy() = default ;
      ExecutePolicy(const ExecutePolicy &) = default ;
      ExecutePolicy(ExecutePolicy &&) = default ;
      ExecutePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutePolicy() = default ;
      ExecutePolicy& operator=(const ExecutePolicy &) = default ;
      ExecutePolicy& operator=(ExecutePolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scheduled : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scheduled& obj) { 
          DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
          DARABONBA_PTR_TO_JSON(interval, interval_);
        };
        friend void from_json(const Darabonba::Json& j, Scheduled& obj) { 
          DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
          DARABONBA_PTR_FROM_JSON(interval, interval_);
        };
        Scheduled() = default ;
        Scheduled(const Scheduled &) = default ;
        Scheduled(Scheduled &&) = default ;
        Scheduled(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scheduled() = default ;
        Scheduled& operator=(const Scheduled &) = default ;
        Scheduled& operator=(Scheduled &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fromTime_ == nullptr
        && this->interval_ == nullptr; };
        // fromTime Field Functions 
        bool hasFromTime() const { return this->fromTime_ != nullptr;};
        void deleteFromTime() { this->fromTime_ = nullptr;};
        inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
        inline Scheduled& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline Scheduled& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      protected:
        // The start timestamp.
        shared_ptr<int64_t> fromTime_ {};
        // The execution interval in seconds.
        shared_ptr<string> interval_ {};
      };

      class RunOnce : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunOnce& obj) { 
          DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
          DARABONBA_PTR_TO_JSON(toTime, toTime_);
        };
        friend void from_json(const Darabonba::Json& j, RunOnce& obj) { 
          DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
          DARABONBA_PTR_FROM_JSON(toTime, toTime_);
        };
        RunOnce() = default ;
        RunOnce(const RunOnce &) = default ;
        RunOnce(RunOnce &&) = default ;
        RunOnce(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunOnce() = default ;
        RunOnce& operator=(const RunOnce &) = default ;
        RunOnce& operator=(RunOnce &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fromTime_ == nullptr
        && this->toTime_ == nullptr; };
        // fromTime Field Functions 
        bool hasFromTime() const { return this->fromTime_ != nullptr;};
        void deleteFromTime() { this->fromTime_ = nullptr;};
        inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
        inline RunOnce& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


        // toTime Field Functions 
        bool hasToTime() const { return this->toTime_ != nullptr;};
        void deleteToTime() { this->toTime_ = nullptr;};
        inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
        inline RunOnce& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


      protected:
        // The start timestamp.
        shared_ptr<int64_t> fromTime_ {};
        // The end timestamp.
        shared_ptr<int64_t> toTime_ {};
      };

      virtual bool empty() const override { return this->mode_ == nullptr
        && this->runOnce_ == nullptr && this->scheduled_ == nullptr; };
      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline ExecutePolicy& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // runOnce Field Functions 
      bool hasRunOnce() const { return this->runOnce_ != nullptr;};
      void deleteRunOnce() { this->runOnce_ = nullptr;};
      inline const ExecutePolicy::RunOnce & getRunOnce() const { DARABONBA_PTR_GET_CONST(runOnce_, ExecutePolicy::RunOnce) };
      inline ExecutePolicy::RunOnce getRunOnce() { DARABONBA_PTR_GET(runOnce_, ExecutePolicy::RunOnce) };
      inline ExecutePolicy& setRunOnce(const ExecutePolicy::RunOnce & runOnce) { DARABONBA_PTR_SET_VALUE(runOnce_, runOnce) };
      inline ExecutePolicy& setRunOnce(ExecutePolicy::RunOnce && runOnce) { DARABONBA_PTR_SET_RVALUE(runOnce_, runOnce) };


      // scheduled Field Functions 
      bool hasScheduled() const { return this->scheduled_ != nullptr;};
      void deleteScheduled() { this->scheduled_ = nullptr;};
      inline const ExecutePolicy::Scheduled & getScheduled() const { DARABONBA_PTR_GET_CONST(scheduled_, ExecutePolicy::Scheduled) };
      inline ExecutePolicy::Scheduled getScheduled() { DARABONBA_PTR_GET(scheduled_, ExecutePolicy::Scheduled) };
      inline ExecutePolicy& setScheduled(const ExecutePolicy::Scheduled & scheduled) { DARABONBA_PTR_SET_VALUE(scheduled_, scheduled) };
      inline ExecutePolicy& setScheduled(ExecutePolicy::Scheduled && scheduled) { DARABONBA_PTR_SET_RVALUE(scheduled_, scheduled) };


    protected:
      // The execution mode. Set to `runOnce` for a single execution, or `scheduled` for a recurring execution.
      shared_ptr<string> mode_ {};
      // The configuration for a one-time execution. This parameter is required when `executePolicy.mode` is set to `runOnce`.
      shared_ptr<ExecutePolicy::RunOnce> runOnce_ {};
      // The configuration for a scheduled execution. This parameter is required when `executePolicy.mode` is set to `scheduled`.
      shared_ptr<ExecutePolicy::Scheduled> scheduled_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->executePolicy_ == nullptr && this->pipeline_ == nullptr && this->pipelineName_ == nullptr && this->sink_ == nullptr && this->source_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePipelineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executePolicy Field Functions 
    bool hasExecutePolicy() const { return this->executePolicy_ != nullptr;};
    void deleteExecutePolicy() { this->executePolicy_ = nullptr;};
    inline const CreatePipelineRequest::ExecutePolicy & getExecutePolicy() const { DARABONBA_PTR_GET_CONST(executePolicy_, CreatePipelineRequest::ExecutePolicy) };
    inline CreatePipelineRequest::ExecutePolicy getExecutePolicy() { DARABONBA_PTR_GET(executePolicy_, CreatePipelineRequest::ExecutePolicy) };
    inline CreatePipelineRequest& setExecutePolicy(const CreatePipelineRequest::ExecutePolicy & executePolicy) { DARABONBA_PTR_SET_VALUE(executePolicy_, executePolicy) };
    inline CreatePipelineRequest& setExecutePolicy(CreatePipelineRequest::ExecutePolicy && executePolicy) { DARABONBA_PTR_SET_RVALUE(executePolicy_, executePolicy) };


    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const CreatePipelineRequest::Pipeline & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, CreatePipelineRequest::Pipeline) };
    inline CreatePipelineRequest::Pipeline getPipeline() { DARABONBA_PTR_GET(pipeline_, CreatePipelineRequest::Pipeline) };
    inline CreatePipelineRequest& setPipeline(const CreatePipelineRequest::Pipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline CreatePipelineRequest& setPipeline(CreatePipelineRequest::Pipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline CreatePipelineRequest& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const CreatePipelineRequest::Sink & getSink() const { DARABONBA_PTR_GET_CONST(sink_, CreatePipelineRequest::Sink) };
    inline CreatePipelineRequest::Sink getSink() { DARABONBA_PTR_GET(sink_, CreatePipelineRequest::Sink) };
    inline CreatePipelineRequest& setSink(const CreatePipelineRequest::Sink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline CreatePipelineRequest& setSink(CreatePipelineRequest::Sink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CreatePipelineRequest::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, CreatePipelineRequest::Source) };
    inline CreatePipelineRequest::Source getSource() { DARABONBA_PTR_GET(source_, CreatePipelineRequest::Source) };
    inline CreatePipelineRequest& setSource(const CreatePipelineRequest::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreatePipelineRequest& setSource(CreatePipelineRequest::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    // The pipeline description.
    shared_ptr<string> description_ {};
    // The execution policy.
    shared_ptr<CreatePipelineRequest::ExecutePolicy> executePolicy_ {};
    // The pipeline configuration.
    shared_ptr<CreatePipelineRequest::Pipeline> pipeline_ {};
    // The pipeline name.
    shared_ptr<string> pipelineName_ {};
    // The data sink for the processed output.
    shared_ptr<CreatePipelineRequest::Sink> sink_ {};
    // The data source.
    shared_ptr<CreatePipelineRequest::Source> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
