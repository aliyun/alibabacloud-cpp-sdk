// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFLINETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFLINETASKREQUEST_HPP_
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
  class CreateOfflineTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfflineTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_ANY_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(processors, processors_);
      DARABONBA_PTR_TO_JSON(sink, sink_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(draft, draft_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfflineTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(processors, processors_);
      DARABONBA_PTR_FROM_JSON(sink, sink_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(draft, draft_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateOfflineTaskRequest() = default ;
    CreateOfflineTaskRequest(const CreateOfflineTaskRequest &) = default ;
    CreateOfflineTaskRequest(CreateOfflineTaskRequest &&) = default ;
    CreateOfflineTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfflineTaskRequest() = default ;
    CreateOfflineTaskRequest& operator=(const CreateOfflineTaskRequest &) = default ;
    CreateOfflineTaskRequest& operator=(CreateOfflineTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Status : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Status& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(deleteTime, deleteTime_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Status& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(deleteTime, deleteTime_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
        && this->deleteTime_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Status& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deleteTime Field Functions 
      bool hasDeleteTime() const { return this->deleteTime_ != nullptr;};
      void deleteDeleteTime() { this->deleteTime_ = nullptr;};
      inline int64_t getDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(deleteTime_, 0L) };
      inline Status& setDeleteTime(int64_t deleteTime) { DARABONBA_PTR_SET_VALUE(deleteTime_, deleteTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Status& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Status& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The task start time.
      shared_ptr<int64_t> createTime_ {};
      // The task stop time.
      shared_ptr<int64_t> deleteTime_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The task status.
      shared_ptr<string> status_ {};
    };

    class Source : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Source& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
        DARABONBA_PTR_TO_JSON(schema, schema_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
        DARABONBA_PTR_FROM_JSON(schema, schema_);
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
      // **The data source name.**.
      shared_ptr<string> name_ {};
      // **The datasource config parameters, which are determined by the type.**.
      shared_ptr<map<string, string>> parameters_ {};
      // The primary key field of the data source.
      shared_ptr<string> primaryKey_ {};
      // **The data source schema.**.
      shared_ptr<vector<map<string, string>>> schema_ {};
      // **The data source type.**.
      shared_ptr<string> type_ {};
    };

    class Sink : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sink& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
        DARABONBA_PTR_TO_JSON(schema, schema_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Sink& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
        DARABONBA_PTR_FROM_JSON(schema, schema_);
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
        DARABONBA_ANY_TO_JSON(input, input_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(output, output_);
        DARABONBA_ANY_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Processors& obj) { 
        DARABONBA_ANY_FROM_JSON(input, input_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(output, output_);
        DARABONBA_ANY_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      inline       const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
      Darabonba::Json & getInput() { DARABONBA_GET(input_) };
      inline Processors& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
      inline Processors& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Processors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline       const Darabonba::Json & getOutput() const { DARABONBA_GET(output_) };
      Darabonba::Json & getOutput() { DARABONBA_GET(output_) };
      inline Processors& setOutput(const Darabonba::Json & output) { DARABONBA_SET_VALUE(output_, output) };
      inline Processors& setOutput(Darabonba::Json && output) { DARABONBA_SET_RVALUE(output_, output) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline Processors& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline Processors& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Processors& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The input parameters.
      Darabonba::Json input_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The output parameters.
      Darabonba::Json output_ {};
      // The processor parameters.
      Darabonba::Json parameters_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
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
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->computeResource_ == nullptr && this->labels_ == nullptr && this->regionId_ == nullptr && this->taskName_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Meta& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // computeResource Field Functions 
      bool hasComputeResource() const { return this->computeResource_ != nullptr;};
      void deleteComputeResource() { this->computeResource_ = nullptr;};
      inline string getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
      inline Meta& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


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


    protected:
      // The access credential.
      shared_ptr<string> apiKey_ {};
      // The billing specification.
      shared_ptr<string> computeResource_ {};
      // The list of labels.
      shared_ptr<vector<string>> labels_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->meta_ == nullptr
        && this->parameters_ == nullptr && this->processors_ == nullptr && this->sink_ == nullptr && this->source_ == nullptr && this->status_ == nullptr
        && this->draft_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const CreateOfflineTaskRequest::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, CreateOfflineTaskRequest::Meta) };
    inline CreateOfflineTaskRequest::Meta getMeta() { DARABONBA_PTR_GET(meta_, CreateOfflineTaskRequest::Meta) };
    inline CreateOfflineTaskRequest& setMeta(const CreateOfflineTaskRequest::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline CreateOfflineTaskRequest& setMeta(CreateOfflineTaskRequest::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline CreateOfflineTaskRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline CreateOfflineTaskRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // processors Field Functions 
    bool hasProcessors() const { return this->processors_ != nullptr;};
    void deleteProcessors() { this->processors_ = nullptr;};
    inline const vector<CreateOfflineTaskRequest::Processors> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<CreateOfflineTaskRequest::Processors>) };
    inline vector<CreateOfflineTaskRequest::Processors> getProcessors() { DARABONBA_PTR_GET(processors_, vector<CreateOfflineTaskRequest::Processors>) };
    inline CreateOfflineTaskRequest& setProcessors(const vector<CreateOfflineTaskRequest::Processors> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
    inline CreateOfflineTaskRequest& setProcessors(vector<CreateOfflineTaskRequest::Processors> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const vector<CreateOfflineTaskRequest::Sink> & getSink() const { DARABONBA_PTR_GET_CONST(sink_, vector<CreateOfflineTaskRequest::Sink>) };
    inline vector<CreateOfflineTaskRequest::Sink> getSink() { DARABONBA_PTR_GET(sink_, vector<CreateOfflineTaskRequest::Sink>) };
    inline CreateOfflineTaskRequest& setSink(const vector<CreateOfflineTaskRequest::Sink> & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline CreateOfflineTaskRequest& setSink(vector<CreateOfflineTaskRequest::Sink> && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<CreateOfflineTaskRequest::Source> & getSource() const { DARABONBA_PTR_GET_CONST(source_, vector<CreateOfflineTaskRequest::Source>) };
    inline vector<CreateOfflineTaskRequest::Source> getSource() { DARABONBA_PTR_GET(source_, vector<CreateOfflineTaskRequest::Source>) };
    inline CreateOfflineTaskRequest& setSource(const vector<CreateOfflineTaskRequest::Source> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreateOfflineTaskRequest& setSource(vector<CreateOfflineTaskRequest::Source> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const CreateOfflineTaskRequest::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, CreateOfflineTaskRequest::Status) };
    inline CreateOfflineTaskRequest::Status getStatus() { DARABONBA_PTR_GET(status_, CreateOfflineTaskRequest::Status) };
    inline CreateOfflineTaskRequest& setStatus(const CreateOfflineTaskRequest::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline CreateOfflineTaskRequest& setStatus(CreateOfflineTaskRequest::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // draft Field Functions 
    bool hasDraft() const { return this->draft_ != nullptr;};
    void deleteDraft() { this->draft_ = nullptr;};
    inline bool getDraft() const { DARABONBA_PTR_GET_DEFAULT(draft_, false) };
    inline CreateOfflineTaskRequest& setDraft(bool draft) { DARABONBA_PTR_SET_VALUE(draft_, draft) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateOfflineTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOfflineTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The task metadata.
    shared_ptr<CreateOfflineTaskRequest::Meta> meta_ {};
    // The task processing parameters.
    Darabonba::Json parameters_ {};
    // The processing pipeline operators.
    shared_ptr<vector<CreateOfflineTaskRequest::Processors>> processors_ {};
    // The data sink information.
    shared_ptr<vector<CreateOfflineTaskRequest::Sink>> sink_ {};
    // The data source information.
    shared_ptr<vector<CreateOfflineTaskRequest::Source>> source_ {};
    // The task status.
    shared_ptr<CreateOfflineTaskRequest::Status> status_ {};
    // Specifies whether the task is a draft.
    shared_ptr<bool> draft_ {};
    // Specifies whether to validate the parameters without creating the task.
    shared_ptr<bool> dryRun_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
