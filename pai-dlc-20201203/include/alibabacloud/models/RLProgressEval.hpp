// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSEVAL_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSEVAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressEval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressEval& obj) { 
      DARABONBA_PTR_TO_JSON(Done, done_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(Pct, pct_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressEval& obj) { 
      DARABONBA_PTR_FROM_JSON(Done, done_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(Pct, pct_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RLProgressEval() = default ;
    RLProgressEval(const RLProgressEval &) = default ;
    RLProgressEval(RLProgressEval &&) = default ;
    RLProgressEval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressEval() = default ;
    RLProgressEval& operator=(const RLProgressEval &) = default ;
    RLProgressEval& operator=(RLProgressEval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->done_ == nullptr
        && this->finished_ == nullptr && this->pct_ == nullptr && this->progress_ == nullptr && this->ready_ == nullptr && this->total_ == nullptr; };
    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline RLProgressEval& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline int32_t getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0) };
    inline RLProgressEval& setFinished(int32_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // pct Field Functions 
    bool hasPct() const { return this->pct_ != nullptr;};
    void deletePct() { this->pct_ = nullptr;};
    inline double getPct() const { DARABONBA_PTR_GET_DEFAULT(pct_, 0.0) };
    inline RLProgressEval& setPct(double pct) { DARABONBA_PTR_SET_VALUE(pct_, pct) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline RLProgressEval& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
    inline RLProgressEval& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RLProgressEval& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Indicates whether Total is greater than 0 and Finished is not less than Total.
    shared_ptr<bool> done_ {};
    // The number of finished samples.
    shared_ptr<int32_t> finished_ {};
    // The progress percentage, which is the ratio of Progress to Total.
    shared_ptr<double> pct_ {};
    // The progress count, which is the greater value of Ready and Finished.
    shared_ptr<int32_t> progress_ {};
    // The number of ready samples.
    shared_ptr<int32_t> ready_ {};
    // The target number of samples.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
