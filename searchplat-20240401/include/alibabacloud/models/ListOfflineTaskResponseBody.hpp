// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFLINETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFLINETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListOfflineTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfflineTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfflineTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOfflineTaskResponseBody() = default ;
    ListOfflineTaskResponseBody(const ListOfflineTaskResponseBody &) = default ;
    ListOfflineTaskResponseBody(ListOfflineTaskResponseBody &&) = default ;
    ListOfflineTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfflineTaskResponseBody() = default ;
    ListOfflineTaskResponseBody& operator=(const ListOfflineTaskResponseBody &) = default ;
    ListOfflineTaskResponseBody& operator=(ListOfflineTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Meta, meta_);
        DARABONBA_PTR_TO_JSON(Processors, processors_);
        DARABONBA_PTR_TO_JSON(Sink, sink_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Meta, meta_);
        DARABONBA_PTR_FROM_JSON(Processors, processors_);
        DARABONBA_PTR_FROM_JSON(Sink, sink_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(MetricData, metricData_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(MetricData, metricData_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->metricData_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Status& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // metricData Field Functions 
        bool hasMetricData() const { return this->metricData_ != nullptr;};
        void deleteMetricData() { this->metricData_ = nullptr;};
        inline const map<string, string> & getMetricData() const { DARABONBA_PTR_GET_CONST(metricData_, map<string, string>) };
        inline map<string, string> getMetricData() { DARABONBA_PTR_GET(metricData_, map<string, string>) };
        inline Status& setMetricData(const map<string, string> & metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };
        inline Status& setMetricData(map<string, string> && metricData) { DARABONBA_PTR_SET_RVALUE(metricData_, metricData) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Status& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Status& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The time when the task was created.
        shared_ptr<int64_t> createTime_ {};
        // The monitoring information.
        shared_ptr<map<string, string>> metricData_ {};
        // The task status.
        shared_ptr<string> status_ {};
        // The time when the task was last modified.
        shared_ptr<int64_t> updateTime_ {};
      };

      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_TO_JSON(Schema, schema_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_FROM_JSON(Schema, schema_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->parameters_ == nullptr && this->primaryKey_ == nullptr && this->schema_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Source& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
        inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
        inline Source& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Source& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // primaryKey Field Functions 
        bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
        void deletePrimaryKey() { this->primaryKey_ = nullptr;};
        inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
        inline Source& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline const vector<map<string, string>> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, vector<map<string, string>>) };
        inline vector<map<string, string>> getSchema() { DARABONBA_PTR_GET(schema_, vector<map<string, string>>) };
        inline Source& setSchema(const vector<map<string, string>> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
        inline Source& setSchema(vector<map<string, string>> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The data source name.
        shared_ptr<string> name_ {};
        // The data source configuration parameters.
        shared_ptr<map<string, string>> parameters_ {};
        // The primary key field of the data source.
        shared_ptr<string> primaryKey_ {};
        // The data source schema.
        shared_ptr<vector<map<string, string>>> schema_ {};
        // The data source type.
        shared_ptr<string> type_ {};
      };

      class Sink : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sink& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_TO_JSON(Schema, schema_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Sink& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_FROM_JSON(Schema, schema_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->parameters_ == nullptr && this->primaryKey_ == nullptr && this->schema_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Sink& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
        inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
        inline Sink& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Sink& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // primaryKey Field Functions 
        bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
        void deletePrimaryKey() { this->primaryKey_ = nullptr;};
        inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
        inline Sink& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline const vector<map<string, string>> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, vector<map<string, string>>) };
        inline vector<map<string, string>> getSchema() { DARABONBA_PTR_GET(schema_, vector<map<string, string>>) };
        inline Sink& setSchema(const vector<map<string, string>> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
        inline Sink& setSchema(vector<map<string, string>> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Sink& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The data sink name.
        shared_ptr<string> name_ {};
        // The data sink configuration parameters, which are determined by the type.
        shared_ptr<map<string, string>> parameters_ {};
        // The primary key field of the data sink.
        shared_ptr<string> primaryKey_ {};
        // The data sink schema.
        shared_ptr<vector<map<string, string>>> schema_ {};
        // The data sink type.
        shared_ptr<string> type_ {};
      };

      class Processors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Processors& obj) { 
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Processors& obj) { 
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Processors() = default ;
        Processors(const Processors &) = default ;
        Processors(Processors &&) = default ;
        Processors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Processors() = default ;
        Processors& operator=(const Processors &) = default ;
        Processors& operator=(Processors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->input_ == nullptr
        && this->name_ == nullptr && this->output_ == nullptr && this->parameters_ == nullptr && this->type_ == nullptr; };
        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const map<string, string> & getInput() const { DARABONBA_PTR_GET_CONST(input_, map<string, string>) };
        inline map<string, string> getInput() { DARABONBA_PTR_GET(input_, map<string, string>) };
        inline Processors& setInput(const map<string, string> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline Processors& setInput(map<string, string> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Processors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline const map<string, string> & getOutput() const { DARABONBA_PTR_GET_CONST(output_, map<string, string>) };
        inline map<string, string> getOutput() { DARABONBA_PTR_GET(output_, map<string, string>) };
        inline Processors& setOutput(const map<string, string> & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
        inline Processors& setOutput(map<string, string> && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
        inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
        inline Processors& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Processors& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Processors& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The input parameters.
        shared_ptr<map<string, string>> input_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The output parameters.
        shared_ptr<map<string, string>> output_ {};
        // The processor parameters.
        shared_ptr<map<string, string>> parameters_ {};
        // The type.
        shared_ptr<string> type_ {};
      };

      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->labels_ == nullptr
        && this->regionId_ == nullptr && this->taskName_ == nullptr && this->workspaceId_ == nullptr; };
        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
        inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
        inline Meta& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline Meta& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Meta& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline Meta& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Meta& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        // The list of labels.
        shared_ptr<vector<string>> labels_ {};
        // The region ID of the task.
        shared_ptr<string> regionId_ {};
        // The task name.
        shared_ptr<string> taskName_ {};
        // The workspace ID.
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->meta_ == nullptr
        && this->processors_ == nullptr && this->sink_ == nullptr && this->source_ == nullptr && this->status_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Result::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Result::Meta) };
      inline Result::Meta getMeta() { DARABONBA_PTR_GET(meta_, Result::Meta) };
      inline Result& setMeta(const Result::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Result& setMeta(Result::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // processors Field Functions 
      bool hasProcessors() const { return this->processors_ != nullptr;};
      void deleteProcessors() { this->processors_ = nullptr;};
      inline const vector<Result::Processors> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Result::Processors>) };
      inline vector<Result::Processors> getProcessors() { DARABONBA_PTR_GET(processors_, vector<Result::Processors>) };
      inline Result& setProcessors(const vector<Result::Processors> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
      inline Result& setProcessors(vector<Result::Processors> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


      // sink Field Functions 
      bool hasSink() const { return this->sink_ != nullptr;};
      void deleteSink() { this->sink_ = nullptr;};
      inline const vector<Result::Sink> & getSink() const { DARABONBA_PTR_GET_CONST(sink_, vector<Result::Sink>) };
      inline vector<Result::Sink> getSink() { DARABONBA_PTR_GET(sink_, vector<Result::Sink>) };
      inline Result& setSink(const vector<Result::Sink> & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
      inline Result& setSink(vector<Result::Sink> && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const vector<Result::Source> & getSource() const { DARABONBA_PTR_GET_CONST(source_, vector<Result::Source>) };
      inline vector<Result::Source> getSource() { DARABONBA_PTR_GET(source_, vector<Result::Source>) };
      inline Result& setSource(const vector<Result::Source> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Result& setSource(vector<Result::Source> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const Result::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, Result::Status) };
      inline Result::Status getStatus() { DARABONBA_PTR_GET(status_, Result::Status) };
      inline Result& setStatus(const Result::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Result& setStatus(Result::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    protected:
      // The task metadata.
      shared_ptr<Result::Meta> meta_ {};
      // The processing pipeline operators.
      shared_ptr<vector<Result::Processors>> processors_ {};
      // The data sink information.
      shared_ptr<vector<Result::Sink>> sink_ {};
      // The data source information.
      shared_ptr<vector<Result::Source>> source_ {};
      // The task status.
      shared_ptr<Result::Status> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOfflineTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListOfflineTaskResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListOfflineTaskResponseBody::Result>) };
    inline vector<ListOfflineTaskResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListOfflineTaskResponseBody::Result>) };
    inline ListOfflineTaskResponseBody& setResult(const vector<ListOfflineTaskResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListOfflineTaskResponseBody& setResult(vector<ListOfflineTaskResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOfflineTaskResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<vector<ListOfflineTaskResponseBody::Result>> result_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
