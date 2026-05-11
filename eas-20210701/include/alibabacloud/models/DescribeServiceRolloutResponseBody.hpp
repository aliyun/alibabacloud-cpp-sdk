// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEROLLOUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEROLLOUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceRolloutResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceRolloutResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rollout, rollout_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceRolloutResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rollout, rollout_);
    };
    DescribeServiceRolloutResponseBody() = default ;
    DescribeServiceRolloutResponseBody(const DescribeServiceRolloutResponseBody &) = default ;
    DescribeServiceRolloutResponseBody(DescribeServiceRolloutResponseBody &&) = default ;
    DescribeServiceRolloutResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceRolloutResponseBody() = default ;
    DescribeServiceRolloutResponseBody& operator=(const DescribeServiceRolloutResponseBody &) = default ;
    DescribeServiceRolloutResponseBody& operator=(DescribeServiceRolloutResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rollout : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rollout& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, Rollout& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      };
      Rollout() = default ;
      Rollout(const Rollout &) = default ;
      Rollout(Rollout &&) = default ;
      Rollout(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rollout() = default ;
      Rollout& operator=(const Rollout &) = default ;
      Rollout& operator=(Rollout &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Strategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
          DARABONBA_PTR_TO_JSON(Batch, batch_);
          DARABONBA_PTR_TO_JSON(Partition, partition_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(Batch, batch_);
          DARABONBA_PTR_FROM_JSON(Partition, partition_);
        };
        Strategy() = default ;
        Strategy(const Strategy &) = default ;
        Strategy(Strategy &&) = default ;
        Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategy() = default ;
        Strategy& operator=(const Strategy &) = default ;
        Strategy& operator=(Strategy &&) = default ;
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
        && this->partition_ == nullptr; };
        // batch Field Functions 
        bool hasBatch() const { return this->batch_ != nullptr;};
        void deleteBatch() { this->batch_ = nullptr;};
        inline const Strategy::Batch & getBatch() const { DARABONBA_PTR_GET_CONST(batch_, Strategy::Batch) };
        inline Strategy::Batch getBatch() { DARABONBA_PTR_GET(batch_, Strategy::Batch) };
        inline Strategy& setBatch(const Strategy::Batch & batch) { DARABONBA_PTR_SET_VALUE(batch_, batch) };
        inline Strategy& setBatch(Strategy::Batch && batch) { DARABONBA_PTR_SET_RVALUE(batch_, batch) };


        // partition Field Functions 
        bool hasPartition() const { return this->partition_ != nullptr;};
        void deletePartition() { this->partition_ = nullptr;};
        inline const Strategy::Partition & getPartition() const { DARABONBA_PTR_GET_CONST(partition_, Strategy::Partition) };
        inline Strategy::Partition getPartition() { DARABONBA_PTR_GET(partition_, Strategy::Partition) };
        inline Strategy& setPartition(const Strategy::Partition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
        inline Strategy& setPartition(Strategy::Partition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


      protected:
        shared_ptr<Strategy::Batch> batch_ {};
        shared_ptr<Strategy::Partition> partition_ {};
      };

      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentRevision, currentRevision_);
          DARABONBA_PTR_TO_JSON(NextBatchStartTime, nextBatchStartTime_);
          DARABONBA_PTR_TO_JSON(Phase, phase_);
          DARABONBA_PTR_TO_JSON(TotalReplicas, totalReplicas_);
          DARABONBA_PTR_TO_JSON(UpdateRevision, updateRevision_);
          DARABONBA_PTR_TO_JSON(UpdatedReplicas, updatedReplicas_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentRevision, currentRevision_);
          DARABONBA_PTR_FROM_JSON(NextBatchStartTime, nextBatchStartTime_);
          DARABONBA_PTR_FROM_JSON(Phase, phase_);
          DARABONBA_PTR_FROM_JSON(TotalReplicas, totalReplicas_);
          DARABONBA_PTR_FROM_JSON(UpdateRevision, updateRevision_);
          DARABONBA_PTR_FROM_JSON(UpdatedReplicas, updatedReplicas_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentRevision_ == nullptr
        && this->nextBatchStartTime_ == nullptr && this->phase_ == nullptr && this->totalReplicas_ == nullptr && this->updateRevision_ == nullptr && this->updatedReplicas_ == nullptr; };
        // currentRevision Field Functions 
        bool hasCurrentRevision() const { return this->currentRevision_ != nullptr;};
        void deleteCurrentRevision() { this->currentRevision_ = nullptr;};
        inline string getCurrentRevision() const { DARABONBA_PTR_GET_DEFAULT(currentRevision_, "") };
        inline Status& setCurrentRevision(string currentRevision) { DARABONBA_PTR_SET_VALUE(currentRevision_, currentRevision) };


        // nextBatchStartTime Field Functions 
        bool hasNextBatchStartTime() const { return this->nextBatchStartTime_ != nullptr;};
        void deleteNextBatchStartTime() { this->nextBatchStartTime_ = nullptr;};
        inline string getNextBatchStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextBatchStartTime_, "") };
        inline Status& setNextBatchStartTime(string nextBatchStartTime) { DARABONBA_PTR_SET_VALUE(nextBatchStartTime_, nextBatchStartTime) };


        // phase Field Functions 
        bool hasPhase() const { return this->phase_ != nullptr;};
        void deletePhase() { this->phase_ = nullptr;};
        inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
        inline Status& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


        // totalReplicas Field Functions 
        bool hasTotalReplicas() const { return this->totalReplicas_ != nullptr;};
        void deleteTotalReplicas() { this->totalReplicas_ = nullptr;};
        inline int32_t getTotalReplicas() const { DARABONBA_PTR_GET_DEFAULT(totalReplicas_, 0) };
        inline Status& setTotalReplicas(int32_t totalReplicas) { DARABONBA_PTR_SET_VALUE(totalReplicas_, totalReplicas) };


        // updateRevision Field Functions 
        bool hasUpdateRevision() const { return this->updateRevision_ != nullptr;};
        void deleteUpdateRevision() { this->updateRevision_ = nullptr;};
        inline string getUpdateRevision() const { DARABONBA_PTR_GET_DEFAULT(updateRevision_, "") };
        inline Status& setUpdateRevision(string updateRevision) { DARABONBA_PTR_SET_VALUE(updateRevision_, updateRevision) };


        // updatedReplicas Field Functions 
        bool hasUpdatedReplicas() const { return this->updatedReplicas_ != nullptr;};
        void deleteUpdatedReplicas() { this->updatedReplicas_ = nullptr;};
        inline int32_t getUpdatedReplicas() const { DARABONBA_PTR_GET_DEFAULT(updatedReplicas_, 0) };
        inline Status& setUpdatedReplicas(int32_t updatedReplicas) { DARABONBA_PTR_SET_VALUE(updatedReplicas_, updatedReplicas) };


      protected:
        shared_ptr<string> currentRevision_ {};
        shared_ptr<string> nextBatchStartTime_ {};
        shared_ptr<string> phase_ {};
        shared_ptr<int32_t> totalReplicas_ {};
        shared_ptr<string> updateRevision_ {};
        shared_ptr<int32_t> updatedReplicas_ {};
      };

      virtual bool empty() const override { return this->status_ == nullptr
        && this->strategy_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const Rollout::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, Rollout::Status) };
      inline Rollout::Status getStatus() { DARABONBA_PTR_GET(status_, Rollout::Status) };
      inline Rollout& setStatus(const Rollout::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Rollout& setStatus(Rollout::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline const Rollout::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, Rollout::Strategy) };
      inline Rollout::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, Rollout::Strategy) };
      inline Rollout& setStrategy(const Rollout::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
      inline Rollout& setStrategy(Rollout::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    protected:
      shared_ptr<Rollout::Status> status_ {};
      shared_ptr<Rollout::Strategy> strategy_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rollout_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceRolloutResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rollout Field Functions 
    bool hasRollout() const { return this->rollout_ != nullptr;};
    void deleteRollout() { this->rollout_ = nullptr;};
    inline const DescribeServiceRolloutResponseBody::Rollout & getRollout() const { DARABONBA_PTR_GET_CONST(rollout_, DescribeServiceRolloutResponseBody::Rollout) };
    inline DescribeServiceRolloutResponseBody::Rollout getRollout() { DARABONBA_PTR_GET(rollout_, DescribeServiceRolloutResponseBody::Rollout) };
    inline DescribeServiceRolloutResponseBody& setRollout(const DescribeServiceRolloutResponseBody::Rollout & rollout) { DARABONBA_PTR_SET_VALUE(rollout_, rollout) };
    inline DescribeServiceRolloutResponseBody& setRollout(DescribeServiceRolloutResponseBody::Rollout && rollout) { DARABONBA_PTR_SET_RVALUE(rollout_, rollout) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeServiceRolloutResponseBody::Rollout> rollout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
