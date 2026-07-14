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
        // The name of the SLS Logstore.
        shared_ptr<string> logstore_ {};
        // The name of the SLS project.
        shared_ptr<string> project_ {};
        // The data filtered query statement in SLS query/analysis syntax.
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
      // The SLS Logstore datasource config.
      shared_ptr<Source::Logstore> logstore_ {};
      // The data source type. Currently, only Simple Log Service (SLS) is supported.
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
        // The node parameters in key-value structure. The parameters vary depending on the node type.
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
    // The start time of the preview data window, in UNIX seconds.
    shared_ptr<int64_t> fromTime_ {};
    // The pipeline configuration, which defines the node orchestration.
    shared_ptr<PreviewPipelineRequest::Pipeline> pipeline_ {};
    // The pipeline data source.
    shared_ptr<PreviewPipelineRequest::Source> source_ {};
    // The end time of the preview data window, in UNIX seconds.
    shared_ptr<int64_t> toTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
