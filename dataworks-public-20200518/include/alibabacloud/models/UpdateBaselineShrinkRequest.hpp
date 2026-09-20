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
    virtual bool empty() const override { return this->alertEnabled_ == nullptr
        && this->alertMarginThreshold_ == nullptr && this->alertSettingsShrink_ == nullptr && this->baselineId_ == nullptr && this->baselineName_ == nullptr && this->baselineType_ == nullptr
        && this->enabled_ == nullptr && this->nodeIds_ == nullptr && this->overtimeSettingsShrink_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr
        && this->projectId_ == nullptr && this->removeNodeIds_ == nullptr; };
    // alertEnabled Field Functions 
    bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
    void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
    inline bool getAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
    inline UpdateBaselineShrinkRequest& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t getAlertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline UpdateBaselineShrinkRequest& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // alertSettingsShrink Field Functions 
    bool hasAlertSettingsShrink() const { return this->alertSettingsShrink_ != nullptr;};
    void deleteAlertSettingsShrink() { this->alertSettingsShrink_ = nullptr;};
    inline string getAlertSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(alertSettingsShrink_, "") };
    inline UpdateBaselineShrinkRequest& setAlertSettingsShrink(string alertSettingsShrink) { DARABONBA_PTR_SET_VALUE(alertSettingsShrink_, alertSettingsShrink) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline UpdateBaselineShrinkRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline UpdateBaselineShrinkRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string getBaselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline UpdateBaselineShrinkRequest& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateBaselineShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline UpdateBaselineShrinkRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // overtimeSettingsShrink Field Functions 
    bool hasOvertimeSettingsShrink() const { return this->overtimeSettingsShrink_ != nullptr;};
    void deleteOvertimeSettingsShrink() { this->overtimeSettingsShrink_ = nullptr;};
    inline string getOvertimeSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(overtimeSettingsShrink_, "") };
    inline UpdateBaselineShrinkRequest& setOvertimeSettingsShrink(string overtimeSettingsShrink) { DARABONBA_PTR_SET_VALUE(overtimeSettingsShrink_, overtimeSettingsShrink) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateBaselineShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateBaselineShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBaselineShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeNodeIds Field Functions 
    bool hasRemoveNodeIds() const { return this->removeNodeIds_ != nullptr;};
    void deleteRemoveNodeIds() { this->removeNodeIds_ = nullptr;};
    inline string getRemoveNodeIds() const { DARABONBA_PTR_GET_DEFAULT(removeNodeIds_, "") };
    inline UpdateBaselineShrinkRequest& setRemoveNodeIds(string removeNodeIds) { DARABONBA_PTR_SET_VALUE(removeNodeIds_, removeNodeIds) };


  protected:
    // Specifies whether alerting is enabled. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> alertEnabled_ {};
    // The baseline alert margin. Unit: minutes.
    shared_ptr<int32_t> alertMarginThreshold_ {};
    // The baseline alert configurations.
    shared_ptr<string> alertSettingsShrink_ {};
    // The ID of the baseline. You can call [ListBaselines](https://help.aliyun.com/document_detail/2261507.html) to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> baselineId_ {};
    // The baseline name.
    shared_ptr<string> baselineName_ {};
    // The baseline type. Valid values:
    // - DAILY: daily baseline.
    // - HOURLY: hourly baseline.
    shared_ptr<string> baselineType_ {};
    // Specifies whether the baseline is enabled. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> enabled_ {};
    // The list of upstream node IDs for the baseline, separated by commas. If there are many nodes, we recommend that you add a virtual node downstream for easier management.
    shared_ptr<string> nodeIds_ {};
    // The baseline committed time configurations.
    shared_ptr<string> overtimeSettingsShrink_ {};
    // The Alibaba Cloud UID of the baseline owner.
    shared_ptr<string> owner_ {};
    // The priority of the baseline. Valid values: 1, 3, 5, 7, and 8.
    shared_ptr<int32_t> priority_ {};
    // The project ID. You can call [ListBaselines](https://help.aliyun.com/document_detail/2261507.html) to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The IDs of nodes to remove from the baseline. Separate multiple IDs with commas (,).
    shared_ptr<string> removeNodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
