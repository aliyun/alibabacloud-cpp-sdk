// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEROLLOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEROLLOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceRolloutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceRolloutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Batch, batch_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(Paused, paused_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceRolloutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Batch, batch_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
    };
    CreateServiceRolloutRequest() = default ;
    CreateServiceRolloutRequest(const CreateServiceRolloutRequest &) = default ;
    CreateServiceRolloutRequest(CreateServiceRolloutRequest &&) = default ;
    CreateServiceRolloutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceRolloutRequest() = default ;
    CreateServiceRolloutRequest& operator=(const CreateServiceRolloutRequest &) = default ;
    CreateServiceRolloutRequest& operator=(CreateServiceRolloutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Partition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Partition& obj) { 
        DARABONBA_PTR_TO_JSON(Partition, partition_);
      };
      friend void from_json(const Darabonba::Json& j, Partition& obj) { 
        DARABONBA_PTR_FROM_JSON(Partition, partition_);
      };
      Partition() = default ;
      Partition(const Partition &) = default ;
      Partition(Partition &&) = default ;
      Partition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Partition() = default ;
      Partition& operator=(const Partition &) = default ;
      Partition& operator=(Partition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->partition_ == nullptr; };
      // partition Field Functions 
      bool hasPartition() const { return this->partition_ != nullptr;};
      void deletePartition() { this->partition_ = nullptr;};
      inline string getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
      inline Partition& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    protected:
      shared_ptr<string> partition_ {};
    };

    class Batch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Batch& obj) { 
        DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
      };
      friend void from_json(const Darabonba::Json& j, Batch& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
      };
      Batch() = default ;
      Batch(const Batch &) = default ;
      Batch(Batch &&) = default ;
      Batch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Batch() = default ;
      Batch& operator=(const Batch &) = default ;
      Batch& operator=(Batch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchSize_ == nullptr
        && this->interval_ == nullptr; };
      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline string getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, "") };
      inline Batch& setBatchSize(string batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
      inline Batch& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    protected:
      shared_ptr<string> batchSize_ {};
      shared_ptr<string> interval_ {};
    };

    virtual bool empty() const override { return this->batch_ == nullptr
        && this->partition_ == nullptr && this->paused_ == nullptr; };
    // batch Field Functions 
    bool hasBatch() const { return this->batch_ != nullptr;};
    void deleteBatch() { this->batch_ = nullptr;};
    inline const CreateServiceRolloutRequest::Batch & getBatch() const { DARABONBA_PTR_GET_CONST(batch_, CreateServiceRolloutRequest::Batch) };
    inline CreateServiceRolloutRequest::Batch getBatch() { DARABONBA_PTR_GET(batch_, CreateServiceRolloutRequest::Batch) };
    inline CreateServiceRolloutRequest& setBatch(const CreateServiceRolloutRequest::Batch & batch) { DARABONBA_PTR_SET_VALUE(batch_, batch) };
    inline CreateServiceRolloutRequest& setBatch(CreateServiceRolloutRequest::Batch && batch) { DARABONBA_PTR_SET_RVALUE(batch_, batch) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const CreateServiceRolloutRequest::Partition & getPartition() const { DARABONBA_PTR_GET_CONST(partition_, CreateServiceRolloutRequest::Partition) };
    inline CreateServiceRolloutRequest::Partition getPartition() { DARABONBA_PTR_GET(partition_, CreateServiceRolloutRequest::Partition) };
    inline CreateServiceRolloutRequest& setPartition(const CreateServiceRolloutRequest::Partition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline CreateServiceRolloutRequest& setPartition(CreateServiceRolloutRequest::Partition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline bool getPaused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
    inline CreateServiceRolloutRequest& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


  protected:
    shared_ptr<CreateServiceRolloutRequest::Batch> batch_ {};
    shared_ptr<CreateServiceRolloutRequest::Partition> partition_ {};
    shared_ptr<bool> paused_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
