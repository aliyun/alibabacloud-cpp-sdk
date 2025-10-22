// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPARTMENTALLATITUDEAGENTSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPARTMENTALLATITUDEAGENTSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetDepartmentalLatitudeAgentStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDepartmentalLatitudeAgentStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetDepartmentalLatitudeAgentStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetDepartmentalLatitudeAgentStatusShrinkRequest() = default ;
    GetDepartmentalLatitudeAgentStatusShrinkRequest(const GetDepartmentalLatitudeAgentStatusShrinkRequest &) = default ;
    GetDepartmentalLatitudeAgentStatusShrinkRequest(GetDepartmentalLatitudeAgentStatusShrinkRequest &&) = default ;
    GetDepartmentalLatitudeAgentStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDepartmentalLatitudeAgentStatusShrinkRequest() = default ;
    GetDepartmentalLatitudeAgentStatusShrinkRequest& operator=(const GetDepartmentalLatitudeAgentStatusShrinkRequest &) = default ;
    GetDepartmentalLatitudeAgentStatusShrinkRequest& operator=(GetDepartmentalLatitudeAgentStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->depIdsShrink_ == nullptr && return this->endDate_ == nullptr && return this->existDepartmentGrouping_ == nullptr && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr
        && return this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIdsShrink Field Functions 
    bool hasDepIdsShrink() const { return this->depIdsShrink_ != nullptr;};
    void deleteDepIdsShrink() { this->depIdsShrink_ = nullptr;};
    inline string depIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(depIdsShrink_, "") };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setDepIdsShrink(string depIdsShrink) { DARABONBA_PTR_SET_VALUE(depIdsShrink_, depIdsShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // existDepartmentGrouping Field Functions 
    bool hasExistDepartmentGrouping() const { return this->existDepartmentGrouping_ != nullptr;};
    void deleteExistDepartmentGrouping() { this->existDepartmentGrouping_ = nullptr;};
    inline bool existDepartmentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existDepartmentGrouping_, false) };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setExistDepartmentGrouping(bool existDepartmentGrouping) { DARABONBA_PTR_SET_VALUE(existDepartmentGrouping_, existDepartmentGrouping) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetDepartmentalLatitudeAgentStatusShrinkRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> depIdsShrink_ = nullptr;
    std::shared_ptr<int64_t> endDate_ = nullptr;
    std::shared_ptr<bool> existDepartmentGrouping_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
