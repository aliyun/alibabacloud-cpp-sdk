// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateContextStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(changeNote, changeNote_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(contextType, contextType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(changeNote, changeNote_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(contextType, contextType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateContextStoreRequest() = default ;
    UpdateContextStoreRequest(const UpdateContextStoreRequest &) = default ;
    UpdateContextStoreRequest(UpdateContextStoreRequest &&) = default ;
    UpdateContextStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextStoreRequest() = default ;
    UpdateContextStoreRequest& operator=(const UpdateContextStoreRequest &) = default ;
    UpdateContextStoreRequest& operator=(UpdateContextStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(audit, audit_);
        DARABONBA_PTR_TO_JSON(extractionPolicy, extractionPolicy_);
        DARABONBA_PTR_TO_JSON(metadataField, metadataField_);
        DARABONBA_PTR_TO_JSON(scopePolicy, scopePolicy_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(storagePolicy, storagePolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(audit, audit_);
        DARABONBA_PTR_FROM_JSON(extractionPolicy, extractionPolicy_);
        DARABONBA_PTR_FROM_JSON(metadataField, metadataField_);
        DARABONBA_PTR_FROM_JSON(scopePolicy, scopePolicy_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(storagePolicy, storagePolicy_);
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
      class StoragePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StoragePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(allowedActions, allowedActions_);
          DARABONBA_PTR_TO_JSON(dedupe, dedupe_);
          DARABONBA_PTR_TO_JSON(humanEditProtection, humanEditProtection_);
          DARABONBA_PTR_TO_JSON(mergeKey, mergeKey_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
          DARABONBA_PTR_TO_JSON(similarityThreshold, similarityThreshold_);
          DARABONBA_PTR_TO_JSON(ttlDays, ttlDays_);
        };
        friend void from_json(const Darabonba::Json& j, StoragePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(allowedActions, allowedActions_);
          DARABONBA_PTR_FROM_JSON(dedupe, dedupe_);
          DARABONBA_PTR_FROM_JSON(humanEditProtection, humanEditProtection_);
          DARABONBA_PTR_FROM_JSON(mergeKey, mergeKey_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
          DARABONBA_PTR_FROM_JSON(similarityThreshold, similarityThreshold_);
          DARABONBA_PTR_FROM_JSON(ttlDays, ttlDays_);
        };
        StoragePolicy() = default ;
        StoragePolicy(const StoragePolicy &) = default ;
        StoragePolicy(StoragePolicy &&) = default ;
        StoragePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StoragePolicy() = default ;
        StoragePolicy& operator=(const StoragePolicy &) = default ;
        StoragePolicy& operator=(StoragePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedActions_ == nullptr
        && this->dedupe_ == nullptr && this->humanEditProtection_ == nullptr && this->mergeKey_ == nullptr && this->mode_ == nullptr && this->similarityThreshold_ == nullptr
        && this->ttlDays_ == nullptr; };
        // allowedActions Field Functions 
        bool hasAllowedActions() const { return this->allowedActions_ != nullptr;};
        void deleteAllowedActions() { this->allowedActions_ = nullptr;};
        inline const vector<string> & getAllowedActions() const { DARABONBA_PTR_GET_CONST(allowedActions_, vector<string>) };
        inline vector<string> getAllowedActions() { DARABONBA_PTR_GET(allowedActions_, vector<string>) };
        inline StoragePolicy& setAllowedActions(const vector<string> & allowedActions) { DARABONBA_PTR_SET_VALUE(allowedActions_, allowedActions) };
        inline StoragePolicy& setAllowedActions(vector<string> && allowedActions) { DARABONBA_PTR_SET_RVALUE(allowedActions_, allowedActions) };


        // dedupe Field Functions 
        bool hasDedupe() const { return this->dedupe_ != nullptr;};
        void deleteDedupe() { this->dedupe_ = nullptr;};
        inline bool getDedupe() const { DARABONBA_PTR_GET_DEFAULT(dedupe_, false) };
        inline StoragePolicy& setDedupe(bool dedupe) { DARABONBA_PTR_SET_VALUE(dedupe_, dedupe) };


        // humanEditProtection Field Functions 
        bool hasHumanEditProtection() const { return this->humanEditProtection_ != nullptr;};
        void deleteHumanEditProtection() { this->humanEditProtection_ = nullptr;};
        inline bool getHumanEditProtection() const { DARABONBA_PTR_GET_DEFAULT(humanEditProtection_, false) };
        inline StoragePolicy& setHumanEditProtection(bool humanEditProtection) { DARABONBA_PTR_SET_VALUE(humanEditProtection_, humanEditProtection) };


        // mergeKey Field Functions 
        bool hasMergeKey() const { return this->mergeKey_ != nullptr;};
        void deleteMergeKey() { this->mergeKey_ = nullptr;};
        inline string getMergeKey() const { DARABONBA_PTR_GET_DEFAULT(mergeKey_, "") };
        inline StoragePolicy& setMergeKey(string mergeKey) { DARABONBA_PTR_SET_VALUE(mergeKey_, mergeKey) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline StoragePolicy& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // similarityThreshold Field Functions 
        bool hasSimilarityThreshold() const { return this->similarityThreshold_ != nullptr;};
        void deleteSimilarityThreshold() { this->similarityThreshold_ = nullptr;};
        inline double getSimilarityThreshold() const { DARABONBA_PTR_GET_DEFAULT(similarityThreshold_, 0.0) };
        inline StoragePolicy& setSimilarityThreshold(double similarityThreshold) { DARABONBA_PTR_SET_VALUE(similarityThreshold_, similarityThreshold) };


        // ttlDays Field Functions 
        bool hasTtlDays() const { return this->ttlDays_ != nullptr;};
        void deleteTtlDays() { this->ttlDays_ = nullptr;};
        inline int32_t getTtlDays() const { DARABONBA_PTR_GET_DEFAULT(ttlDays_, 0) };
        inline StoragePolicy& setTtlDays(int32_t ttlDays) { DARABONBA_PTR_SET_VALUE(ttlDays_, ttlDays) };


      protected:
        // The allowed storage actions. By default, all actions are allowed: ADD, UPDATE, MERGE, and DELETE.
        shared_ptr<vector<string>> allowedActions_ {};
        // Specifies whether to deduplicate events in event mode. Default value: true.
        shared_ptr<bool> dedupe_ {};
        // Specifies whether to enable human edit protection. Default value: true. When this feature is enabled, automatic extraction does not overwrite manually modified memories.
        shared_ptr<bool> humanEditProtection_ {};
        // The merge key for upsert operations. Valid values: factKey, semantic, and both. Default value: semantic.
        shared_ptr<string> mergeKey_ {};
        // The storage mode. Valid values: event (append events) and upsert (merge and update). Default value: upsert.
        shared_ptr<string> mode_ {};
        // The similarity threshold for semantic merging. Valid values: 0 to 1. Default value: 0.4.
        shared_ptr<double> similarityThreshold_ {};
        // The number of days before the memory expires. A value of 0 indicates that the memory never expires.
        shared_ptr<int32_t> ttlDays_ {};
      };

      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_TO_JSON(dataset, dataset_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
          DARABONBA_PTR_TO_JSON(trajectory, trajectory_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_FROM_JSON(dataset, dataset_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          DARABONBA_PTR_FROM_JSON(trajectory, trajectory_);
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
            DARABONBA_PTR_TO_JSON(filter, filter_);
            DARABONBA_PTR_TO_JSON(logstore, logstore_);
            DARABONBA_PTR_TO_JSON(pollIntervalSeconds, pollIntervalSeconds_);
            DARABONBA_PTR_TO_JSON(scopeMapping, scopeMapping_);
          };
          friend void from_json(const Darabonba::Json& j, Trajectory& obj) { 
            DARABONBA_PTR_FROM_JSON(filter, filter_);
            DARABONBA_PTR_FROM_JSON(logstore, logstore_);
            DARABONBA_PTR_FROM_JSON(pollIntervalSeconds, pollIntervalSeconds_);
            DARABONBA_PTR_FROM_JSON(scopeMapping, scopeMapping_);
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
          class ScopeMapping : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScopeMapping& obj) { 
              DARABONBA_PTR_TO_JSON(agentId, agentId_);
              DARABONBA_PTR_TO_JSON(appId, appId_);
              DARABONBA_PTR_TO_JSON(runId, runId_);
              DARABONBA_PTR_TO_JSON(userId, userId_);
            };
            friend void from_json(const Darabonba::Json& j, ScopeMapping& obj) { 
              DARABONBA_PTR_FROM_JSON(agentId, agentId_);
              DARABONBA_PTR_FROM_JSON(appId, appId_);
              DARABONBA_PTR_FROM_JSON(runId, runId_);
              DARABONBA_PTR_FROM_JSON(userId, userId_);
            };
            ScopeMapping() = default ;
            ScopeMapping(const ScopeMapping &) = default ;
            ScopeMapping(ScopeMapping &&) = default ;
            ScopeMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScopeMapping() = default ;
            ScopeMapping& operator=(const ScopeMapping &) = default ;
            ScopeMapping& operator=(ScopeMapping &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->agentId_ == nullptr
        && this->appId_ == nullptr && this->runId_ == nullptr && this->userId_ == nullptr; };
            // agentId Field Functions 
            bool hasAgentId() const { return this->agentId_ != nullptr;};
            void deleteAgentId() { this->agentId_ = nullptr;};
            inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
            inline ScopeMapping& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline ScopeMapping& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // runId Field Functions 
            bool hasRunId() const { return this->runId_ != nullptr;};
            void deleteRunId() { this->runId_ = nullptr;};
            inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
            inline ScopeMapping& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


            // userId Field Functions 
            bool hasUserId() const { return this->userId_ != nullptr;};
            void deleteUserId() { this->userId_ = nullptr;};
            inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
            inline ScopeMapping& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          protected:
            // The JSONPath expression for the agentId field. Default value: $.agent_name.
            shared_ptr<string> agentId_ {};
            // The JSONPath expression for the appId field. Default value: $.service_names[0].
            shared_ptr<string> appId_ {};
            // The JSONPath expression for the runId field. Default value: $.trajectory_id.
            shared_ptr<string> runId_ {};
            // The JSONPath expression for the userId field. By default, this field is not mapped.
            shared_ptr<string> userId_ {};
          };

          class Filter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Filter& obj) { 
              DARABONBA_PTR_TO_JSON(agentNames, agentNames_);
              DARABONBA_PTR_TO_JSON(excludeDegraded, excludeDegraded_);
              DARABONBA_PTR_TO_JSON(minStepCount, minStepCount_);
              DARABONBA_PTR_TO_JSON(query, query_);
              DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
            };
            friend void from_json(const Darabonba::Json& j, Filter& obj) { 
              DARABONBA_PTR_FROM_JSON(agentNames, agentNames_);
              DARABONBA_PTR_FROM_JSON(excludeDegraded, excludeDegraded_);
              DARABONBA_PTR_FROM_JSON(minStepCount, minStepCount_);
              DARABONBA_PTR_FROM_JSON(query, query_);
              DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
            };
            Filter() = default ;
            Filter(const Filter &) = default ;
            Filter(Filter &&) = default ;
            Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Filter() = default ;
            Filter& operator=(const Filter &) = default ;
            Filter& operator=(Filter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->agentNames_ == nullptr
        && this->excludeDegraded_ == nullptr && this->minStepCount_ == nullptr && this->query_ == nullptr && this->serviceNames_ == nullptr; };
            // agentNames Field Functions 
            bool hasAgentNames() const { return this->agentNames_ != nullptr;};
            void deleteAgentNames() { this->agentNames_ = nullptr;};
            inline const vector<string> & getAgentNames() const { DARABONBA_PTR_GET_CONST(agentNames_, vector<string>) };
            inline vector<string> getAgentNames() { DARABONBA_PTR_GET(agentNames_, vector<string>) };
            inline Filter& setAgentNames(const vector<string> & agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };
            inline Filter& setAgentNames(vector<string> && agentNames) { DARABONBA_PTR_SET_RVALUE(agentNames_, agentNames) };


            // excludeDegraded Field Functions 
            bool hasExcludeDegraded() const { return this->excludeDegraded_ != nullptr;};
            void deleteExcludeDegraded() { this->excludeDegraded_ = nullptr;};
            inline bool getExcludeDegraded() const { DARABONBA_PTR_GET_DEFAULT(excludeDegraded_, false) };
            inline Filter& setExcludeDegraded(bool excludeDegraded) { DARABONBA_PTR_SET_VALUE(excludeDegraded_, excludeDegraded) };


            // minStepCount Field Functions 
            bool hasMinStepCount() const { return this->minStepCount_ != nullptr;};
            void deleteMinStepCount() { this->minStepCount_ = nullptr;};
            inline int32_t getMinStepCount() const { DARABONBA_PTR_GET_DEFAULT(minStepCount_, 0) };
            inline Filter& setMinStepCount(int32_t minStepCount) { DARABONBA_PTR_SET_VALUE(minStepCount_, minStepCount) };


            // query Field Functions 
            bool hasQuery() const { return this->query_ != nullptr;};
            void deleteQuery() { this->query_ = nullptr;};
            inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
            inline Filter& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


            // serviceNames Field Functions 
            bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
            void deleteServiceNames() { this->serviceNames_ = nullptr;};
            inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
            inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
            inline Filter& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
            inline Filter& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


          protected:
            // The list of agent names. An explicitly empty list returns a 400 error.
            shared_ptr<vector<string>> agentNames_ {};
            // Specifies whether to exclude degraded trajectories. Default value: false (degraded trajectories are included).
            shared_ptr<bool> excludeDegraded_ {};
            // The minimum number of steps, which must be greater than or equal to 0.
            shared_ptr<int32_t> minStepCount_ {};
            // The native SLS query statement. This statement is combined with the preceding conditions by using the AND operator.
            shared_ptr<string> query_ {};
            // The list of service names. A single trailing asterisk (*) is supported. Specifying an explicitly empty list returns a 400 error.
            shared_ptr<vector<string>> serviceNames_ {};
          };

          virtual bool empty() const override { return this->filter_ == nullptr
        && this->logstore_ == nullptr && this->pollIntervalSeconds_ == nullptr && this->scopeMapping_ == nullptr; };
          // filter Field Functions 
          bool hasFilter() const { return this->filter_ != nullptr;};
          void deleteFilter() { this->filter_ = nullptr;};
          inline const Trajectory::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, Trajectory::Filter) };
          inline Trajectory::Filter getFilter() { DARABONBA_PTR_GET(filter_, Trajectory::Filter) };
          inline Trajectory& setFilter(const Trajectory::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
          inline Trajectory& setFilter(Trajectory::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


          // logstore Field Functions 
          bool hasLogstore() const { return this->logstore_ != nullptr;};
          void deleteLogstore() { this->logstore_ = nullptr;};
          inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
          inline Trajectory& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


          // pollIntervalSeconds Field Functions 
          bool hasPollIntervalSeconds() const { return this->pollIntervalSeconds_ != nullptr;};
          void deletePollIntervalSeconds() { this->pollIntervalSeconds_ = nullptr;};
          inline int32_t getPollIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollIntervalSeconds_, 0) };
          inline Trajectory& setPollIntervalSeconds(int32_t pollIntervalSeconds) { DARABONBA_PTR_SET_VALUE(pollIntervalSeconds_, pollIntervalSeconds) };


          // scopeMapping Field Functions 
          bool hasScopeMapping() const { return this->scopeMapping_ != nullptr;};
          void deleteScopeMapping() { this->scopeMapping_ = nullptr;};
          inline const Trajectory::ScopeMapping & getScopeMapping() const { DARABONBA_PTR_GET_CONST(scopeMapping_, Trajectory::ScopeMapping) };
          inline Trajectory::ScopeMapping getScopeMapping() { DARABONBA_PTR_GET(scopeMapping_, Trajectory::ScopeMapping) };
          inline Trajectory& setScopeMapping(const Trajectory::ScopeMapping & scopeMapping) { DARABONBA_PTR_SET_VALUE(scopeMapping_, scopeMapping) };
          inline Trajectory& setScopeMapping(Trajectory::ScopeMapping && scopeMapping) { DARABONBA_PTR_SET_RVALUE(scopeMapping_, scopeMapping) };


        protected:
          // The trajectory filter conditions. Conditions are combined with AND, while items within a list are combined with OR.
          shared_ptr<Trajectory::Filter> filter_ {};
          // The name of the trajectory Logstore. Default value: agent-trajectory. This parameter cannot be modified after creation.
          shared_ptr<string> logstore_ {};
          // The polling interval in seconds. Valid values: 60 to 3600.
          shared_ptr<int32_t> pollIntervalSeconds_ {};
          // The scope field mapping. The value must be a JSONPath expression. Only the $.a.b and $.a[0] formats are supported.
          shared_ptr<Trajectory::ScopeMapping> scopeMapping_ {};
        };

        class Dataset : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
            DARABONBA_PTR_TO_JSON(customFields, customFields_);
            DARABONBA_PTR_TO_JSON(filter, filter_);
            DARABONBA_PTR_TO_JSON(pollIntervalSeconds, pollIntervalSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
            DARABONBA_PTR_FROM_JSON(customFields, customFields_);
            DARABONBA_PTR_FROM_JSON(filter, filter_);
            DARABONBA_PTR_FROM_JSON(pollIntervalSeconds, pollIntervalSeconds_);
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
          class Filter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Filter& obj) { 
              DARABONBA_PTR_TO_JSON(where, where_);
            };
            friend void from_json(const Darabonba::Json& j, Filter& obj) { 
              DARABONBA_PTR_FROM_JSON(where, where_);
            };
            Filter() = default ;
            Filter(const Filter &) = default ;
            Filter(Filter &&) = default ;
            Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Filter() = default ;
            Filter& operator=(const Filter &) = default ;
            Filter& operator=(Filter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->where_ == nullptr; };
            // where Field Functions 
            bool hasWhere() const { return this->where_ != nullptr;};
            void deleteWhere() { this->where_ = nullptr;};
            inline string getWhere() const { DARABONBA_PTR_GET_DEFAULT(where_, "") };
            inline Filter& setWhere(string where) { DARABONBA_PTR_SET_VALUE(where_, where) };


          protected:
            // The subset of the Pipeline where clause, which is pushed down to SQL.
            shared_ptr<string> where_ {};
          };

          class CustomFields : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CustomFields& obj) { 
              DARABONBA_PTR_TO_JSON(description, description_);
              DARABONBA_PTR_TO_JSON(sensitive, sensitive_);
              DARABONBA_PTR_TO_JSON(sourceField, sourceField_);
              DARABONBA_PTR_TO_JSON(target, target_);
              DARABONBA_PTR_TO_JSON(usage, usage_);
            };
            friend void from_json(const Darabonba::Json& j, CustomFields& obj) { 
              DARABONBA_PTR_FROM_JSON(description, description_);
              DARABONBA_PTR_FROM_JSON(sensitive, sensitive_);
              DARABONBA_PTR_FROM_JSON(sourceField, sourceField_);
              DARABONBA_PTR_FROM_JSON(target, target_);
              DARABONBA_PTR_FROM_JSON(usage, usage_);
            };
            CustomFields() = default ;
            CustomFields(const CustomFields &) = default ;
            CustomFields(CustomFields &&) = default ;
            CustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CustomFields() = default ;
            CustomFields& operator=(const CustomFields &) = default ;
            CustomFields& operator=(CustomFields &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->sensitive_ == nullptr && this->sourceField_ == nullptr && this->target_ == nullptr && this->usage_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline CustomFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // sensitive Field Functions 
            bool hasSensitive() const { return this->sensitive_ != nullptr;};
            void deleteSensitive() { this->sensitive_ = nullptr;};
            inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
            inline CustomFields& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


            // sourceField Field Functions 
            bool hasSourceField() const { return this->sourceField_ != nullptr;};
            void deleteSourceField() { this->sourceField_ = nullptr;};
            inline string getSourceField() const { DARABONBA_PTR_GET_DEFAULT(sourceField_, "") };
            inline CustomFields& setSourceField(string sourceField) { DARABONBA_PTR_SET_VALUE(sourceField_, sourceField) };


            // target Field Functions 
            bool hasTarget() const { return this->target_ != nullptr;};
            void deleteTarget() { this->target_ = nullptr;};
            inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
            inline CustomFields& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


            // usage Field Functions 
            bool hasUsage() const { return this->usage_ != nullptr;};
            void deleteUsage() { this->usage_ = nullptr;};
            inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
            inline CustomFields& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


          protected:
            // The description of the field. This parameter is required when usage is set to extraction-input.
            shared_ptr<string> description_ {};
            // Specifies whether the field is a sensitive field.
            shared_ptr<bool> sensitive_ {};
            // The name of the source field.
            shared_ptr<string> sourceField_ {};
            // The target write path, such as metadata.customerTier.
            shared_ptr<string> target_ {};
            // The usage of the field. Valid values: extraction-input (participates in extraction) and ignore (ignored).
            shared_ptr<string> usage_ {};
          };

          virtual bool empty() const override { return this->customFields_ == nullptr
        && this->filter_ == nullptr && this->pollIntervalSeconds_ == nullptr; };
          // customFields Field Functions 
          bool hasCustomFields() const { return this->customFields_ != nullptr;};
          void deleteCustomFields() { this->customFields_ = nullptr;};
          inline const vector<Dataset::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<Dataset::CustomFields>) };
          inline vector<Dataset::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<Dataset::CustomFields>) };
          inline Dataset& setCustomFields(const vector<Dataset::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
          inline Dataset& setCustomFields(vector<Dataset::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


          // filter Field Functions 
          bool hasFilter() const { return this->filter_ != nullptr;};
          void deleteFilter() { this->filter_ = nullptr;};
          inline const Dataset::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, Dataset::Filter) };
          inline Dataset::Filter getFilter() { DARABONBA_PTR_GET(filter_, Dataset::Filter) };
          inline Dataset& setFilter(const Dataset::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
          inline Dataset& setFilter(Dataset::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


          // pollIntervalSeconds Field Functions 
          bool hasPollIntervalSeconds() const { return this->pollIntervalSeconds_ != nullptr;};
          void deletePollIntervalSeconds() { this->pollIntervalSeconds_ = nullptr;};
          inline int32_t getPollIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollIntervalSeconds_, 0) };
          inline Dataset& setPollIntervalSeconds(int32_t pollIntervalSeconds) { DARABONBA_PTR_SET_VALUE(pollIntervalSeconds_, pollIntervalSeconds) };


        protected:
          // The list of custom field declarations. If provided, it fully overwrites the existing declarations.
          shared_ptr<vector<Dataset::CustomFields>> customFields_ {};
          // The row filter conditions.
          shared_ptr<Dataset::Filter> filter_ {};
          // The polling interval in seconds. Valid values: 60 to 3600.
          shared_ptr<int32_t> pollIntervalSeconds_ {};
        };

        virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->dataset_ == nullptr && this->startTime_ == nullptr && this->trajectory_ == nullptr; };
        // agentSpace Field Functions 
        bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
        void deleteAgentSpace() { this->agentSpace_ = nullptr;};
        inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
        inline Source& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


        // dataset Field Functions 
        bool hasDataset() const { return this->dataset_ != nullptr;};
        void deleteDataset() { this->dataset_ = nullptr;};
        inline const Source::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, Source::Dataset) };
        inline Source::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, Source::Dataset) };
        inline Source& setDataset(const Source::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
        inline Source& setDataset(Source::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Source& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // trajectory Field Functions 
        bool hasTrajectory() const { return this->trajectory_ != nullptr;};
        void deleteTrajectory() { this->trajectory_ = nullptr;};
        inline const Source::Trajectory & getTrajectory() const { DARABONBA_PTR_GET_CONST(trajectory_, Source::Trajectory) };
        inline Source::Trajectory getTrajectory() { DARABONBA_PTR_GET(trajectory_, Source::Trajectory) };
        inline Source& setTrajectory(const Source::Trajectory & trajectory) { DARABONBA_PTR_SET_VALUE(trajectory_, trajectory) };
        inline Source& setTrajectory(Source::Trajectory && trajectory) { DARABONBA_PTR_SET_RVALUE(trajectory_, trajectory) };


      protected:
        // The AgentSpace where the trace data source is located. Cross-AgentSpace is not supported in the current phase. If provided, it must be equal to the path AgentSpace. Otherwise, a 400 parameter error is returned. The AgentSpace cannot be changed after creation.
        shared_ptr<string> agentSpace_ {};
        // The updatable items for the Dataset data source. The datasetName cannot be changed after creation.
        shared_ptr<Source::Dataset> dataset_ {};
        // The start time for data backfill, in ISO 8601 UTC format.
        shared_ptr<string> startTime_ {};
        // The updatable items for the trajectory data source. The source.type cannot be changed after creation.
        shared_ptr<Source::Trajectory> trajectory_ {};
      };

      class ScopePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScopePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(requiredAnyOf, requiredAnyOf_);
        };
        friend void from_json(const Darabonba::Json& j, ScopePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(requiredAnyOf, requiredAnyOf_);
        };
        ScopePolicy() = default ;
        ScopePolicy(const ScopePolicy &) = default ;
        ScopePolicy(ScopePolicy &&) = default ;
        ScopePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScopePolicy() = default ;
        ScopePolicy& operator=(const ScopePolicy &) = default ;
        ScopePolicy& operator=(ScopePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requiredAnyOf_ == nullptr; };
        // requiredAnyOf Field Functions 
        bool hasRequiredAnyOf() const { return this->requiredAnyOf_ != nullptr;};
        void deleteRequiredAnyOf() { this->requiredAnyOf_ = nullptr;};
        inline const vector<string> & getRequiredAnyOf() const { DARABONBA_PTR_GET_CONST(requiredAnyOf_, vector<string>) };
        inline vector<string> getRequiredAnyOf() { DARABONBA_PTR_GET(requiredAnyOf_, vector<string>) };
        inline ScopePolicy& setRequiredAnyOf(const vector<string> & requiredAnyOf) { DARABONBA_PTR_SET_VALUE(requiredAnyOf_, requiredAnyOf) };
        inline ScopePolicy& setRequiredAnyOf(vector<string> && requiredAnyOf) { DARABONBA_PTR_SET_RVALUE(requiredAnyOf_, requiredAnyOf) };


      protected:
        // The list of scope fields where at least one must be non-empty. Valid element values: userId, agentId, appId, and runId.
        shared_ptr<vector<string>> requiredAnyOf_ {};
      };

      class ExtractionPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtractionPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(categories, categories_);
          DARABONBA_PTR_TO_JSON(customInstructions, customInstructions_);
          DARABONBA_PTR_TO_JSON(excludeRules, excludeRules_);
          DARABONBA_PTR_TO_JSON(model, model_);
          DARABONBA_PTR_TO_JSON(preset, preset_);
        };
        friend void from_json(const Darabonba::Json& j, ExtractionPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(categories, categories_);
          DARABONBA_PTR_FROM_JSON(customInstructions, customInstructions_);
          DARABONBA_PTR_FROM_JSON(excludeRules, excludeRules_);
          DARABONBA_PTR_FROM_JSON(model, model_);
          DARABONBA_PTR_FROM_JSON(preset, preset_);
        };
        ExtractionPolicy() = default ;
        ExtractionPolicy(const ExtractionPolicy &) = default ;
        ExtractionPolicy(ExtractionPolicy &&) = default ;
        ExtractionPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtractionPolicy() = default ;
        ExtractionPolicy& operator=(const ExtractionPolicy &) = default ;
        ExtractionPolicy& operator=(ExtractionPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Model : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Model& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Model& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Model() = default ;
          Model(const Model &) = default ;
          Model(Model &&) = default ;
          Model(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Model() = default ;
          Model& operator=(const Model &) = default ;
          Model& operator=(Model &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Model& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name of the extraction model. Currently, only qwen3.8-flash is supported, which uses internal platform credentials.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->categories_ == nullptr
        && this->customInstructions_ == nullptr && this->excludeRules_ == nullptr && this->model_ == nullptr && this->preset_ == nullptr; };
        // categories Field Functions 
        bool hasCategories() const { return this->categories_ != nullptr;};
        void deleteCategories() { this->categories_ = nullptr;};
        inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
        inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
        inline ExtractionPolicy& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
        inline ExtractionPolicy& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


        // customInstructions Field Functions 
        bool hasCustomInstructions() const { return this->customInstructions_ != nullptr;};
        void deleteCustomInstructions() { this->customInstructions_ = nullptr;};
        inline string getCustomInstructions() const { DARABONBA_PTR_GET_DEFAULT(customInstructions_, "") };
        inline ExtractionPolicy& setCustomInstructions(string customInstructions) { DARABONBA_PTR_SET_VALUE(customInstructions_, customInstructions) };


        // excludeRules Field Functions 
        bool hasExcludeRules() const { return this->excludeRules_ != nullptr;};
        void deleteExcludeRules() { this->excludeRules_ = nullptr;};
        inline const vector<string> & getExcludeRules() const { DARABONBA_PTR_GET_CONST(excludeRules_, vector<string>) };
        inline vector<string> getExcludeRules() { DARABONBA_PTR_GET(excludeRules_, vector<string>) };
        inline ExtractionPolicy& setExcludeRules(const vector<string> & excludeRules) { DARABONBA_PTR_SET_VALUE(excludeRules_, excludeRules) };
        inline ExtractionPolicy& setExcludeRules(vector<string> && excludeRules) { DARABONBA_PTR_SET_RVALUE(excludeRules_, excludeRules) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline const ExtractionPolicy::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, ExtractionPolicy::Model) };
        inline ExtractionPolicy::Model getModel() { DARABONBA_PTR_GET(model_, ExtractionPolicy::Model) };
        inline ExtractionPolicy& setModel(const ExtractionPolicy::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
        inline ExtractionPolicy& setModel(ExtractionPolicy::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


        // preset Field Functions 
        bool hasPreset() const { return this->preset_ != nullptr;};
        void deletePreset() { this->preset_ = nullptr;};
        inline string getPreset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
        inline ExtractionPolicy& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


      protected:
        // The list of memory categories.
        shared_ptr<vector<string>> categories_ {};
        // The custom extraction instructions. This parameter is required when preset is set to custom. Length: 1 to 8000 characters.
        shared_ptr<string> customInstructions_ {};
        // The list of exclusion rules. Content that matches these rules is not extracted.
        shared_ptr<vector<string>> excludeRules_ {};
        // The extraction model configuration.
        shared_ptr<ExtractionPolicy::Model> model_ {};
        // The preset policy. Valid values: fact, toc-profile, tob-digital-twin, and custom. Default value: fact.
        shared_ptr<string> preset_ {};
      };

      class Audit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Audit& obj) { 
          DARABONBA_PTR_TO_JSON(droppedCandidates, droppedCandidates_);
          DARABONBA_PTR_TO_JSON(queryMode, queryMode_);
          DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
        };
        friend void from_json(const Darabonba::Json& j, Audit& obj) { 
          DARABONBA_PTR_FROM_JSON(droppedCandidates, droppedCandidates_);
          DARABONBA_PTR_FROM_JSON(queryMode, queryMode_);
          DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
        };
        Audit() = default ;
        Audit(const Audit &) = default ;
        Audit(Audit &&) = default ;
        Audit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Audit() = default ;
        Audit& operator=(const Audit &) = default ;
        Audit& operator=(Audit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->droppedCandidates_ == nullptr
        && this->queryMode_ == nullptr && this->retentionDays_ == nullptr; };
        // droppedCandidates Field Functions 
        bool hasDroppedCandidates() const { return this->droppedCandidates_ != nullptr;};
        void deleteDroppedCandidates() { this->droppedCandidates_ = nullptr;};
        inline bool getDroppedCandidates() const { DARABONBA_PTR_GET_DEFAULT(droppedCandidates_, false) };
        inline Audit& setDroppedCandidates(bool droppedCandidates) { DARABONBA_PTR_SET_VALUE(droppedCandidates_, droppedCandidates) };


        // queryMode Field Functions 
        bool hasQueryMode() const { return this->queryMode_ != nullptr;};
        void deleteQueryMode() { this->queryMode_ = nullptr;};
        inline string getQueryMode() const { DARABONBA_PTR_GET_DEFAULT(queryMode_, "") };
        inline Audit& setQueryMode(string queryMode) { DARABONBA_PTR_SET_VALUE(queryMode_, queryMode) };


        // retentionDays Field Functions 
        bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
        void deleteRetentionDays() { this->retentionDays_ = nullptr;};
        inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
        inline Audit& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


      protected:
        // Specifies whether to write item events for dropped recall candidates. Default value: false.
        shared_ptr<bool> droppedCandidates_ {};
        // The recording mode for recall queries. Valid values: raw (plaintext) and hash (HMAC only). Default value: raw.
        shared_ptr<string> queryMode_ {};
        // The number of days to retain audit logs. Valid values: 1 to 180. Default value: 30.
        shared_ptr<int32_t> retentionDays_ {};
      };

      virtual bool empty() const override { return this->audit_ == nullptr
        && this->extractionPolicy_ == nullptr && this->metadataField_ == nullptr && this->scopePolicy_ == nullptr && this->source_ == nullptr && this->storagePolicy_ == nullptr; };
      // audit Field Functions 
      bool hasAudit() const { return this->audit_ != nullptr;};
      void deleteAudit() { this->audit_ = nullptr;};
      inline const Config::Audit & getAudit() const { DARABONBA_PTR_GET_CONST(audit_, Config::Audit) };
      inline Config::Audit getAudit() { DARABONBA_PTR_GET(audit_, Config::Audit) };
      inline Config& setAudit(const Config::Audit & audit) { DARABONBA_PTR_SET_VALUE(audit_, audit) };
      inline Config& setAudit(Config::Audit && audit) { DARABONBA_PTR_SET_RVALUE(audit_, audit) };


      // extractionPolicy Field Functions 
      bool hasExtractionPolicy() const { return this->extractionPolicy_ != nullptr;};
      void deleteExtractionPolicy() { this->extractionPolicy_ = nullptr;};
      inline const Config::ExtractionPolicy & getExtractionPolicy() const { DARABONBA_PTR_GET_CONST(extractionPolicy_, Config::ExtractionPolicy) };
      inline Config::ExtractionPolicy getExtractionPolicy() { DARABONBA_PTR_GET(extractionPolicy_, Config::ExtractionPolicy) };
      inline Config& setExtractionPolicy(const Config::ExtractionPolicy & extractionPolicy) { DARABONBA_PTR_SET_VALUE(extractionPolicy_, extractionPolicy) };
      inline Config& setExtractionPolicy(Config::ExtractionPolicy && extractionPolicy) { DARABONBA_PTR_SET_RVALUE(extractionPolicy_, extractionPolicy) };


      // metadataField Field Functions 
      bool hasMetadataField() const { return this->metadataField_ != nullptr;};
      void deleteMetadataField() { this->metadataField_ = nullptr;};
      inline const map<string, string> & getMetadataField() const { DARABONBA_PTR_GET_CONST(metadataField_, map<string, string>) };
      inline map<string, string> getMetadataField() { DARABONBA_PTR_GET(metadataField_, map<string, string>) };
      inline Config& setMetadataField(const map<string, string> & metadataField) { DARABONBA_PTR_SET_VALUE(metadataField_, metadataField) };
      inline Config& setMetadataField(map<string, string> && metadataField) { DARABONBA_PTR_SET_RVALUE(metadataField_, metadataField) };


      // scopePolicy Field Functions 
      bool hasScopePolicy() const { return this->scopePolicy_ != nullptr;};
      void deleteScopePolicy() { this->scopePolicy_ = nullptr;};
      inline const Config::ScopePolicy & getScopePolicy() const { DARABONBA_PTR_GET_CONST(scopePolicy_, Config::ScopePolicy) };
      inline Config::ScopePolicy getScopePolicy() { DARABONBA_PTR_GET(scopePolicy_, Config::ScopePolicy) };
      inline Config& setScopePolicy(const Config::ScopePolicy & scopePolicy) { DARABONBA_PTR_SET_VALUE(scopePolicy_, scopePolicy) };
      inline Config& setScopePolicy(Config::ScopePolicy && scopePolicy) { DARABONBA_PTR_SET_RVALUE(scopePolicy_, scopePolicy) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Config::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Config::Source) };
      inline Config::Source getSource() { DARABONBA_PTR_GET(source_, Config::Source) };
      inline Config& setSource(const Config::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Config& setSource(Config::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // storagePolicy Field Functions 
      bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
      void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
      inline const Config::StoragePolicy & getStoragePolicy() const { DARABONBA_PTR_GET_CONST(storagePolicy_, Config::StoragePolicy) };
      inline Config::StoragePolicy getStoragePolicy() { DARABONBA_PTR_GET(storagePolicy_, Config::StoragePolicy) };
      inline Config& setStoragePolicy(const Config::StoragePolicy & storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };
      inline Config& setStoragePolicy(Config::StoragePolicy && storagePolicy) { DARABONBA_PTR_SET_RVALUE(storagePolicy_, storagePolicy) };


    protected:
      // The audit configuration.
      shared_ptr<Config::Audit> audit_ {};
      // The extraction policy for the memory type.
      shared_ptr<Config::ExtractionPolicy> extractionPolicy_ {};
      // The metadata field mapping. The key is the business field, and the value is the storage field.
      shared_ptr<map<string, string>> metadataField_ {};
      // The scope constraint policy.
      shared_ptr<Config::ScopePolicy> scopePolicy_ {};
      // The datasource config, which serves only as the root identity for the data source.
      shared_ptr<Config::Source> source_ {};
      // The storage policy for the memory type.
      shared_ptr<Config::StoragePolicy> storagePolicy_ {};
    };

    virtual bool empty() const override { return this->changeNote_ == nullptr
        && this->config_ == nullptr && this->contextType_ == nullptr && this->description_ == nullptr && this->status_ == nullptr && this->clientToken_ == nullptr; };
    // changeNote Field Functions 
    bool hasChangeNote() const { return this->changeNote_ != nullptr;};
    void deleteChangeNote() { this->changeNote_ = nullptr;};
    inline string getChangeNote() const { DARABONBA_PTR_GET_DEFAULT(changeNote_, "") };
    inline UpdateContextStoreRequest& setChangeNote(string changeNote) { DARABONBA_PTR_SET_VALUE(changeNote_, changeNote) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdateContextStoreRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, UpdateContextStoreRequest::Config) };
    inline UpdateContextStoreRequest::Config getConfig() { DARABONBA_PTR_GET(config_, UpdateContextStoreRequest::Config) };
    inline UpdateContextStoreRequest& setConfig(const UpdateContextStoreRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateContextStoreRequest& setConfig(UpdateContextStoreRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // contextType Field Functions 
    bool hasContextType() const { return this->contextType_ != nullptr;};
    void deleteContextType() { this->contextType_ = nullptr;};
    inline string getContextType() const { DARABONBA_PTR_GET_DEFAULT(contextType_, "") };
    inline UpdateContextStoreRequest& setContextType(string contextType) { DARABONBA_PTR_SET_VALUE(contextType_, contextType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateContextStoreRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateContextStoreRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateContextStoreRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The description of the policy change. A new policy version is created when policy fields in the configuration are modified.
    shared_ptr<string> changeNote_ {};
    // The context library configuration. If provided, it fully overwrites the existing configuration. If omitted, the original configuration is retained.
    shared_ptr<UpdateContextStoreRequest::Config> config_ {};
    // The context library type. This field is typically immutable after creation and is provided only for exception correction.
    shared_ptr<string> contextType_ {};
    // The description of the context library, which helps business users understand its purpose.
    shared_ptr<string> description_ {};
    // The running status. For the memory type, valid values are Active (running) and Paused (data source consumption and extraction paused). For the experience type, it indicates the mining status of the experience library. The specific valid values and combination constraints are defined by the server.
    shared_ptr<string> status_ {};
    // The idempotency token. It is a unique string generated by the client to ensure the idempotence of the update operation.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
