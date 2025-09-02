// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATAALARMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATAALARMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList.hpp>
#include <alibabacloud/models/GetDISyncTaskResponseBodyDataAlarmListNotifyRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncTaskResponseBodyDataAlarmList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncTaskResponseBodyDataAlarmList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmRuleList, alarmRuleList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(NotifyRule, notifyRule_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncTaskResponseBodyDataAlarmList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmRuleList, alarmRuleList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(NotifyRule, notifyRule_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    GetDISyncTaskResponseBodyDataAlarmList() = default ;
    GetDISyncTaskResponseBodyDataAlarmList(const GetDISyncTaskResponseBodyDataAlarmList &) = default ;
    GetDISyncTaskResponseBodyDataAlarmList(GetDISyncTaskResponseBodyDataAlarmList &&) = default ;
    GetDISyncTaskResponseBodyDataAlarmList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncTaskResponseBodyDataAlarmList() = default ;
    GetDISyncTaskResponseBodyDataAlarmList& operator=(const GetDISyncTaskResponseBodyDataAlarmList &) = default ;
    GetDISyncTaskResponseBodyDataAlarmList& operator=(GetDISyncTaskResponseBodyDataAlarmList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmRuleList_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->id_ != nullptr && this->metric_ != nullptr && this->notifyRule_ != nullptr
        && this->ruleName_ != nullptr; };
    // alarmRuleList Field Functions 
    bool hasAlarmRuleList() const { return this->alarmRuleList_ != nullptr;};
    void deleteAlarmRuleList() { this->alarmRuleList_ = nullptr;};
    inline const vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList> & alarmRuleList() const { DARABONBA_PTR_GET_CONST(alarmRuleList_, vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList>) };
    inline vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList> alarmRuleList() { DARABONBA_PTR_GET(alarmRuleList_, vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList>) };
    inline GetDISyncTaskResponseBodyDataAlarmList& setAlarmRuleList(const vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList> & alarmRuleList) { DARABONBA_PTR_SET_VALUE(alarmRuleList_, alarmRuleList) };
    inline GetDISyncTaskResponseBodyDataAlarmList& setAlarmRuleList(vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList> && alarmRuleList) { DARABONBA_PTR_SET_RVALUE(alarmRuleList_, alarmRuleList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDISyncTaskResponseBodyDataAlarmList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetDISyncTaskResponseBodyDataAlarmList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDISyncTaskResponseBodyDataAlarmList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline GetDISyncTaskResponseBodyDataAlarmList& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // notifyRule Field Functions 
    bool hasNotifyRule() const { return this->notifyRule_ != nullptr;};
    void deleteNotifyRule() { this->notifyRule_ = nullptr;};
    inline const Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule & notifyRule() const { DARABONBA_PTR_GET_CONST(notifyRule_, Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule) };
    inline Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule notifyRule() { DARABONBA_PTR_GET(notifyRule_, Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule) };
    inline GetDISyncTaskResponseBodyDataAlarmList& setNotifyRule(const Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule & notifyRule) { DARABONBA_PTR_SET_VALUE(notifyRule_, notifyRule) };
    inline GetDISyncTaskResponseBodyDataAlarmList& setNotifyRule(Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule && notifyRule) { DARABONBA_PTR_SET_RVALUE(notifyRule_, notifyRule) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetDISyncTaskResponseBodyDataAlarmList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The alert notification settings. The value of this parameter is an array.
    std::shared_ptr<vector<Models::GetDISyncTaskResponseBodyDataAlarmListAlarmRuleList>> alarmRuleList_ = nullptr;
    // The description of the alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the alert rule is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The alert type. Valid values:
    // 
    // *   taskStatus
    // *   bizDelay
    // *   taskFailoverCount
    // *   ddlUnsupport
    // *   ddlReport
    // *   totalDirtyRecordWriteInLines
    std::shared_ptr<string> metric_ = nullptr;
    // The settings for alert notification rules. The value of this parameter is an array.
    std::shared_ptr<Models::GetDISyncTaskResponseBodyDataAlarmListNotifyRule> notifyRule_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
