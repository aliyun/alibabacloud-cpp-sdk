// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSBUFFER_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSBUFFER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RLProgressBufferDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressBuffer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressBuffer& obj) { 
      DARABONBA_PTR_TO_JSON(Consumed, consumed_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EtaSec, etaSec_);
      DARABONBA_PTR_TO_JSON(FillRatePerMin, fillRatePerMin_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(Pct, pct_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TrainBatchSize, trainBatchSize_);
      DARABONBA_PTR_TO_JSON(Training, training_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressBuffer& obj) { 
      DARABONBA_PTR_FROM_JSON(Consumed, consumed_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EtaSec, etaSec_);
      DARABONBA_PTR_FROM_JSON(FillRatePerMin, fillRatePerMin_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(Pct, pct_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TrainBatchSize, trainBatchSize_);
      DARABONBA_PTR_FROM_JSON(Training, training_);
    };
    RLProgressBuffer() = default ;
    RLProgressBuffer(const RLProgressBuffer &) = default ;
    RLProgressBuffer(RLProgressBuffer &&) = default ;
    RLProgressBuffer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressBuffer() = default ;
    RLProgressBuffer& operator=(const RLProgressBuffer &) = default ;
    RLProgressBuffer& operator=(RLProgressBuffer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumed_ == nullptr
        && this->detail_ == nullptr && this->etaSec_ == nullptr && this->fillRatePerMin_ == nullptr && this->finished_ == nullptr && this->pct_ == nullptr
        && this->ready_ == nullptr && this->target_ == nullptr && this->trainBatchSize_ == nullptr && this->training_ == nullptr; };
    // consumed Field Functions 
    bool hasConsumed() const { return this->consumed_ != nullptr;};
    void deleteConsumed() { this->consumed_ = nullptr;};
    inline int32_t getConsumed() const { DARABONBA_PTR_GET_DEFAULT(consumed_, 0) };
    inline RLProgressBuffer& setConsumed(int32_t consumed) { DARABONBA_PTR_SET_VALUE(consumed_, consumed) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<RLProgressBufferDetail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<RLProgressBufferDetail>) };
    inline vector<RLProgressBufferDetail> getDetail() { DARABONBA_PTR_GET(detail_, vector<RLProgressBufferDetail>) };
    inline RLProgressBuffer& setDetail(const vector<RLProgressBufferDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline RLProgressBuffer& setDetail(vector<RLProgressBufferDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // etaSec Field Functions 
    bool hasEtaSec() const { return this->etaSec_ != nullptr;};
    void deleteEtaSec() { this->etaSec_ = nullptr;};
    inline int64_t getEtaSec() const { DARABONBA_PTR_GET_DEFAULT(etaSec_, 0L) };
    inline RLProgressBuffer& setEtaSec(int64_t etaSec) { DARABONBA_PTR_SET_VALUE(etaSec_, etaSec) };


    // fillRatePerMin Field Functions 
    bool hasFillRatePerMin() const { return this->fillRatePerMin_ != nullptr;};
    void deleteFillRatePerMin() { this->fillRatePerMin_ = nullptr;};
    inline double getFillRatePerMin() const { DARABONBA_PTR_GET_DEFAULT(fillRatePerMin_, 0.0) };
    inline RLProgressBuffer& setFillRatePerMin(double fillRatePerMin) { DARABONBA_PTR_SET_VALUE(fillRatePerMin_, fillRatePerMin) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline int32_t getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0) };
    inline RLProgressBuffer& setFinished(int32_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // pct Field Functions 
    bool hasPct() const { return this->pct_ != nullptr;};
    void deletePct() { this->pct_ = nullptr;};
    inline double getPct() const { DARABONBA_PTR_GET_DEFAULT(pct_, 0.0) };
    inline RLProgressBuffer& setPct(double pct) { DARABONBA_PTR_SET_VALUE(pct_, pct) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
    inline RLProgressBuffer& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline RLProgressBuffer& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // trainBatchSize Field Functions 
    bool hasTrainBatchSize() const { return this->trainBatchSize_ != nullptr;};
    void deleteTrainBatchSize() { this->trainBatchSize_ = nullptr;};
    inline int32_t getTrainBatchSize() const { DARABONBA_PTR_GET_DEFAULT(trainBatchSize_, 0) };
    inline RLProgressBuffer& setTrainBatchSize(int32_t trainBatchSize) { DARABONBA_PTR_SET_VALUE(trainBatchSize_, trainBatchSize) };


    // training Field Functions 
    bool hasTraining() const { return this->training_ != nullptr;};
    void deleteTraining() { this->training_ = nullptr;};
    inline bool getTraining() const { DARABONBA_PTR_GET_DEFAULT(training_, false) };
    inline RLProgressBuffer& setTraining(bool training) { DARABONBA_PTR_SET_VALUE(training_, training) };


  protected:
    // The total number of consumed samples in incomplete buffers.
    shared_ptr<int32_t> consumed_ {};
    // The buffer details split by tag.
    shared_ptr<vector<RLProgressBufferDetail>> detail_ {};
    // The estimated number of remaining seconds to fill the buffer.
    shared_ptr<int64_t> etaSec_ {};
    // The fill rate in entries per minute, estimated by using the rollout completion rate as a proxy.
    shared_ptr<double> fillRatePerMin_ {};
    // The total number of finished samples in incomplete buffers.
    shared_ptr<int32_t> finished_ {};
    // The readiness percentage, which is the ratio of Ready to Target.
    shared_ptr<double> pct_ {};
    // The total number of ready samples in incomplete buffers.
    shared_ptr<int32_t> ready_ {};
    // The total number of target samples in incomplete buffers.
    shared_ptr<int32_t> target_ {};
    // The configured training batch size.
    shared_ptr<int32_t> trainBatchSize_ {};
    // Indicates whether Consumed is greater than 0, which means the batch has been fetched and the trainer is updating.
    shared_ptr<bool> training_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
