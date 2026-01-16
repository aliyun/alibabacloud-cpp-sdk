// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribePipelineResponseBody() = default ;
    DescribePipelineResponseBody(const DescribePipelineResponseBody &) = default ;
    DescribePipelineResponseBody(DescribePipelineResponseBody &&) = default ;
    DescribePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBody() = default ;
    DescribePipelineResponseBody& operator=(const DescribePipelineResponseBody &) = default ;
    DescribePipelineResponseBody& operator=(DescribePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(batchDelay, batchDelay_);
        DARABONBA_PTR_TO_JSON(batchSize, batchSize_);
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreatedTime, gmtCreatedTime_);
        DARABONBA_PTR_TO_JSON(gmtUpdateTime, gmtUpdateTime_);
        DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(pipelineStatus, pipelineStatus_);
        DARABONBA_PTR_TO_JSON(queueCheckPointWrites, queueCheckPointWrites_);
        DARABONBA_PTR_TO_JSON(queueMaxBytes, queueMaxBytes_);
        DARABONBA_PTR_TO_JSON(queueType, queueType_);
        DARABONBA_PTR_TO_JSON(workers, workers_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(batchDelay, batchDelay_);
        DARABONBA_PTR_FROM_JSON(batchSize, batchSize_);
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreatedTime, gmtCreatedTime_);
        DARABONBA_PTR_FROM_JSON(gmtUpdateTime, gmtUpdateTime_);
        DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(pipelineStatus, pipelineStatus_);
        DARABONBA_PTR_FROM_JSON(queueCheckPointWrites, queueCheckPointWrites_);
        DARABONBA_PTR_FROM_JSON(queueMaxBytes, queueMaxBytes_);
        DARABONBA_PTR_FROM_JSON(queueType, queueType_);
        DARABONBA_PTR_FROM_JSON(workers, workers_);
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
      virtual bool empty() const override { return this->batchDelay_ == nullptr
        && this->batchSize_ == nullptr && this->config_ == nullptr && this->description_ == nullptr && this->gmtCreatedTime_ == nullptr && this->gmtUpdateTime_ == nullptr
        && this->pipelineId_ == nullptr && this->pipelineStatus_ == nullptr && this->queueCheckPointWrites_ == nullptr && this->queueMaxBytes_ == nullptr && this->queueType_ == nullptr
        && this->workers_ == nullptr; };
      // batchDelay Field Functions 
      bool hasBatchDelay() const { return this->batchDelay_ != nullptr;};
      void deleteBatchDelay() { this->batchDelay_ = nullptr;};
      inline int32_t getBatchDelay() const { DARABONBA_PTR_GET_DEFAULT(batchDelay_, 0) };
      inline Result& setBatchDelay(int32_t batchDelay) { DARABONBA_PTR_SET_VALUE(batchDelay_, batchDelay) };


      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
      inline Result& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Result& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreatedTime Field Functions 
      bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
      void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
      inline string getGmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
      inline Result& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


      // gmtUpdateTime Field Functions 
      bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
      void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
      inline string getGmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
      inline Result& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Result& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // pipelineStatus Field Functions 
      bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
      void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
      inline string getPipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, "") };
      inline Result& setPipelineStatus(string pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


      // queueCheckPointWrites Field Functions 
      bool hasQueueCheckPointWrites() const { return this->queueCheckPointWrites_ != nullptr;};
      void deleteQueueCheckPointWrites() { this->queueCheckPointWrites_ = nullptr;};
      inline int32_t getQueueCheckPointWrites() const { DARABONBA_PTR_GET_DEFAULT(queueCheckPointWrites_, 0) };
      inline Result& setQueueCheckPointWrites(int32_t queueCheckPointWrites) { DARABONBA_PTR_SET_VALUE(queueCheckPointWrites_, queueCheckPointWrites) };


      // queueMaxBytes Field Functions 
      bool hasQueueMaxBytes() const { return this->queueMaxBytes_ != nullptr;};
      void deleteQueueMaxBytes() { this->queueMaxBytes_ = nullptr;};
      inline int32_t getQueueMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(queueMaxBytes_, 0) };
      inline Result& setQueueMaxBytes(int32_t queueMaxBytes) { DARABONBA_PTR_SET_VALUE(queueMaxBytes_, queueMaxBytes) };


      // queueType Field Functions 
      bool hasQueueType() const { return this->queueType_ != nullptr;};
      void deleteQueueType() { this->queueType_ = nullptr;};
      inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
      inline Result& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


      // workers Field Functions 
      bool hasWorkers() const { return this->workers_ != nullptr;};
      void deleteWorkers() { this->workers_ = nullptr;};
      inline int32_t getWorkers() const { DARABONBA_PTR_GET_DEFAULT(workers_, 0) };
      inline Result& setWorkers(int32_t workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


    protected:
      // The time when the pipeline was created.
      shared_ptr<int32_t> batchDelay_ {};
      shared_ptr<int32_t> batchSize_ {};
      // The description of the pipeline.
      shared_ptr<string> config_ {};
      // The state of the MPS queue. Valid values:
      // 
      // *   NOT_DEPLOYED: The node is not deployed.
      // *   RUNNING
      // *   DELETED: Deleted. The console does not display this status.
      shared_ptr<string> description_ {};
      shared_ptr<string> gmtCreatedTime_ {};
      // The total capacity of the queue in bytes. Unit: MB.
      shared_ptr<string> gmtUpdateTime_ {};
      // Number of queue checkpoint writes.
      shared_ptr<string> pipelineId_ {};
      shared_ptr<string> pipelineStatus_ {};
      // Pipeline batch delay. Unit: milliseconds.
      shared_ptr<int32_t> queueCheckPointWrites_ {};
      // The number of pipeline workers.
      shared_ptr<int32_t> queueMaxBytes_ {};
      // The specific configuration of the pipeline.
      shared_ptr<string> queueType_ {};
      // The size of the pipeline batch.
      shared_ptr<int32_t> workers_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribePipelineResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribePipelineResponseBody::Result) };
    inline DescribePipelineResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribePipelineResponseBody::Result) };
    inline DescribePipelineResponseBody& setResult(const DescribePipelineResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribePipelineResponseBody& setResult(DescribePipelineResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The time when the pipeline was updated.
    shared_ptr<string> requestId_ {};
    // The type of the queue. Valid values:
    // 
    // *   MEMORY: a traditional memory-based queue.
    // *   PERSISTED: disk-based ACKed queue (persistent queue).
    shared_ptr<DescribePipelineResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
