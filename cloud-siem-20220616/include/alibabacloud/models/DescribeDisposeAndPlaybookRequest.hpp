// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeAndPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeAndPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableOnly, availableOnly_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(EntityUuidList, entityUuidList_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeAndPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableOnly, availableOnly_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(EntityUuidList, entityUuidList_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeDisposeAndPlaybookRequest() = default ;
    DescribeDisposeAndPlaybookRequest(const DescribeDisposeAndPlaybookRequest &) = default ;
    DescribeDisposeAndPlaybookRequest(DescribeDisposeAndPlaybookRequest &&) = default ;
    DescribeDisposeAndPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeAndPlaybookRequest() = default ;
    DescribeDisposeAndPlaybookRequest& operator=(const DescribeDisposeAndPlaybookRequest &) = default ;
    DescribeDisposeAndPlaybookRequest& operator=(DescribeDisposeAndPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableOnly_ == nullptr
        && this->currentPage_ == nullptr && this->entityType_ == nullptr && this->entityUuid_ == nullptr && this->entityUuidList_ == nullptr && this->incidentUuid_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // availableOnly Field Functions 
    bool hasAvailableOnly() const { return this->availableOnly_ != nullptr;};
    void deleteAvailableOnly() { this->availableOnly_ = nullptr;};
    inline bool getAvailableOnly() const { DARABONBA_PTR_GET_DEFAULT(availableOnly_, false) };
    inline DescribeDisposeAndPlaybookRequest& setAvailableOnly(bool availableOnly) { DARABONBA_PTR_SET_VALUE(availableOnly_, availableOnly) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDisposeAndPlaybookRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeDisposeAndPlaybookRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline DescribeDisposeAndPlaybookRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // entityUuidList Field Functions 
    bool hasEntityUuidList() const { return this->entityUuidList_ != nullptr;};
    void deleteEntityUuidList() { this->entityUuidList_ = nullptr;};
    inline string getEntityUuidList() const { DARABONBA_PTR_GET_DEFAULT(entityUuidList_, "") };
    inline DescribeDisposeAndPlaybookRequest& setEntityUuidList(string entityUuidList) { DARABONBA_PTR_SET_VALUE(entityUuidList_, entityUuidList) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline DescribeDisposeAndPlaybookRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDisposeAndPlaybookRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDisposeAndPlaybookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeDisposeAndPlaybookRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeDisposeAndPlaybookRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    shared_ptr<bool> availableOnly_ {};
    // The current page number. The value must be greater than or equal to 1.
    shared_ptr<int32_t> currentPage_ {};
    // The entity type. Valid values:
    shared_ptr<string> entityType_ {};
    // The entity UUID.
    shared_ptr<string> entityUuid_ {};
    shared_ptr<string> entityUuidList_ {};
    // The incident UUID.
    shared_ptr<string> incidentUuid_ {};
    // The number of entries per page. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The region where the threat analysis data management center is located. Specify the management center region based on the region of your assets. Valid values:
    // - cn-hangzhou: Your assets are located in the Chinese mainland or Hong Kong (China).
    // - ap-southeast-1: Your assets are located outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type.
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
