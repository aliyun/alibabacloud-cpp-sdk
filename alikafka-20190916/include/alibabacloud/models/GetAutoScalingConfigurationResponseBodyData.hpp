// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAutoScalingConfigurationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingConfigurationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduledScalingRules, scheduledScalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingConfigurationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduledScalingRules, scheduledScalingRules_);
    };
    GetAutoScalingConfigurationResponseBodyData() = default ;
    GetAutoScalingConfigurationResponseBodyData(const GetAutoScalingConfigurationResponseBodyData &) = default ;
    GetAutoScalingConfigurationResponseBodyData(GetAutoScalingConfigurationResponseBodyData &&) = default ;
    GetAutoScalingConfigurationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingConfigurationResponseBodyData() = default ;
    GetAutoScalingConfigurationResponseBodyData& operator=(const GetAutoScalingConfigurationResponseBodyData &) = default ;
    GetAutoScalingConfigurationResponseBodyData& operator=(GetAutoScalingConfigurationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scheduledScalingRules_ == nullptr; };
    // scheduledScalingRules Field Functions 
    bool hasScheduledScalingRules() const { return this->scheduledScalingRules_ != nullptr;};
    void deleteScheduledScalingRules() { this->scheduledScalingRules_ = nullptr;};
    inline const Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules & scheduledScalingRules() const { DARABONBA_PTR_GET_CONST(scheduledScalingRules_, Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules) };
    inline Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules scheduledScalingRules() { DARABONBA_PTR_GET(scheduledScalingRules_, Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules) };
    inline GetAutoScalingConfigurationResponseBodyData& setScheduledScalingRules(const Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules & scheduledScalingRules) { DARABONBA_PTR_SET_VALUE(scheduledScalingRules_, scheduledScalingRules) };
    inline GetAutoScalingConfigurationResponseBodyData& setScheduledScalingRules(Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules && scheduledScalingRules) { DARABONBA_PTR_SET_RVALUE(scheduledScalingRules_, scheduledScalingRules) };


  protected:
    // The scheduled scaling rules.
    std::shared_ptr<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules> scheduledScalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
