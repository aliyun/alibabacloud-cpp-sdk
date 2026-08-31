// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEREQUEST_HPP_
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
  class UpdatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executePolicy, executePolicy_);
      DARABONBA_PTR_TO_JSON(pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(sink, sink_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executePolicy, executePolicy_);
      DARABONBA_PTR_FROM_JSON(pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(sink, sink_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdatePipelineRequest() = default ;
    UpdatePipelineRequest(const UpdatePipelineRequest &) = default ;
    UpdatePipelineRequest(UpdatePipelineRequest &&) = default ;
    UpdatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineRequest() = default ;
    UpdatePipelineRequest& operator=(const UpdatePipelineRequest &) = default ;
    UpdatePipelineRequest& operator=(UpdatePipelineRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(inputFields, inputFields_);
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
        // The field name.
        shared_ptr<string> name_ {};
        // The field type. Valid values: text, long, double, and json.
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
        && this->inputFields_ == nullptr && this->logstore_ == nullptr && this->type_ == nullptr; };
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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The dataset datasource config within the current AgentSpace.
      shared_ptr<Source::Dataset> dataset_ {};
      // The input fields and their types. This parameter applies to all data source types.
      shared_ptr<vector<Source::InputFields>> inputFields_ {};
      // The SLS Logstore datasource config.
      shared_ptr<Source::Logstore> logstore_ {};
      // The data source type. Valid values: logstore and dataset.
      shared_ptr<string> type_ {};
    };

    class Sink : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sink& obj) { 
        DARABONBA_PTR_TO_JSON(condition, condition_);
        DARABONBA_PTR_TO_JSON(dataset, dataset_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Sink& obj) { 
        DARABONBA_PTR_FROM_JSON(condition, condition_);
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
          DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_TO_JSON(dataset, dataset_);
        };
        friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
          DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_FROM_JSON(dataset, dataset_);
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
        virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->dataset_ == nullptr; };
        // agentSpace Field Functions 
        bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
        void deleteAgentSpace() { this->agentSpace_ = nullptr;};
        inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
        inline Dataset& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


        // dataset Field Functions 
        bool hasDataset() const { return this->dataset_ != nullptr;};
        void deleteDataset() { this->dataset_ = nullptr;};
        inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
        inline Dataset& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


      protected:
        // The name of the AgentSpace to which the destination dataset belongs.
        shared_ptr<string> agentSpace_ {};
        // The name of the destination dataset.
        shared_ptr<string> dataset_ {};
      };

      class Condition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Condition& obj) { 
          DARABONBA_PTR_TO_JSON(defaultSink, defaultSink_);
          DARABONBA_PTR_TO_JSON(matchMode, matchMode_);
          DARABONBA_PTR_TO_JSON(routes, routes_);
        };
        friend void from_json(const Darabonba::Json& j, Condition& obj) { 
          DARABONBA_PTR_FROM_JSON(defaultSink, defaultSink_);
          DARABONBA_PTR_FROM_JSON(matchMode, matchMode_);
          DARABONBA_PTR_FROM_JSON(routes, routes_);
        };
        Condition() = default ;
        Condition(const Condition &) = default ;
        Condition(Condition &&) = default ;
        Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Condition() = default ;
        Condition& operator=(const Condition &) = default ;
        Condition& operator=(Condition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Routes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Routes& obj) { 
            DARABONBA_PTR_TO_JSON(expression, expression_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(sink, sink_);
          };
          friend void from_json(const Darabonba::Json& j, Routes& obj) { 
            DARABONBA_PTR_FROM_JSON(expression, expression_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(sink, sink_);
          };
          Routes() = default ;
          Routes(const Routes &) = default ;
          Routes(Routes &&) = default ;
          Routes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Routes() = default ;
          Routes& operator=(const Routes &) = default ;
          Routes& operator=(Routes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
                DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
                DARABONBA_PTR_TO_JSON(dataset, dataset_);
              };
              friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
                DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
                DARABONBA_PTR_FROM_JSON(dataset, dataset_);
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
              virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->dataset_ == nullptr; };
              // agentSpace Field Functions 
              bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
              void deleteAgentSpace() { this->agentSpace_ = nullptr;};
              inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
              inline Dataset& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


              // dataset Field Functions 
              bool hasDataset() const { return this->dataset_ != nullptr;};
              void deleteDataset() { this->dataset_ = nullptr;};
              inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
              inline Dataset& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


            protected:
              // The name of the AgentSpace to which the destination dataset belongs.
              shared_ptr<string> agentSpace_ {};
              // The name of the destination dataset.
              shared_ptr<string> dataset_ {};
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
            // The destination dataset for the route.
            shared_ptr<Sink::Dataset> dataset_ {};
            // The route destination type. Currently, only dataset is supported.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->expression_ == nullptr
        && this->id_ == nullptr && this->sink_ == nullptr; };
          // expression Field Functions 
          bool hasExpression() const { return this->expression_ != nullptr;};
          void deleteExpression() { this->expression_ = nullptr;};
          inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
          inline Routes& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Routes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // sink Field Functions 
          bool hasSink() const { return this->sink_ != nullptr;};
          void deleteSink() { this->sink_ = nullptr;};
          inline const Routes::Sink & getSink() const { DARABONBA_PTR_GET_CONST(sink_, Routes::Sink) };
          inline Routes::Sink getSink() { DARABONBA_PTR_GET(sink_, Routes::Sink) };
          inline Routes& setSink(const Routes::Sink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
          inline Routes& setSink(Routes::Sink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


        protected:
          // The route expression in SPL. Only where, project, and extend are supported.
          shared_ptr<string> expression_ {};
          // The route ID.
          shared_ptr<string> id_ {};
          // The write destination for the route.
          shared_ptr<Routes::Sink> sink_ {};
        };

        class DefaultSink : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DefaultSink& obj) { 
            DARABONBA_PTR_TO_JSON(dataset, dataset_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DefaultSink& obj) { 
            DARABONBA_PTR_FROM_JSON(dataset, dataset_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          DefaultSink() = default ;
          DefaultSink(const DefaultSink &) = default ;
          DefaultSink(DefaultSink &&) = default ;
          DefaultSink(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DefaultSink() = default ;
          DefaultSink& operator=(const DefaultSink &) = default ;
          DefaultSink& operator=(DefaultSink &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Dataset : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
              DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
              DARABONBA_PTR_TO_JSON(dataset, dataset_);
            };
            friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
              DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
              DARABONBA_PTR_FROM_JSON(dataset, dataset_);
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
            virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->dataset_ == nullptr; };
            // agentSpace Field Functions 
            bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
            void deleteAgentSpace() { this->agentSpace_ = nullptr;};
            inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
            inline Dataset& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


            // dataset Field Functions 
            bool hasDataset() const { return this->dataset_ != nullptr;};
            void deleteDataset() { this->dataset_ = nullptr;};
            inline string getDataset() const { DARABONBA_PTR_GET_DEFAULT(dataset_, "") };
            inline Dataset& setDataset(string dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };


          protected:
            // The name of the AgentSpace to which the default destination dataset belongs.
            shared_ptr<string> agentSpace_ {};
            // The name of the default destination dataset.
            shared_ptr<string> dataset_ {};
          };

          virtual bool empty() const override { return this->dataset_ == nullptr
        && this->type_ == nullptr; };
          // dataset Field Functions 
          bool hasDataset() const { return this->dataset_ != nullptr;};
          void deleteDataset() { this->dataset_ = nullptr;};
          inline const DefaultSink::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, DefaultSink::Dataset) };
          inline DefaultSink::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, DefaultSink::Dataset) };
          inline DefaultSink& setDataset(const DefaultSink::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
          inline DefaultSink& setDataset(DefaultSink::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DefaultSink& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The default destination dataset.
          shared_ptr<DefaultSink::Dataset> dataset_ {};
          // The default destination type. Currently, only dataset is supported.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->defaultSink_ == nullptr
        && this->matchMode_ == nullptr && this->routes_ == nullptr; };
        // defaultSink Field Functions 
        bool hasDefaultSink() const { return this->defaultSink_ != nullptr;};
        void deleteDefaultSink() { this->defaultSink_ = nullptr;};
        inline const Condition::DefaultSink & getDefaultSink() const { DARABONBA_PTR_GET_CONST(defaultSink_, Condition::DefaultSink) };
        inline Condition::DefaultSink getDefaultSink() { DARABONBA_PTR_GET(defaultSink_, Condition::DefaultSink) };
        inline Condition& setDefaultSink(const Condition::DefaultSink & defaultSink) { DARABONBA_PTR_SET_VALUE(defaultSink_, defaultSink) };
        inline Condition& setDefaultSink(Condition::DefaultSink && defaultSink) { DARABONBA_PTR_SET_RVALUE(defaultSink_, defaultSink) };


        // matchMode Field Functions 
        bool hasMatchMode() const { return this->matchMode_ != nullptr;};
        void deleteMatchMode() { this->matchMode_ = nullptr;};
        inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
        inline Condition& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


        // routes Field Functions 
        bool hasRoutes() const { return this->routes_ != nullptr;};
        void deleteRoutes() { this->routes_ = nullptr;};
        inline const vector<Condition::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<Condition::Routes>) };
        inline vector<Condition::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<Condition::Routes>) };
        inline Condition& setRoutes(const vector<Condition::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
        inline Condition& setRoutes(vector<Condition::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


      protected:
        // The default write destination used when no conditional route is matched.
        shared_ptr<Condition::DefaultSink> defaultSink_ {};
        // The route matching mode. Currently, only all is supported.
        shared_ptr<string> matchMode_ {};
        // The list of conditional routes.
        shared_ptr<vector<Condition::Routes>> routes_ {};
      };

      virtual bool empty() const override { return this->condition_ == nullptr
        && this->dataset_ == nullptr && this->type_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline const Sink::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, Sink::Condition) };
      inline Sink::Condition getCondition() { DARABONBA_PTR_GET(condition_, Sink::Condition) };
      inline Sink& setCondition(const Sink::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
      inline Sink& setCondition(Sink::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


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
      // The conditional routing configuration. This parameter takes effect only when sink.type is set to condition.
      shared_ptr<Sink::Condition> condition_ {};
      // The destination dataset configuration for the dataset sink. This parameter takes effect only when sink.type is set to dataset.
      shared_ptr<Sink::Dataset> dataset_ {};
      // The sink type. Valid values: dataset and condition.
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
        // The node parameters in key-value format. The parameters vary depending on the node type.
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
        // The scheduling start time, in UNIX millisecond timestamp.
        shared_ptr<int64_t> fromTime_ {};
        // The scheduling interval. For example, 1h.
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
        // The start time for data processing, in UNIX millisecond timestamp.
        shared_ptr<int64_t> fromTime_ {};
        // The end time for data processing, in UNIX millisecond timestamp.
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
      // The scheduling mode. For example, Scheduled (timed scheduling) or RunOnce (one-time execution).
      shared_ptr<string> mode_ {};
      // The configuration for one-time execution.
      shared_ptr<ExecutePolicy::RunOnce> runOnce_ {};
      // The timed scheduling configuration.
      shared_ptr<ExecutePolicy::Scheduled> scheduled_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->executePolicy_ == nullptr && this->pipeline_ == nullptr && this->sink_ == nullptr && this->source_ == nullptr && this->clientToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePipelineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executePolicy Field Functions 
    bool hasExecutePolicy() const { return this->executePolicy_ != nullptr;};
    void deleteExecutePolicy() { this->executePolicy_ = nullptr;};
    inline const UpdatePipelineRequest::ExecutePolicy & getExecutePolicy() const { DARABONBA_PTR_GET_CONST(executePolicy_, UpdatePipelineRequest::ExecutePolicy) };
    inline UpdatePipelineRequest::ExecutePolicy getExecutePolicy() { DARABONBA_PTR_GET(executePolicy_, UpdatePipelineRequest::ExecutePolicy) };
    inline UpdatePipelineRequest& setExecutePolicy(const UpdatePipelineRequest::ExecutePolicy & executePolicy) { DARABONBA_PTR_SET_VALUE(executePolicy_, executePolicy) };
    inline UpdatePipelineRequest& setExecutePolicy(UpdatePipelineRequest::ExecutePolicy && executePolicy) { DARABONBA_PTR_SET_RVALUE(executePolicy_, executePolicy) };


    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const UpdatePipelineRequest::Pipeline & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, UpdatePipelineRequest::Pipeline) };
    inline UpdatePipelineRequest::Pipeline getPipeline() { DARABONBA_PTR_GET(pipeline_, UpdatePipelineRequest::Pipeline) };
    inline UpdatePipelineRequest& setPipeline(const UpdatePipelineRequest::Pipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline UpdatePipelineRequest& setPipeline(UpdatePipelineRequest::Pipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const UpdatePipelineRequest::Sink & getSink() const { DARABONBA_PTR_GET_CONST(sink_, UpdatePipelineRequest::Sink) };
    inline UpdatePipelineRequest::Sink getSink() { DARABONBA_PTR_GET(sink_, UpdatePipelineRequest::Sink) };
    inline UpdatePipelineRequest& setSink(const UpdatePipelineRequest::Sink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline UpdatePipelineRequest& setSink(UpdatePipelineRequest::Sink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const UpdatePipelineRequest::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, UpdatePipelineRequest::Source) };
    inline UpdatePipelineRequest::Source getSource() { DARABONBA_PTR_GET(source_, UpdatePipelineRequest::Source) };
    inline UpdatePipelineRequest& setSource(const UpdatePipelineRequest::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline UpdatePipelineRequest& setSource(UpdatePipelineRequest::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdatePipelineRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The description of the pipeline, which helps users understand its purpose.
    shared_ptr<string> description_ {};
    // The scheduling policy. If provided, the entire scheduling policy is overwritten.
    shared_ptr<UpdatePipelineRequest::ExecutePolicy> executePolicy_ {};
    // The pipeline configuration (node orchestration). If specified, the existing pipeline configuration is entirely overwritten.
    shared_ptr<UpdatePipelineRequest::Pipeline> pipeline_ {};
    // The pipeline sink (data write destination). If provided, the entire sink configuration is overwritten.
    shared_ptr<UpdatePipelineRequest::Sink> sink_ {};
    // The pipeline data source. If specified, the existing source configuration is entirely overwritten.
    shared_ptr<UpdatePipelineRequest::Source> source_ {};
    // The idempotency token. A unique string generated by the client to ensure the idempotency of the update operation.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
