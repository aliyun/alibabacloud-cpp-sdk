// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAPIPELINESRESPONSEBODY_HPP_
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
  class ListDataPipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataPipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pipelines, pipelines_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataPipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pipelines, pipelines_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataPipelinesResponseBody() = default ;
    ListDataPipelinesResponseBody(const ListDataPipelinesResponseBody &) = default ;
    ListDataPipelinesResponseBody(ListDataPipelinesResponseBody &&) = default ;
    ListDataPipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataPipelinesResponseBody() = default ;
    ListDataPipelinesResponseBody& operator=(const ListDataPipelinesResponseBody &) = default ;
    ListDataPipelinesResponseBody& operator=(ListDataPipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipelines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipelines& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(outputs, outputs_);
        DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_TO_JSON(processors, processors_);
        DARABONBA_PTR_TO_JSON(signalType, signalType_);
        DARABONBA_PTR_TO_JSON(sinks, sinks_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusMessage, statusMessage_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Pipelines& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_FROM_JSON(processors, processors_);
        DARABONBA_PTR_FROM_JSON(signalType, signalType_);
        DARABONBA_PTR_FROM_JSON(sinks, sinks_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusMessage, statusMessage_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Pipelines() = default ;
      Pipelines(const Pipelines &) = default ;
      Pipelines(Pipelines &&) = default ;
      Pipelines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipelines() = default ;
      Pipelines& operator=(const Pipelines &) = default ;
      Pipelines& operator=(Pipelines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(config, config_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(config, config_);
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
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_PTR_TO_JSON(runMode, runMode_);
            DARABONBA_PTR_TO_JSON(startFrom, startFrom_);
            DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_PTR_FROM_JSON(runMode, runMode_);
            DARABONBA_PTR_FROM_JSON(startFrom, startFrom_);
            DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
          };
          Config() = default ;
          Config(const Config &) = default ;
          Config(Config &&) = default ;
          Config(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Config() = default ;
          Config& operator=(const Config &) = default ;
          Config& operator=(Config &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TimeRange : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
              DARABONBA_PTR_TO_JSON(from, from_);
              DARABONBA_PTR_TO_JSON(to, to_);
            };
            friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
              DARABONBA_PTR_FROM_JSON(from, from_);
              DARABONBA_PTR_FROM_JSON(to, to_);
            };
            TimeRange() = default ;
            TimeRange(const TimeRange &) = default ;
            TimeRange(TimeRange &&) = default ;
            TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TimeRange() = default ;
            TimeRange& operator=(const TimeRange &) = default ;
            TimeRange& operator=(TimeRange &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
            inline TimeRange& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
            inline TimeRange& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


          protected:
            // The start time.
            shared_ptr<int64_t> from_ {};
            // The end time.
            shared_ptr<int64_t> to_ {};
          };

          virtual bool empty() const override { return this->runMode_ == nullptr
        && this->startFrom_ == nullptr && this->timeRange_ == nullptr; };
          // runMode Field Functions 
          bool hasRunMode() const { return this->runMode_ != nullptr;};
          void deleteRunMode() { this->runMode_ = nullptr;};
          inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
          inline Config& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


          // startFrom Field Functions 
          bool hasStartFrom() const { return this->startFrom_ != nullptr;};
          void deleteStartFrom() { this->startFrom_ = nullptr;};
          inline string getStartFrom() const { DARABONBA_PTR_GET_DEFAULT(startFrom_, "") };
          inline Config& setStartFrom(string startFrom) { DARABONBA_PTR_SET_VALUE(startFrom_, startFrom) };


          // timeRange Field Functions 
          bool hasTimeRange() const { return this->timeRange_ != nullptr;};
          void deleteTimeRange() { this->timeRange_ = nullptr;};
          inline const Config::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Config::TimeRange) };
          inline Config::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, Config::TimeRange) };
          inline Config& setTimeRange(const Config::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
          inline Config& setTimeRange(Config::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


        protected:
          // The run mode.
          shared_ptr<string> runMode_ {};
          // The read start point.
          shared_ptr<string> startFrom_ {};
          // The backfill time range.
          shared_ptr<Config::TimeRange> timeRange_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->type_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const Source::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Source::Config) };
        inline Source::Config getConfig() { DARABONBA_PTR_GET(config_, Source::Config) };
        inline Source& setConfig(const Source::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline Source& setConfig(Source::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The datasource config.
        shared_ptr<Source::Config> config_ {};
        // The type of the data source.
        shared_ptr<string> type_ {};
      };

      class Sinks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sinks& obj) { 
          DARABONBA_PTR_TO_JSON(datasets, datasets_);
          DARABONBA_PTR_TO_JSON(logstore, logstore_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Sinks& obj) { 
          DARABONBA_PTR_FROM_JSON(datasets, datasets_);
          DARABONBA_PTR_FROM_JSON(logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Sinks() = default ;
        Sinks(const Sinks &) = default ;
        Sinks(Sinks &&) = default ;
        Sinks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sinks() = default ;
        Sinks& operator=(const Sinks &) = default ;
        Sinks& operator=(Sinks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->datasets_ == nullptr
        && this->logstore_ == nullptr && this->name_ == nullptr && this->project_ == nullptr && this->type_ == nullptr; };
        // datasets Field Functions 
        bool hasDatasets() const { return this->datasets_ != nullptr;};
        void deleteDatasets() { this->datasets_ = nullptr;};
        inline const vector<string> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<string>) };
        inline vector<string> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<string>) };
        inline Sinks& setDatasets(const vector<string> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
        inline Sinks& setDatasets(vector<string> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline Sinks& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Sinks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Sinks& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Sinks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of datasets.
        shared_ptr<vector<string>> datasets_ {};
        // SLS Logstore
        shared_ptr<string> logstore_ {};
        // The name of the output destination.
        shared_ptr<string> name_ {};
        // SLS Project
        shared_ptr<string> project_ {};
        // The type of the output destination.
        shared_ptr<string> type_ {};
      };

      class Processors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Processors& obj) { 
          DARABONBA_PTR_TO_JSON(config, config_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Processors& obj) { 
          DARABONBA_PTR_FROM_JSON(config, config_);
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        class Config : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Config& obj) { 
            DARABONBA_PTR_TO_JSON(applications, applications_);
            DARABONBA_PTR_TO_JSON(expression, expression_);
            DARABONBA_PTR_TO_JSON(fields, fields_);
            DARABONBA_PTR_TO_JSON(rules, rules_);
            DARABONBA_PTR_TO_JSON(script, script_);
            DARABONBA_PTR_TO_JSON(selector, selector_);
            DARABONBA_PTR_TO_JSON(target, target_);
          };
          friend void from_json(const Darabonba::Json& j, Config& obj) { 
            DARABONBA_PTR_FROM_JSON(applications, applications_);
            DARABONBA_PTR_FROM_JSON(expression, expression_);
            DARABONBA_PTR_FROM_JSON(fields, fields_);
            DARABONBA_PTR_FROM_JSON(rules, rules_);
            DARABONBA_PTR_FROM_JSON(script, script_);
            DARABONBA_PTR_FROM_JSON(selector, selector_);
            DARABONBA_PTR_FROM_JSON(target, target_);
          };
          Config() = default ;
          Config(const Config &) = default ;
          Config(Config &&) = default ;
          Config(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Config() = default ;
          Config& operator=(const Config &) = default ;
          Config& operator=(Config &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Target : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Target& obj) { 
              DARABONBA_PTR_TO_JSON(workspace, workspace_);
            };
            friend void from_json(const Darabonba::Json& j, Target& obj) { 
              DARABONBA_PTR_FROM_JSON(workspace, workspace_);
            };
            Target() = default ;
            Target(const Target &) = default ;
            Target(Target &&) = default ;
            Target(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Target() = default ;
            Target& operator=(const Target &) = default ;
            Target& operator=(Target &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->workspace_ == nullptr; };
            // workspace Field Functions 
            bool hasWorkspace() const { return this->workspace_ != nullptr;};
            void deleteWorkspace() { this->workspace_ = nullptr;};
            inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
            inline Target& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


          protected:
            // The target workspace.
            shared_ptr<string> workspace_ {};
          };

          class Selector : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Selector& obj) { 
              DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
            };
            friend void from_json(const Darabonba::Json& j, Selector& obj) { 
              DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
            };
            Selector() = default ;
            Selector(const Selector &) = default ;
            Selector(Selector &&) = default ;
            Selector(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Selector() = default ;
            Selector& operator=(const Selector &) = default ;
            Selector& operator=(Selector &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->serviceNames_ == nullptr; };
            // serviceNames Field Functions 
            bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
            void deleteServiceNames() { this->serviceNames_ = nullptr;};
            inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
            inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
            inline Selector& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
            inline Selector& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


          protected:
            // The list of service names.
            shared_ptr<vector<string>> serviceNames_ {};
          };

          class Rules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rules& obj) { 
              DARABONBA_PTR_TO_JSON(keepPrefix, keepPrefix_);
              DARABONBA_PTR_TO_JSON(keepSuffix, keepSuffix_);
              DARABONBA_PTR_TO_JSON(keys, keys_);
              DARABONBA_PTR_TO_JSON(maskChar, maskChar_);
              DARABONBA_PTR_TO_JSON(mode, mode_);
              DARABONBA_PTR_TO_JSON(types, types_);
            };
            friend void from_json(const Darabonba::Json& j, Rules& obj) { 
              DARABONBA_PTR_FROM_JSON(keepPrefix, keepPrefix_);
              DARABONBA_PTR_FROM_JSON(keepSuffix, keepSuffix_);
              DARABONBA_PTR_FROM_JSON(keys, keys_);
              DARABONBA_PTR_FROM_JSON(maskChar, maskChar_);
              DARABONBA_PTR_FROM_JSON(mode, mode_);
              DARABONBA_PTR_FROM_JSON(types, types_);
            };
            Rules() = default ;
            Rules(const Rules &) = default ;
            Rules(Rules &&) = default ;
            Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Rules() = default ;
            Rules& operator=(const Rules &) = default ;
            Rules& operator=(Rules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keepPrefix_ == nullptr
        && this->keepSuffix_ == nullptr && this->keys_ == nullptr && this->maskChar_ == nullptr && this->mode_ == nullptr && this->types_ == nullptr; };
            // keepPrefix Field Functions 
            bool hasKeepPrefix() const { return this->keepPrefix_ != nullptr;};
            void deleteKeepPrefix() { this->keepPrefix_ = nullptr;};
            inline int32_t getKeepPrefix() const { DARABONBA_PTR_GET_DEFAULT(keepPrefix_, 0) };
            inline Rules& setKeepPrefix(int32_t keepPrefix) { DARABONBA_PTR_SET_VALUE(keepPrefix_, keepPrefix) };


            // keepSuffix Field Functions 
            bool hasKeepSuffix() const { return this->keepSuffix_ != nullptr;};
            void deleteKeepSuffix() { this->keepSuffix_ = nullptr;};
            inline int32_t getKeepSuffix() const { DARABONBA_PTR_GET_DEFAULT(keepSuffix_, 0) };
            inline Rules& setKeepSuffix(int32_t keepSuffix) { DARABONBA_PTR_SET_VALUE(keepSuffix_, keepSuffix) };


            // keys Field Functions 
            bool hasKeys() const { return this->keys_ != nullptr;};
            void deleteKeys() { this->keys_ = nullptr;};
            inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
            inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
            inline Rules& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
            inline Rules& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


            // maskChar Field Functions 
            bool hasMaskChar() const { return this->maskChar_ != nullptr;};
            void deleteMaskChar() { this->maskChar_ = nullptr;};
            inline string getMaskChar() const { DARABONBA_PTR_GET_DEFAULT(maskChar_, "") };
            inline Rules& setMaskChar(string maskChar) { DARABONBA_PTR_SET_VALUE(maskChar_, maskChar) };


            // mode Field Functions 
            bool hasMode() const { return this->mode_ != nullptr;};
            void deleteMode() { this->mode_ = nullptr;};
            inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
            inline Rules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


            // types Field Functions 
            bool hasTypes() const { return this->types_ != nullptr;};
            void deleteTypes() { this->types_ = nullptr;};
            inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
            inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
            inline Rules& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
            inline Rules& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


          protected:
            // The length of the prefix to keep.
            shared_ptr<int32_t> keepPrefix_ {};
            // The length of the suffix to keep.
            shared_ptr<int32_t> keepSuffix_ {};
            // The sensitive keywords.
            shared_ptr<vector<string>> keys_ {};
            // The mask character.
            shared_ptr<string> maskChar_ {};
            // The masking mode.
            shared_ptr<string> mode_ {};
            // The built-in sensitive types.
            shared_ptr<vector<string>> types_ {};
          };

          virtual bool empty() const override { return this->applications_ == nullptr
        && this->expression_ == nullptr && this->fields_ == nullptr && this->rules_ == nullptr && this->script_ == nullptr && this->selector_ == nullptr
        && this->target_ == nullptr; };
          // applications Field Functions 
          bool hasApplications() const { return this->applications_ != nullptr;};
          void deleteApplications() { this->applications_ = nullptr;};
          inline const vector<string> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<string>) };
          inline vector<string> getApplications() { DARABONBA_PTR_GET(applications_, vector<string>) };
          inline Config& setApplications(const vector<string> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
          inline Config& setApplications(vector<string> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


          // expression Field Functions 
          bool hasExpression() const { return this->expression_ != nullptr;};
          void deleteExpression() { this->expression_ = nullptr;};
          inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
          inline Config& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


          // fields Field Functions 
          bool hasFields() const { return this->fields_ != nullptr;};
          void deleteFields() { this->fields_ = nullptr;};
          inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
          inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
          inline Config& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
          inline Config& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


          // rules Field Functions 
          bool hasRules() const { return this->rules_ != nullptr;};
          void deleteRules() { this->rules_ = nullptr;};
          inline const vector<Config::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Config::Rules>) };
          inline vector<Config::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Config::Rules>) };
          inline Config& setRules(const vector<Config::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
          inline Config& setRules(vector<Config::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


          // script Field Functions 
          bool hasScript() const { return this->script_ != nullptr;};
          void deleteScript() { this->script_ = nullptr;};
          inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
          inline Config& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


          // selector Field Functions 
          bool hasSelector() const { return this->selector_ != nullptr;};
          void deleteSelector() { this->selector_ = nullptr;};
          inline const Config::Selector & getSelector() const { DARABONBA_PTR_GET_CONST(selector_, Config::Selector) };
          inline Config::Selector getSelector() { DARABONBA_PTR_GET(selector_, Config::Selector) };
          inline Config& setSelector(const Config::Selector & selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };
          inline Config& setSelector(Config::Selector && selector) { DARABONBA_PTR_SET_RVALUE(selector_, selector) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline const Config::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Config::Target) };
          inline Config::Target getTarget() { DARABONBA_PTR_GET(target_, Config::Target) };
          inline Config& setTarget(const Config::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
          inline Config& setTarget(Config::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


        protected:
          // The list of applications.
          shared_ptr<vector<string>> applications_ {};
          // The filter expression.
          shared_ptr<string> expression_ {};
          // The list of fields.
          shared_ptr<vector<string>> fields_ {};
          // The list of masking rules.
          shared_ptr<vector<Config::Rules>> rules_ {};
          // The SPL script.
          shared_ptr<string> script_ {};
          // The service selector.
          shared_ptr<Config::Selector> selector_ {};
          // The processing target.
          shared_ptr<Config::Target> target_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const Processors::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Processors::Config) };
        inline Processors::Config getConfig() { DARABONBA_PTR_GET(config_, Processors::Config) };
        inline Processors& setConfig(const Processors::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline Processors& setConfig(Processors::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Processors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Processors& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The processor configuration.
        shared_ptr<Processors::Config> config_ {};
        // The name of the processor.
        shared_ptr<string> name_ {};
        // The type of the processor.
        shared_ptr<string> type_ {};
      };

      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(processors, processors_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(processors, processors_);
        };
        Outputs() = default ;
        Outputs(const Outputs &) = default ;
        Outputs(Outputs &&) = default ;
        Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outputs() = default ;
        Outputs& operator=(const Outputs &) = default ;
        Outputs& operator=(Outputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Processors : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Processors& obj) { 
            DARABONBA_PTR_TO_JSON(config, config_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Processors& obj) { 
            DARABONBA_PTR_FROM_JSON(config, config_);
            DARABONBA_PTR_FROM_JSON(name, name_);
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
          class Config : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Config& obj) { 
              DARABONBA_PTR_TO_JSON(applications, applications_);
              DARABONBA_PTR_TO_JSON(expression, expression_);
              DARABONBA_PTR_TO_JSON(fields, fields_);
              DARABONBA_PTR_TO_JSON(rules, rules_);
              DARABONBA_PTR_TO_JSON(script, script_);
              DARABONBA_PTR_TO_JSON(selector, selector_);
              DARABONBA_PTR_TO_JSON(target, target_);
            };
            friend void from_json(const Darabonba::Json& j, Config& obj) { 
              DARABONBA_PTR_FROM_JSON(applications, applications_);
              DARABONBA_PTR_FROM_JSON(expression, expression_);
              DARABONBA_PTR_FROM_JSON(fields, fields_);
              DARABONBA_PTR_FROM_JSON(rules, rules_);
              DARABONBA_PTR_FROM_JSON(script, script_);
              DARABONBA_PTR_FROM_JSON(selector, selector_);
              DARABONBA_PTR_FROM_JSON(target, target_);
            };
            Config() = default ;
            Config(const Config &) = default ;
            Config(Config &&) = default ;
            Config(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Config() = default ;
            Config& operator=(const Config &) = default ;
            Config& operator=(Config &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Target : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Target& obj) { 
                DARABONBA_PTR_TO_JSON(workspace, workspace_);
              };
              friend void from_json(const Darabonba::Json& j, Target& obj) { 
                DARABONBA_PTR_FROM_JSON(workspace, workspace_);
              };
              Target() = default ;
              Target(const Target &) = default ;
              Target(Target &&) = default ;
              Target(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Target() = default ;
              Target& operator=(const Target &) = default ;
              Target& operator=(Target &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->workspace_ == nullptr; };
              // workspace Field Functions 
              bool hasWorkspace() const { return this->workspace_ != nullptr;};
              void deleteWorkspace() { this->workspace_ = nullptr;};
              inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
              inline Target& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


            protected:
              // The target workspace.
              shared_ptr<string> workspace_ {};
            };

            class Selector : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Selector& obj) { 
                DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
              };
              friend void from_json(const Darabonba::Json& j, Selector& obj) { 
                DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
              };
              Selector() = default ;
              Selector(const Selector &) = default ;
              Selector(Selector &&) = default ;
              Selector(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Selector() = default ;
              Selector& operator=(const Selector &) = default ;
              Selector& operator=(Selector &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->serviceNames_ == nullptr; };
              // serviceNames Field Functions 
              bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
              void deleteServiceNames() { this->serviceNames_ = nullptr;};
              inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
              inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
              inline Selector& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
              inline Selector& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


            protected:
              // The list of service names.
              shared_ptr<vector<string>> serviceNames_ {};
            };

            class Rules : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Rules& obj) { 
                DARABONBA_PTR_TO_JSON(keepPrefix, keepPrefix_);
                DARABONBA_PTR_TO_JSON(keepSuffix, keepSuffix_);
                DARABONBA_PTR_TO_JSON(keys, keys_);
                DARABONBA_PTR_TO_JSON(maskChar, maskChar_);
                DARABONBA_PTR_TO_JSON(mode, mode_);
                DARABONBA_PTR_TO_JSON(types, types_);
              };
              friend void from_json(const Darabonba::Json& j, Rules& obj) { 
                DARABONBA_PTR_FROM_JSON(keepPrefix, keepPrefix_);
                DARABONBA_PTR_FROM_JSON(keepSuffix, keepSuffix_);
                DARABONBA_PTR_FROM_JSON(keys, keys_);
                DARABONBA_PTR_FROM_JSON(maskChar, maskChar_);
                DARABONBA_PTR_FROM_JSON(mode, mode_);
                DARABONBA_PTR_FROM_JSON(types, types_);
              };
              Rules() = default ;
              Rules(const Rules &) = default ;
              Rules(Rules &&) = default ;
              Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Rules() = default ;
              Rules& operator=(const Rules &) = default ;
              Rules& operator=(Rules &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->keepPrefix_ == nullptr
        && this->keepSuffix_ == nullptr && this->keys_ == nullptr && this->maskChar_ == nullptr && this->mode_ == nullptr && this->types_ == nullptr; };
              // keepPrefix Field Functions 
              bool hasKeepPrefix() const { return this->keepPrefix_ != nullptr;};
              void deleteKeepPrefix() { this->keepPrefix_ = nullptr;};
              inline int32_t getKeepPrefix() const { DARABONBA_PTR_GET_DEFAULT(keepPrefix_, 0) };
              inline Rules& setKeepPrefix(int32_t keepPrefix) { DARABONBA_PTR_SET_VALUE(keepPrefix_, keepPrefix) };


              // keepSuffix Field Functions 
              bool hasKeepSuffix() const { return this->keepSuffix_ != nullptr;};
              void deleteKeepSuffix() { this->keepSuffix_ = nullptr;};
              inline int32_t getKeepSuffix() const { DARABONBA_PTR_GET_DEFAULT(keepSuffix_, 0) };
              inline Rules& setKeepSuffix(int32_t keepSuffix) { DARABONBA_PTR_SET_VALUE(keepSuffix_, keepSuffix) };


              // keys Field Functions 
              bool hasKeys() const { return this->keys_ != nullptr;};
              void deleteKeys() { this->keys_ = nullptr;};
              inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
              inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
              inline Rules& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
              inline Rules& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


              // maskChar Field Functions 
              bool hasMaskChar() const { return this->maskChar_ != nullptr;};
              void deleteMaskChar() { this->maskChar_ = nullptr;};
              inline string getMaskChar() const { DARABONBA_PTR_GET_DEFAULT(maskChar_, "") };
              inline Rules& setMaskChar(string maskChar) { DARABONBA_PTR_SET_VALUE(maskChar_, maskChar) };


              // mode Field Functions 
              bool hasMode() const { return this->mode_ != nullptr;};
              void deleteMode() { this->mode_ = nullptr;};
              inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
              inline Rules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


              // types Field Functions 
              bool hasTypes() const { return this->types_ != nullptr;};
              void deleteTypes() { this->types_ = nullptr;};
              inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
              inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
              inline Rules& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
              inline Rules& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


            protected:
              // The length of the prefix to keep.
              shared_ptr<int32_t> keepPrefix_ {};
              // The length of the suffix to keep.
              shared_ptr<int32_t> keepSuffix_ {};
              // The sensitive keywords.
              shared_ptr<vector<string>> keys_ {};
              // The mask character.
              shared_ptr<string> maskChar_ {};
              // The masking mode.
              shared_ptr<string> mode_ {};
              // The built-in sensitive types.
              shared_ptr<vector<string>> types_ {};
            };

            virtual bool empty() const override { return this->applications_ == nullptr
        && this->expression_ == nullptr && this->fields_ == nullptr && this->rules_ == nullptr && this->script_ == nullptr && this->selector_ == nullptr
        && this->target_ == nullptr; };
            // applications Field Functions 
            bool hasApplications() const { return this->applications_ != nullptr;};
            void deleteApplications() { this->applications_ = nullptr;};
            inline const vector<string> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<string>) };
            inline vector<string> getApplications() { DARABONBA_PTR_GET(applications_, vector<string>) };
            inline Config& setApplications(const vector<string> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
            inline Config& setApplications(vector<string> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


            // expression Field Functions 
            bool hasExpression() const { return this->expression_ != nullptr;};
            void deleteExpression() { this->expression_ = nullptr;};
            inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
            inline Config& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


            // fields Field Functions 
            bool hasFields() const { return this->fields_ != nullptr;};
            void deleteFields() { this->fields_ = nullptr;};
            inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
            inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
            inline Config& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
            inline Config& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


            // rules Field Functions 
            bool hasRules() const { return this->rules_ != nullptr;};
            void deleteRules() { this->rules_ = nullptr;};
            inline const vector<Config::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Config::Rules>) };
            inline vector<Config::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Config::Rules>) };
            inline Config& setRules(const vector<Config::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
            inline Config& setRules(vector<Config::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


            // script Field Functions 
            bool hasScript() const { return this->script_ != nullptr;};
            void deleteScript() { this->script_ = nullptr;};
            inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
            inline Config& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


            // selector Field Functions 
            bool hasSelector() const { return this->selector_ != nullptr;};
            void deleteSelector() { this->selector_ = nullptr;};
            inline const Config::Selector & getSelector() const { DARABONBA_PTR_GET_CONST(selector_, Config::Selector) };
            inline Config::Selector getSelector() { DARABONBA_PTR_GET(selector_, Config::Selector) };
            inline Config& setSelector(const Config::Selector & selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };
            inline Config& setSelector(Config::Selector && selector) { DARABONBA_PTR_SET_RVALUE(selector_, selector) };


            // target Field Functions 
            bool hasTarget() const { return this->target_ != nullptr;};
            void deleteTarget() { this->target_ = nullptr;};
            inline const Config::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Config::Target) };
            inline Config::Target getTarget() { DARABONBA_PTR_GET(target_, Config::Target) };
            inline Config& setTarget(const Config::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
            inline Config& setTarget(Config::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


          protected:
            // The list of applications.
            shared_ptr<vector<string>> applications_ {};
            // The filter expression.
            shared_ptr<string> expression_ {};
            // The list of fields.
            shared_ptr<vector<string>> fields_ {};
            // The list of masking rules.
            shared_ptr<vector<Config::Rules>> rules_ {};
            // The SPL script.
            shared_ptr<string> script_ {};
            // The service selector.
            shared_ptr<Config::Selector> selector_ {};
            // The processing target.
            shared_ptr<Config::Target> target_ {};
          };

          virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // config Field Functions 
          bool hasConfig() const { return this->config_ != nullptr;};
          void deleteConfig() { this->config_ = nullptr;};
          inline const Processors::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Processors::Config) };
          inline Processors::Config getConfig() { DARABONBA_PTR_GET(config_, Processors::Config) };
          inline Processors& setConfig(const Processors::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
          inline Processors& setConfig(Processors::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Processors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Processors& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The processor configuration.
          shared_ptr<Processors::Config> config_ {};
          // The name of the processor.
          shared_ptr<string> name_ {};
          // The type of the processor.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->processors_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Outputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // processors Field Functions 
        bool hasProcessors() const { return this->processors_ != nullptr;};
        void deleteProcessors() { this->processors_ = nullptr;};
        inline const vector<Outputs::Processors> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Outputs::Processors>) };
        inline vector<Outputs::Processors> getProcessors() { DARABONBA_PTR_GET(processors_, vector<Outputs::Processors>) };
        inline Outputs& setProcessors(const vector<Outputs::Processors> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
        inline Outputs& setProcessors(vector<Outputs::Processors> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


      protected:
        // The output name.
        shared_ptr<string> name_ {};
        // The branch processors.
        shared_ptr<vector<Outputs::Processors>> processors_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->kind_ == nullptr && this->outputs_ == nullptr && this->pipelineName_ == nullptr && this->processors_ == nullptr
        && this->signalType_ == nullptr && this->sinks_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr
        && this->updateTime_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Pipelines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Pipelines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline Pipelines& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const vector<Pipelines::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Pipelines::Outputs>) };
      inline vector<Pipelines::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<Pipelines::Outputs>) };
      inline Pipelines& setOutputs(const vector<Pipelines::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline Pipelines& setOutputs(vector<Pipelines::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // pipelineName Field Functions 
      bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
      void deletePipelineName() { this->pipelineName_ = nullptr;};
      inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
      inline Pipelines& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


      // processors Field Functions 
      bool hasProcessors() const { return this->processors_ != nullptr;};
      void deleteProcessors() { this->processors_ = nullptr;};
      inline const vector<Pipelines::Processors> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Pipelines::Processors>) };
      inline vector<Pipelines::Processors> getProcessors() { DARABONBA_PTR_GET(processors_, vector<Pipelines::Processors>) };
      inline Pipelines& setProcessors(const vector<Pipelines::Processors> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
      inline Pipelines& setProcessors(vector<Pipelines::Processors> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


      // signalType Field Functions 
      bool hasSignalType() const { return this->signalType_ != nullptr;};
      void deleteSignalType() { this->signalType_ = nullptr;};
      inline string getSignalType() const { DARABONBA_PTR_GET_DEFAULT(signalType_, "") };
      inline Pipelines& setSignalType(string signalType) { DARABONBA_PTR_SET_VALUE(signalType_, signalType) };


      // sinks Field Functions 
      bool hasSinks() const { return this->sinks_ != nullptr;};
      void deleteSinks() { this->sinks_ = nullptr;};
      inline const vector<Pipelines::Sinks> & getSinks() const { DARABONBA_PTR_GET_CONST(sinks_, vector<Pipelines::Sinks>) };
      inline vector<Pipelines::Sinks> getSinks() { DARABONBA_PTR_GET(sinks_, vector<Pipelines::Sinks>) };
      inline Pipelines& setSinks(const vector<Pipelines::Sinks> & sinks) { DARABONBA_PTR_SET_VALUE(sinks_, sinks) };
      inline Pipelines& setSinks(vector<Pipelines::Sinks> && sinks) { DARABONBA_PTR_SET_RVALUE(sinks_, sinks) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Pipelines::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Pipelines::Source) };
      inline Pipelines::Source getSource() { DARABONBA_PTR_GET(source_, Pipelines::Source) };
      inline Pipelines& setSource(const Pipelines::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Pipelines& setSource(Pipelines::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Pipelines& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline Pipelines& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Pipelines& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Pipelines& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The time when the pipeline was created.
      // 
      // This parameter is required.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // The description of the pipeline.
      shared_ptr<string> description_ {};
      // The type of the pipeline.
      // 
      // This parameter is required.
      shared_ptr<string> kind_ {};
      // The named outputs.
      // 
      // This parameter is required.
      shared_ptr<vector<Pipelines::Outputs>> outputs_ {};
      // The name of the pipeline.
      // 
      // This parameter is required.
      shared_ptr<string> pipelineName_ {};
      // The common processors.
      // 
      // This parameter is required.
      shared_ptr<vector<Pipelines::Processors>> processors_ {};
      // The signal type.
      // 
      // This parameter is required.
      shared_ptr<string> signalType_ {};
      // The output destinations.
      // 
      // This parameter is required.
      shared_ptr<vector<Pipelines::Sinks>> sinks_ {};
      // The data source.
      // 
      // This parameter is required.
      shared_ptr<Pipelines::Source> source_ {};
      // The running status.
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // The status message.
      shared_ptr<string> statusMessage_ {};
      // The time when the pipeline was last updated.
      // 
      // This parameter is required.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> updateTime_ {};
      // The configuration version.
      // 
      // This parameter is required.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pipelines_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataPipelinesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataPipelinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pipelines Field Functions 
    bool hasPipelines() const { return this->pipelines_ != nullptr;};
    void deletePipelines() { this->pipelines_ = nullptr;};
    inline const vector<ListDataPipelinesResponseBody::Pipelines> & getPipelines() const { DARABONBA_PTR_GET_CONST(pipelines_, vector<ListDataPipelinesResponseBody::Pipelines>) };
    inline vector<ListDataPipelinesResponseBody::Pipelines> getPipelines() { DARABONBA_PTR_GET(pipelines_, vector<ListDataPipelinesResponseBody::Pipelines>) };
    inline ListDataPipelinesResponseBody& setPipelines(const vector<ListDataPipelinesResponseBody::Pipelines> & pipelines) { DARABONBA_PTR_SET_VALUE(pipelines_, pipelines) };
    inline ListDataPipelinesResponseBody& setPipelines(vector<ListDataPipelinesResponseBody::Pipelines> && pipelines) { DARABONBA_PTR_SET_RVALUE(pipelines_, pipelines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataPipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataPipelinesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of results per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page.
    shared_ptr<string> nextToken_ {};
    // The list of data pipelines.
    shared_ptr<vector<ListDataPipelinesResponseBody::Pipelines>> pipelines_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of data pipelines.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
