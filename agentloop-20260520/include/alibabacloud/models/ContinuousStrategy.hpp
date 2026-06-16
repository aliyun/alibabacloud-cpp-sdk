// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUOUSSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_CONTINUOUSSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ContinuousStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinuousStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(dataDelayMinutes, dataDelayMinutes_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(intervalUnit, intervalUnit_);
      DARABONBA_PTR_TO_JSON(intervalValue, intervalValue_);
    };
    friend void from_json(const Darabonba::Json& j, ContinuousStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(dataDelayMinutes, dataDelayMinutes_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(intervalUnit, intervalUnit_);
      DARABONBA_PTR_FROM_JSON(intervalValue, intervalValue_);
    };
    ContinuousStrategy() = default ;
    ContinuousStrategy(const ContinuousStrategy &) = default ;
    ContinuousStrategy(ContinuousStrategy &&) = default ;
    ContinuousStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinuousStrategy() = default ;
    ContinuousStrategy& operator=(const ContinuousStrategy &) = default ;
    ContinuousStrategy& operator=(ContinuousStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDelayMinutes_ == nullptr
        && this->enabled_ == nullptr && this->intervalUnit_ == nullptr && this->intervalValue_ == nullptr; };
    // dataDelayMinutes Field Functions 
    bool hasDataDelayMinutes() const { return this->dataDelayMinutes_ != nullptr;};
    void deleteDataDelayMinutes() { this->dataDelayMinutes_ = nullptr;};
    inline int32_t getDataDelayMinutes() const { DARABONBA_PTR_GET_DEFAULT(dataDelayMinutes_, 0) };
    inline ContinuousStrategy& setDataDelayMinutes(int32_t dataDelayMinutes) { DARABONBA_PTR_SET_VALUE(dataDelayMinutes_, dataDelayMinutes) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ContinuousStrategy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // intervalUnit Field Functions 
    bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
    void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
    inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
    inline ContinuousStrategy& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


    // intervalValue Field Functions 
    bool hasIntervalValue() const { return this->intervalValue_ != nullptr;};
    void deleteIntervalValue() { this->intervalValue_ = nullptr;};
    inline int32_t getIntervalValue() const { DARABONBA_PTR_GET_DEFAULT(intervalValue_, 0) };
    inline ContinuousStrategy& setIntervalValue(int32_t intervalValue) { DARABONBA_PTR_SET_VALUE(intervalValue_, intervalValue) };


  protected:
    shared_ptr<int32_t> dataDelayMinutes_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> intervalUnit_ {};
    shared_ptr<int32_t> intervalValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
