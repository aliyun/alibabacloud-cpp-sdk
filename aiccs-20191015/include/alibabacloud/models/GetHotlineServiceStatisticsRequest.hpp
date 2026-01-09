// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINESERVICESTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINESERVICESTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineServiceStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineServiceStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIds_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExistAgentGrouping, existAgentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TimeLatitudeType, timeLatitudeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineServiceStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIds_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExistAgentGrouping, existAgentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TimeLatitudeType, timeLatitudeType_);
    };
    GetHotlineServiceStatisticsRequest() = default ;
    GetHotlineServiceStatisticsRequest(const GetHotlineServiceStatisticsRequest &) = default ;
    GetHotlineServiceStatisticsRequest(GetHotlineServiceStatisticsRequest &&) = default ;
    GetHotlineServiceStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineServiceStatisticsRequest() = default ;
    GetHotlineServiceStatisticsRequest& operator=(const GetHotlineServiceStatisticsRequest &) = default ;
    GetHotlineServiceStatisticsRequest& operator=(GetHotlineServiceStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIds_ == nullptr
        && this->currentPage_ == nullptr && this->depIds_ == nullptr && this->endDate_ == nullptr && this->existAgentGrouping_ == nullptr && this->existDepartmentGrouping_ == nullptr
        && this->existSkillGroupGrouping_ == nullptr && this->groupIds_ == nullptr && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr
        && this->timeLatitudeType_ == nullptr; };
    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline const vector<int64_t> & getAgentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<int64_t>) };
    inline vector<int64_t> getAgentIds() { DARABONBA_PTR_GET(agentIds_, vector<int64_t>) };
    inline GetHotlineServiceStatisticsRequest& setAgentIds(const vector<int64_t> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
    inline GetHotlineServiceStatisticsRequest& setAgentIds(vector<int64_t> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetHotlineServiceStatisticsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIds Field Functions 
    bool hasDepIds() const { return this->depIds_ != nullptr;};
    void deleteDepIds() { this->depIds_ = nullptr;};
    inline const vector<int64_t> & getDepIds() const { DARABONBA_PTR_GET_CONST(depIds_, vector<int64_t>) };
    inline vector<int64_t> getDepIds() { DARABONBA_PTR_GET(depIds_, vector<int64_t>) };
    inline GetHotlineServiceStatisticsRequest& setDepIds(const vector<int64_t> & depIds) { DARABONBA_PTR_SET_VALUE(depIds_, depIds) };
    inline GetHotlineServiceStatisticsRequest& setDepIds(vector<int64_t> && depIds) { DARABONBA_PTR_SET_RVALUE(depIds_, depIds) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetHotlineServiceStatisticsRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // existAgentGrouping Field Functions 
    bool hasExistAgentGrouping() const { return this->existAgentGrouping_ != nullptr;};
    void deleteExistAgentGrouping() { this->existAgentGrouping_ = nullptr;};
    inline bool getExistAgentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existAgentGrouping_, false) };
    inline GetHotlineServiceStatisticsRequest& setExistAgentGrouping(bool existAgentGrouping) { DARABONBA_PTR_SET_VALUE(existAgentGrouping_, existAgentGrouping) };


    // existDepartmentGrouping Field Functions 
    bool hasExistDepartmentGrouping() const { return this->existDepartmentGrouping_ != nullptr;};
    void deleteExistDepartmentGrouping() { this->existDepartmentGrouping_ = nullptr;};
    inline bool getExistDepartmentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existDepartmentGrouping_, false) };
    inline GetHotlineServiceStatisticsRequest& setExistDepartmentGrouping(bool existDepartmentGrouping) { DARABONBA_PTR_SET_VALUE(existDepartmentGrouping_, existDepartmentGrouping) };


    // existSkillGroupGrouping Field Functions 
    bool hasExistSkillGroupGrouping() const { return this->existSkillGroupGrouping_ != nullptr;};
    void deleteExistSkillGroupGrouping() { this->existSkillGroupGrouping_ = nullptr;};
    inline bool getExistSkillGroupGrouping() const { DARABONBA_PTR_GET_DEFAULT(existSkillGroupGrouping_, false) };
    inline GetHotlineServiceStatisticsRequest& setExistSkillGroupGrouping(bool existSkillGroupGrouping) { DARABONBA_PTR_SET_VALUE(existSkillGroupGrouping_, existSkillGroupGrouping) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<int64_t> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<int64_t>) };
    inline vector<int64_t> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<int64_t>) };
    inline GetHotlineServiceStatisticsRequest& setGroupIds(const vector<int64_t> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetHotlineServiceStatisticsRequest& setGroupIds(vector<int64_t> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHotlineServiceStatisticsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetHotlineServiceStatisticsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetHotlineServiceStatisticsRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // timeLatitudeType Field Functions 
    bool hasTimeLatitudeType() const { return this->timeLatitudeType_ != nullptr;};
    void deleteTimeLatitudeType() { this->timeLatitudeType_ = nullptr;};
    inline string getTimeLatitudeType() const { DARABONBA_PTR_GET_DEFAULT(timeLatitudeType_, "") };
    inline GetHotlineServiceStatisticsRequest& setTimeLatitudeType(string timeLatitudeType) { DARABONBA_PTR_SET_VALUE(timeLatitudeType_, timeLatitudeType) };


  protected:
    shared_ptr<vector<int64_t>> agentIds_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<int64_t>> depIds_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<bool> existAgentGrouping_ {};
    shared_ptr<bool> existDepartmentGrouping_ {};
    shared_ptr<bool> existSkillGroupGrouping_ {};
    shared_ptr<vector<int64_t>> groupIds_ {};
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
