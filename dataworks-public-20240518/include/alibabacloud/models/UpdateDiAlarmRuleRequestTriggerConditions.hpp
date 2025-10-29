// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUESTTRIGGERCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUESTTRIGGERCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIAlarmRuleRequestTriggerConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIAlarmRuleRequestTriggerConditions& obj) { 
      DARABONBA_PTR_TO_JSON(DdlReportTags, ddlReportTags_);
      DARABONBA_PTR_TO_JSON(DdlTypes, ddlTypes_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIAlarmRuleRequestTriggerConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(DdlReportTags, ddlReportTags_);
      DARABONBA_PTR_FROM_JSON(DdlTypes, ddlTypes_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateDIAlarmRuleRequestTriggerConditions() = default ;
    UpdateDIAlarmRuleRequestTriggerConditions(const UpdateDIAlarmRuleRequestTriggerConditions &) = default ;
    UpdateDIAlarmRuleRequestTriggerConditions(UpdateDIAlarmRuleRequestTriggerConditions &&) = default ;
    UpdateDIAlarmRuleRequestTriggerConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIAlarmRuleRequestTriggerConditions() = default ;
    UpdateDIAlarmRuleRequestTriggerConditions& operator=(const UpdateDIAlarmRuleRequestTriggerConditions &) = default ;
    UpdateDIAlarmRuleRequestTriggerConditions& operator=(UpdateDIAlarmRuleRequestTriggerConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ddlReportTags_ == nullptr
        && return this->ddlTypes_ == nullptr && return this->duration_ == nullptr && return this->severity_ == nullptr && return this->threshold_ == nullptr; };
    // ddlReportTags Field Functions 
    bool hasDdlReportTags() const { return this->ddlReportTags_ != nullptr;};
    void deleteDdlReportTags() { this->ddlReportTags_ = nullptr;};
    inline const vector<string> & ddlReportTags() const { DARABONBA_PTR_GET_CONST(ddlReportTags_, vector<string>) };
    inline vector<string> ddlReportTags() { DARABONBA_PTR_GET(ddlReportTags_, vector<string>) };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setDdlReportTags(const vector<string> & ddlReportTags) { DARABONBA_PTR_SET_VALUE(ddlReportTags_, ddlReportTags) };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setDdlReportTags(vector<string> && ddlReportTags) { DARABONBA_PTR_SET_RVALUE(ddlReportTags_, ddlReportTags) };


    // ddlTypes Field Functions 
    bool hasDdlTypes() const { return this->ddlTypes_ != nullptr;};
    void deleteDdlTypes() { this->ddlTypes_ = nullptr;};
    inline const vector<string> & ddlTypes() const { DARABONBA_PTR_GET_CONST(ddlTypes_, vector<string>) };
    inline vector<string> ddlTypes() { DARABONBA_PTR_GET(ddlTypes_, vector<string>) };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setDdlTypes(const vector<string> & ddlTypes) { DARABONBA_PTR_SET_VALUE(ddlTypes_, ddlTypes) };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setDdlTypes(vector<string> && ddlTypes) { DARABONBA_PTR_SET_RVALUE(ddlTypes_, ddlTypes) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int64_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
    inline UpdateDIAlarmRuleRequestTriggerConditions& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // This parameter is deprecated and replaced by the DdlTypes parameter.
    std::shared_ptr<vector<string>> ddlReportTags_ = nullptr;
    // The types of DDL operations for which the alert rule takes effect.
    std::shared_ptr<vector<string>> ddlTypes_ = nullptr;
    // The time interval for alert calculation. Unit: minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The severity level. Valid values:
    // 
    // *   Warning
    // *   Critical
    std::shared_ptr<string> severity_ = nullptr;
    // The alert threshold.
    // 
    // *   If the alert rule is for task status, you do not need to specify a threshold.
    // *   If the alert rule is for failovers, you must specify the number of failovers.
    // *   If the alert rule is for latency, you must specify the latency duration, in seconds.
    std::shared_ptr<int64_t> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
