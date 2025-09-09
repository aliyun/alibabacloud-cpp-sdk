// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYACCESSTIMERANGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYACCESSTIMERANGECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyAccessTimeRangeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyAccessTimeRangeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyAccessTimeRangeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
    };
    GetPolicyResponseBodyPolicyAccessTimeRangeConfig() = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfig(const GetPolicyResponseBodyPolicyAccessTimeRangeConfig &) = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfig(GetPolicyResponseBodyPolicyAccessTimeRangeConfig &&) = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyAccessTimeRangeConfig() = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfig& operator=(const GetPolicyResponseBodyPolicyAccessTimeRangeConfig &) = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfig& operator=(GetPolicyResponseBodyPolicyAccessTimeRangeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveTime_ != nullptr; };
    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline const vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime> & effectiveTime() const { DARABONBA_PTR_GET_CONST(effectiveTime_, vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime>) };
    inline vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime> effectiveTime() { DARABONBA_PTR_GET(effectiveTime_, vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime>) };
    inline GetPolicyResponseBodyPolicyAccessTimeRangeConfig& setEffectiveTime(const vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime> & effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };
    inline GetPolicyResponseBodyPolicyAccessTimeRangeConfig& setEffectiveTime(vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime> && effectiveTime) { DARABONBA_PTR_SET_RVALUE(effectiveTime_, effectiveTime) };


  protected:
    // The details of the periods during which logons are allowed.
    std::shared_ptr<vector<Models::GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime>> effectiveTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
