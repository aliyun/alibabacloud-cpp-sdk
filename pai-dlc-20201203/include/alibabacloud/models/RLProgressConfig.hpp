// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressConfig& obj) { 
      DARABONBA_PTR_TO_JSON(NumMinibatches, numMinibatches_);
      DARABONBA_PTR_TO_JSON(PpoMiniBatchSize, ppoMiniBatchSize_);
      DARABONBA_PTR_TO_JSON(RolloutN, rolloutN_);
      DARABONBA_PTR_TO_JSON(TotalSteps, totalSteps_);
      DARABONBA_PTR_TO_JSON(TrainBatchSize, trainBatchSize_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(NumMinibatches, numMinibatches_);
      DARABONBA_PTR_FROM_JSON(PpoMiniBatchSize, ppoMiniBatchSize_);
      DARABONBA_PTR_FROM_JSON(RolloutN, rolloutN_);
      DARABONBA_PTR_FROM_JSON(TotalSteps, totalSteps_);
      DARABONBA_PTR_FROM_JSON(TrainBatchSize, trainBatchSize_);
    };
    RLProgressConfig() = default ;
    RLProgressConfig(const RLProgressConfig &) = default ;
    RLProgressConfig(RLProgressConfig &&) = default ;
    RLProgressConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressConfig() = default ;
    RLProgressConfig& operator=(const RLProgressConfig &) = default ;
    RLProgressConfig& operator=(RLProgressConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->numMinibatches_ == nullptr
        && this->ppoMiniBatchSize_ == nullptr && this->rolloutN_ == nullptr && this->totalSteps_ == nullptr && this->trainBatchSize_ == nullptr; };
    // numMinibatches Field Functions 
    bool hasNumMinibatches() const { return this->numMinibatches_ != nullptr;};
    void deleteNumMinibatches() { this->numMinibatches_ = nullptr;};
    inline int32_t getNumMinibatches() const { DARABONBA_PTR_GET_DEFAULT(numMinibatches_, 0) };
    inline RLProgressConfig& setNumMinibatches(int32_t numMinibatches) { DARABONBA_PTR_SET_VALUE(numMinibatches_, numMinibatches) };


    // ppoMiniBatchSize Field Functions 
    bool hasPpoMiniBatchSize() const { return this->ppoMiniBatchSize_ != nullptr;};
    void deletePpoMiniBatchSize() { this->ppoMiniBatchSize_ = nullptr;};
    inline int32_t getPpoMiniBatchSize() const { DARABONBA_PTR_GET_DEFAULT(ppoMiniBatchSize_, 0) };
    inline RLProgressConfig& setPpoMiniBatchSize(int32_t ppoMiniBatchSize) { DARABONBA_PTR_SET_VALUE(ppoMiniBatchSize_, ppoMiniBatchSize) };


    // rolloutN Field Functions 
    bool hasRolloutN() const { return this->rolloutN_ != nullptr;};
    void deleteRolloutN() { this->rolloutN_ = nullptr;};
    inline int32_t getRolloutN() const { DARABONBA_PTR_GET_DEFAULT(rolloutN_, 0) };
    inline RLProgressConfig& setRolloutN(int32_t rolloutN) { DARABONBA_PTR_SET_VALUE(rolloutN_, rolloutN) };


    // totalSteps Field Functions 
    bool hasTotalSteps() const { return this->totalSteps_ != nullptr;};
    void deleteTotalSteps() { this->totalSteps_ = nullptr;};
    inline int32_t getTotalSteps() const { DARABONBA_PTR_GET_DEFAULT(totalSteps_, 0) };
    inline RLProgressConfig& setTotalSteps(int32_t totalSteps) { DARABONBA_PTR_SET_VALUE(totalSteps_, totalSteps) };


    // trainBatchSize Field Functions 
    bool hasTrainBatchSize() const { return this->trainBatchSize_ != nullptr;};
    void deleteTrainBatchSize() { this->trainBatchSize_ = nullptr;};
    inline int32_t getTrainBatchSize() const { DARABONBA_PTR_GET_DEFAULT(trainBatchSize_, 0) };
    inline RLProgressConfig& setTrainBatchSize(int32_t trainBatchSize) { DARABONBA_PTR_SET_VALUE(trainBatchSize_, trainBatchSize) };


  protected:
    // The number of mini-batches per step.
    shared_ptr<int32_t> numMinibatches_ {};
    // The PPO mini-batch size.
    shared_ptr<int32_t> ppoMiniBatchSize_ {};
    // The number of rollouts per prompt.
    shared_ptr<int32_t> rolloutN_ {};
    // The total number of training steps.
    shared_ptr<int32_t> totalSteps_ {};
    // The training batch size.
    shared_ptr<int32_t> trainBatchSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
