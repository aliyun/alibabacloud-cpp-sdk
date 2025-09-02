// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINESRESPONSEBODYDATABASELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINESRESPONSEBODYDATABASELINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBaselinesResponseBodyDataBaselinesOverTimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselinesResponseBodyDataBaselines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselinesResponseBodyDataBaselines& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(OverTimeSettings, overTimeSettings_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselinesResponseBodyDataBaselines& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(OverTimeSettings, overTimeSettings_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListBaselinesResponseBodyDataBaselines() = default ;
    ListBaselinesResponseBodyDataBaselines(const ListBaselinesResponseBodyDataBaselines &) = default ;
    ListBaselinesResponseBodyDataBaselines(ListBaselinesResponseBodyDataBaselines &&) = default ;
    ListBaselinesResponseBodyDataBaselines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselinesResponseBodyDataBaselines() = default ;
    ListBaselinesResponseBodyDataBaselines& operator=(const ListBaselinesResponseBodyDataBaselines &) = default ;
    ListBaselinesResponseBodyDataBaselines& operator=(ListBaselinesResponseBodyDataBaselines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEnabled_ != nullptr
        && this->alertMarginThreshold_ != nullptr && this->baselineId_ != nullptr && this->baselineName_ != nullptr && this->baselineType_ != nullptr && this->enabled_ != nullptr
        && this->overTimeSettings_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr && this->projectId_ != nullptr; };
    // alertEnabled Field Functions 
    bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
    void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
    inline bool alertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
    inline ListBaselinesResponseBodyDataBaselines& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t alertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline ListBaselinesResponseBodyDataBaselines& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListBaselinesResponseBodyDataBaselines& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline ListBaselinesResponseBodyDataBaselines& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline ListBaselinesResponseBodyDataBaselines& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListBaselinesResponseBodyDataBaselines& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // overTimeSettings Field Functions 
    bool hasOverTimeSettings() const { return this->overTimeSettings_ != nullptr;};
    void deleteOverTimeSettings() { this->overTimeSettings_ = nullptr;};
    inline const vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings> & overTimeSettings() const { DARABONBA_PTR_GET_CONST(overTimeSettings_, vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings>) };
    inline vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings> overTimeSettings() { DARABONBA_PTR_GET(overTimeSettings_, vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings>) };
    inline ListBaselinesResponseBodyDataBaselines& setOverTimeSettings(const vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings> & overTimeSettings) { DARABONBA_PTR_SET_VALUE(overTimeSettings_, overTimeSettings) };
    inline ListBaselinesResponseBodyDataBaselines& setOverTimeSettings(vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings> && overTimeSettings) { DARABONBA_PTR_SET_RVALUE(overTimeSettings_, overTimeSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListBaselinesResponseBodyDataBaselines& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListBaselinesResponseBodyDataBaselines& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListBaselinesResponseBodyDataBaselines& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // Indicates whether the alerting feature is enabled. Valid values: true and false.
    std::shared_ptr<bool> alertEnabled_ = nullptr;
    // The alert margin threshold for the baseline instance. Unit: minutes.
    std::shared_ptr<int32_t> alertMarginThreshold_ = nullptr;
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The type of the baseline. Valid values: DAILY and HOURLY.
    std::shared_ptr<string> baselineType_ = nullptr;
    // Indicates whether the baseline is enabled. Valid values: true and false.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The settings of the committed completion time of the baseline.
    std::shared_ptr<vector<Models::ListBaselinesResponseBodyDataBaselinesOverTimeSettings>> overTimeSettings_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs can be specified. The IDs are separated by commas (,).
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: {1,2,5,7,8}.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the workspace to which the baseline belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
