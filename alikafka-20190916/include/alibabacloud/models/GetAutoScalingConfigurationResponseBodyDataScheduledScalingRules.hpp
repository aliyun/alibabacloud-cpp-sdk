// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATASCHEDULEDSCALINGRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATASCHEDULEDSCALINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduledScalingRules, scheduledScalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduledScalingRules, scheduledScalingRules_);
    };
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules() = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules(const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules &) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules(GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules &&) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules() = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules& operator=(const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules &) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules& operator=(GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scheduledScalingRules_ != nullptr; };
    // scheduledScalingRules Field Functions 
    bool hasScheduledScalingRules() const { return this->scheduledScalingRules_ != nullptr;};
    void deleteScheduledScalingRules() { this->scheduledScalingRules_ = nullptr;};
    inline const vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules> & scheduledScalingRules() const { DARABONBA_PTR_GET_CONST(scheduledScalingRules_, vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules>) };
    inline vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules> scheduledScalingRules() { DARABONBA_PTR_GET(scheduledScalingRules_, vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules>) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules& setScheduledScalingRules(const vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules> & scheduledScalingRules) { DARABONBA_PTR_SET_VALUE(scheduledScalingRules_, scheduledScalingRules) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules& setScheduledScalingRules(vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules> && scheduledScalingRules) { DARABONBA_PTR_SET_RVALUE(scheduledScalingRules_, scheduledScalingRules) };


  protected:
    std::shared_ptr<vector<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules>> scheduledScalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
