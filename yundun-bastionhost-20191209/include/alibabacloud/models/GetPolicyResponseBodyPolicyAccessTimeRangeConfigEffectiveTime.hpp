// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYACCESSTIMERANGECONFIGEFFECTIVETIME_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYACCESSTIMERANGECONFIGEFFECTIVETIME_HPP_
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
  class GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Hours, hours_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Hours, hours_);
    };
    GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime() = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime(const GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime &) = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime(GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime &&) = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime() = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& operator=(const GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime &) = default ;
    GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& operator=(GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->hours_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const vector<string> & days() const { DARABONBA_PTR_GET_CONST(days_, vector<string>) };
    inline vector<string> days() { DARABONBA_PTR_GET(days_, vector<string>) };
    inline GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& setDays(const vector<string> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& setDays(vector<string> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


    // hours Field Functions 
    bool hasHours() const { return this->hours_ != nullptr;};
    void deleteHours() { this->hours_ = nullptr;};
    inline const vector<string> & hours() const { DARABONBA_PTR_GET_CONST(hours_, vector<string>) };
    inline vector<string> hours() { DARABONBA_PTR_GET(hours_, vector<string>) };
    inline GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& setHours(const vector<string> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
    inline GetPolicyResponseBodyPolicyAccessTimeRangeConfigEffectiveTime& setHours(vector<string> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


  protected:
    // The days of a week on which logons are allowed.
    std::shared_ptr<vector<string>> days_ = nullptr;
    // The time periods during which logons are allowed.
    std::shared_ptr<vector<string>> hours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
