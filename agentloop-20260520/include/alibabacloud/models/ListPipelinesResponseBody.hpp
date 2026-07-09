// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
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
  class ListPipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pipelines, pipelines_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pipelines, pipelines_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody(ListPipelinesResponseBody &&) = default ;
    ListPipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody& operator=(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody& operator=(ListPipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipelines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipelines& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(executePolicy, executePolicy_);
        DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(scheduleStatus, scheduleStatus_);
        DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Pipelines& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(executePolicy, executePolicy_);
        DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(scheduleStatus, scheduleStatus_);
        DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
          shared_ptr<int64_t> fromTime_ {};
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
          shared_ptr<int64_t> fromTime_ {};
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
        shared_ptr<string> mode_ {};
        shared_ptr<ExecutePolicy::RunOnce> runOnce_ {};
        shared_ptr<ExecutePolicy::Scheduled> scheduled_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->executePolicy_ == nullptr && this->pipelineName_ == nullptr && this->regionId_ == nullptr && this->scheduleStatus_ == nullptr
        && this->scheduleType_ == nullptr && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
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


      // executePolicy Field Functions 
      bool hasExecutePolicy() const { return this->executePolicy_ != nullptr;};
      void deleteExecutePolicy() { this->executePolicy_ = nullptr;};
      inline const Pipelines::ExecutePolicy & getExecutePolicy() const { DARABONBA_PTR_GET_CONST(executePolicy_, Pipelines::ExecutePolicy) };
      inline Pipelines::ExecutePolicy getExecutePolicy() { DARABONBA_PTR_GET(executePolicy_, Pipelines::ExecutePolicy) };
      inline Pipelines& setExecutePolicy(const Pipelines::ExecutePolicy & executePolicy) { DARABONBA_PTR_SET_VALUE(executePolicy_, executePolicy) };
      inline Pipelines& setExecutePolicy(Pipelines::ExecutePolicy && executePolicy) { DARABONBA_PTR_SET_RVALUE(executePolicy_, executePolicy) };


      // pipelineName Field Functions 
      bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
      void deletePipelineName() { this->pipelineName_ = nullptr;};
      inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
      inline Pipelines& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Pipelines& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scheduleStatus Field Functions 
      bool hasScheduleStatus() const { return this->scheduleStatus_ != nullptr;};
      void deleteScheduleStatus() { this->scheduleStatus_ = nullptr;};
      inline string getScheduleStatus() const { DARABONBA_PTR_GET_DEFAULT(scheduleStatus_, "") };
      inline Pipelines& setScheduleStatus(string scheduleStatus) { DARABONBA_PTR_SET_VALUE(scheduleStatus_, scheduleStatus) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline Pipelines& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Pipelines& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Pipelines& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Pipelines::ExecutePolicy> executePolicy_ {};
      shared_ptr<string> pipelineName_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> scheduleStatus_ {};
      shared_ptr<string> scheduleType_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pipelines_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPipelinesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPipelinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pipelines Field Functions 
    bool hasPipelines() const { return this->pipelines_ != nullptr;};
    void deletePipelines() { this->pipelines_ = nullptr;};
    inline const vector<ListPipelinesResponseBody::Pipelines> & getPipelines() const { DARABONBA_PTR_GET_CONST(pipelines_, vector<ListPipelinesResponseBody::Pipelines>) };
    inline vector<ListPipelinesResponseBody::Pipelines> getPipelines() { DARABONBA_PTR_GET(pipelines_, vector<ListPipelinesResponseBody::Pipelines>) };
    inline ListPipelinesResponseBody& setPipelines(const vector<ListPipelinesResponseBody::Pipelines> & pipelines) { DARABONBA_PTR_SET_VALUE(pipelines_, pipelines) };
    inline ListPipelinesResponseBody& setPipelines(vector<ListPipelinesResponseBody::Pipelines> && pipelines) { DARABONBA_PTR_SET_RVALUE(pipelines_, pipelines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPipelinesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListPipelinesResponseBody::Pipelines>> pipelines_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
