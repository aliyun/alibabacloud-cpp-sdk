// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODYDATAINTERVENERULEDETAILEFFECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENERULEDETAILRESPONSEBODYDATAINTERVENERULEDETAILEFFECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EffectType, effectType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectType, effectType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig() = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig(const GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig &) = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig(GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig &&) = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig() = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& operator=(const GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig &) = default ;
    GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& operator=(GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectType_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // effectType Field Functions 
    bool hasEffectType() const { return this->effectType_ != nullptr;};
    void deleteEffectType() { this->effectType_ = nullptr;};
    inline int32_t effectType() const { DARABONBA_PTR_GET_DEFAULT(effectType_, 0) };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& setEffectType(int32_t effectType) { DARABONBA_PTR_SET_VALUE(effectType_, effectType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInterveneRuleDetailResponseBodyDataInterveneRuleDetailEffectConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int32_t> effectType_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
