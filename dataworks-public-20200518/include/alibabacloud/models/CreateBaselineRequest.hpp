// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateBaselineRequestOvertimeSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(OvertimeSettings, overtimeSettings_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(OvertimeSettings, overtimeSettings_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateBaselineRequest() = default ;
    CreateBaselineRequest(const CreateBaselineRequest &) = default ;
    CreateBaselineRequest(CreateBaselineRequest &&) = default ;
    CreateBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBaselineRequest() = default ;
    CreateBaselineRequest& operator=(const CreateBaselineRequest &) = default ;
    CreateBaselineRequest& operator=(CreateBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertMarginThreshold_ != nullptr
        && this->baselineName_ != nullptr && this->baselineType_ != nullptr && this->nodeIds_ != nullptr && this->overtimeSettings_ != nullptr && this->owner_ != nullptr
        && this->priority_ != nullptr && this->projectId_ != nullptr; };
    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t alertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline CreateBaselineRequest& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline CreateBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string baselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline CreateBaselineRequest& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string nodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline CreateBaselineRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // overtimeSettings Field Functions 
    bool hasOvertimeSettings() const { return this->overtimeSettings_ != nullptr;};
    void deleteOvertimeSettings() { this->overtimeSettings_ = nullptr;};
    inline const vector<CreateBaselineRequestOvertimeSettings> & overtimeSettings() const { DARABONBA_PTR_GET_CONST(overtimeSettings_, vector<CreateBaselineRequestOvertimeSettings>) };
    inline vector<CreateBaselineRequestOvertimeSettings> overtimeSettings() { DARABONBA_PTR_GET(overtimeSettings_, vector<CreateBaselineRequestOvertimeSettings>) };
    inline CreateBaselineRequest& setOvertimeSettings(const vector<CreateBaselineRequestOvertimeSettings> & overtimeSettings) { DARABONBA_PTR_SET_VALUE(overtimeSettings_, overtimeSettings) };
    inline CreateBaselineRequest& setOvertimeSettings(vector<CreateBaselineRequestOvertimeSettings> && overtimeSettings) { DARABONBA_PTR_SET_RVALUE(overtimeSettings_, overtimeSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateBaselineRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateBaselineRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateBaselineRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The alert margin threshold of the baseline. Unit: minutes.
    std::shared_ptr<int32_t> alertMarginThreshold_ = nullptr;
    // The name of the baseline.
    // 
    // This parameter is required.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The type of the baseline. Valid values: DAILY and HOURLY.
    // 
    // This parameter is required.
    std::shared_ptr<string> baselineType_ = nullptr;
    // The ancestor nodes of nodes in the baseline.
    std::shared_ptr<string> nodeIds_ = nullptr;
    // The settings of the committed completion time of the baseline.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateBaselineRequestOvertimeSettings>> overtimeSettings_ = nullptr;
    // The ID of the Alibaba Cloud account used by the baseline owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the baseline. Valid values: {1,3,5,7,8}.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
