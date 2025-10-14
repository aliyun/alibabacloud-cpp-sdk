// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYALERTLISTALERTESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYALERTLISTALERTESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical.hpp>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo.hpp>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations() = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations(const DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations &) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations(DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations &&) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations() = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& operator=(const DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations &) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& operator=(DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->info_ == nullptr && return this->warn_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical) };
    inline Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& setCritical(const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& setCritical(Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo) };
    inline Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& setInfo(const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& setInfo(Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn) };
    inline Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& setWarn(const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations& setWarn(Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    // The trigger condition for Critical-level alerts.
    std::shared_ptr<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsCritical> critical_ = nullptr;
    // The conditions for triggering Info-level alerts.
    std::shared_ptr<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsInfo> info_ = nullptr;
    // The conditions for triggering Warn-level alerts.
    std::shared_ptr<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
