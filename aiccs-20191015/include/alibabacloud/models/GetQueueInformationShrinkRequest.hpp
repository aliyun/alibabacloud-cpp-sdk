// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEINFORMATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEINFORMATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQueueInformationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueInformationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_TO_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueInformationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ExistDepartmentGrouping, existDepartmentGrouping_);
      DARABONBA_PTR_FROM_JSON(ExistSkillGroupGrouping, existSkillGroupGrouping_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetQueueInformationShrinkRequest() = default ;
    GetQueueInformationShrinkRequest(const GetQueueInformationShrinkRequest &) = default ;
    GetQueueInformationShrinkRequest(GetQueueInformationShrinkRequest &&) = default ;
    GetQueueInformationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueInformationShrinkRequest() = default ;
    GetQueueInformationShrinkRequest& operator=(const GetQueueInformationShrinkRequest &) = default ;
    GetQueueInformationShrinkRequest& operator=(GetQueueInformationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->depIdsShrink_ == nullptr && this->endDate_ == nullptr && this->existDepartmentGrouping_ == nullptr && this->existSkillGroupGrouping_ == nullptr && this->groupIdsShrink_ == nullptr
        && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetQueueInformationShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIdsShrink Field Functions 
    bool hasDepIdsShrink() const { return this->depIdsShrink_ != nullptr;};
    void deleteDepIdsShrink() { this->depIdsShrink_ = nullptr;};
    inline string getDepIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(depIdsShrink_, "") };
    inline GetQueueInformationShrinkRequest& setDepIdsShrink(string depIdsShrink) { DARABONBA_PTR_SET_VALUE(depIdsShrink_, depIdsShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetQueueInformationShrinkRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // existDepartmentGrouping Field Functions 
    bool hasExistDepartmentGrouping() const { return this->existDepartmentGrouping_ != nullptr;};
    void deleteExistDepartmentGrouping() { this->existDepartmentGrouping_ = nullptr;};
    inline bool getExistDepartmentGrouping() const { DARABONBA_PTR_GET_DEFAULT(existDepartmentGrouping_, false) };
    inline GetQueueInformationShrinkRequest& setExistDepartmentGrouping(bool existDepartmentGrouping) { DARABONBA_PTR_SET_VALUE(existDepartmentGrouping_, existDepartmentGrouping) };


    // existSkillGroupGrouping Field Functions 
    bool hasExistSkillGroupGrouping() const { return this->existSkillGroupGrouping_ != nullptr;};
    void deleteExistSkillGroupGrouping() { this->existSkillGroupGrouping_ = nullptr;};
    inline bool getExistSkillGroupGrouping() const { DARABONBA_PTR_GET_DEFAULT(existSkillGroupGrouping_, false) };
    inline GetQueueInformationShrinkRequest& setExistSkillGroupGrouping(bool existSkillGroupGrouping) { DARABONBA_PTR_SET_VALUE(existSkillGroupGrouping_, existSkillGroupGrouping) };


    // groupIdsShrink Field Functions 
    bool hasGroupIdsShrink() const { return this->groupIdsShrink_ != nullptr;};
    void deleteGroupIdsShrink() { this->groupIdsShrink_ = nullptr;};
    inline string getGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(groupIdsShrink_, "") };
    inline GetQueueInformationShrinkRequest& setGroupIdsShrink(string groupIdsShrink) { DARABONBA_PTR_SET_VALUE(groupIdsShrink_, groupIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueueInformationShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetQueueInformationShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetQueueInformationShrinkRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> depIdsShrink_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<bool> existDepartmentGrouping_ {};
    shared_ptr<bool> existSkillGroupGrouping_ {};
    shared_ptr<string> groupIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
