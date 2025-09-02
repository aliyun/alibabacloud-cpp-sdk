// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBaselineRequestAlertSettings.hpp>
#include <alibabacloud/models/UpdateBaselineRequestOvertimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_TO_JSON(AlertSettings, alertSettings_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(OvertimeSettings, overtimeSettings_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemoveNodeIds, removeNodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
      DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_FROM_JSON(AlertSettings, alertSettings_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(OvertimeSettings, overtimeSettings_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemoveNodeIds, removeNodeIds_);
    };
    UpdateBaselineRequest() = default ;
    UpdateBaselineRequest(const UpdateBaselineRequest &) = default ;
    UpdateBaselineRequest(UpdateBaselineRequest &&) = default ;
    UpdateBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBaselineRequest() = default ;
    UpdateBaselineRequest& operator=(const UpdateBaselineRequest &) = default ;
    UpdateBaselineRequest& operator=(UpdateBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEnabled_ != nullptr
        && this->alertMarginThreshold_ != nullptr && this->alertSettings_ != nullptr && this->baselineId_ != nullptr && this->baselineName_ != nullptr && this->baselineType_ != nullptr
        && this->enabled_ != nullptr && this->nodeIds_ != nullptr && this->overtimeSettings_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr
        && this->projectId_ != nullptr && this->removeNodeIds_ != nullptr; };
    // alertEnabled Field Functions 
    bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
    void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
    inline bool alertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
    inline UpdateBaselineRequest& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t alertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline UpdateBaselineRequest& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // alertSettings Field Functions 
    bool hasAlertSettings() const { return this->alertSettings_ != nullptr;};
    void deleteAlertSettings() { this->alertSettings_ = nullptr;};
    inline const vector<UpdateBaselineRequestAlertSettings> & alertSettings() const { DARABONBA_PTR_GET_CONST(alertSettings_, vector<UpdateBaselineRequestAlertSettings>) };
    inline vector<UpdateBaselineRequestAlertSettings> alertSettings() { DARABONBA_PTR_GET(alertSettings_, vector<UpdateBaselineRequestAlertSettings>) };
    inline UpdateBaselineRequest& setAlertSettings(const vector<UpdateBaselineRequestAlertSettings> & alertSettings) { DARABONBA_PTR_SET_VALUE(alertSettings_, alertSettings) };
    inline UpdateBaselineRequest& setAlertSettings(vector<UpdateBaselineRequestAlertSettings> && alertSettings) { DARABONBA_PTR_SET_RVALUE(alertSettings_, alertSettings) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline UpdateBaselineRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline UpdateBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline UpdateBaselineRequest& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateBaselineRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string nodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline UpdateBaselineRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // overtimeSettings Field Functions 
    bool hasOvertimeSettings() const { return this->overtimeSettings_ != nullptr;};
    void deleteOvertimeSettings() { this->overtimeSettings_ = nullptr;};
    inline const vector<UpdateBaselineRequestOvertimeSettings> & overtimeSettings() const { DARABONBA_PTR_GET_CONST(overtimeSettings_, vector<UpdateBaselineRequestOvertimeSettings>) };
    inline vector<UpdateBaselineRequestOvertimeSettings> overtimeSettings() { DARABONBA_PTR_GET(overtimeSettings_, vector<UpdateBaselineRequestOvertimeSettings>) };
    inline UpdateBaselineRequest& setOvertimeSettings(const vector<UpdateBaselineRequestOvertimeSettings> & overtimeSettings) { DARABONBA_PTR_SET_VALUE(overtimeSettings_, overtimeSettings) };
    inline UpdateBaselineRequest& setOvertimeSettings(vector<UpdateBaselineRequestOvertimeSettings> && overtimeSettings) { DARABONBA_PTR_SET_RVALUE(overtimeSettings_, overtimeSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateBaselineRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateBaselineRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBaselineRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeNodeIds Field Functions 
    bool hasRemoveNodeIds() const { return this->removeNodeIds_ != nullptr;};
    void deleteRemoveNodeIds() { this->removeNodeIds_ = nullptr;};
    inline string removeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(removeNodeIds_, "") };
    inline UpdateBaselineRequest& setRemoveNodeIds(string removeNodeIds) { DARABONBA_PTR_SET_VALUE(removeNodeIds_, removeNodeIds) };


  protected:
    // Specifies whether to enable the alerting feature. Valid values: true and false.
    std::shared_ptr<bool> alertEnabled_ = nullptr;
    // The alert margin threshold of the baseline. Unit: minutes.
    std::shared_ptr<int32_t> alertMarginThreshold_ = nullptr;
    // The alert settings of the baseline.
    std::shared_ptr<vector<UpdateBaselineRequestAlertSettings>> alertSettings_ = nullptr;
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
    std::shared_ptr<vector<UpdateBaselineRequestOvertimeSettings>> overtimeSettings_ = nullptr;
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
