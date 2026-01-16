// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINESREQUEST_HPP_
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
  class CreatePipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(trigger, trigger_);
    };
    CreatePipelinesRequest() = default ;
    CreatePipelinesRequest(const CreatePipelinesRequest &) = default ;
    CreatePipelinesRequest(CreatePipelinesRequest &&) = default ;
    CreatePipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelinesRequest() = default ;
    CreatePipelinesRequest& operator=(const CreatePipelinesRequest &) = default ;
    CreatePipelinesRequest& operator=(CreatePipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
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
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchDelay_ == nullptr
        && this->batchSize_ == nullptr && this->config_ == nullptr && this->description_ == nullptr && this->pipelineId_ == nullptr && this->queueCheckPointWrites_ == nullptr
        && this->queueMaxBytes_ == nullptr && this->queueType_ == nullptr && this->workers_ == nullptr; };
      // batchDelay Field Functions 
      bool hasBatchDelay() const { return this->batchDelay_ != nullptr;};
      void deleteBatchDelay() { this->batchDelay_ = nullptr;};
      inline int32_t getBatchDelay() const { DARABONBA_PTR_GET_DEFAULT(batchDelay_, 0) };
      inline Body& setBatchDelay(int32_t batchDelay) { DARABONBA_PTR_SET_VALUE(batchDelay_, batchDelay) };


      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
      inline Body& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Body& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Body& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // queueCheckPointWrites Field Functions 
      bool hasQueueCheckPointWrites() const { return this->queueCheckPointWrites_ != nullptr;};
      void deleteQueueCheckPointWrites() { this->queueCheckPointWrites_ = nullptr;};
      inline int32_t getQueueCheckPointWrites() const { DARABONBA_PTR_GET_DEFAULT(queueCheckPointWrites_, 0) };
      inline Body& setQueueCheckPointWrites(int32_t queueCheckPointWrites) { DARABONBA_PTR_SET_VALUE(queueCheckPointWrites_, queueCheckPointWrites) };


      // queueMaxBytes Field Functions 
      bool hasQueueMaxBytes() const { return this->queueMaxBytes_ != nullptr;};
      void deleteQueueMaxBytes() { this->queueMaxBytes_ = nullptr;};
      inline int32_t getQueueMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(queueMaxBytes_, 0) };
      inline Body& setQueueMaxBytes(int32_t queueMaxBytes) { DARABONBA_PTR_SET_VALUE(queueMaxBytes_, queueMaxBytes) };


      // queueType Field Functions 
      bool hasQueueType() const { return this->queueType_ != nullptr;};
      void deleteQueueType() { this->queueType_ = nullptr;};
      inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
      inline Body& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


      // workers Field Functions 
      bool hasWorkers() const { return this->workers_ != nullptr;};
      void deleteWorkers() { this->workers_ = nullptr;};
      inline int32_t getWorkers() const { DARABONBA_PTR_GET_DEFAULT(workers_, 0) };
      inline Body& setWorkers(int32_t workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


    protected:
      shared_ptr<int32_t> batchDelay_ {};
      shared_ptr<int32_t> batchSize_ {};
      // This parameter is required.
      shared_ptr<string> config_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> pipelineId_ {};
      shared_ptr<int32_t> queueCheckPointWrites_ {};
      shared_ptr<int32_t> queueMaxBytes_ {};
      shared_ptr<string> queueType_ {};
      shared_ptr<int32_t> workers_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->body_ == nullptr && this->trigger_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePipelinesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<CreatePipelinesRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<CreatePipelinesRequest::Body>) };
    inline vector<CreatePipelinesRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<CreatePipelinesRequest::Body>) };
    inline CreatePipelinesRequest& setBody(const vector<CreatePipelinesRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePipelinesRequest& setBody(vector<CreatePipelinesRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline bool getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, false) };
    inline CreatePipelinesRequest& setTrigger(bool trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<CreatePipelinesRequest::Body>> body_ {};
    shared_ptr<bool> trigger_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
