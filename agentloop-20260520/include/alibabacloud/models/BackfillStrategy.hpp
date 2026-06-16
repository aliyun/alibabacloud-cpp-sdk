// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKFILLSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_BACKFILLSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class BackfillStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackfillStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(immediate, immediate_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, BackfillStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(immediate, immediate_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    BackfillStrategy() = default ;
    BackfillStrategy(const BackfillStrategy &) = default ;
    BackfillStrategy(BackfillStrategy &&) = default ;
    BackfillStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackfillStrategy() = default ;
    BackfillStrategy& operator=(const BackfillStrategy &) = default ;
    BackfillStrategy& operator=(BackfillStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->endTime_ == nullptr && this->immediate_ == nullptr && this->startTime_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline BackfillStrategy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline BackfillStrategy& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // immediate Field Functions 
    bool hasImmediate() const { return this->immediate_ != nullptr;};
    void deleteImmediate() { this->immediate_ = nullptr;};
    inline bool getImmediate() const { DARABONBA_PTR_GET_DEFAULT(immediate_, false) };
    inline BackfillStrategy& setImmediate(bool immediate) { DARABONBA_PTR_SET_VALUE(immediate_, immediate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline BackfillStrategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<bool> enabled_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<bool> immediate_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
