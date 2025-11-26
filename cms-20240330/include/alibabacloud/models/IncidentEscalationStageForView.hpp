// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTESCALATIONSTAGEFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTESCALATIONSTAGEFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EffectTimeRange.hpp>
#include <vector>
#include <alibabacloud/models/NotifyChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEscalationStageForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEscalationStageForView& obj) { 
      DARABONBA_PTR_TO_JSON(cycleNotifyCount, cycleNotifyCount_);
      DARABONBA_PTR_TO_JSON(cycleNotifyInterval, cycleNotifyInterval_);
      DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(notifyChannels, notifyChannels_);
      DARABONBA_PTR_TO_JSON(targetIncidentState, targetIncidentState_);
      DARABONBA_PTR_TO_JSON(triggerDelay, triggerDelay_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEscalationStageForView& obj) { 
      DARABONBA_PTR_FROM_JSON(cycleNotifyCount, cycleNotifyCount_);
      DARABONBA_PTR_FROM_JSON(cycleNotifyInterval, cycleNotifyInterval_);
      DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(notifyChannels, notifyChannels_);
      DARABONBA_PTR_FROM_JSON(targetIncidentState, targetIncidentState_);
      DARABONBA_PTR_FROM_JSON(triggerDelay, triggerDelay_);
    };
    IncidentEscalationStageForView() = default ;
    IncidentEscalationStageForView(const IncidentEscalationStageForView &) = default ;
    IncidentEscalationStageForView(IncidentEscalationStageForView &&) = default ;
    IncidentEscalationStageForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEscalationStageForView() = default ;
    IncidentEscalationStageForView& operator=(const IncidentEscalationStageForView &) = default ;
    IncidentEscalationStageForView& operator=(IncidentEscalationStageForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleNotifyCount_ == nullptr
        && return this->cycleNotifyInterval_ == nullptr && return this->effectTimeRange_ == nullptr && return this->index_ == nullptr && return this->notifyChannels_ == nullptr && return this->targetIncidentState_ == nullptr
        && return this->triggerDelay_ == nullptr; };
    // cycleNotifyCount Field Functions 
    bool hasCycleNotifyCount() const { return this->cycleNotifyCount_ != nullptr;};
    void deleteCycleNotifyCount() { this->cycleNotifyCount_ = nullptr;};
    inline int32_t cycleNotifyCount() const { DARABONBA_PTR_GET_DEFAULT(cycleNotifyCount_, 0) };
    inline IncidentEscalationStageForView& setCycleNotifyCount(int32_t cycleNotifyCount) { DARABONBA_PTR_SET_VALUE(cycleNotifyCount_, cycleNotifyCount) };


    // cycleNotifyInterval Field Functions 
    bool hasCycleNotifyInterval() const { return this->cycleNotifyInterval_ != nullptr;};
    void deleteCycleNotifyInterval() { this->cycleNotifyInterval_ = nullptr;};
    inline int32_t cycleNotifyInterval() const { DARABONBA_PTR_GET_DEFAULT(cycleNotifyInterval_, 0) };
    inline IncidentEscalationStageForView& setCycleNotifyInterval(int32_t cycleNotifyInterval) { DARABONBA_PTR_SET_VALUE(cycleNotifyInterval_, cycleNotifyInterval) };


    // effectTimeRange Field Functions 
    bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
    void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
    inline const EffectTimeRange & effectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, EffectTimeRange) };
    inline EffectTimeRange effectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, EffectTimeRange) };
    inline IncidentEscalationStageForView& setEffectTimeRange(const EffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
    inline IncidentEscalationStageForView& setEffectTimeRange(EffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline IncidentEscalationStageForView& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<NotifyChannel> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<NotifyChannel>) };
    inline vector<NotifyChannel> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<NotifyChannel>) };
    inline IncidentEscalationStageForView& setNotifyChannels(const vector<NotifyChannel> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline IncidentEscalationStageForView& setNotifyChannels(vector<NotifyChannel> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // targetIncidentState Field Functions 
    bool hasTargetIncidentState() const { return this->targetIncidentState_ != nullptr;};
    void deleteTargetIncidentState() { this->targetIncidentState_ = nullptr;};
    inline string targetIncidentState() const { DARABONBA_PTR_GET_DEFAULT(targetIncidentState_, "") };
    inline IncidentEscalationStageForView& setTargetIncidentState(string targetIncidentState) { DARABONBA_PTR_SET_VALUE(targetIncidentState_, targetIncidentState) };


    // triggerDelay Field Functions 
    bool hasTriggerDelay() const { return this->triggerDelay_ != nullptr;};
    void deleteTriggerDelay() { this->triggerDelay_ = nullptr;};
    inline int32_t triggerDelay() const { DARABONBA_PTR_GET_DEFAULT(triggerDelay_, 0) };
    inline IncidentEscalationStageForView& setTriggerDelay(int32_t triggerDelay) { DARABONBA_PTR_SET_VALUE(triggerDelay_, triggerDelay) };


  protected:
    std::shared_ptr<int32_t> cycleNotifyCount_ = nullptr;
    std::shared_ptr<int32_t> cycleNotifyInterval_ = nullptr;
    std::shared_ptr<EffectTimeRange> effectTimeRange_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<vector<NotifyChannel>> notifyChannels_ = nullptr;
    std::shared_ptr<string> targetIncidentState_ = nullptr;
    std::shared_ptr<int32_t> triggerDelay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
