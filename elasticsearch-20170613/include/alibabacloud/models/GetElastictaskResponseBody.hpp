// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELASTICTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETELASTICTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetElastictaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElastictaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetElastictaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetElastictaskResponseBody() = default ;
    GetElastictaskResponseBody(const GetElastictaskResponseBody &) = default ;
    GetElastictaskResponseBody(GetElastictaskResponseBody &&) = default ;
    GetElastictaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElastictaskResponseBody() = default ;
    GetElastictaskResponseBody& operator=(const GetElastictaskResponseBody &) = default ;
    GetElastictaskResponseBody& operator=(GetElastictaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(elasticExpansionTask, elasticExpansionTask_);
        DARABONBA_PTR_TO_JSON(elasticShrinkTask, elasticShrinkTask_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(elasticExpansionTask, elasticExpansionTask_);
        DARABONBA_PTR_FROM_JSON(elasticShrinkTask, elasticShrinkTask_);
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
      class ElasticShrinkTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticShrinkTask& obj) { 
          DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(elasticNodeCount, elasticNodeCount_);
          DARABONBA_PTR_TO_JSON(replicaCount, replicaCount_);
          DARABONBA_PTR_TO_JSON(targetIndices, targetIndices_);
          DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticShrinkTask& obj) { 
          DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(elasticNodeCount, elasticNodeCount_);
          DARABONBA_PTR_FROM_JSON(replicaCount, replicaCount_);
          DARABONBA_PTR_FROM_JSON(targetIndices, targetIndices_);
          DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
        };
        ElasticShrinkTask() = default ;
        ElasticShrinkTask(const ElasticShrinkTask &) = default ;
        ElasticShrinkTask(ElasticShrinkTask &&) = default ;
        ElasticShrinkTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticShrinkTask() = default ;
        ElasticShrinkTask& operator=(const ElasticShrinkTask &) = default ;
        ElasticShrinkTask& operator=(ElasticShrinkTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->elasticNodeCount_ == nullptr && this->replicaCount_ == nullptr && this->targetIndices_ == nullptr && this->triggerType_ == nullptr; };
        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline ElasticShrinkTask& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // elasticNodeCount Field Functions 
        bool hasElasticNodeCount() const { return this->elasticNodeCount_ != nullptr;};
        void deleteElasticNodeCount() { this->elasticNodeCount_ = nullptr;};
        inline int32_t getElasticNodeCount() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeCount_, 0) };
        inline ElasticShrinkTask& setElasticNodeCount(int32_t elasticNodeCount) { DARABONBA_PTR_SET_VALUE(elasticNodeCount_, elasticNodeCount) };


        // replicaCount Field Functions 
        bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
        void deleteReplicaCount() { this->replicaCount_ = nullptr;};
        inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
        inline ElasticShrinkTask& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


        // targetIndices Field Functions 
        bool hasTargetIndices() const { return this->targetIndices_ != nullptr;};
        void deleteTargetIndices() { this->targetIndices_ = nullptr;};
        inline const vector<string> & getTargetIndices() const { DARABONBA_PTR_GET_CONST(targetIndices_, vector<string>) };
        inline vector<string> getTargetIndices() { DARABONBA_PTR_GET(targetIndices_, vector<string>) };
        inline ElasticShrinkTask& setTargetIndices(const vector<string> & targetIndices) { DARABONBA_PTR_SET_VALUE(targetIndices_, targetIndices) };
        inline ElasticShrinkTask& setTargetIndices(vector<string> && targetIndices) { DARABONBA_PTR_SET_RVALUE(targetIndices_, targetIndices) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline ElasticShrinkTask& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      protected:
        shared_ptr<string> cronExpression_ {};
        shared_ptr<int32_t> elasticNodeCount_ {};
        shared_ptr<int32_t> replicaCount_ {};
        shared_ptr<vector<string>> targetIndices_ {};
        shared_ptr<string> triggerType_ {};
      };

      class ElasticExpansionTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticExpansionTask& obj) { 
          DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(elasticNodeCount, elasticNodeCount_);
          DARABONBA_PTR_TO_JSON(replicaCount, replicaCount_);
          DARABONBA_PTR_TO_JSON(targetIndices, targetIndices_);
          DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticExpansionTask& obj) { 
          DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(elasticNodeCount, elasticNodeCount_);
          DARABONBA_PTR_FROM_JSON(replicaCount, replicaCount_);
          DARABONBA_PTR_FROM_JSON(targetIndices, targetIndices_);
          DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
        };
        ElasticExpansionTask() = default ;
        ElasticExpansionTask(const ElasticExpansionTask &) = default ;
        ElasticExpansionTask(ElasticExpansionTask &&) = default ;
        ElasticExpansionTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticExpansionTask() = default ;
        ElasticExpansionTask& operator=(const ElasticExpansionTask &) = default ;
        ElasticExpansionTask& operator=(ElasticExpansionTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->elasticNodeCount_ == nullptr && this->replicaCount_ == nullptr && this->targetIndices_ == nullptr && this->triggerType_ == nullptr; };
        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline ElasticExpansionTask& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // elasticNodeCount Field Functions 
        bool hasElasticNodeCount() const { return this->elasticNodeCount_ != nullptr;};
        void deleteElasticNodeCount() { this->elasticNodeCount_ = nullptr;};
        inline int32_t getElasticNodeCount() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeCount_, 0) };
        inline ElasticExpansionTask& setElasticNodeCount(int32_t elasticNodeCount) { DARABONBA_PTR_SET_VALUE(elasticNodeCount_, elasticNodeCount) };


        // replicaCount Field Functions 
        bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
        void deleteReplicaCount() { this->replicaCount_ = nullptr;};
        inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
        inline ElasticExpansionTask& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


        // targetIndices Field Functions 
        bool hasTargetIndices() const { return this->targetIndices_ != nullptr;};
        void deleteTargetIndices() { this->targetIndices_ = nullptr;};
        inline const vector<string> & getTargetIndices() const { DARABONBA_PTR_GET_CONST(targetIndices_, vector<string>) };
        inline vector<string> getTargetIndices() { DARABONBA_PTR_GET(targetIndices_, vector<string>) };
        inline ElasticExpansionTask& setTargetIndices(const vector<string> & targetIndices) { DARABONBA_PTR_SET_VALUE(targetIndices_, targetIndices) };
        inline ElasticExpansionTask& setTargetIndices(vector<string> && targetIndices) { DARABONBA_PTR_SET_RVALUE(targetIndices_, targetIndices) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline ElasticExpansionTask& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      protected:
        shared_ptr<string> cronExpression_ {};
        shared_ptr<int32_t> elasticNodeCount_ {};
        shared_ptr<int32_t> replicaCount_ {};
        shared_ptr<vector<string>> targetIndices_ {};
        shared_ptr<string> triggerType_ {};
      };

      virtual bool empty() const override { return this->elasticExpansionTask_ == nullptr
        && this->elasticShrinkTask_ == nullptr; };
      // elasticExpansionTask Field Functions 
      bool hasElasticExpansionTask() const { return this->elasticExpansionTask_ != nullptr;};
      void deleteElasticExpansionTask() { this->elasticExpansionTask_ = nullptr;};
      inline const Result::ElasticExpansionTask & getElasticExpansionTask() const { DARABONBA_PTR_GET_CONST(elasticExpansionTask_, Result::ElasticExpansionTask) };
      inline Result::ElasticExpansionTask getElasticExpansionTask() { DARABONBA_PTR_GET(elasticExpansionTask_, Result::ElasticExpansionTask) };
      inline Result& setElasticExpansionTask(const Result::ElasticExpansionTask & elasticExpansionTask) { DARABONBA_PTR_SET_VALUE(elasticExpansionTask_, elasticExpansionTask) };
      inline Result& setElasticExpansionTask(Result::ElasticExpansionTask && elasticExpansionTask) { DARABONBA_PTR_SET_RVALUE(elasticExpansionTask_, elasticExpansionTask) };


      // elasticShrinkTask Field Functions 
      bool hasElasticShrinkTask() const { return this->elasticShrinkTask_ != nullptr;};
      void deleteElasticShrinkTask() { this->elasticShrinkTask_ = nullptr;};
      inline const Result::ElasticShrinkTask & getElasticShrinkTask() const { DARABONBA_PTR_GET_CONST(elasticShrinkTask_, Result::ElasticShrinkTask) };
      inline Result::ElasticShrinkTask getElasticShrinkTask() { DARABONBA_PTR_GET(elasticShrinkTask_, Result::ElasticShrinkTask) };
      inline Result& setElasticShrinkTask(const Result::ElasticShrinkTask & elasticShrinkTask) { DARABONBA_PTR_SET_VALUE(elasticShrinkTask_, elasticShrinkTask) };
      inline Result& setElasticShrinkTask(Result::ElasticShrinkTask && elasticShrinkTask) { DARABONBA_PTR_SET_RVALUE(elasticShrinkTask_, elasticShrinkTask) };


    protected:
      shared_ptr<Result::ElasticExpansionTask> elasticExpansionTask_ {};
      shared_ptr<Result::ElasticShrinkTask> elasticShrinkTask_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetElastictaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetElastictaskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetElastictaskResponseBody::Result) };
    inline GetElastictaskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetElastictaskResponseBody::Result) };
    inline GetElastictaskResponseBody& setResult(const GetElastictaskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetElastictaskResponseBody& setResult(GetElastictaskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetElastictaskResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
