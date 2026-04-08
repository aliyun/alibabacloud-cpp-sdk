// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class OvertimeSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OvertimeSettings& obj) { 
        DARABONBA_PTR_TO_JSON(Cycle, cycle_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, OvertimeSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      OvertimeSettings() = default ;
      OvertimeSettings(const OvertimeSettings &) = default ;
      OvertimeSettings(OvertimeSettings &&) = default ;
      OvertimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OvertimeSettings() = default ;
      OvertimeSettings& operator=(const OvertimeSettings &) = default ;
      OvertimeSettings& operator=(OvertimeSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cycle_ == nullptr
        && this->time_ == nullptr; };
      // cycle Field Functions 
      bool hasCycle() const { return this->cycle_ != nullptr;};
      void deleteCycle() { this->cycle_ = nullptr;};
      inline int32_t getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, 0) };
      inline OvertimeSettings& setCycle(int32_t cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline OvertimeSettings& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The cycle that corresponds to the committed completion time. For a day-level baseline, set this parameter to 1. For an hour-level baseline, set this parameter to a value that is no more than 24.
      shared_ptr<int32_t> cycle_ {};
      // The committed completion time in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->alertMarginThreshold_ == nullptr
        && this->baselineName_ == nullptr && this->baselineType_ == nullptr && this->nodeIds_ == nullptr && this->overtimeSettings_ == nullptr && this->owner_ == nullptr
        && this->priority_ == nullptr && this->projectId_ == nullptr; };
    // alertMarginThreshold Field Functions 
    bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
    void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
    inline int32_t getAlertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
    inline CreateBaselineRequest& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline CreateBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // baselineType Field Functions 
    bool hasBaselineType() const { return this->baselineType_ != nullptr;};
    void deleteBaselineType() { this->baselineType_ = nullptr;};
    inline string getBaselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
    inline CreateBaselineRequest& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline CreateBaselineRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // overtimeSettings Field Functions 
    bool hasOvertimeSettings() const { return this->overtimeSettings_ != nullptr;};
    void deleteOvertimeSettings() { this->overtimeSettings_ = nullptr;};
    inline const vector<CreateBaselineRequest::OvertimeSettings> & getOvertimeSettings() const { DARABONBA_PTR_GET_CONST(overtimeSettings_, vector<CreateBaselineRequest::OvertimeSettings>) };
    inline vector<CreateBaselineRequest::OvertimeSettings> getOvertimeSettings() { DARABONBA_PTR_GET(overtimeSettings_, vector<CreateBaselineRequest::OvertimeSettings>) };
    inline CreateBaselineRequest& setOvertimeSettings(const vector<CreateBaselineRequest::OvertimeSettings> & overtimeSettings) { DARABONBA_PTR_SET_VALUE(overtimeSettings_, overtimeSettings) };
    inline CreateBaselineRequest& setOvertimeSettings(vector<CreateBaselineRequest::OvertimeSettings> && overtimeSettings) { DARABONBA_PTR_SET_RVALUE(overtimeSettings_, overtimeSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateBaselineRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateBaselineRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateBaselineRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The alert margin threshold of the baseline. Unit: minutes.
    shared_ptr<int32_t> alertMarginThreshold_ {};
    // The name of the baseline.
    // 
    // This parameter is required.
    shared_ptr<string> baselineName_ {};
    // The type of the baseline. Valid values: DAILY and HOURLY.
    // 
    // This parameter is required.
    shared_ptr<string> baselineType_ {};
    // The ancestor nodes of nodes in the baseline.
    shared_ptr<string> nodeIds_ {};
    // The settings of the committed completion time of the baseline.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateBaselineRequest::OvertimeSettings>> overtimeSettings_ {};
    // The ID of the Alibaba Cloud account used by the baseline owner.
    // 
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // The priority of the baseline. Valid values: {1,3,5,7,8}.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
