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
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, BackfillStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
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
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
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


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline BackfillStrategy& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Specifies whether the backfill policy is enabled. If this parameter is not specified or is set to true, the policy is enabled. If this parameter is set to false, the policy is disabled but the configuration is retained.
    shared_ptr<bool> enabled_ {};
    // The end of the backfill time range, in UNIX millisecond timestamp. Provide a complete time range when you need to manually start a backfill.
    shared_ptr<int64_t> endTime_ {};
    // The start of the backfill time range, in UNIX millisecond timestamp. Provide a complete time range when you need to manually start a backfill.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
