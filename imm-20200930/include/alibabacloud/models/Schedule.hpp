// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Schedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Schedule& obj) { 
      DARABONBA_PTR_TO_JSON(Gamma, gamma_);
      DARABONBA_PTR_TO_JSON(LRScheduler, LRScheduler_);
      DARABONBA_PTR_TO_JSON(StepSize, stepSize_);
    };
    friend void from_json(const Darabonba::Json& j, Schedule& obj) { 
      DARABONBA_PTR_FROM_JSON(Gamma, gamma_);
      DARABONBA_PTR_FROM_JSON(LRScheduler, LRScheduler_);
      DARABONBA_PTR_FROM_JSON(StepSize, stepSize_);
    };
    Schedule() = default ;
    Schedule(const Schedule &) = default ;
    Schedule(Schedule &&) = default ;
    Schedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Schedule() = default ;
    Schedule& operator=(const Schedule &) = default ;
    Schedule& operator=(Schedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gamma_ == nullptr
        && this->LRScheduler_ == nullptr && this->stepSize_ == nullptr; };
    // gamma Field Functions 
    bool hasGamma() const { return this->gamma_ != nullptr;};
    void deleteGamma() { this->gamma_ = nullptr;};
    inline float getGamma() const { DARABONBA_PTR_GET_DEFAULT(gamma_, 0.0) };
    inline Schedule& setGamma(float gamma) { DARABONBA_PTR_SET_VALUE(gamma_, gamma) };


    // LRScheduler Field Functions 
    bool hasLRScheduler() const { return this->LRScheduler_ != nullptr;};
    void deleteLRScheduler() { this->LRScheduler_ = nullptr;};
    inline string getLRScheduler() const { DARABONBA_PTR_GET_DEFAULT(LRScheduler_, "") };
    inline Schedule& setLRScheduler(string LRScheduler) { DARABONBA_PTR_SET_VALUE(LRScheduler_, LRScheduler) };


    // stepSize Field Functions 
    bool hasStepSize() const { return this->stepSize_ != nullptr;};
    void deleteStepSize() { this->stepSize_ = nullptr;};
    inline int64_t getStepSize() const { DARABONBA_PTR_GET_DEFAULT(stepSize_, 0L) };
    inline Schedule& setStepSize(int64_t stepSize) { DARABONBA_PTR_SET_VALUE(stepSize_, stepSize) };


  protected:
    // The learning rate decay. This parameter takes effect only when LRScheduler is set to StepLR.
    shared_ptr<float> gamma_ {};
    // The learning rate scheduler.
    shared_ptr<string> LRScheduler_ {};
    // The number of epochs the learning rate is changed after. This parameter takes effect only when LRScheduler is set to StepLR.
    shared_ptr<int64_t> stepSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
