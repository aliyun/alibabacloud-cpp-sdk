// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(exportTasks, exportTasks_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(exportTasks, exportTasks_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListResourceExportTasksResponseBody() = default ;
    ListResourceExportTasksResponseBody(const ListResourceExportTasksResponseBody &) = default ;
    ListResourceExportTasksResponseBody(ListResourceExportTasksResponseBody &&) = default ;
    ListResourceExportTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTasksResponseBody() = default ;
    ListResourceExportTasksResponseBody& operator=(const ListResourceExportTasksResponseBody &) = default ;
    ListResourceExportTasksResponseBody& operator=(ListResourceExportTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExportTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExportTasks& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(exportStatus, exportStatus_);
        DARABONBA_PTR_TO_JSON(exportTaskId, exportTaskId_);
        DARABONBA_PTR_TO_JSON(exportToModule, exportToModule_);
        DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
        DARABONBA_PTR_TO_JSON(includeRules, includeRules_);
        DARABONBA_PTR_TO_JSON(modules, modules_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, ExportTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(exportStatus, exportStatus_);
        DARABONBA_PTR_FROM_JSON(exportTaskId, exportTaskId_);
        DARABONBA_PTR_FROM_JSON(exportToModule, exportToModule_);
        DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
        DARABONBA_PTR_FROM_JSON(includeRules, includeRules_);
        DARABONBA_PTR_FROM_JSON(modules, modules_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(variables, variables_);
      };
      ExportTasks() = default ;
      ExportTasks(const ExportTasks &) = default ;
      ExportTasks(ExportTasks &&) = default ;
      ExportTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExportTasks() = default ;
      ExportTasks& operator=(const ExportTasks &) = default ;
      ExportTasks& operator=(ExportTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(properties, properties_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(properties, properties_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->properties_ == nullptr
        && this->resourceType_ == nullptr; };
        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const vector<string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
        inline vector<string> getProperties() { DARABONBA_PTR_GET(properties_, vector<string>) };
        inline Variables& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Variables& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Variables& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        shared_ptr<vector<string>> properties_ {};
        shared_ptr<string> resourceType_ {};
      };

      class Modules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Modules& obj) { 
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Modules& obj) { 
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Modules() = default ;
        Modules(const Modules &) = default ;
        Modules(Modules &&) = default ;
        Modules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Modules() = default ;
        Modules& operator=(const Modules &) = default ;
        Modules& operator=(Modules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->version_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Modules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline Modules& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Modules& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> source_ {};
        shared_ptr<string> sourcePath_ {};
        shared_ptr<string> version_ {};
      };

      class IncludeRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IncludeRules& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, IncludeRules& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        IncludeRules() = default ;
        IncludeRules(const IncludeRules &) = default ;
        IncludeRules(IncludeRules &&) = default ;
        IncludeRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IncludeRules() = default ;
        IncludeRules& operator=(const IncludeRules &) = default ;
        IncludeRules& operator=(IncludeRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline IncludeRules& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline IncludeRules& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline IncludeRules& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<vector<string>> values_ {};
      };

      class ExportToModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExportToModule& obj) { 
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_TO_JSON(statePath, statePath_);
        };
        friend void from_json(const Darabonba::Json& j, ExportToModule& obj) { 
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_FROM_JSON(statePath, statePath_);
        };
        ExportToModule() = default ;
        ExportToModule(const ExportToModule &) = default ;
        ExportToModule(ExportToModule &&) = default ;
        ExportToModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExportToModule() = default ;
        ExportToModule& operator=(const ExportToModule &) = default ;
        ExportToModule& operator=(ExportToModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->statePath_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ExportToModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline ExportToModule& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


        // statePath Field Functions 
        bool hasStatePath() const { return this->statePath_ != nullptr;};
        void deleteStatePath() { this->statePath_ = nullptr;};
        inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
        inline ExportToModule& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


      protected:
        shared_ptr<string> source_ {};
        shared_ptr<string> sourcePath_ {};
        shared_ptr<string> statePath_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->elapsedTime_ == nullptr && this->exportStatus_ == nullptr && this->exportTaskId_ == nullptr && this->exportToModule_ == nullptr
        && this->exportVersion_ == nullptr && this->includeRules_ == nullptr && this->modules_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->variables_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ExportTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ExportTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline ExportTasks& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // exportStatus Field Functions 
      bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
      void deleteExportStatus() { this->exportStatus_ = nullptr;};
      inline string getExportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
      inline ExportTasks& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


      // exportTaskId Field Functions 
      bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
      void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
      inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
      inline ExportTasks& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


      // exportToModule Field Functions 
      bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
      void deleteExportToModule() { this->exportToModule_ = nullptr;};
      inline const ExportTasks::ExportToModule & getExportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, ExportTasks::ExportToModule) };
      inline ExportTasks::ExportToModule getExportToModule() { DARABONBA_PTR_GET(exportToModule_, ExportTasks::ExportToModule) };
      inline ExportTasks& setExportToModule(const ExportTasks::ExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
      inline ExportTasks& setExportToModule(ExportTasks::ExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


      // exportVersion Field Functions 
      bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
      void deleteExportVersion() { this->exportVersion_ = nullptr;};
      inline string getExportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
      inline ExportTasks& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


      // includeRules Field Functions 
      bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
      void deleteIncludeRules() { this->includeRules_ = nullptr;};
      inline const vector<ExportTasks::IncludeRules> & getIncludeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<ExportTasks::IncludeRules>) };
      inline vector<ExportTasks::IncludeRules> getIncludeRules() { DARABONBA_PTR_GET(includeRules_, vector<ExportTasks::IncludeRules>) };
      inline ExportTasks& setIncludeRules(const vector<ExportTasks::IncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
      inline ExportTasks& setIncludeRules(vector<ExportTasks::IncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


      // modules Field Functions 
      bool hasModules() const { return this->modules_ != nullptr;};
      void deleteModules() { this->modules_ = nullptr;};
      inline const vector<ExportTasks::Modules> & getModules() const { DARABONBA_PTR_GET_CONST(modules_, vector<ExportTasks::Modules>) };
      inline vector<ExportTasks::Modules> getModules() { DARABONBA_PTR_GET(modules_, vector<ExportTasks::Modules>) };
      inline ExportTasks& setModules(const vector<ExportTasks::Modules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
      inline ExportTasks& setModules(vector<ExportTasks::Modules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ExportTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ExportTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<ExportTasks::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<ExportTasks::Variables>) };
      inline vector<ExportTasks::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<ExportTasks::Variables>) };
      inline ExportTasks& setVariables(const vector<ExportTasks::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline ExportTasks& setVariables(vector<ExportTasks::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> elapsedTime_ {};
      shared_ptr<string> exportStatus_ {};
      shared_ptr<string> exportTaskId_ {};
      shared_ptr<ExportTasks::ExportToModule> exportToModule_ {};
      shared_ptr<string> exportVersion_ {};
      shared_ptr<vector<ExportTasks::IncludeRules>> includeRules_ {};
      shared_ptr<vector<ExportTasks::Modules>> modules_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<ExportTasks::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->exportTasks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // exportTasks Field Functions 
    bool hasExportTasks() const { return this->exportTasks_ != nullptr;};
    void deleteExportTasks() { this->exportTasks_ = nullptr;};
    inline const vector<ListResourceExportTasksResponseBody::ExportTasks> & getExportTasks() const { DARABONBA_PTR_GET_CONST(exportTasks_, vector<ListResourceExportTasksResponseBody::ExportTasks>) };
    inline vector<ListResourceExportTasksResponseBody::ExportTasks> getExportTasks() { DARABONBA_PTR_GET(exportTasks_, vector<ListResourceExportTasksResponseBody::ExportTasks>) };
    inline ListResourceExportTasksResponseBody& setExportTasks(const vector<ListResourceExportTasksResponseBody::ExportTasks> & exportTasks) { DARABONBA_PTR_SET_VALUE(exportTasks_, exportTasks) };
    inline ListResourceExportTasksResponseBody& setExportTasks(vector<ListResourceExportTasksResponseBody::ExportTasks> && exportTasks) { DARABONBA_PTR_SET_RVALUE(exportTasks_, exportTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceExportTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceExportTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceExportTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceExportTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListResourceExportTasksResponseBody::ExportTasks>> exportTasks_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
