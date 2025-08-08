// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLGROUPANDAGENTSTATUSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLGROUPANDAGENTSTATUSSUMMARYREQUEST_HPP_
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
  class GetSkillGroupAndAgentStatusSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillGroupAndAgentStatusSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIds_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillGroupAndAgentStatusSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIds_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetSkillGroupAndAgentStatusSummaryRequest() = default ;
    GetSkillGroupAndAgentStatusSummaryRequest(const GetSkillGroupAndAgentStatusSummaryRequest &) = default ;
    GetSkillGroupAndAgentStatusSummaryRequest(GetSkillGroupAndAgentStatusSummaryRequest &&) = default ;
    GetSkillGroupAndAgentStatusSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillGroupAndAgentStatusSummaryRequest() = default ;
    GetSkillGroupAndAgentStatusSummaryRequest& operator=(const GetSkillGroupAndAgentStatusSummaryRequest &) = default ;
    GetSkillGroupAndAgentStatusSummaryRequest& operator=(GetSkillGroupAndAgentStatusSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->depIds_ != nullptr && this->endDate_ != nullptr && this->existDepartmentGrouping_ != nullptr && this->existSkillGroupGrouping_ != nullptr && this->groupIds_ != nullptr
        && this->instanceId_ != nullptr && this->pageSize_ != nullptr && this->startDate_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIds Field Functions 
    bool hasDepIds() const { return this->depIds_ != nullptr;};
    void deleteDepIds() { this->depIds_ = nullptr;};
    inline const vector<int64_t> & depIds() const { DARABONBA_PTR_GET_CONST(depIds_, vector<int64_t>) };
    inline vector<int64_t> depIds() { DARABONBA_PTR_GET(depIds_, vector<int64_t>) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setDepIds(const vector<int64_t> & depIds) { DARABONBA_PTR_SET_VALUE(depIds_, depIds) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setDepIds(vector<int64_t> && depIds) { DARABONBA_PTR_SET_RVALUE(depIds_, depIds) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // existDepartmentGrouping Field Functions 
    bool hasExistDepartmentGrouping() const { return this->existDepartmentGrouping_ != nullptr;};
    void deleteExistDepartmentGrouping() { this->existDepartmentGrouping_ = nullptr;};
    inline bool existDepartmentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existDepartmentGrouping_, false) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setExistDepartmentGrouping(bool existDepartmentGrouping) { DARABONBA_PTR_SET_VALUE(existDepartmentGrouping_, existDepartmentGrouping) };


    // existSkillGroupGrouping Field Functions 
    bool hasExistSkillGroupGrouping() const { return this->existSkillGroupGrouping_ != nullptr;};
    void deleteExistSkillGroupGrouping() { this->existSkillGroupGrouping_ = nullptr;};
    inline bool existSkillGroupGrouping() const { DARABONBA_PTR_GET_DEFAULT(existSkillGroupGrouping_, false) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setExistSkillGroupGrouping(bool existSkillGroupGrouping) { DARABONBA_PTR_SET_VALUE(existSkillGroupGrouping_, existSkillGroupGrouping) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<int64_t> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<int64_t>) };
    inline vector<int64_t> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<int64_t>) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setGroupIds(const vector<int64_t> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setGroupIds(vector<int64_t> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetSkillGroupAndAgentStatusSummaryRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<int64_t>> depIds_ = nullptr;
    std::shared_ptr<int64_t> endDate_ = nullptr;
    std::shared_ptr<bool> existDepartmentGrouping_ = nullptr;
    std::shared_ptr<bool> existSkillGroupGrouping_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
