// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribePipelineResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBodyResult& obj) { 
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
    DescribePipelineResponseBodyResult() = default ;
    DescribePipelineResponseBodyResult(const DescribePipelineResponseBodyResult &) = default ;
    DescribePipelineResponseBodyResult(DescribePipelineResponseBodyResult &&) = default ;
    DescribePipelineResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBodyResult() = default ;
    DescribePipelineResponseBodyResult& operator=(const DescribePipelineResponseBodyResult &) = default ;
    DescribePipelineResponseBodyResult& operator=(DescribePipelineResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchDelay_ != nullptr
        && this->batchSize_ != nullptr && this->config_ != nullptr && this->description_ != nullptr && this->gmtCreatedTime_ != nullptr && this->gmtUpdateTime_ != nullptr
        && this->pipelineId_ != nullptr && this->pipelineStatus_ != nullptr && this->queueCheckPointWrites_ != nullptr && this->queueMaxBytes_ != nullptr && this->queueType_ != nullptr
        && this->workers_ != nullptr; };
    // batchDelay Field Functions 
    bool hasBatchDelay() const { return this->batchDelay_ != nullptr;};
    void deleteBatchDelay() { this->batchDelay_ = nullptr;};
    inline int32_t batchDelay() const { DARABONBA_PTR_GET_DEFAULT(batchDelay_, 0) };
    inline DescribePipelineResponseBodyResult& setBatchDelay(int32_t batchDelay) { DARABONBA_PTR_SET_VALUE(batchDelay_, batchDelay) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline DescribePipelineResponseBodyResult& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribePipelineResponseBodyResult& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePipelineResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline DescribePipelineResponseBodyResult& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtUpdateTime Field Functions 
    bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
    void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
    inline string gmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
    inline DescribePipelineResponseBodyResult& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline DescribePipelineResponseBodyResult& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineStatus Field Functions 
    bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
    void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
    inline string pipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, "") };
    inline DescribePipelineResponseBodyResult& setPipelineStatus(string pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


    // queueCheckPointWrites Field Functions 
    bool hasQueueCheckPointWrites() const { return this->queueCheckPointWrites_ != nullptr;};
    void deleteQueueCheckPointWrites() { this->queueCheckPointWrites_ = nullptr;};
    inline int32_t queueCheckPointWrites() const { DARABONBA_PTR_GET_DEFAULT(queueCheckPointWrites_, 0) };
    inline DescribePipelineResponseBodyResult& setQueueCheckPointWrites(int32_t queueCheckPointWrites) { DARABONBA_PTR_SET_VALUE(queueCheckPointWrites_, queueCheckPointWrites) };


    // queueMaxBytes Field Functions 
    bool hasQueueMaxBytes() const { return this->queueMaxBytes_ != nullptr;};
    void deleteQueueMaxBytes() { this->queueMaxBytes_ = nullptr;};
    inline int32_t queueMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(queueMaxBytes_, 0) };
    inline DescribePipelineResponseBodyResult& setQueueMaxBytes(int32_t queueMaxBytes) { DARABONBA_PTR_SET_VALUE(queueMaxBytes_, queueMaxBytes) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string queueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline DescribePipelineResponseBodyResult& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline int32_t workers() const { DARABONBA_PTR_GET_DEFAULT(workers_, 0) };
    inline DescribePipelineResponseBodyResult& setWorkers(int32_t workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


  protected:
    // The time when the pipeline was created.
    std::shared_ptr<int32_t> batchDelay_ = nullptr;
    std::shared_ptr<int32_t> batchSize_ = nullptr;
    // The description of the pipeline.
    std::shared_ptr<string> config_ = nullptr;
    // The state of the MPS queue. Valid values:
    // 
    // *   NOT_DEPLOYED: The node is not deployed.
    // *   RUNNING
    // *   DELETED: Deleted. The console does not display this status.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    // The total capacity of the queue in bytes. Unit: MB.
    std::shared_ptr<string> gmtUpdateTime_ = nullptr;
    // Number of queue checkpoint writes.
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> pipelineStatus_ = nullptr;
    // Pipeline batch delay. Unit: milliseconds.
    std::shared_ptr<int32_t> queueCheckPointWrites_ = nullptr;
    // The number of pipeline workers.
    std::shared_ptr<int32_t> queueMaxBytes_ = nullptr;
    // The specific configuration of the pipeline.
    std::shared_ptr<string> queueType_ = nullptr;
    // The size of the pipeline batch.
    std::shared_ptr<int32_t> workers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
