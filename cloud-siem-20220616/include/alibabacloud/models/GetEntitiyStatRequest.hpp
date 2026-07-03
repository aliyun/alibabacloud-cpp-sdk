// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITIYSTATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETENTITIYSTATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetEntitiyStatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntitiyStatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(AssetUuid, assetUuid_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(IsAsset, isAsset_);
      DARABONBA_PTR_TO_JSON(IsMalwareEntity, isMalwareEntity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntitiyStatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(AssetUuid, assetUuid_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(IsAsset, isAsset_);
      DARABONBA_PTR_FROM_JSON(IsMalwareEntity, isMalwareEntity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetEntitiyStatRequest() = default ;
    GetEntitiyStatRequest(const GetEntitiyStatRequest &) = default ;
    GetEntitiyStatRequest(GetEntitiyStatRequest &&) = default ;
    GetEntitiyStatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntitiyStatRequest() = default ;
    GetEntitiyStatRequest& operator=(const GetEntitiyStatRequest &) = default ;
    GetEntitiyStatRequest& operator=(GetEntitiyStatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetName_ == nullptr
        && this->assetUuid_ == nullptr && this->entityName_ == nullptr && this->entityType_ == nullptr && this->entityUuid_ == nullptr && this->incidentUuid_ == nullptr
        && this->isAsset_ == nullptr && this->isMalwareEntity_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr
        && this->tags_ == nullptr; };
    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline GetEntitiyStatRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // assetUuid Field Functions 
    bool hasAssetUuid() const { return this->assetUuid_ != nullptr;};
    void deleteAssetUuid() { this->assetUuid_ = nullptr;};
    inline string getAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(assetUuid_, "") };
    inline GetEntitiyStatRequest& setAssetUuid(string assetUuid) { DARABONBA_PTR_SET_VALUE(assetUuid_, assetUuid) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline GetEntitiyStatRequest& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline GetEntitiyStatRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityUuid Field Functions 
    bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
    void deleteEntityUuid() { this->entityUuid_ = nullptr;};
    inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
    inline GetEntitiyStatRequest& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline GetEntitiyStatRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // isAsset Field Functions 
    bool hasIsAsset() const { return this->isAsset_ != nullptr;};
    void deleteIsAsset() { this->isAsset_ = nullptr;};
    inline string getIsAsset() const { DARABONBA_PTR_GET_DEFAULT(isAsset_, "") };
    inline GetEntitiyStatRequest& setIsAsset(string isAsset) { DARABONBA_PTR_SET_VALUE(isAsset_, isAsset) };


    // isMalwareEntity Field Functions 
    bool hasIsMalwareEntity() const { return this->isMalwareEntity_ != nullptr;};
    void deleteIsMalwareEntity() { this->isMalwareEntity_ = nullptr;};
    inline string getIsMalwareEntity() const { DARABONBA_PTR_GET_DEFAULT(isMalwareEntity_, "") };
    inline GetEntitiyStatRequest& setIsMalwareEntity(string isMalwareEntity) { DARABONBA_PTR_SET_VALUE(isMalwareEntity_, isMalwareEntity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEntitiyStatRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline GetEntitiyStatRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline GetEntitiyStatRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetEntitiyStatRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The asset ID associated with the incident.
    shared_ptr<string> assetName_ {};
    // The asset ID associated with the incident.
    shared_ptr<string> assetUuid_ {};
    // The asset ID associated with the incident.
    shared_ptr<string> entityName_ {};
    // The asset ID associated with the incident.
    shared_ptr<string> entityType_ {};
    // The asset ID associated with the incident.
    shared_ptr<string> entityUuid_ {};
    // The incident ID.
    // 
    // This parameter is required.
    shared_ptr<string> incidentUuid_ {};
    // The asset ID associated with the incident.
    shared_ptr<string> isAsset_ {};
    // The sort order of the incident list. Valid values:
    // 
    // - desc: descending order.
    // - asc: ascending order.
    shared_ptr<string> isMalwareEntity_ {};
    // The region where the threat detection and response data management center resides. Select the management center based on the region of your assets. Valid values:
    // 
    // - cn-hangzhou: the asset belongs to the Chinese mainland or Hong Kong (China).
    // - ap-southeast-1: the asset belongs to a region outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The user ID of the member to which the administrator switches the view.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. Valid values:
    // 
    // - 0: single-account logon.
    // - 1: global view.
    // - 2: switched view.
    // - 3: partial view.
    shared_ptr<int32_t> roleType_ {};
    // The entity tags. The value is a JSON array string in the following format: \\"[{\\"tagKey1\\":\\"tagValue1\\"},{\\"tagKey2\\":\\"tagValue2\\"}]\\"
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
