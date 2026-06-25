// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEROLLOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEROLLOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceRolloutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRolloutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Batch, batch_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(Paused, paused_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRolloutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Batch, batch_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
    };
    UpdateServiceRolloutRequest() = default ;
    UpdateServiceRolloutRequest(const UpdateServiceRolloutRequest &) = default ;
    UpdateServiceRolloutRequest(UpdateServiceRolloutRequest &&) = default ;
    UpdateServiceRolloutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRolloutRequest() = default ;
    UpdateServiceRolloutRequest& operator=(const UpdateServiceRolloutRequest &) = default ;
    UpdateServiceRolloutRequest& operator=(UpdateServiceRolloutRequest &&) = default ;
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
      // **Partition value**
      // 
      // - Type: string
      // 
      // - Required: Yes
      // 
      // - Description: The partition value. This parameter specifies the number or percentage of old-version replicas to retain. It supports two formats:
      // 
      //   1. An integer, such as "5", for the number of replicas.
      // 
      //   2. A percentage, such as "50%", for the proportion of replicas.
      // 
      //   Adjustment strategy:
      // 
      //   - Increasing the value rolls back to the previous version by increasing the number of old-version replicas.
      // 
      //   - Decreasing the value continues the rollout by reducing the number of old-version replicas.
      // 
      //   - Setting the value to "0" or "0%" completes the rollout, replacing all old-version replicas.
      // 
      // - Example: 30%
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
      // The number of replicas to update in each batch. This can be an integer or a percentage. The default is `"25%"`.
      shared_ptr<string> batchSize_ {};
      // The interval to wait between batches. Supported units include `s` (seconds), `m` (minutes), and `h` (hours).
      shared_ptr<string> interval_ {};
    };

    virtual bool empty() const override { return this->batch_ == nullptr
        && this->partition_ == nullptr && this->paused_ == nullptr; };
    // batch Field Functions 
    bool hasBatch() const { return this->batch_ != nullptr;};
    void deleteBatch() { this->batch_ = nullptr;};
    inline const UpdateServiceRolloutRequest::Batch & getBatch() const { DARABONBA_PTR_GET_CONST(batch_, UpdateServiceRolloutRequest::Batch) };
    inline UpdateServiceRolloutRequest::Batch getBatch() { DARABONBA_PTR_GET(batch_, UpdateServiceRolloutRequest::Batch) };
    inline UpdateServiceRolloutRequest& setBatch(const UpdateServiceRolloutRequest::Batch & batch) { DARABONBA_PTR_SET_VALUE(batch_, batch) };
    inline UpdateServiceRolloutRequest& setBatch(UpdateServiceRolloutRequest::Batch && batch) { DARABONBA_PTR_SET_RVALUE(batch_, batch) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const UpdateServiceRolloutRequest::Partition & getPartition() const { DARABONBA_PTR_GET_CONST(partition_, UpdateServiceRolloutRequest::Partition) };
    inline UpdateServiceRolloutRequest::Partition getPartition() { DARABONBA_PTR_GET(partition_, UpdateServiceRolloutRequest::Partition) };
    inline UpdateServiceRolloutRequest& setPartition(const UpdateServiceRolloutRequest::Partition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline UpdateServiceRolloutRequest& setPartition(UpdateServiceRolloutRequest::Partition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline bool getPaused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
    inline UpdateServiceRolloutRequest& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


  protected:
    // The batch rollout configuration. This parameter is mutually exclusive with `Partition`.
    // 
    // - Type: object
    // 
    // - Required: No
    // 
    // - Description: The batch rollout configuration for adjusting batch policy parameters. This parameter is mutually exclusive with Partition.
    shared_ptr<UpdateServiceRolloutRequest::Batch> batch_ {};
    // The partition rollout configuration. This parameter is mutually exclusive with `Batch`.
    // 
    // - Type: object
    // 
    // - Required: No
    // 
    // - Description: The partition rollout configuration. This parameter adjusts the parameters for the partition strategy. It is mutually exclusive with `Batch`.
    shared_ptr<UpdateServiceRolloutRequest::Partition> partition_ {};
    // Set to `true` to pause the rollout or `false` to resume it.
    shared_ptr<bool> paused_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
