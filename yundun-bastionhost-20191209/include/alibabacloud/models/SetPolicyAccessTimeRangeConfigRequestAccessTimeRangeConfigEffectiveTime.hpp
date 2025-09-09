// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUESTACCESSTIMERANGECONFIGEFFECTIVETIME_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUESTACCESSTIMERANGECONFIGEFFECTIVETIME_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Hours, hours_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Hours, hours_);
    };
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime() = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime(const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime &) = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime(SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime &&) = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime() = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& operator=(const SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime &) = default ;
    SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& operator=(SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->hours_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const vector<int32_t> & days() const { DARABONBA_PTR_GET_CONST(days_, vector<int32_t>) };
    inline vector<int32_t> days() { DARABONBA_PTR_GET(days_, vector<int32_t>) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& setDays(const vector<int32_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& setDays(vector<int32_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


    // hours Field Functions 
    bool hasHours() const { return this->hours_ != nullptr;};
    void deleteHours() { this->hours_ = nullptr;};
    inline const vector<int32_t> & hours() const { DARABONBA_PTR_GET_CONST(hours_, vector<int32_t>) };
    inline vector<int32_t> hours() { DARABONBA_PTR_GET(hours_, vector<int32_t>) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& setHours(const vector<int32_t> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
    inline SetPolicyAccessTimeRangeConfigRequestAccessTimeRangeConfigEffectiveTime& setHours(vector<int32_t> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


  protected:
    // The days of the week during which users can log on to the assets.
    std::shared_ptr<vector<int32_t>> days_ = nullptr;
    // The time periods of the day during which users can log on to the assets.
    std::shared_ptr<vector<int32_t>> hours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
