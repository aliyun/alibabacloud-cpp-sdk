// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsWithEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsWithEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsWithEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAlertsWithEntityRequest() = default ;
    DescribeAlertsWithEntityRequest(const DescribeAlertsWithEntityRequest &) = default ;
    DescribeAlertsWithEntityRequest(DescribeAlertsWithEntityRequest &&) = default ;
    DescribeAlertsWithEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsWithEntityRequest() = default ;
    DescribeAlertsWithEntityRequest& operator=(const DescribeAlertsWithEntityRequest &) = default ;
    DescribeAlertsWithEntityRequest& operator=(DescribeAlertsWithEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->endTime_ != nullptr && this->entityId_ != nullptr && this->entityUuid_ != nullptr && this->incidentUuid_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr && this->sophonTaskId_ != nullptr && this->startTime_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAlertsWithEntityRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAlertsWithEntityRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline DescribeAlertsWithEntityRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string entityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline DescribeAlertsWithEntityRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeAlertsWithEntityRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlertsWithEntityRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAlertsWithEntityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeAlertsWithEntityRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeAlertsWithEntityRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string sophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline DescribeAlertsWithEntityRequest& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAlertsWithEntityRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the entity.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    std::shared_ptr<string> entityUuid_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The number of entries per page. Maximum value: 100.
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
    // The ID of the SOAR handing policy.
    std::shared_ptr<string> sophonTaskId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
