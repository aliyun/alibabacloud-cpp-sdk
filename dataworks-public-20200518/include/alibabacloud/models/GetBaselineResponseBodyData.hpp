// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBaselineResponseBodyDataAlertSettings.hpp>
#include <alibabacloud/models/GetBaselineResponseBodyDataOverTimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_TO_JSON(AlertSettings, alertSettings_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(OverTimeSettings, overTimeSettings_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_FROM_JSON(AlertSettings, alertSettings_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(OverTimeSettings, overTimeSettings_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetBaselineResponseBodyData() = default ;
    GetBaselineResponseBodyData(const GetBaselineResponseBodyData &) = default ;
    GetBaselineResponseBodyData(GetBaselineResponseBodyData &&) = default ;
    GetBaselineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineResponseBodyData() = default ;
    GetBaselineResponseBodyData& operator=(const GetBaselineResponseBodyData &) = default ;
    GetBaselineResponseBodyData& operator=(GetBaselineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEnabled_ != nullptr
        && this->alertMarginThreshold_ != nullptr && this->alertSettings_ != nullptr && this->baselineId_ != nullptr && this->baselineName_ != nullptr && this->baselineType_ != nullptr
        && this->enabled_ != nullptr && this->nodeIds_ != nullptr && this->overTimeSettings_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr
        && this->projectId_ != nullptr; };
    // alertEnabled Field Functions 
    bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
    void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
    inline bool alertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
    inline GetBaselineResponseBodyData& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t alertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline GetBaselineResponseBodyData& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // alertSettings Field Functions 
    bool hasAlertSettings() const { return this->alertSettings_ != nullptr;};
    void deleteAlertSettings() { this->alertSettings_ = nullptr;};
    inline const vector<Models::GetBaselineResponseBodyDataAlertSettings> & alertSettings() const { DARABONBA_PTR_GET_CONST(alertSettings_, vector<Models::GetBaselineResponseBodyDataAlertSettings>) };
    inline vector<Models::GetBaselineResponseBodyDataAlertSettings> alertSettings() { DARABONBA_PTR_GET(alertSettings_, vector<Models::GetBaselineResponseBodyDataAlertSettings>) };
    inline GetBaselineResponseBodyData& setAlertSettings(const vector<Models::GetBaselineResponseBodyDataAlertSettings> & alertSettings) { DARABONBA_PTR_SET_VALUE(alertSettings_, alertSettings) };
    inline GetBaselineResponseBodyData& setAlertSettings(vector<Models::GetBaselineResponseBodyDataAlertSettings> && alertSettings) { DARABONBA_PTR_SET_RVALUE(alertSettings_, alertSettings) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline GetBaselineResponseBodyData& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetBaselineResponseBodyData& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline GetBaselineResponseBodyData& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetBaselineResponseBodyData& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<int64_t> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<int64_t>) };
    inline vector<int64_t> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<int64_t>) };
    inline GetBaselineResponseBodyData& setNodeIds(const vector<int64_t> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline GetBaselineResponseBodyData& setNodeIds(vector<int64_t> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // overTimeSettings Field Functions 
    bool hasOverTimeSettings() const { return this->overTimeSettings_ != nullptr;};
    void deleteOverTimeSettings() { this->overTimeSettings_ = nullptr;};
    inline const vector<Models::GetBaselineResponseBodyDataOverTimeSettings> & overTimeSettings() const { DARABONBA_PTR_GET_CONST(overTimeSettings_, vector<Models::GetBaselineResponseBodyDataOverTimeSettings>) };
    inline vector<Models::GetBaselineResponseBodyDataOverTimeSettings> overTimeSettings() { DARABONBA_PTR_GET(overTimeSettings_, vector<Models::GetBaselineResponseBodyDataOverTimeSettings>) };
    inline GetBaselineResponseBodyData& setOverTimeSettings(const vector<Models::GetBaselineResponseBodyDataOverTimeSettings> & overTimeSettings) { DARABONBA_PTR_SET_VALUE(overTimeSettings_, overTimeSettings) };
    inline GetBaselineResponseBodyData& setOverTimeSettings(vector<Models::GetBaselineResponseBodyDataOverTimeSettings> && overTimeSettings) { DARABONBA_PTR_SET_RVALUE(overTimeSettings_, overTimeSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetBaselineResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetBaselineResponseBodyData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBaselineResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // Indicates whether the alerting feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> alertEnabled_ = nullptr;
    // The alert margin threshold. Unit: minutes.
    std::shared_ptr<int32_t> alertMarginThreshold_ = nullptr;
    // The alert settings.
    std::shared_ptr<vector<Models::GetBaselineResponseBodyDataAlertSettings>> alertSettings_ = nullptr;
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The type of the baseline. Valid values:
    // 
    // *   DAILY
    // *   HOURLY
    std::shared_ptr<string> baselineType_ = nullptr;
    // Indicates whether the baseline is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The node IDs.
    std::shared_ptr<vector<int64_t>> nodeIds_ = nullptr;
    // The settings of the committed completion time of the baseline.
    std::shared_ptr<vector<Models::GetBaselineResponseBodyDataOverTimeSettings>> overTimeSettings_ = nullptr;
    // The owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: 1, 3, 5, 7, and 8.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
