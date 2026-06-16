// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_RUNSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BackfillStrategy.hpp>
#include <alibabacloud/models/ContinuousStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class RunStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(backfill, backfill_);
      DARABONBA_PTR_TO_JSON(continuous, continuous_);
    };
    friend void from_json(const Darabonba::Json& j, RunStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(backfill, backfill_);
      DARABONBA_PTR_FROM_JSON(continuous, continuous_);
    };
    RunStrategies() = default ;
    RunStrategies(const RunStrategies &) = default ;
    RunStrategies(RunStrategies &&) = default ;
    RunStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStrategies() = default ;
    RunStrategies& operator=(const RunStrategies &) = default ;
    RunStrategies& operator=(RunStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backfill_ == nullptr
        && this->continuous_ == nullptr; };
    // backfill Field Functions 
    bool hasBackfill() const { return this->backfill_ != nullptr;};
    void deleteBackfill() { this->backfill_ = nullptr;};
    inline const BackfillStrategy & getBackfill() const { DARABONBA_PTR_GET_CONST(backfill_, BackfillStrategy) };
    inline BackfillStrategy getBackfill() { DARABONBA_PTR_GET(backfill_, BackfillStrategy) };
    inline RunStrategies& setBackfill(const BackfillStrategy & backfill) { DARABONBA_PTR_SET_VALUE(backfill_, backfill) };
    inline RunStrategies& setBackfill(BackfillStrategy && backfill) { DARABONBA_PTR_SET_RVALUE(backfill_, backfill) };


    // continuous Field Functions 
    bool hasContinuous() const { return this->continuous_ != nullptr;};
    void deleteContinuous() { this->continuous_ = nullptr;};
    inline const ContinuousStrategy & getContinuous() const { DARABONBA_PTR_GET_CONST(continuous_, ContinuousStrategy) };
    inline ContinuousStrategy getContinuous() { DARABONBA_PTR_GET(continuous_, ContinuousStrategy) };
    inline RunStrategies& setContinuous(const ContinuousStrategy & continuous) { DARABONBA_PTR_SET_VALUE(continuous_, continuous) };
    inline RunStrategies& setContinuous(ContinuousStrategy && continuous) { DARABONBA_PTR_SET_RVALUE(continuous_, continuous) };


  protected:
    shared_ptr<BackfillStrategy> backfill_ {};
    shared_ptr<ContinuousStrategy> continuous_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
