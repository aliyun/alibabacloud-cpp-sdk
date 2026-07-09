// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVEGROUP_HPP_
#define ALIBABACLOUD_MODELS_OBSERVEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ObserveGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObserveGroup& obj) { 
      DARABONBA_PTR_TO_JSON(aliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(discoverRules, discoverRules_);
      DARABONBA_PTR_TO_JSON(entityCounts, entityCounts_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(favorited, favorited_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sourceOrigin, sourceOrigin_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ObserveGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(aliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(discoverRules, discoverRules_);
      DARABONBA_PTR_FROM_JSON(entityCounts, entityCounts_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(favorited, favorited_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sourceOrigin, sourceOrigin_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ObserveGroup() = default ;
    ObserveGroup(const ObserveGroup &) = default ;
    ObserveGroup(ObserveGroup &&) = default ;
    ObserveGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObserveGroup() = default ;
    ObserveGroup& operator=(const ObserveGroup &) = default ;
    ObserveGroup& operator=(ObserveGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->discoverRules_ == nullptr && this->entityCounts_ == nullptr && this->extraInfo_ == nullptr
        && this->favorited_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->health_ == nullptr
        && this->modifyTime_ == nullptr && this->originGroupId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceOrigin_ == nullptr
        && this->tags_ == nullptr && this->workspaceId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline ObserveGroup& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ObserveGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ObserveGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // discoverRules Field Functions 
    bool hasDiscoverRules() const { return this->discoverRules_ != nullptr;};
    void deleteDiscoverRules() { this->discoverRules_ = nullptr;};
    inline string getDiscoverRules() const { DARABONBA_PTR_GET_DEFAULT(discoverRules_, "") };
    inline ObserveGroup& setDiscoverRules(string discoverRules) { DARABONBA_PTR_SET_VALUE(discoverRules_, discoverRules) };


    // entityCounts Field Functions 
    bool hasEntityCounts() const { return this->entityCounts_ != nullptr;};
    void deleteEntityCounts() { this->entityCounts_ = nullptr;};
    inline const map<string, int32_t> & getEntityCounts() const { DARABONBA_PTR_GET_CONST(entityCounts_, map<string, int32_t>) };
    inline map<string, int32_t> getEntityCounts() { DARABONBA_PTR_GET(entityCounts_, map<string, int32_t>) };
    inline ObserveGroup& setEntityCounts(const map<string, int32_t> & entityCounts) { DARABONBA_PTR_SET_VALUE(entityCounts_, entityCounts) };
    inline ObserveGroup& setEntityCounts(map<string, int32_t> && entityCounts) { DARABONBA_PTR_SET_RVALUE(entityCounts_, entityCounts) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline ObserveGroup& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // favorited Field Functions 
    bool hasFavorited() const { return this->favorited_ != nullptr;};
    void deleteFavorited() { this->favorited_ = nullptr;};
    inline bool getFavorited() const { DARABONBA_PTR_GET_DEFAULT(favorited_, false) };
    inline ObserveGroup& setFavorited(bool favorited) { DARABONBA_PTR_SET_VALUE(favorited_, favorited) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ObserveGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ObserveGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ObserveGroup& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline int32_t getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, 0) };
    inline ObserveGroup& setHealth(int32_t health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ObserveGroup& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // originGroupId Field Functions 
    bool hasOriginGroupId() const { return this->originGroupId_ != nullptr;};
    void deleteOriginGroupId() { this->originGroupId_ = nullptr;};
    inline string getOriginGroupId() const { DARABONBA_PTR_GET_DEFAULT(originGroupId_, "") };
    inline ObserveGroup& setOriginGroupId(string originGroupId) { DARABONBA_PTR_SET_VALUE(originGroupId_, originGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ObserveGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ObserveGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceOrigin Field Functions 
    bool hasSourceOrigin() const { return this->sourceOrigin_ != nullptr;};
    void deleteSourceOrigin() { this->sourceOrigin_ = nullptr;};
    inline string getSourceOrigin() const { DARABONBA_PTR_GET_DEFAULT(sourceOrigin_, "") };
    inline ObserveGroup& setSourceOrigin(string sourceOrigin) { DARABONBA_PTR_SET_VALUE(sourceOrigin_, sourceOrigin) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ObserveGroup::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ObserveGroup::Tags>) };
    inline vector<ObserveGroup::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ObserveGroup::Tags>) };
    inline ObserveGroup& setTags(const vector<ObserveGroup::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ObserveGroup& setTags(vector<ObserveGroup::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ObserveGroup& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The UID of the Alibaba Cloud account to which the group belongs.
    shared_ptr<string> aliUid_ {};
    // The time when the group was created, in UTC format (yyyy-MM-ddTHH:mm:ssZ).
    shared_ptr<string> createTime_ {};
    // The description of the observability group, which describes the business purpose.
    shared_ptr<string> description_ {};
    // The list of entity discovery rules that define which entities the group automatically matches.
    shared_ptr<string> discoverRules_ {};
    // The number of entities in each category. The key is the category domain (such as acs for Alibaba Cloud services, apm, or rum, which is extensible). The value is the number of entities in that category that belong to this group. This parameter is returned only when withEntityCount is set to true.
    shared_ptr<map<string, int32_t>> entityCounts_ {};
    // The extended information, which is a JSON string that contains alert templates, alert contact groups, pause policies, and other settings.
    shared_ptr<string> extraInfo_ {};
    // Indicates whether the current user has favorited this group. This value is used as the filter criterion for the My Favorites feature.
    shared_ptr<bool> favorited_ {};
    // The globally unique ID of the observability group, in the format of og-<16-character hash>. This ID is used across metrics, alerts, and the console.
    shared_ptr<string> groupId_ {};
    // The name of the observability group. The name must be unique within the workspace.
    shared_ptr<string> groupName_ {};
    // The type of the observability group.
    shared_ptr<string> groupType_ {};
    // The health status of the group. Valid values:
    // - -1: unknown (placeholder).
    // - 1: healthy.
    // - 0: unhealthy.
    shared_ptr<int32_t> health_ {};
    // The time when the group was last modified, in UTC format (yyyy-MM-ddTHH:mm:ssZ). This value is automatically updated when any property of the resource changes.
    shared_ptr<string> modifyTime_ {};
    // The product_group.id of the version 1.0 application group. This parameter is returned only when sourceOrigin is set to synced_from_1_0.
    shared_ptr<string> originGroupId_ {};
    // The region ID of the group.
    shared_ptr<string> regionId_ {};
    // The Alibaba Cloud resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The data source. Valid values:
    // - native_2_0: created natively in version 2.0.
    // - synced_from_1_0: synchronized from a version 1.0 application group.
    shared_ptr<string> sourceOrigin_ {};
    // The resource tags (Alibaba Cloud standard tags), which are an array of key-value pairs.
    shared_ptr<vector<ObserveGroup::Tags>> tags_ {};
    // The workspace ID to which the group belongs. This value is set at the workspace level and cannot be changed after the group is created.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
