// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCRULERESPONSEBODYSYNCRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCRULERESPONSEBODYSYNCRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoSyncRuleResponseBodySyncRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncRuleResponseBodySyncRules& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossUser, crossUser_);
      DARABONBA_PTR_TO_JSON(LocalInstanceId, localInstanceId_);
      DARABONBA_PTR_TO_JSON(LocalNamespaceName, localNamespaceName_);
      DARABONBA_PTR_TO_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_TO_JSON(LocalRepoName, localRepoName_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RepoNameFilter, repoNameFilter_);
      DARABONBA_PTR_TO_JSON(SyncDirection, syncDirection_);
      DARABONBA_PTR_TO_JSON(SyncRuleId, syncRuleId_);
      DARABONBA_PTR_TO_JSON(SyncRuleName, syncRuleName_);
      DARABONBA_PTR_TO_JSON(SyncScope, syncScope_);
      DARABONBA_PTR_TO_JSON(SyncTrigger, syncTrigger_);
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetNamespaceName, targetNamespaceName_);
      DARABONBA_PTR_TO_JSON(TargetRegionId, targetRegionId_);
      DARABONBA_PTR_TO_JSON(TargetRepoName, targetRepoName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoSyncRuleResponseBodySyncRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossUser, crossUser_);
      DARABONBA_PTR_FROM_JSON(LocalInstanceId, localInstanceId_);
      DARABONBA_PTR_FROM_JSON(LocalNamespaceName, localNamespaceName_);
      DARABONBA_PTR_FROM_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_FROM_JSON(LocalRepoName, localRepoName_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RepoNameFilter, repoNameFilter_);
      DARABONBA_PTR_FROM_JSON(SyncDirection, syncDirection_);
      DARABONBA_PTR_FROM_JSON(SyncRuleId, syncRuleId_);
      DARABONBA_PTR_FROM_JSON(SyncRuleName, syncRuleName_);
      DARABONBA_PTR_FROM_JSON(SyncScope, syncScope_);
      DARABONBA_PTR_FROM_JSON(SyncTrigger, syncTrigger_);
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetNamespaceName, targetNamespaceName_);
      DARABONBA_PTR_FROM_JSON(TargetRegionId, targetRegionId_);
      DARABONBA_PTR_FROM_JSON(TargetRepoName, targetRepoName_);
    };
    ListRepoSyncRuleResponseBodySyncRules() = default ;
    ListRepoSyncRuleResponseBodySyncRules(const ListRepoSyncRuleResponseBodySyncRules &) = default ;
    ListRepoSyncRuleResponseBodySyncRules(ListRepoSyncRuleResponseBodySyncRules &&) = default ;
    ListRepoSyncRuleResponseBodySyncRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncRuleResponseBodySyncRules() = default ;
    ListRepoSyncRuleResponseBodySyncRules& operator=(const ListRepoSyncRuleResponseBodySyncRules &) = default ;
    ListRepoSyncRuleResponseBodySyncRules& operator=(ListRepoSyncRuleResponseBodySyncRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->crossUser_ != nullptr && this->localInstanceId_ != nullptr && this->localNamespaceName_ != nullptr && this->localRegionId_ != nullptr && this->localRepoName_ != nullptr
        && this->modifiedTime_ != nullptr && this->repoNameFilter_ != nullptr && this->syncDirection_ != nullptr && this->syncRuleId_ != nullptr && this->syncRuleName_ != nullptr
        && this->syncScope_ != nullptr && this->syncTrigger_ != nullptr && this->tagFilter_ != nullptr && this->targetInstanceId_ != nullptr && this->targetNamespaceName_ != nullptr
        && this->targetRegionId_ != nullptr && this->targetRepoName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListRepoSyncRuleResponseBodySyncRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossUser Field Functions 
    bool hasCrossUser() const { return this->crossUser_ != nullptr;};
    void deleteCrossUser() { this->crossUser_ = nullptr;};
    inline bool crossUser() const { DARABONBA_PTR_GET_DEFAULT(crossUser_, false) };
    inline ListRepoSyncRuleResponseBodySyncRules& setCrossUser(bool crossUser) { DARABONBA_PTR_SET_VALUE(crossUser_, crossUser) };


    // localInstanceId Field Functions 
    bool hasLocalInstanceId() const { return this->localInstanceId_ != nullptr;};
    void deleteLocalInstanceId() { this->localInstanceId_ = nullptr;};
    inline string localInstanceId() const { DARABONBA_PTR_GET_DEFAULT(localInstanceId_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setLocalInstanceId(string localInstanceId) { DARABONBA_PTR_SET_VALUE(localInstanceId_, localInstanceId) };


    // localNamespaceName Field Functions 
    bool hasLocalNamespaceName() const { return this->localNamespaceName_ != nullptr;};
    void deleteLocalNamespaceName() { this->localNamespaceName_ = nullptr;};
    inline string localNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(localNamespaceName_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setLocalNamespaceName(string localNamespaceName) { DARABONBA_PTR_SET_VALUE(localNamespaceName_, localNamespaceName) };


    // localRegionId Field Functions 
    bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
    void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
    inline string localRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


    // localRepoName Field Functions 
    bool hasLocalRepoName() const { return this->localRepoName_ != nullptr;};
    void deleteLocalRepoName() { this->localRepoName_ = nullptr;};
    inline string localRepoName() const { DARABONBA_PTR_GET_DEFAULT(localRepoName_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setLocalRepoName(string localRepoName) { DARABONBA_PTR_SET_VALUE(localRepoName_, localRepoName) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListRepoSyncRuleResponseBodySyncRules& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // repoNameFilter Field Functions 
    bool hasRepoNameFilter() const { return this->repoNameFilter_ != nullptr;};
    void deleteRepoNameFilter() { this->repoNameFilter_ = nullptr;};
    inline string repoNameFilter() const { DARABONBA_PTR_GET_DEFAULT(repoNameFilter_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setRepoNameFilter(string repoNameFilter) { DARABONBA_PTR_SET_VALUE(repoNameFilter_, repoNameFilter) };


    // syncDirection Field Functions 
    bool hasSyncDirection() const { return this->syncDirection_ != nullptr;};
    void deleteSyncDirection() { this->syncDirection_ = nullptr;};
    inline string syncDirection() const { DARABONBA_PTR_GET_DEFAULT(syncDirection_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setSyncDirection(string syncDirection) { DARABONBA_PTR_SET_VALUE(syncDirection_, syncDirection) };


    // syncRuleId Field Functions 
    bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
    void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
    inline string syncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


    // syncRuleName Field Functions 
    bool hasSyncRuleName() const { return this->syncRuleName_ != nullptr;};
    void deleteSyncRuleName() { this->syncRuleName_ = nullptr;};
    inline string syncRuleName() const { DARABONBA_PTR_GET_DEFAULT(syncRuleName_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setSyncRuleName(string syncRuleName) { DARABONBA_PTR_SET_VALUE(syncRuleName_, syncRuleName) };


    // syncScope Field Functions 
    bool hasSyncScope() const { return this->syncScope_ != nullptr;};
    void deleteSyncScope() { this->syncScope_ = nullptr;};
    inline string syncScope() const { DARABONBA_PTR_GET_DEFAULT(syncScope_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setSyncScope(string syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };


    // syncTrigger Field Functions 
    bool hasSyncTrigger() const { return this->syncTrigger_ != nullptr;};
    void deleteSyncTrigger() { this->syncTrigger_ = nullptr;};
    inline string syncTrigger() const { DARABONBA_PTR_GET_DEFAULT(syncTrigger_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setSyncTrigger(string syncTrigger) { DARABONBA_PTR_SET_VALUE(syncTrigger_, syncTrigger) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline string tagFilter() const { DARABONBA_PTR_GET_DEFAULT(tagFilter_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setTagFilter(string tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetNamespaceName Field Functions 
    bool hasTargetNamespaceName() const { return this->targetNamespaceName_ != nullptr;};
    void deleteTargetNamespaceName() { this->targetNamespaceName_ = nullptr;};
    inline string targetNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(targetNamespaceName_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setTargetNamespaceName(string targetNamespaceName) { DARABONBA_PTR_SET_VALUE(targetNamespaceName_, targetNamespaceName) };


    // targetRegionId Field Functions 
    bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
    void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
    inline string targetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


    // targetRepoName Field Functions 
    bool hasTargetRepoName() const { return this->targetRepoName_ != nullptr;};
    void deleteTargetRepoName() { this->targetRepoName_ = nullptr;};
    inline string targetRepoName() const { DARABONBA_PTR_GET_DEFAULT(targetRepoName_, "") };
    inline ListRepoSyncRuleResponseBodySyncRules& setTargetRepoName(string targetRepoName) { DARABONBA_PTR_SET_VALUE(targetRepoName_, targetRepoName) };


  protected:
    // The time when the synchronization rule was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the synchronization is performed across Alibaba Cloud accounts. Valid values:
    // 
    // *   `true`: Images are synchronized across Alibaba Cloud accounts.
    // *   `false`: Images are synchronized within the same Alibaba Cloud account.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> crossUser_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> localInstanceId_ = nullptr;
    // The name of the namespace in the source instance.
    std::shared_ptr<string> localNamespaceName_ = nullptr;
    // The region ID of the source instance.
    std::shared_ptr<string> localRegionId_ = nullptr;
    // The name of the repository in the source instance.
    std::shared_ptr<string> localRepoName_ = nullptr;
    // The time when the synchronization rule was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The regular expression that is used to filter repositories.
    // 
    // >  This parameter is valid only when SyncScope is set to `NAMESPACE`.
    std::shared_ptr<string> repoNameFilter_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   `FROM`: Images are synchronized from the source instance to the destination instance.
    // *   `TO`: Images are synchronized from the destination instance to the source instance.
    std::shared_ptr<string> syncDirection_ = nullptr;
    // The ID of the synchronization rule.
    std::shared_ptr<string> syncRuleId_ = nullptr;
    // The name of the synchronization rule.
    std::shared_ptr<string> syncRuleName_ = nullptr;
    // The synchronization scope. Valid values:
    // 
    // *   `NAMESPACE`: synchronizes the image tags in a namespace that meet the synchronization rule.
    // *   `REPO`: synchronizes the image tags in an image repository that meet the synchronization rule.
    std::shared_ptr<string> syncScope_ = nullptr;
    // The policy that is applied to trigger the synchronization rule. Valid values:
    // 
    // *   `INITIATIVE`: The synchronization rule is positively triggered.
    // *   `PASSIVE`: The synchronization rule is passively triggered.
    std::shared_ptr<string> syncTrigger_ = nullptr;
    // The regular expression that is used to filter image tags.
    std::shared_ptr<string> tagFilter_ = nullptr;
    // The ID of the destination instance.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The name of the namespace in the destination instance.
    std::shared_ptr<string> targetNamespaceName_ = nullptr;
    // The region ID of the destination instance.
    std::shared_ptr<string> targetRegionId_ = nullptr;
    // The name of the repository in the destination instance.
    std::shared_ptr<string> targetRepoName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
