// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATASCHEDULEDSCALINGRULESSCHEDULEDSCALINGRULESWEEKLYTYPES_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATASCHEDULEDSCALINGRULESSCHEDULEDSCALINGRULESWEEKLYTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes& obj) { 
      DARABONBA_PTR_TO_JSON(WeeklyTypes, weeklyTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(WeeklyTypes, weeklyTypes_);
    };
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes() = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes(const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes &) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes(GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes &&) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes() = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes& operator=(const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes &) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes& operator=(GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->weeklyTypes_ != nullptr; };
    // weeklyTypes Field Functions 
    bool hasWeeklyTypes() const { return this->weeklyTypes_ != nullptr;};
    void deleteWeeklyTypes() { this->weeklyTypes_ = nullptr;};
    inline const vector<string> & weeklyTypes() const { DARABONBA_PTR_GET_CONST(weeklyTypes_, vector<string>) };
    inline vector<string> weeklyTypes() { DARABONBA_PTR_GET(weeklyTypes_, vector<string>) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes& setWeeklyTypes(const vector<string> & weeklyTypes) { DARABONBA_PTR_SET_VALUE(weeklyTypes_, weeklyTypes) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes& setWeeklyTypes(vector<string> && weeklyTypes) { DARABONBA_PTR_SET_RVALUE(weeklyTypes_, weeklyTypes) };


  protected:
    std::shared_ptr<vector<string>> weeklyTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
