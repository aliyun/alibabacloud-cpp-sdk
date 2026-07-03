// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(EntityUuids, entityUuids_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(IsMalwareEntity, isMalwareEntity_);
      DARABONBA_PTR_TO_JSON(MalwareType, malwareType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(EntityUuids, entityUuids_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(IsMalwareEntity, isMalwareEntity_);
      DARABONBA_PTR_FROM_JSON(MalwareType, malwareType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListEntitiesRequest() = default ;
    ListEntitiesRequest(const ListEntitiesRequest &) = default ;
    ListEntitiesRequest(ListEntitiesRequest &&) = default ;
    ListEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesRequest() = default ;
    ListEntitiesRequest& operator=(const ListEntitiesRequest &) = default ;
    ListEntitiesRequest& operator=(ListEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->entityName_ == nullptr && this->entityType_ == nullptr && this->entityUuid_ == nullptr && this->entityUuids_ == nullptr && this->incidentUuid_ == nullptr
        && this->isMalwareEntity_ == nullptr && this->malwareType_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr
        && this->roleType_ == nullptr && this->tags_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListEntitiesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline ListEntitiesRequest& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListEntitiesRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline ListEntitiesRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // entityUuids Field Functions 
    bool hasEntityUuids() const { return this->entityUuids_ != nullptr;};
    void deleteEntityUuids() { this->entityUuids_ = nullptr;};
    inline string getEntityUuids() const { DARABONBA_PTR_GET_DEFAULT(entityUuids_, "") };
    inline ListEntitiesRequest& setEntityUuids(string entityUuids) { DARABONBA_PTR_SET_VALUE(entityUuids_, entityUuids) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListEntitiesRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // isMalwareEntity Field Functions 
    bool hasIsMalwareEntity() const { return this->isMalwareEntity_ != nullptr;};
    void deleteIsMalwareEntity() { this->isMalwareEntity_ = nullptr;};
    inline string getIsMalwareEntity() const { DARABONBA_PTR_GET_DEFAULT(isMalwareEntity_, "") };
    inline ListEntitiesRequest& setIsMalwareEntity(string isMalwareEntity) { DARABONBA_PTR_SET_VALUE(isMalwareEntity_, isMalwareEntity) };


    // malwareType Field Functions 
    bool hasMalwareType() const { return this->malwareType_ != nullptr;};
    void deleteMalwareType() { this->malwareType_ = nullptr;};
    inline string getMalwareType() const { DARABONBA_PTR_GET_DEFAULT(malwareType_, "") };
    inline ListEntitiesRequest& setMalwareType(string malwareType) { DARABONBA_PTR_SET_VALUE(malwareType_, malwareType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEntitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEntitiesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListEntitiesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListEntitiesRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListEntitiesRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The page number of the current page. The value must be greater than or equal to 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The entity name.
    shared_ptr<string> entityName_ {};
    // The entity type. Valid values:
    // - ip: IP address
    // - domain: domain name
    // - url: URL
    // - process: process
    // - file: file
    // - host: host
    // - cloud_account: cloud account
    // - container: container
    // - bucket: Object Storage Service (OSS) bucket.
    shared_ptr<string> entityType_ {};
    // The entity UUID.
    shared_ptr<string> entityUuid_ {};
    // The list of entity UUIDs.
    shared_ptr<string> entityUuids_ {};
    // The incident ID.
    // 
    // This parameter is required.
    shared_ptr<string> incidentUuid_ {};
    // Specifies whether the entity is malicious. Valid values:
    // - 0: No.
    // - 1: Yes.
    shared_ptr<string> isMalwareEntity_ {};
    // The malicious entity type.
    shared_ptr<string> malwareType_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the data management center of the threat analysis feature resides. Select the region based on the region where your assets reside. Valid values:
    // - cn-hangzhou: the assets reside in the Chinese mainland or Hong Kong (China).
    // - ap-southeast-1: the assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // - 1: the view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The entity tags. The value is a JSON array string:
    // 
    // `"[{"tagKey1":"tagValue1"},{"tagKey2":"tagValue2"}]"`.
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
