// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class PreviewPipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewPipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(toTime, toTime_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewPipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(toTime, toTime_);
    };
    PreviewPipelineRequest() = default ;
    PreviewPipelineRequest(const PreviewPipelineRequest &) = default ;
    PreviewPipelineRequest(PreviewPipelineRequest &&) = default ;
    PreviewPipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewPipelineRequest() = default ;
    PreviewPipelineRequest& operator=(const PreviewPipelineRequest &) = default ;
    PreviewPipelineRequest& operator=(PreviewPipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Source : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Source& obj) { 
        DARABONBA_PTR_TO_JSON(dataset, dataset_);
        DARABONBA_PTR_TO_JSON(inputFields, inputFields_);
        DARABONBA_PTR_TO_JSON(logstore, logstore_);
        DARABONBA_PTR_TO_JSON(trajectory, trajectory_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(inputFields, inputFields_);
        DARABONBA_PTR_FROM_JSON(logstore, logstore_);
        DARABONBA_PTR_FROM_JSON(trajectory, trajectory_);
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
      class Trajectory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trajectory& obj) { 
          DARABONBA_PTR_TO_JSON(enrich, enrich_);
        };
        friend void from_json(const Darabonba::Json& j, Trajectory& obj) { 
          DARABONBA_PTR_FROM_JSON(enrich, enrich_);
        };
        Trajectory() = default ;
        Trajectory(const Trajectory &) = default ;
        Trajectory(Trajectory &&) = default ;
        Trajectory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Trajectory() = default ;
        Trajectory& operator=(const Trajectory &) = default ;
        Trajectory& operator=(Trajectory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Enrich : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Enrich& obj) { 
            DARABONBA_PTR_TO_JSON(columns, columns_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, Enrich& obj) { 
            DARABONBA_PTR_FROM_JSON(columns, columns_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          Enrich() = default ;
          Enrich(const Enrich &) = default ;
          Enrich(Enrich &&) = default ;
          Enrich(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Enrich() = default ;
          Enrich& operator=(const Enrich &) = default ;
          Enrich& operator=(Enrich &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columns_ == nullptr
        && this->enabled_ == nullptr; };
          // columns Field Functions 
          bool hasColumns() const { return this->columns_ != nullptr;};
          void deleteColumns() { this->columns_ = nullptr;};
          inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
          inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
          inline Enrich& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
          inline Enrich& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Enrich& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // The list of enrichment columns. This parameter is retained for compatibility. The current implementation outputs only the fixed agent_trajectory column, and this parameter no longer affects the output.
          shared_ptr<vector<string>> columns_ {};
          // Specifies whether to enable trajectory enrichment.
          shared_ptr<bool> enabled_ {};
        };

        virtual bool empty() const override { return this->enrich_ == nullptr; };
        // enrich Field Functions 
        bool hasEnrich() const { return this->enrich_ != nullptr;};
        void deleteEnrich() { this->enrich_ = nullptr;};
        inline const Trajectory::Enrich & getEnrich() const { DARABONBA_PTR_GET_CONST(enrich_, Trajectory::Enrich) };
        inline Trajectory::Enrich getEnrich() { DARABONBA_PTR_GET(enrich_, Trajectory::Enrich) };
        inline Trajectory& setEnrich(const Trajectory::Enrich & enrich) { DARABONBA_PTR_SET_VALUE(enrich_, enrich) };
        inline Trajectory& setEnrich(Trajectory::Enrich && enrich) { DARABONBA_PTR_SET_RVALUE(enrich_, enrich) };


      protected:
        // Trajectory enrichment: mounts trajectory data into the cleaning results based on the trace_id. When writing data to a dataset, the data is stored in the fixed agent_trajectory column, and the column value is the JSON content of the trajectory.
        shared_ptr<Trajectory::Enrich> enrich_ {};
      };

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
        // The name of the Simple Log Service Logstore.
        shared_ptr<string> logstore_ {};
        // The name of the Simple Log Service project.
        shared_ptr<string> project_ {};
        // The filtered query statement (Simple Log Service query and analysis syntax).
        shared_ptr<string> query_ {};
      };

      class InputFields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputFields& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, InputFields& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        InputFields() = default ;
        InputFields(const InputFields &) = default ;
        InputFields(InputFields &&) = default ;
        InputFields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputFields() = default ;
        InputFields& operator=(const InputFields &) = default ;
        InputFields& operator=(InputFields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InputFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline InputFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The name of the field.
        shared_ptr<string> name_ {};
        // The type of the field. Valid values: text, long, double, and json.
        shared_ptr<string> type_ {};
      };

      class Dataset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
          DARABONBA_PTR_TO_JSON(dataset, dataset_);
          DARABONBA_PTR_TO_JSON(filter, filter_);
        };
        friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
          DARABONBA_PTR_FROM_JSON(dataset, dataset_);
          DARABONBA_PTR_FROM_JSON(filter, filter_);
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
        && this->filter_ == nullptr; };
        // dataset Field Functions 
        bool hasDataset() const { return this->dataset_ != nullptr;};
        void deleteDataset() { this->dataset_ = nullptr;};
        inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
        inline Dataset& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


        // filter Field Functions 
        bool hasFilter() const { return this->filter_ != nullptr;};
        void deleteFilter() { this->filter_ = nullptr;};
        inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
        inline Dataset& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


      protected:
        // The name of the source dataset.
        shared_ptr<string> dataset_ {};
        // The filter condition for the dataset data.
        shared_ptr<string> filter_ {};
      };

      virtual bool empty() const override { return this->dataset_ == nullptr
        && this->inputFields_ == nullptr && this->logstore_ == nullptr && this->trajectory_ == nullptr && this->type_ == nullptr; };
      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline const Source::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, Source::Dataset) };
      inline Source::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, Source::Dataset) };
      inline Source& setDataset(const Source::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
      inline Source& setDataset(Source::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


      // inputFields Field Functions 
      bool hasInputFields() const { return this->inputFields_ != nullptr;};
      void deleteInputFields() { this->inputFields_ = nullptr;};
      inline const vector<Source::InputFields> & getInputFields() const { DARABONBA_PTR_GET_CONST(inputFields_, vector<Source::InputFields>) };
      inline vector<Source::InputFields> getInputFields() { DARABONBA_PTR_GET(inputFields_, vector<Source::InputFields>) };
      inline Source& setInputFields(const vector<Source::InputFields> & inputFields) { DARABONBA_PTR_SET_VALUE(inputFields_, inputFields) };
      inline Source& setInputFields(vector<Source::InputFields> && inputFields) { DARABONBA_PTR_SET_RVALUE(inputFields_, inputFields) };


      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline const Source::Logstore & getLogstore() const { DARABONBA_PTR_GET_CONST(logstore_, Source::Logstore) };
      inline Source::Logstore getLogstore() { DARABONBA_PTR_GET(logstore_, Source::Logstore) };
      inline Source& setLogstore(const Source::Logstore & logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };
      inline Source& setLogstore(Source::Logstore && logstore) { DARABONBA_PTR_SET_RVALUE(logstore_, logstore) };


      // trajectory Field Functions 
      bool hasTrajectory() const { return this->trajectory_ != nullptr;};
      void deleteTrajectory() { this->trajectory_ = nullptr;};
      inline const Source::Trajectory & getTrajectory() const { DARABONBA_PTR_GET_CONST(trajectory_, Source::Trajectory) };
      inline Source::Trajectory getTrajectory() { DARABONBA_PTR_GET(trajectory_, Source::Trajectory) };
      inline Source& setTrajectory(const Source::Trajectory & trajectory) { DARABONBA_PTR_SET_VALUE(trajectory_, trajectory) };
      inline Source& setTrajectory(Source::Trajectory && trajectory) { DARABONBA_PTR_SET_RVALUE(trajectory_, trajectory) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The dataset datasource config in the current AgentSpace.
      shared_ptr<Source::Dataset> dataset_ {};
      // The input fields and their data types. This applies to all data source types.
      shared_ptr<vector<Source::InputFields>> inputFields_ {};
      // The Simple Log Service Logstore datasource config.
      shared_ptr<Source::Logstore> logstore_ {};
      // The configuration of trajectory data. This parameter is optional and takes effect only when the type is set to trace. It retrieves ATIF standard trajectory data from the trajectory cleaning service and extends the data based on features.
      shared_ptr<Source::Trajectory> trajectory_ {};
      // The type of the data source. Simple Log Service is currently supported.
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
        // The ID of the node.
        shared_ptr<string> id_ {};
        // The parameters of the node. The parameters are in key-value format and vary based on the node type.
        Darabonba::Json parameters_ {};
        // The type of the node.
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
      // The list of nodes.
      shared_ptr<vector<Pipeline::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->fromTime_ == nullptr
        && this->pipeline_ == nullptr && this->source_ == nullptr && this->toTime_ == nullptr; };
    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline int64_t getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, 0L) };
    inline PreviewPipelineRequest& setFromTime(int64_t fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const PreviewPipelineRequest::Pipeline & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, PreviewPipelineRequest::Pipeline) };
    inline PreviewPipelineRequest::Pipeline getPipeline() { DARABONBA_PTR_GET(pipeline_, PreviewPipelineRequest::Pipeline) };
    inline PreviewPipelineRequest& setPipeline(const PreviewPipelineRequest::Pipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline PreviewPipelineRequest& setPipeline(PreviewPipelineRequest::Pipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const PreviewPipelineRequest::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, PreviewPipelineRequest::Source) };
    inline PreviewPipelineRequest::Source getSource() { DARABONBA_PTR_GET(source_, PreviewPipelineRequest::Source) };
    inline PreviewPipelineRequest& setSource(const PreviewPipelineRequest::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline PreviewPipelineRequest& setSource(PreviewPipelineRequest::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline int64_t getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, 0L) };
    inline PreviewPipelineRequest& setToTime(int64_t toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


  protected:
    // The start time of the preview data window. The value is a UNIX timestamp in seconds.
    shared_ptr<int64_t> fromTime_ {};
    // The pipeline configuration, including node orchestration.
    shared_ptr<PreviewPipelineRequest::Pipeline> pipeline_ {};
    // The data source of the pipeline.
    shared_ptr<PreviewPipelineRequest::Source> source_ {};
    // The end time of the preview data window. The value is a UNIX timestamp in seconds.
    shared_ptr<int64_t> toTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
