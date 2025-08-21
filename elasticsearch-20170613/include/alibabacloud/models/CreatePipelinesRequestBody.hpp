// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINESREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINESREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreatePipelinesRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelinesRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(batchDelay, batchDelay_);
      DARABONBA_PTR_TO_JSON(batchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(queueCheckPointWrites, queueCheckPointWrites_);
      DARABONBA_PTR_TO_JSON(queueMaxBytes, queueMaxBytes_);
      DARABONBA_PTR_TO_JSON(queueType, queueType_);
      DARABONBA_PTR_TO_JSON(workers, workers_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelinesRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(batchDelay, batchDelay_);
      DARABONBA_PTR_FROM_JSON(batchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(queueCheckPointWrites, queueCheckPointWrites_);
      DARABONBA_PTR_FROM_JSON(queueMaxBytes, queueMaxBytes_);
      DARABONBA_PTR_FROM_JSON(queueType, queueType_);
      DARABONBA_PTR_FROM_JSON(workers, workers_);
    };
    CreatePipelinesRequestBody() = default ;
    CreatePipelinesRequestBody(const CreatePipelinesRequestBody &) = default ;
    CreatePipelinesRequestBody(CreatePipelinesRequestBody &&) = default ;
    CreatePipelinesRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelinesRequestBody() = default ;
    CreatePipelinesRequestBody& operator=(const CreatePipelinesRequestBody &) = default ;
    CreatePipelinesRequestBody& operator=(CreatePipelinesRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchDelay_ != nullptr
        && this->batchSize_ != nullptr && this->config_ != nullptr && this->description_ != nullptr && this->pipelineId_ != nullptr && this->queueCheckPointWrites_ != nullptr
        && this->queueMaxBytes_ != nullptr && this->queueType_ != nullptr && this->workers_ != nullptr; };
    // batchDelay Field Functions 
    bool hasBatchDelay() const { return this->batchDelay_ != nullptr;};
    void deleteBatchDelay() { this->batchDelay_ = nullptr;};
    inline int32_t batchDelay() const { DARABONBA_PTR_GET_DEFAULT(batchDelay_, 0) };
    inline CreatePipelinesRequestBody& setBatchDelay(int32_t batchDelay) { DARABONBA_PTR_SET_VALUE(batchDelay_, batchDelay) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline CreatePipelinesRequestBody& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreatePipelinesRequestBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePipelinesRequestBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline CreatePipelinesRequestBody& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // queueCheckPointWrites Field Functions 
    bool hasQueueCheckPointWrites() const { return this->queueCheckPointWrites_ != nullptr;};
    void deleteQueueCheckPointWrites() { this->queueCheckPointWrites_ = nullptr;};
    inline int32_t queueCheckPointWrites() const { DARABONBA_PTR_GET_DEFAULT(queueCheckPointWrites_, 0) };
    inline CreatePipelinesRequestBody& setQueueCheckPointWrites(int32_t queueCheckPointWrites) { DARABONBA_PTR_SET_VALUE(queueCheckPointWrites_, queueCheckPointWrites) };


    // queueMaxBytes Field Functions 
    bool hasQueueMaxBytes() const { return this->queueMaxBytes_ != nullptr;};
    void deleteQueueMaxBytes() { this->queueMaxBytes_ = nullptr;};
    inline int32_t queueMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(queueMaxBytes_, 0) };
    inline CreatePipelinesRequestBody& setQueueMaxBytes(int32_t queueMaxBytes) { DARABONBA_PTR_SET_VALUE(queueMaxBytes_, queueMaxBytes) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string queueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline CreatePipelinesRequestBody& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline int32_t workers() const { DARABONBA_PTR_GET_DEFAULT(workers_, 0) };
    inline CreatePipelinesRequestBody& setWorkers(int32_t workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


  protected:
    std::shared_ptr<int32_t> batchDelay_ = nullptr;
    std::shared_ptr<int32_t> batchSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<int32_t> queueCheckPointWrites_ = nullptr;
    std::shared_ptr<int32_t> queueMaxBytes_ = nullptr;
    std::shared_ptr<string> queueType_ = nullptr;
    std::shared_ptr<int32_t> workers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
