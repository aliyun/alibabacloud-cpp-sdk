// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTDETAILREPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTDETAILREPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAgentDetailReportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentDetailReportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIdsShrink_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExistAgentGrouping, existAgentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TimeLatitudeType, timeLatitudeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentDetailReportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExistAgentGrouping, existAgentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TimeLatitudeType, timeLatitudeType_);
    };
    GetAgentDetailReportShrinkRequest() = default ;
    GetAgentDetailReportShrinkRequest(const GetAgentDetailReportShrinkRequest &) = default ;
    GetAgentDetailReportShrinkRequest(GetAgentDetailReportShrinkRequest &&) = default ;
    GetAgentDetailReportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentDetailReportShrinkRequest() = default ;
    GetAgentDetailReportShrinkRequest& operator=(const GetAgentDetailReportShrinkRequest &) = default ;
    GetAgentDetailReportShrinkRequest& operator=(GetAgentDetailReportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIdsShrink_ == nullptr
        && return this->currentPage_ == nullptr && return this->depIdsShrink_ == nullptr && return this->endDate_ == nullptr && return this->existAgentGrouping_ == nullptr && return this->existDepartmentGrouping_ == nullptr
        && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr && return this->startDate_ == nullptr && return this->timeLatitudeType_ == nullptr; };
    // agentIdsShrink Field Functions 
    bool hasAgentIdsShrink() const { return this->agentIdsShrink_ != nullptr;};
    void deleteAgentIdsShrink() { this->agentIdsShrink_ = nullptr;};
    inline string agentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(agentIdsShrink_, "") };
    inline GetAgentDetailReportShrinkRequest& setAgentIdsShrink(string agentIdsShrink) { DARABONBA_PTR_SET_VALUE(agentIdsShrink_, agentIdsShrink) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAgentDetailReportShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIdsShrink Field Functions 
    bool hasDepIdsShrink() const { return this->depIdsShrink_ != nullptr;};
    void deleteDepIdsShrink() { this->depIdsShrink_ = nullptr;};
    inline string depIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(depIdsShrink_, "") };
    inline GetAgentDetailReportShrinkRequest& setDepIdsShrink(string depIdsShrink) { DARABONBA_PTR_SET_VALUE(depIdsShrink_, depIdsShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetAgentDetailReportShrinkRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // existAgentGrouping Field Functions 
    bool hasExistAgentGrouping() const { return this->existAgentGrouping_ != nullptr;};
    void deleteExistAgentGrouping() { this->existAgentGrouping_ = nullptr;};
    inline bool existAgentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existAgentGrouping_, false) };
    inline GetAgentDetailReportShrinkRequest& setExistAgentGrouping(bool existAgentGrouping) { DARABONBA_PTR_SET_VALUE(existAgentGrouping_, existAgentGrouping) };


    // existDepartmentGrouping Field Functions 
    bool hasExistDepartmentGrouping() const { return this->existDepartmentGrouping_ != nullptr;};
    void deleteExistDepartmentGrouping() { this->existDepartmentGrouping_ = nullptr;};
    inline bool existDepartmentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existDepartmentGrouping_, false) };
    inline GetAgentDetailReportShrinkRequest& setExistDepartmentGrouping(bool existDepartmentGrouping) { DARABONBA_PTR_SET_VALUE(existDepartmentGrouping_, existDepartmentGrouping) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAgentDetailReportShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAgentDetailReportShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetAgentDetailReportShrinkRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // timeLatitudeType Field Functions 
    bool hasTimeLatitudeType() const { return this->timeLatitudeType_ != nullptr;};
    void deleteTimeLatitudeType() { this->timeLatitudeType_ = nullptr;};
    inline string timeLatitudeType() const { DARABONBA_PTR_GET_DEFAULT(timeLatitudeType_, "") };
    inline GetAgentDetailReportShrinkRequest& setTimeLatitudeType(string timeLatitudeType) { DARABONBA_PTR_SET_VALUE(timeLatitudeType_, timeLatitudeType) };


  protected:
    std::shared_ptr<string> agentIdsShrink_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> depIdsShrink_ = nullptr;
    std::shared_ptr<int64_t> endDate_ = nullptr;
    std::shared_ptr<bool> existAgentGrouping_ = nullptr;
    std::shared_ptr<bool> existDepartmentGrouping_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> startDate_ = nullptr;
    std::shared_ptr<string> timeLatitudeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
