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
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->entityName_ != nullptr && this->entityType_ != nullptr && this->entityUuid_ != nullptr && this->incidentUuid_ != nullptr && this->isMalwareEntity_ != nullptr
        && this->malwareType_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr
        && this->tags_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListEntitiesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline ListEntitiesRequest& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListEntitiesRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string entityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline ListEntitiesRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline ListEntitiesRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // isMalwareEntity Field Functions 
    bool hasIsMalwareEntity() const { return this->isMalwareEntity_ != nullptr;};
    void deleteIsMalwareEntity() { this->isMalwareEntity_ = nullptr;};
    inline string isMalwareEntity() const { DARABONBA_PTR_GET_DEFAULT(isMalwareEntity_, "") };
    inline ListEntitiesRequest& setIsMalwareEntity(string isMalwareEntity) { DARABONBA_PTR_SET_VALUE(isMalwareEntity_, isMalwareEntity) };


    // malwareType Field Functions 
    bool hasMalwareType() const { return this->malwareType_ != nullptr;};
    void deleteMalwareType() { this->malwareType_ = nullptr;};
    inline string malwareType() const { DARABONBA_PTR_GET_DEFAULT(malwareType_, "") };
    inline ListEntitiesRequest& setMalwareType(string malwareType) { DARABONBA_PTR_SET_VALUE(malwareType_, malwareType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEntitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEntitiesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListEntitiesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListEntitiesRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListEntitiesRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> entityName_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> entityUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    std::shared_ptr<string> isMalwareEntity_ = nullptr;
    std::shared_ptr<string> malwareType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<int32_t> roleType_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
