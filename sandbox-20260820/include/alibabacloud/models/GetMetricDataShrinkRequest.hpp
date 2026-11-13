// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETRICDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETRICDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class GetMetricDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_TO_JSON(metricNames, metricNamesShrink_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_TO_JSON(sandboxPlan, sandboxPlan_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_FROM_JSON(metricNames, metricNamesShrink_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_FROM_JSON(sandboxPlan, sandboxPlan_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetMetricDataShrinkRequest() = default ;
    GetMetricDataShrinkRequest(const GetMetricDataShrinkRequest &) = default ;
    GetMetricDataShrinkRequest(GetMetricDataShrinkRequest &&) = default ;
    GetMetricDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetricDataShrinkRequest() = default ;
    GetMetricDataShrinkRequest& operator=(const GetMetricDataShrinkRequest &) = default ;
    GetMetricDataShrinkRequest& operator=(GetMetricDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->groupByShrink_ == nullptr && this->metricNamesShrink_ == nullptr && this->period_ == nullptr && this->sandboxID_ == nullptr && this->sandboxPlan_ == nullptr
        && this->startTime_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr && this->time_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMetricDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupByShrink Field Functions 
    bool hasGroupByShrink() const { return this->groupByShrink_ != nullptr;};
    void deleteGroupByShrink() { this->groupByShrink_ = nullptr;};
    inline string getGroupByShrink() const { DARABONBA_PTR_GET_DEFAULT(groupByShrink_, "") };
    inline GetMetricDataShrinkRequest& setGroupByShrink(string groupByShrink) { DARABONBA_PTR_SET_VALUE(groupByShrink_, groupByShrink) };


    // metricNamesShrink Field Functions 
    bool hasMetricNamesShrink() const { return this->metricNamesShrink_ != nullptr;};
    void deleteMetricNamesShrink() { this->metricNamesShrink_ = nullptr;};
    inline string getMetricNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(metricNamesShrink_, "") };
    inline GetMetricDataShrinkRequest& setMetricNamesShrink(string metricNamesShrink) { DARABONBA_PTR_SET_VALUE(metricNamesShrink_, metricNamesShrink) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline GetMetricDataShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // sandboxID Field Functions 
    bool hasSandboxID() const { return this->sandboxID_ != nullptr;};
    void deleteSandboxID() { this->sandboxID_ = nullptr;};
    inline string getSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sandboxID_, "") };
    inline GetMetricDataShrinkRequest& setSandboxID(string sandboxID) { DARABONBA_PTR_SET_VALUE(sandboxID_, sandboxID) };


    // sandboxPlan Field Functions 
    bool hasSandboxPlan() const { return this->sandboxPlan_ != nullptr;};
    void deleteSandboxPlan() { this->sandboxPlan_ = nullptr;};
    inline string getSandboxPlan() const { DARABONBA_PTR_GET_DEFAULT(sandboxPlan_, "") };
    inline GetMetricDataShrinkRequest& setSandboxPlan(string sandboxPlan) { DARABONBA_PTR_SET_VALUE(sandboxPlan_, sandboxPlan) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMetricDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline GetMetricDataShrinkRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline GetMetricDataShrinkRequest& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetMetricDataShrinkRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // 时序查询的结束时间，区间不含此时刻。使用 UTC 整秒时间，须晚于 startTime。一次最多查询 7 天。区间须包含至少一个按 period 对齐的时间点，且这些时间点不能晚于当前时间。
    shared_ptr<string> endTime_ {};
    // 例如，按 teamID 分组可分别查看各团队的指标。可组合最多 4 个不同的分组键，可用键因指标而异。不填时返回查询范围的整体结果。
    shared_ptr<string> groupByShrink_ {};
    // 要查询的指标名称。一次可查询 1～16 个不同的指标。可选指标和查询范围见指标目录。
    // 
    // This parameter is required.
    shared_ptr<string> metricNamesShrink_ {};
    // 时序查询的时间间隔，单位为秒。可选 60、300、900、1800、3600、86400。60 对应整分钟，86400 对应每日 UTC 零点。部分统计指标的计算时长随间隔变化。
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // 要查询的沙箱 ID。请同时填写所属的 teamID 和 templateID，并选择支持按沙箱查询的指标。
    shared_ptr<string> sandboxID_ {};
    // 按沙箱版本查询沙箱数量。仅适用于 sandboxCount，可选 eco、std、pro、ent。
    shared_ptr<string> sandboxPlan_ {};
    // 时序查询的开始时间，包含此时刻。请按示例填写 UTC 时间，精确到秒，并同时填写 endTime。
    shared_ptr<string> startTime_ {};
    // 要查询的团队 ID。不填时查询当前账号。
    shared_ptr<string> teamID_ {};
    // 要查询的模板 ID。请同时填写模板所属的 teamID。
    shared_ptr<string> templateID_ {};
    // 查询某一时刻时，只填写 time。请按示例填写当前或过去的 UTC 时间，精确到秒。省略所有时间参数时，查询当前时刻。
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
