// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUPDETAIL_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUPDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroupDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroupDetail& obj) { 
      DARABONBA_PTR_TO_JSON(aliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(discoverRules, discoverRules_);
      DARABONBA_PTR_TO_JSON(entitySummaries, entitySummaries_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(favorited, favorited_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sourceOrigin, sourceOrigin_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroupDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(aliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(discoverRules, discoverRules_);
      DARABONBA_PTR_FROM_JSON(entitySummaries, entitySummaries_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(favorited, favorited_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sourceOrigin, sourceOrigin_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ObserveGroupDetail() = default ;
    ObserveGroupDetail(const ObserveGroupDetail &) = default ;
    ObserveGroupDetail(ObserveGroupDetail &&) = default ;
    ObserveGroupDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroupDetail() = default ;
    ObserveGroupDetail& operator=(const ObserveGroupDetail &) = default ;
    ObserveGroupDetail& operator=(ObserveGroupDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntitySummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntitySummaries& obj) { 
        DARABONBA_PTR_TO_JSON(entityCategory, entityCategory_);
        DARABONBA_PTR_TO_JSON(entityCount, entityCount_);
        DARABONBA_PTR_TO_JSON(entityDomain, entityDomain_);
        DARABONBA_PTR_TO_JSON(entityType, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, EntitySummaries& obj) { 
        DARABONBA_PTR_FROM_JSON(entityCategory, entityCategory_);
        DARABONBA_PTR_FROM_JSON(entityCount, entityCount_);
        DARABONBA_PTR_FROM_JSON(entityDomain, entityDomain_);
        DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      };
      EntitySummaries() = default ;
      EntitySummaries(const EntitySummaries &) = default ;
      EntitySummaries(EntitySummaries &&) = default ;
      EntitySummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntitySummaries() = default ;
      EntitySummaries& operator=(const EntitySummaries &) = default ;
      EntitySummaries& operator=(EntitySummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityCategory_ == nullptr
        && this->entityCount_ == nullptr && this->entityDomain_ == nullptr && this->entityType_ == nullptr; };
      // entityCategory Field Functions 
      bool hasEntityCategory() const { return this->entityCategory_ != nullptr;};
      void deleteEntityCategory() { this->entityCategory_ = nullptr;};
      inline string getEntityCategory() const { DARABONBA_PTR_GET_DEFAULT(entityCategory_, "") };
      inline EntitySummaries& setEntityCategory(string entityCategory) { DARABONBA_PTR_SET_VALUE(entityCategory_, entityCategory) };


      // entityCount Field Functions 
      bool hasEntityCount() const { return this->entityCount_ != nullptr;};
      void deleteEntityCount() { this->entityCount_ = nullptr;};
      inline int32_t getEntityCount() const { DARABONBA_PTR_GET_DEFAULT(entityCount_, 0) };
      inline EntitySummaries& setEntityCount(int32_t entityCount) { DARABONBA_PTR_SET_VALUE(entityCount_, entityCount) };


      // entityDomain Field Functions 
      bool hasEntityDomain() const { return this->entityDomain_ != nullptr;};
      void deleteEntityDomain() { this->entityDomain_ = nullptr;};
      inline string getEntityDomain() const { DARABONBA_PTR_GET_DEFAULT(entityDomain_, "") };
      inline EntitySummaries& setEntityDomain(string entityDomain) { DARABONBA_PTR_SET_VALUE(entityDomain_, entityDomain) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline EntitySummaries& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      // The entity category.
      shared_ptr<string> entityCategory_ {};
      // The entity count.
      shared_ptr<int32_t> entityCount_ {};
      // The entity domain.
      shared_ptr<string> entityDomain_ {};
      // The entity type.
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->discoverRules_ == nullptr && this->entitySummaries_ == nullptr && this->extraInfo_ == nullptr
        && this->favorited_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->modifyTime_ == nullptr
        && this->originGroupId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceOrigin_ == nullptr && this->workspaceId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline ObserveGroupDetail& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ObserveGroupDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ObserveGroupDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // discoverRules Field Functions 
    bool hasDiscoverRules() const { return this->discoverRules_ != nullptr;};
    void deleteDiscoverRules() { this->discoverRules_ = nullptr;};
    inline string getDiscoverRules() const { DARABONBA_PTR_GET_DEFAULT(discoverRules_, "") };
    inline ObserveGroupDetail& setDiscoverRules(string discoverRules) { DARABONBA_PTR_SET_VALUE(discoverRules_, discoverRules) };


    // entitySummaries Field Functions 
    bool hasEntitySummaries() const { return this->entitySummaries_ != nullptr;};
    void deleteEntitySummaries() { this->entitySummaries_ = nullptr;};
    inline const vector<ObserveGroupDetail::EntitySummaries> & getEntitySummaries() const { DARABONBA_PTR_GET_CONST(entitySummaries_, vector<ObserveGroupDetail::EntitySummaries>) };
    inline vector<ObserveGroupDetail::EntitySummaries> getEntitySummaries() { DARABONBA_PTR_GET(entitySummaries_, vector<ObserveGroupDetail::EntitySummaries>) };
    inline ObserveGroupDetail& setEntitySummaries(const vector<ObserveGroupDetail::EntitySummaries> & entitySummaries) { DARABONBA_PTR_SET_VALUE(entitySummaries_, entitySummaries) };
    inline ObserveGroupDetail& setEntitySummaries(vector<ObserveGroupDetail::EntitySummaries> && entitySummaries) { DARABONBA_PTR_SET_RVALUE(entitySummaries_, entitySummaries) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline ObserveGroupDetail& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // favorited Field Functions 
    bool hasFavorited() const { return this->favorited_ != nullptr;};
    void deleteFavorited() { this->favorited_ = nullptr;};
    inline bool getFavorited() const { DARABONBA_PTR_GET_DEFAULT(favorited_, false) };
    inline ObserveGroupDetail& setFavorited(bool favorited) { DARABONBA_PTR_SET_VALUE(favorited_, favorited) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ObserveGroupDetail& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ObserveGroupDetail& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ObserveGroupDetail& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ObserveGroupDetail& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // originGroupId Field Functions 
    bool hasOriginGroupId() const { return this->originGroupId_ != nullptr;};
    void deleteOriginGroupId() { this->originGroupId_ = nullptr;};
    inline string getOriginGroupId() const { DARABONBA_PTR_GET_DEFAULT(originGroupId_, "") };
    inline ObserveGroupDetail& setOriginGroupId(string originGroupId) { DARABONBA_PTR_SET_VALUE(originGroupId_, originGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ObserveGroupDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ObserveGroupDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceOrigin Field Functions 
    bool hasSourceOrigin() const { return this->sourceOrigin_ != nullptr;};
    void deleteSourceOrigin() { this->sourceOrigin_ = nullptr;};
    inline string getSourceOrigin() const { DARABONBA_PTR_GET_DEFAULT(sourceOrigin_, "") };
    inline ObserveGroupDetail& setSourceOrigin(string sourceOrigin) { DARABONBA_PTR_SET_VALUE(sourceOrigin_, sourceOrigin) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ObserveGroupDetail& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The UID of the Alibaba Cloud account to which the group belongs.
    shared_ptr<string> aliUid_ {};
    // The time when the group was created, in UTC format (yyyy-MM-ddTHH:mm:ssZ).
    shared_ptr<string> createTime_ {};
    // The description of the observability group, which explains its business purpose.
    shared_ptr<string> description_ {};
    // The list of entity discovery rules that define which entities the group automatically matches.
    shared_ptr<string> discoverRules_ {};
    // The statistics of entities in the group, grouped by entity type.
    shared_ptr<vector<ObserveGroupDetail::EntitySummaries>> entitySummaries_ {};
    // The extended information in JSON string format, which carries alert templates, alert contact groups, pause policies, and other configurations.
    shared_ptr<string> extraInfo_ {};
    // Indicates whether the current user has favorited the group.
    shared_ptr<bool> favorited_ {};
    shared_ptr<string> groupId_ {};
    // The name of the observability group. The name must be unique within the workspace.
    shared_ptr<string> groupName_ {};
    // The type of the observability group.
    shared_ptr<string> groupType_ {};
    // The time when the group was last modified, in UTC format (yyyy-MM-ddTHH:mm:ssZ). This value is automatically updated when any property of the resource changes.
    shared_ptr<string> modifyTime_ {};
    // The ID of the version 1.0 application group (product_group.id). This parameter is valid only when sourceOrigin is set to synced_from_1_0.
    shared_ptr<string> originGroupId_ {};
    // The region ID of the group.
    shared_ptr<string> regionId_ {};
    // The Alibaba Cloud resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The data source. Valid values:
    // - native_2_0: created natively in version 2.0.
    // - synced_from_1_0: synchronized from a version 1.0 application group.
    shared_ptr<string> sourceOrigin_ {};
    // The workspace ID to which the group belongs. This value is set at the workspace level and cannot be changed after the group is created.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
