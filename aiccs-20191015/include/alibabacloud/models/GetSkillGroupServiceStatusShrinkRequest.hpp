// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLGROUPSERVICESTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLGROUPSERVICESTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetSkillGroupServiceStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillGroupServiceStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIdsShrink_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExistAgentGrouping, existAgentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistChannelInstanceGrouping, existChannelInstanceGrouping_);
      DARABONBA_PTR_TO_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistRobotInstanceGrouping, existRobotInstanceGrouping_);
      DARABONBA_PTR_TO_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TimeLatitudeType, timeLatitudeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillGroupServiceStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExistAgentGrouping, existAgentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistChannelInstanceGrouping, existChannelInstanceGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistRobotInstanceGrouping, existRobotInstanceGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TimeLatitudeType, timeLatitudeType_);
    };
    GetSkillGroupServiceStatusShrinkRequest() = default ;
    GetSkillGroupServiceStatusShrinkRequest(const GetSkillGroupServiceStatusShrinkRequest &) = default ;
    GetSkillGroupServiceStatusShrinkRequest(GetSkillGroupServiceStatusShrinkRequest &&) = default ;
    GetSkillGroupServiceStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillGroupServiceStatusShrinkRequest() = default ;
    GetSkillGroupServiceStatusShrinkRequest& operator=(const GetSkillGroupServiceStatusShrinkRequest &) = default ;
    GetSkillGroupServiceStatusShrinkRequest& operator=(GetSkillGroupServiceStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIdsShrink_ == nullptr
        && this->currentPage_ == nullptr && this->depIdsShrink_ == nullptr && this->endDate_ == nullptr && this->existAgentGrouping_ == nullptr && this->existChannelInstanceGrouping_ == nullptr
        && this->existDepartmentGrouping_ == nullptr && this->existRobotInstanceGrouping_ == nullptr && this->existSkillGroupGrouping_ == nullptr && this->groupIdsShrink_ == nullptr && this->instanceId_ == nullptr
        && this->pageSize_ == nullptr && this->startDate_ == nullptr && this->timeLatitudeType_ == nullptr; };
    // agentIdsShrink Field Functions 
    bool hasAgentIdsShrink() const { return this->agentIdsShrink_ != nullptr;};
    void deleteAgentIdsShrink() { this->agentIdsShrink_ = nullptr;};
    inline string getAgentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(agentIdsShrink_, "") };
    inline GetSkillGroupServiceStatusShrinkRequest& setAgentIdsShrink(string agentIdsShrink) { DARABONBA_PTR_SET_VALUE(agentIdsShrink_, agentIdsShrink) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetSkillGroupServiceStatusShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIdsShrink Field Functions 
    bool hasDepIdsShrink() const { return this->depIdsShrink_ != nullptr;};
    void deleteDepIdsShrink() { this->depIdsShrink_ = nullptr;};
    inline string getDepIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(depIdsShrink_, "") };
    inline GetSkillGroupServiceStatusShrinkRequest& setDepIdsShrink(string depIdsShrink) { DARABONBA_PTR_SET_VALUE(depIdsShrink_, depIdsShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetSkillGroupServiceStatusShrinkRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // existAgentGrouping Field Functions 
    bool hasExistAgentGrouping() const { return this->existAgentGrouping_ != nullptr;};
    void deleteExistAgentGrouping() { this->existAgentGrouping_ = nullptr;};
    inline bool getExistAgentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existAgentGrouping_, false) };
    inline GetSkillGroupServiceStatusShrinkRequest& setExistAgentGrouping(bool existAgentGrouping) { DARABONBA_PTR_SET_VALUE(existAgentGrouping_, existAgentGrouping) };


    // existChannelInstanceGrouping Field Functions 
    bool hasExistChannelInstanceGrouping() const { return this->existChannelInstanceGrouping_ != nullptr;};
    void deleteExistChannelInstanceGrouping() { this->existChannelInstanceGrouping_ = nullptr;};
    inline bool getExistChannelInstanceGrouping() const { DARABONBA_PTR_GET_DEFAULT(existChannelInstanceGrouping_, false) };
    inline GetSkillGroupServiceStatusShrinkRequest& setExistChannelInstanceGrouping(bool existChannelInstanceGrouping) { DARABONBA_PTR_SET_VALUE(existChannelInstanceGrouping_, existChannelInstanceGrouping) };


    // existDepartmentGrouping Field Functions 
    bool hasExistDepartmentGrouping() const { return this->existDepartmentGrouping_ != nullptr;};
    void deleteExistDepartmentGrouping() { this->existDepartmentGrouping_ = nullptr;};
    inline bool getExistDepartmentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existDepartmentGrouping_, false) };
    inline GetSkillGroupServiceStatusShrinkRequest& setExistDepartmentGrouping(bool existDepartmentGrouping) { DARABONBA_PTR_SET_VALUE(existDepartmentGrouping_, existDepartmentGrouping) };


    // existRobotInstanceGrouping Field Functions 
    bool hasExistRobotInstanceGrouping() const { return this->existRobotInstanceGrouping_ != nullptr;};
    void deleteExistRobotInstanceGrouping() { this->existRobotInstanceGrouping_ = nullptr;};
    inline bool getExistRobotInstanceGrouping() const { DARABONBA_PTR_GET_DEFAULT(existRobotInstanceGrouping_, false) };
    inline GetSkillGroupServiceStatusShrinkRequest& setExistRobotInstanceGrouping(bool existRobotInstanceGrouping) { DARABONBA_PTR_SET_VALUE(existRobotInstanceGrouping_, existRobotInstanceGrouping) };


    // existSkillGroupGrouping Field Functions 
    bool hasExistSkillGroupGrouping() const { return this->existSkillGroupGrouping_ != nullptr;};
    void deleteExistSkillGroupGrouping() { this->existSkillGroupGrouping_ = nullptr;};
    inline bool getExistSkillGroupGrouping() const { DARABONBA_PTR_GET_DEFAULT(existSkillGroupGrouping_, false) };
    inline GetSkillGroupServiceStatusShrinkRequest& setExistSkillGroupGrouping(bool existSkillGroupGrouping) { DARABONBA_PTR_SET_VALUE(existSkillGroupGrouping_, existSkillGroupGrouping) };


    // groupIdsShrink Field Functions 
    bool hasGroupIdsShrink() const { return this->groupIdsShrink_ != nullptr;};
    void deleteGroupIdsShrink() { this->groupIdsShrink_ = nullptr;};
    inline string getGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(groupIdsShrink_, "") };
    inline GetSkillGroupServiceStatusShrinkRequest& setGroupIdsShrink(string groupIdsShrink) { DARABONBA_PTR_SET_VALUE(groupIdsShrink_, groupIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSkillGroupServiceStatusShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSkillGroupServiceStatusShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetSkillGroupServiceStatusShrinkRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // timeLatitudeType Field Functions 
    bool hasTimeLatitudeType() const { return this->timeLatitudeType_ != nullptr;};
    void deleteTimeLatitudeType() { this->timeLatitudeType_ = nullptr;};
    inline string getTimeLatitudeType() const { DARABONBA_PTR_GET_DEFAULT(timeLatitudeType_, "") };
    inline GetSkillGroupServiceStatusShrinkRequest& setTimeLatitudeType(string timeLatitudeType) { DARABONBA_PTR_SET_VALUE(timeLatitudeType_, timeLatitudeType) };


  protected:
    shared_ptr<string> agentIdsShrink_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> depIdsShrink_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<bool> existAgentGrouping_ {};
    shared_ptr<bool> existChannelInstanceGrouping_ {};
    shared_ptr<bool> existDepartmentGrouping_ {};
    shared_ptr<bool> existRobotInstanceGrouping_ {};
    shared_ptr<bool> existSkillGroupGrouping_ {};
    shared_ptr<string> groupIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> timeLatitudeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
