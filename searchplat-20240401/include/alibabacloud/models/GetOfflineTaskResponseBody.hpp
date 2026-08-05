// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOFFLINETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOFFLINETASKRESPONSEBODY_HPP_
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
  class GetOfflineTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOfflineTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetOfflineTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetOfflineTaskResponseBody() = default ;
    GetOfflineTaskResponseBody(const GetOfflineTaskResponseBody &) = default ;
    GetOfflineTaskResponseBody(GetOfflineTaskResponseBody &&) = default ;
    GetOfflineTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOfflineTaskResponseBody() = default ;
    GetOfflineTaskResponseBody& operator=(const GetOfflineTaskResponseBody &) = default ;
    GetOfflineTaskResponseBody& operator=(GetOfflineTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_ANY_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(processors, processors_);
        DARABONBA_PTR_TO_JSON(sink, sink_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_ANY_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(processors, processors_);
        DARABONBA_PTR_FROM_JSON(sink, sink_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
        // The time when the node was started.
        shared_ptr<int64_t> createTime_ {};
        // The time when the node was stopped.
        shared_ptr<int64_t> deleteTime_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The node status.
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
        // The data source name.
        shared_ptr<string> name_ {};
        // The datasource config parameters, which are determined by the type.
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
          DARABONBA_ANY_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Processors& obj) { 
          DARABONBA_ANY_FROM_JSON(input, input_);
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        && this->name_ == nullptr && this->parameters_ == nullptr && this->type_ == nullptr; };
        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline         const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
        Darabonba::Json & getInput() { DARABONBA_GET(input_) };
        inline Processors& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
        inline Processors& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Processors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline         const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
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
        // The processor processing parameters.
        Darabonba::Json parameters_ {};
        // The type.
        shared_ptr<string> type_ {};
      };

      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(taskName, taskName_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
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
        virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->taskName_ == nullptr; };
        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline string getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
        inline Meta& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline Meta& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      protected:
        // The billing specification.
        shared_ptr<string> computeResource_ {};
        // The node name.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->meta_ == nullptr
        && this->parameters_ == nullptr && this->processors_ == nullptr && this->sink_ == nullptr && this->source_ == nullptr && this->status_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Result::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Result::Meta) };
      inline Result::Meta getMeta() { DARABONBA_PTR_GET(meta_, Result::Meta) };
      inline Result& setMeta(const Result::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Result& setMeta(Result::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline Result& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline Result& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


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
      // The node metadata.
      shared_ptr<Result::Meta> meta_ {};
      // The node processing parameters.
      Darabonba::Json parameters_ {};
      // The processing flow operators.
      shared_ptr<vector<Result::Processors>> processors_ {};
      // The data sink information.
      shared_ptr<vector<Result::Sink>> sink_ {};
      // The data source information.
      shared_ptr<vector<Result::Source>> source_ {};
      // The node status.
      shared_ptr<Result::Status> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOfflineTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetOfflineTaskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetOfflineTaskResponseBody::Result) };
    inline GetOfflineTaskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetOfflineTaskResponseBody::Result) };
    inline GetOfflineTaskResponseBody& setResult(const GetOfflineTaskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOfflineTaskResponseBody& setResult(GetOfflineTaskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetOfflineTaskResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
