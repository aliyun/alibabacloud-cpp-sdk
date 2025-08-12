// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations(const DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations(DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->info_ != nullptr && this->warn_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& setCritical(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& setCritical(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& setInfo(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& setInfo(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& setWarn(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations& setWarn(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    // The conditions for triggering Critical-level alerts.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsCritical> critical_ = nullptr;
    // The conditions for triggering Info-level alerts.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsInfo> info_ = nullptr;
    // The conditions for triggering Warn-level alerts.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
