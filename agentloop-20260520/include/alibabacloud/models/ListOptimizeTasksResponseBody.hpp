// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPTIMIZETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPTIMIZETASKSRESPONSEBODY_HPP_
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
  class ListOptimizeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOptimizeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(optimizeTasks, optimizeTasks_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOptimizeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(optimizeTasks, optimizeTasks_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListOptimizeTasksResponseBody() = default ;
    ListOptimizeTasksResponseBody(const ListOptimizeTasksResponseBody &) = default ;
    ListOptimizeTasksResponseBody(ListOptimizeTasksResponseBody &&) = default ;
    ListOptimizeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOptimizeTasksResponseBody() = default ;
    ListOptimizeTasksResponseBody& operator=(const ListOptimizeTasksResponseBody &) = default ;
    ListOptimizeTasksResponseBody& operator=(ListOptimizeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OptimizeTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OptimizeTasks& obj) { 
        DARABONBA_ANY_TO_JSON(checkpoint, checkpoint_);
        DARABONBA_ANY_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(nextTriggerTime, nextTriggerTime_);
        DARABONBA_PTR_TO_JSON(optimizeTaskName, optimizeTaskName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, OptimizeTasks& obj) { 
        DARABONBA_ANY_FROM_JSON(checkpoint, checkpoint_);
        DARABONBA_ANY_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(nextTriggerTime, nextTriggerTime_);
        DARABONBA_PTR_FROM_JSON(optimizeTaskName, optimizeTaskName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      OptimizeTasks() = default ;
      OptimizeTasks(const OptimizeTasks &) = default ;
      OptimizeTasks(OptimizeTasks &&) = default ;
      OptimizeTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OptimizeTasks() = default ;
      OptimizeTasks& operator=(const OptimizeTasks &) = default ;
      OptimizeTasks& operator=(OptimizeTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->config_ == nullptr && this->createTime_ == nullptr && this->nextTriggerTime_ == nullptr && this->optimizeTaskName_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline       const Darabonba::Json & getCheckpoint() const { DARABONBA_GET(checkpoint_) };
      Darabonba::Json & getCheckpoint() { DARABONBA_GET(checkpoint_) };
      inline OptimizeTasks& setCheckpoint(const Darabonba::Json & checkpoint) { DARABONBA_SET_VALUE(checkpoint_, checkpoint) };
      inline OptimizeTasks& setCheckpoint(Darabonba::Json && checkpoint) { DARABONBA_SET_RVALUE(checkpoint_, checkpoint) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline       const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
      Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
      inline OptimizeTasks& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
      inline OptimizeTasks& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline OptimizeTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // nextTriggerTime Field Functions 
      bool hasNextTriggerTime() const { return this->nextTriggerTime_ != nullptr;};
      void deleteNextTriggerTime() { this->nextTriggerTime_ = nullptr;};
      inline string getNextTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(nextTriggerTime_, "") };
      inline OptimizeTasks& setNextTriggerTime(string nextTriggerTime) { DARABONBA_PTR_SET_VALUE(nextTriggerTime_, nextTriggerTime) };


      // optimizeTaskName Field Functions 
      bool hasOptimizeTaskName() const { return this->optimizeTaskName_ != nullptr;};
      void deleteOptimizeTaskName() { this->optimizeTaskName_ = nullptr;};
      inline string getOptimizeTaskName() const { DARABONBA_PTR_GET_DEFAULT(optimizeTaskName_, "") };
      inline OptimizeTasks& setOptimizeTaskName(string optimizeTaskName) { DARABONBA_PTR_SET_VALUE(optimizeTaskName_, optimizeTaskName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OptimizeTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OptimizeTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OptimizeTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline OptimizeTasks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The scheduling checkpoint that stores states such as the general scheduling watermark.
      Darabonba::Json checkpoint_ {};
      // The type-specific configuration. For ExperienceMining and SkillOptimize, optional prompts support only inline Markdown, and the body is stored in inputs.prompt.content (non-empty UTF-8, up to 16 KiB).
      Darabonba::Json config_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The next scheduling trigger time.
      shared_ptr<string> nextTriggerTime_ {};
      // The name of the optimization task.
      shared_ptr<string> optimizeTaskName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The task status.
      shared_ptr<string> status_ {};
      // The type of the optimization task. Valid values: ExperienceMining, SkillOptimize, EfficiencyAnalysis, SOPGeneration, EvalMining, PolicyMining, and AssetMining.
      shared_ptr<string> type_ {};
      // The update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->optimizeTasks_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOptimizeTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOptimizeTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // optimizeTasks Field Functions 
    bool hasOptimizeTasks() const { return this->optimizeTasks_ != nullptr;};
    void deleteOptimizeTasks() { this->optimizeTasks_ = nullptr;};
    inline const vector<ListOptimizeTasksResponseBody::OptimizeTasks> & getOptimizeTasks() const { DARABONBA_PTR_GET_CONST(optimizeTasks_, vector<ListOptimizeTasksResponseBody::OptimizeTasks>) };
    inline vector<ListOptimizeTasksResponseBody::OptimizeTasks> getOptimizeTasks() { DARABONBA_PTR_GET(optimizeTasks_, vector<ListOptimizeTasksResponseBody::OptimizeTasks>) };
    inline ListOptimizeTasksResponseBody& setOptimizeTasks(const vector<ListOptimizeTasksResponseBody::OptimizeTasks> & optimizeTasks) { DARABONBA_PTR_SET_VALUE(optimizeTasks_, optimizeTasks) };
    inline ListOptimizeTasksResponseBody& setOptimizeTasks(vector<ListOptimizeTasksResponseBody::OptimizeTasks> && optimizeTasks) { DARABONBA_PTR_SET_RVALUE(optimizeTasks_, optimizeTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOptimizeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOptimizeTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of results per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    // The list of optimization tasks.
    shared_ptr<vector<ListOptimizeTasksResponseBody::OptimizeTasks>> optimizeTasks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total count.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
