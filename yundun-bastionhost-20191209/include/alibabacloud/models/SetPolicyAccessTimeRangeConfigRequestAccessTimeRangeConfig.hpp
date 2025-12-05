// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUESTACCESSTIMERANGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUESTACCESSTIMERANGECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
    };
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig() = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig(const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig &) = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig(SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig &&) = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig() = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig& operator=(const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig &) = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig& operator=(SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveTime_ == nullptr; };
    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline const vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime> & effectiveTime() const { DARABONBA_PTR_GET_CONST(effectiveTime_, vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime>) };
    inline vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime> effectiveTime() { DARABONBA_PTR_GET(effectiveTime_, vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime>) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig& setEffectiveTime(const vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime> & effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfig& setEffectiveTime(vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime> && effectiveTime) { DARABONBA_PTR_SET_RVALUE(effectiveTime_, effectiveTime) };


  protected:
    // The details about the periods during which users can log on to the assets.
    std::shared_ptr<vector<Models::SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime>> effectiveTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
