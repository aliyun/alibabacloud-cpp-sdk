// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATROLREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPATROLREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListPatrolReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatrolReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatrolReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListPatrolReportsResponseBody() = default ;
    ListPatrolReportsResponseBody(const ListPatrolReportsResponseBody &) = default ;
    ListPatrolReportsResponseBody(ListPatrolReportsResponseBody &&) = default ;
    ListPatrolReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatrolReportsResponseBody() = default ;
    ListPatrolReportsResponseBody& operator=(const ListPatrolReportsResponseBody &) = default ;
    ListPatrolReportsResponseBody& operator=(ListPatrolReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page, page_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(inspectedJobs, inspectedJobs_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(problemDelayBackpressureCount, problemDelayBackpressureCount_);
          DARABONBA_PTR_TO_JSON(problemUnhealthyCheckpointCount, problemUnhealthyCheckpointCount_);
          DARABONBA_PTR_TO_JSON(problemUnhealthyCount, problemUnhealthyCount_);
          DARABONBA_PTR_TO_JSON(reportId, reportId_);
          DARABONBA_PTR_TO_JSON(riskCriticalCount, riskCriticalCount_);
          DARABONBA_PTR_TO_JSON(riskInfoCount, riskInfoCount_);
          DARABONBA_PTR_TO_JSON(riskWarningCount, riskWarningCount_);
          DARABONBA_PTR_TO_JSON(scopeConfig, scopeConfig_);
          DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
          DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(totalJobs, totalJobs_);
          DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_TO_JSON(workspace, workspace_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(inspectedJobs, inspectedJobs_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(problemDelayBackpressureCount, problemDelayBackpressureCount_);
          DARABONBA_PTR_FROM_JSON(problemUnhealthyCheckpointCount, problemUnhealthyCheckpointCount_);
          DARABONBA_PTR_FROM_JSON(problemUnhealthyCount, problemUnhealthyCount_);
          DARABONBA_PTR_FROM_JSON(reportId, reportId_);
          DARABONBA_PTR_FROM_JSON(riskCriticalCount, riskCriticalCount_);
          DARABONBA_PTR_FROM_JSON(riskInfoCount, riskInfoCount_);
          DARABONBA_PTR_FROM_JSON(riskWarningCount, riskWarningCount_);
          DARABONBA_PTR_FROM_JSON(scopeConfig, scopeConfig_);
          DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
          DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(totalJobs, totalJobs_);
          DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_FROM_JSON(workspace, workspace_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScopeConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScopeConfig& obj) { 
            DARABONBA_PTR_TO_JSON(deploymentIds, deploymentIds_);
            DARABONBA_PTR_TO_JSON(tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, ScopeConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(deploymentIds, deploymentIds_);
            DARABONBA_PTR_FROM_JSON(tags, tags_);
          };
          ScopeConfig() = default ;
          ScopeConfig(const ScopeConfig &) = default ;
          ScopeConfig(ScopeConfig &&) = default ;
          ScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScopeConfig() = default ;
          ScopeConfig& operator=(const ScopeConfig &) = default ;
          ScopeConfig& operator=(ScopeConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deploymentIds_ == nullptr
        && this->tags_ == nullptr; };
          // deploymentIds Field Functions 
          bool hasDeploymentIds() const { return this->deploymentIds_ != nullptr;};
          void deleteDeploymentIds() { this->deploymentIds_ = nullptr;};
          inline const vector<string> & getDeploymentIds() const { DARABONBA_PTR_GET_CONST(deploymentIds_, vector<string>) };
          inline vector<string> getDeploymentIds() { DARABONBA_PTR_GET(deploymentIds_, vector<string>) };
          inline ScopeConfig& setDeploymentIds(const vector<string> & deploymentIds) { DARABONBA_PTR_SET_VALUE(deploymentIds_, deploymentIds) };
          inline ScopeConfig& setDeploymentIds(vector<string> && deploymentIds) { DARABONBA_PTR_SET_RVALUE(deploymentIds_, deploymentIds) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const map<string, vector<string>> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, vector<string>>) };
          inline map<string, vector<string>> getTags() { DARABONBA_PTR_GET(tags_, map<string, vector<string>>) };
          inline ScopeConfig& setTags(const map<string, vector<string>> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline ScopeConfig& setTags(map<string, vector<string>> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          // The list of deployment IDs. This field is valid only when scopeType is set to DEPLOYMENTS.
          shared_ptr<vector<string>> deploymentIds_ {};
          // The tag mapping. This field is valid only when scopeType is set to TAGS. The key is the tag name, and the value is a list of tag values.
          shared_ptr<map<string, vector<string>>> tags_ {};
        };

        virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->createdAt_ == nullptr && this->errorMessage_ == nullptr && this->inspectedJobs_ == nullptr && this->namespace_ == nullptr && this->problemDelayBackpressureCount_ == nullptr
        && this->problemUnhealthyCheckpointCount_ == nullptr && this->problemUnhealthyCount_ == nullptr && this->reportId_ == nullptr && this->riskCriticalCount_ == nullptr && this->riskInfoCount_ == nullptr
        && this->riskWarningCount_ == nullptr && this->scopeConfig_ == nullptr && this->scopeType_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr
        && this->totalJobs_ == nullptr && this->triggerType_ == nullptr && this->updatedAt_ == nullptr && this->workspace_ == nullptr; };
        // completedAt Field Functions 
        bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
        void deleteCompletedAt() { this->completedAt_ = nullptr;};
        inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
        inline Items& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Items& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // inspectedJobs Field Functions 
        bool hasInspectedJobs() const { return this->inspectedJobs_ != nullptr;};
        void deleteInspectedJobs() { this->inspectedJobs_ = nullptr;};
        inline int32_t getInspectedJobs() const { DARABONBA_PTR_GET_DEFAULT(inspectedJobs_, 0) };
        inline Items& setInspectedJobs(int32_t inspectedJobs) { DARABONBA_PTR_SET_VALUE(inspectedJobs_, inspectedJobs) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Items& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // problemDelayBackpressureCount Field Functions 
        bool hasProblemDelayBackpressureCount() const { return this->problemDelayBackpressureCount_ != nullptr;};
        void deleteProblemDelayBackpressureCount() { this->problemDelayBackpressureCount_ = nullptr;};
        inline int32_t getProblemDelayBackpressureCount() const { DARABONBA_PTR_GET_DEFAULT(problemDelayBackpressureCount_, 0) };
        inline Items& setProblemDelayBackpressureCount(int32_t problemDelayBackpressureCount) { DARABONBA_PTR_SET_VALUE(problemDelayBackpressureCount_, problemDelayBackpressureCount) };


        // problemUnhealthyCheckpointCount Field Functions 
        bool hasProblemUnhealthyCheckpointCount() const { return this->problemUnhealthyCheckpointCount_ != nullptr;};
        void deleteProblemUnhealthyCheckpointCount() { this->problemUnhealthyCheckpointCount_ = nullptr;};
        inline int32_t getProblemUnhealthyCheckpointCount() const { DARABONBA_PTR_GET_DEFAULT(problemUnhealthyCheckpointCount_, 0) };
        inline Items& setProblemUnhealthyCheckpointCount(int32_t problemUnhealthyCheckpointCount) { DARABONBA_PTR_SET_VALUE(problemUnhealthyCheckpointCount_, problemUnhealthyCheckpointCount) };


        // problemUnhealthyCount Field Functions 
        bool hasProblemUnhealthyCount() const { return this->problemUnhealthyCount_ != nullptr;};
        void deleteProblemUnhealthyCount() { this->problemUnhealthyCount_ = nullptr;};
        inline int32_t getProblemUnhealthyCount() const { DARABONBA_PTR_GET_DEFAULT(problemUnhealthyCount_, 0) };
        inline Items& setProblemUnhealthyCount(int32_t problemUnhealthyCount) { DARABONBA_PTR_SET_VALUE(problemUnhealthyCount_, problemUnhealthyCount) };


        // reportId Field Functions 
        bool hasReportId() const { return this->reportId_ != nullptr;};
        void deleteReportId() { this->reportId_ = nullptr;};
        inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
        inline Items& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


        // riskCriticalCount Field Functions 
        bool hasRiskCriticalCount() const { return this->riskCriticalCount_ != nullptr;};
        void deleteRiskCriticalCount() { this->riskCriticalCount_ = nullptr;};
        inline int32_t getRiskCriticalCount() const { DARABONBA_PTR_GET_DEFAULT(riskCriticalCount_, 0) };
        inline Items& setRiskCriticalCount(int32_t riskCriticalCount) { DARABONBA_PTR_SET_VALUE(riskCriticalCount_, riskCriticalCount) };


        // riskInfoCount Field Functions 
        bool hasRiskInfoCount() const { return this->riskInfoCount_ != nullptr;};
        void deleteRiskInfoCount() { this->riskInfoCount_ = nullptr;};
        inline int32_t getRiskInfoCount() const { DARABONBA_PTR_GET_DEFAULT(riskInfoCount_, 0) };
        inline Items& setRiskInfoCount(int32_t riskInfoCount) { DARABONBA_PTR_SET_VALUE(riskInfoCount_, riskInfoCount) };


        // riskWarningCount Field Functions 
        bool hasRiskWarningCount() const { return this->riskWarningCount_ != nullptr;};
        void deleteRiskWarningCount() { this->riskWarningCount_ = nullptr;};
        inline int32_t getRiskWarningCount() const { DARABONBA_PTR_GET_DEFAULT(riskWarningCount_, 0) };
        inline Items& setRiskWarningCount(int32_t riskWarningCount) { DARABONBA_PTR_SET_VALUE(riskWarningCount_, riskWarningCount) };


        // scopeConfig Field Functions 
        bool hasScopeConfig() const { return this->scopeConfig_ != nullptr;};
        void deleteScopeConfig() { this->scopeConfig_ = nullptr;};
        inline const Items::ScopeConfig & getScopeConfig() const { DARABONBA_PTR_GET_CONST(scopeConfig_, Items::ScopeConfig) };
        inline Items::ScopeConfig getScopeConfig() { DARABONBA_PTR_GET(scopeConfig_, Items::ScopeConfig) };
        inline Items& setScopeConfig(const Items::ScopeConfig & scopeConfig) { DARABONBA_PTR_SET_VALUE(scopeConfig_, scopeConfig) };
        inline Items& setScopeConfig(Items::ScopeConfig && scopeConfig) { DARABONBA_PTR_SET_RVALUE(scopeConfig_, scopeConfig) };


        // scopeType Field Functions 
        bool hasScopeType() const { return this->scopeType_ != nullptr;};
        void deleteScopeType() { this->scopeType_ = nullptr;};
        inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
        inline Items& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


        // startedAt Field Functions 
        bool hasStartedAt() const { return this->startedAt_ != nullptr;};
        void deleteStartedAt() { this->startedAt_ = nullptr;};
        inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
        inline Items& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalJobs Field Functions 
        bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
        void deleteTotalJobs() { this->totalJobs_ = nullptr;};
        inline int32_t getTotalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
        inline Items& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline Items& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // workspace Field Functions 
        bool hasWorkspace() const { return this->workspace_ != nullptr;};
        void deleteWorkspace() { this->workspace_ = nullptr;};
        inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
        inline Items& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


      protected:
        // The inspection completion time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> completedAt_ {};
        // The creation time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> createdAt_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The number of inspected jobs.
        shared_ptr<int32_t> inspectedJobs_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The number of jobs with delay and backpressure.
        shared_ptr<int32_t> problemDelayBackpressureCount_ {};
        // The number of jobs with unhealthy checkpoints.
        shared_ptr<int32_t> problemUnhealthyCheckpointCount_ {};
        // The number of unhealthy jobs.
        shared_ptr<int32_t> problemUnhealthyCount_ {};
        // The report ID.
        shared_ptr<string> reportId_ {};
        // The number of jobs with a Critical risk level.
        shared_ptr<int32_t> riskCriticalCount_ {};
        // The number of jobs with an Info risk level.
        shared_ptr<int32_t> riskInfoCount_ {};
        // The number of jobs with a Warning risk level.
        shared_ptr<int32_t> riskWarningCount_ {};
        // The inspection scope configuration.
        shared_ptr<Items::ScopeConfig> scopeConfig_ {};
        // The inspection scope type.
        shared_ptr<string> scopeType_ {};
        // The inspection start time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> startedAt_ {};
        // The report status.
        shared_ptr<string> status_ {};
        // The total number of jobs.
        shared_ptr<int32_t> totalJobs_ {};
        // The trigger type.
        shared_ptr<string> triggerType_ {};
        // The update time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> updatedAt_ {};
        // The workspace ID.
        shared_ptr<string> workspace_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Data& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of inspection reports.
      shared_ptr<vector<Data::Items>> items_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The number of records per page.
      shared_ptr<int32_t> size_ {};
      // The total number of records.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPatrolReportsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPatrolReportsResponseBody::Data) };
    inline ListPatrolReportsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPatrolReportsResponseBody::Data) };
    inline ListPatrolReportsResponseBody& setData(const ListPatrolReportsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPatrolReportsResponseBody& setData(ListPatrolReportsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListPatrolReportsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListPatrolReportsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListPatrolReportsResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPatrolReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPatrolReportsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The paginated data of inspection reports.
    shared_ptr<ListPatrolReportsResponseBody::Data> data_ {};
    // The business error code. This value is not empty when success is false. This value is empty when success is true.
    shared_ptr<string> errorCode_ {};
    // The business error message. This value is not empty when success is false. This value is empty when success is true.
    shared_ptr<string> errorMessage_ {};
    // The business status code, which is always 200. Use the success field to determine whether the business request was successful.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the business request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
