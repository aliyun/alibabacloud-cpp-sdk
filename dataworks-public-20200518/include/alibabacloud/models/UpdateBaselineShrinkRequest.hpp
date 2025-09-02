// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASELINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASELINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateBaselineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBaselineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_TO_JSON(AlertSettings, alertSettingsShrink_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(OvertimeSettings, overtimeSettingsShrink_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemoveNodeIds, removeNodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBaselineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_FROM_JSON(AlertSettings, alertSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(OvertimeSettings, overtimeSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemoveNodeIds, removeNodeIds_);
    };
    UpdateBaselineShrinkRequest() = default ;
    UpdateBaselineShrinkRequest(const UpdateBaselineShrinkRequest &) = default ;
    UpdateBaselineShrinkRequest(UpdateBaselineShrinkRequest &&) = default ;
    UpdateBaselineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBaselineShrinkRequest() = default ;
    UpdateBaselineShrinkRequest& operator=(const UpdateBaselineShrinkRequest &) = default ;
    UpdateBaselineShrinkRequest& operator=(UpdateBaselineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEnabled_ != nullptr
        && this->alertMarginThreshold_ != nullptr && this->alertSettingsShrink_ != nullptr && this->baselineId_ != nullptr && this->baselineName_ != nullptr && this->baselineType_ != nullptr
        && this->enabled_ != nullptr && this->nodeIds_ != nullptr && this->overtimeSettingsShrink_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr
        && this->projectId_ != nullptr && this->removeNodeIds_ != nullptr; };
    // alertEnabled Field Functions 
    bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
    void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
    inline bool alertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
    inline UpdateBaselineShrinkRequest& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t alertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline UpdateBaselineShrinkRequest& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // alertSettingsShrink Field Functions 
    bool hasAlertSettingsShrink() const { return this->alertSettingsShrink_ != nullptr;};
    void deleteAlertSettingsShrink() { this->alertSettingsShrink_ = nullptr;};
    inline string alertSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(alertSettingsShrink_, "") };
    inline UpdateBaselineShrinkRequest& setAlertSettingsShrink(string alertSettingsShrink) { DARABONBA_PTR_SET_VALUE(alertSettingsShrink_, alertSettingsShrink) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline UpdateBaselineShrinkRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline UpdateBaselineShrinkRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline UpdateBaselineShrinkRequest& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateBaselineShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string nodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline UpdateBaselineShrinkRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // overtimeSettingsShrink Field Functions 
    bool hasOvertimeSettingsShrink() const { return this->overtimeSettingsShrink_ != nullptr;};
    void deleteOvertimeSettingsShrink() { this->overtimeSettingsShrink_ = nullptr;};
    inline string overtimeSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(overtimeSettingsShrink_, "") };
    inline UpdateBaselineShrinkRequest& setOvertimeSettingsShrink(string overtimeSettingsShrink) { DARABONBA_PTR_SET_VALUE(overtimeSettingsShrink_, overtimeSettingsShrink) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateBaselineShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateBaselineShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBaselineShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeNodeIds Field Functions 
    bool hasRemoveNodeIds() const { return this->removeNodeIds_ != nullptr;};
    void deleteRemoveNodeIds() { this->removeNodeIds_ = nullptr;};
    inline string removeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(removeNodeIds_, "") };
    inline UpdateBaselineShrinkRequest& setRemoveNodeIds(string removeNodeIds) { DARABONBA_PTR_SET_VALUE(removeNodeIds_, removeNodeIds) };


  protected:
    // Specifies whether to enable the alerting feature. Valid values: true and false.
    std::shared_ptr<bool> alertEnabled_ = nullptr;
    // The alert margin threshold of the baseline. Unit: minutes.
    std::shared_ptr<int32_t> alertMarginThreshold_ = nullptr;
    // The alert settings of the baseline.
    std::shared_ptr<string> alertSettingsShrink_ = nullptr;
    // The baseline ID. You can call the [ListBaselines](https://help.aliyun.com/document_detail/2261507.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The type of the baseline. Valid values: DAILY and HOURLY.
    std::shared_ptr<string> baselineType_ = nullptr;
    // Specifies whether to enable the baseline. Valid values: true and false.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ancestor nodes of nodes in the baseline. Separate the ancestor nodes with commas (,). If a large number of ancestor nodes exist, we recommend that you create a zero load node and configure the zero load node as the descendant node of nodes in the baseline to facilitate node management.
    std::shared_ptr<string> nodeIds_ = nullptr;
    // The settings of the committed completion time of the baseline.
    std::shared_ptr<string> overtimeSettingsShrink_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: {1,3,5,7,8}.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The workspace ID. You can call the [ListBaselines](https://help.aliyun.com/document_detail/2261507.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The ID of the node that you want to disassociate from the baseline. You can specify multiple node IDs. Separate multiple node IDs with commas (,).
    std::shared_ptr<string> removeNodeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
