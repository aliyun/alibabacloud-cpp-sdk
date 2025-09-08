// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCustomizeRuleTestResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizeRuleTestResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizeRuleTestResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DetectionRuleId, detectionRuleId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    ListCustomizeRuleTestResultRequest() = default ;
    ListCustomizeRuleTestResultRequest(const ListCustomizeRuleTestResultRequest &) = default ;
    ListCustomizeRuleTestResultRequest(ListCustomizeRuleTestResultRequest &&) = default ;
    ListCustomizeRuleTestResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizeRuleTestResultRequest() = default ;
    ListCustomizeRuleTestResultRequest& operator=(const ListCustomizeRuleTestResultRequest &) = default ;
    ListCustomizeRuleTestResultRequest& operator=(ListCustomizeRuleTestResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->detectionRuleId_ != nullptr && this->endTime_ != nullptr && this->id_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->roleFor_ != nullptr && this->roleType_ != nullptr && this->startTime_ != nullptr && this->verifyType_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCustomizeRuleTestResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // detectionRuleId Field Functions 
    bool hasDetectionRuleId() const { return this->detectionRuleId_ != nullptr;};
    void deleteDetectionRuleId() { this->detectionRuleId_ = nullptr;};
    inline string detectionRuleId() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleId_, "") };
    inline ListCustomizeRuleTestResultRequest& setDetectionRuleId(string detectionRuleId) { DARABONBA_PTR_SET_VALUE(detectionRuleId_, detectionRuleId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCustomizeRuleTestResultRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCustomizeRuleTestResultRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomizeRuleTestResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCustomizeRuleTestResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListCustomizeRuleTestResultRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListCustomizeRuleTestResultRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCustomizeRuleTestResultRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string verifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline ListCustomizeRuleTestResultRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> detectionRuleId_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> verifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
