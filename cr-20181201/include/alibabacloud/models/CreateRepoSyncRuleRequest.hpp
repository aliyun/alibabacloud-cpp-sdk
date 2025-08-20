// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSYNCRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSYNCRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoSyncRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoSyncRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNameFilter, repoNameFilter_);
      DARABONBA_PTR_TO_JSON(SyncRuleName, syncRuleName_);
      DARABONBA_PTR_TO_JSON(SyncScope, syncScope_);
      DARABONBA_PTR_TO_JSON(SyncTrigger, syncTrigger_);
      DARABONBA_PTR_TO_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetNamespaceName, targetNamespaceName_);
      DARABONBA_PTR_TO_JSON(TargetRegionId, targetRegionId_);
      DARABONBA_PTR_TO_JSON(TargetRepoName, targetRepoName_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoSyncRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNameFilter, repoNameFilter_);
      DARABONBA_PTR_FROM_JSON(SyncRuleName, syncRuleName_);
      DARABONBA_PTR_FROM_JSON(SyncScope, syncScope_);
      DARABONBA_PTR_FROM_JSON(SyncTrigger, syncTrigger_);
      DARABONBA_PTR_FROM_JSON(TagFilter, tagFilter_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetNamespaceName, targetNamespaceName_);
      DARABONBA_PTR_FROM_JSON(TargetRegionId, targetRegionId_);
      DARABONBA_PTR_FROM_JSON(TargetRepoName, targetRepoName_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    CreateRepoSyncRuleRequest() = default ;
    CreateRepoSyncRuleRequest(const CreateRepoSyncRuleRequest &) = default ;
    CreateRepoSyncRuleRequest(CreateRepoSyncRuleRequest &&) = default ;
    CreateRepoSyncRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoSyncRuleRequest() = default ;
    CreateRepoSyncRuleRequest& operator=(const CreateRepoSyncRuleRequest &) = default ;
    CreateRepoSyncRuleRequest& operator=(CreateRepoSyncRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->namespaceName_ != nullptr && this->repoName_ != nullptr && this->repoNameFilter_ != nullptr && this->syncRuleName_ != nullptr && this->syncScope_ != nullptr
        && this->syncTrigger_ != nullptr && this->tagFilter_ != nullptr && this->targetInstanceId_ != nullptr && this->targetNamespaceName_ != nullptr && this->targetRegionId_ != nullptr
        && this->targetRepoName_ != nullptr && this->targetUserId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoSyncRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateRepoSyncRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateRepoSyncRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNameFilter Field Functions 
    bool hasRepoNameFilter() const { return this->repoNameFilter_ != nullptr;};
    void deleteRepoNameFilter() { this->repoNameFilter_ = nullptr;};
    inline string repoNameFilter() const { DARABONBA_PTR_GET_DEFAULT(repoNameFilter_, "") };
    inline CreateRepoSyncRuleRequest& setRepoNameFilter(string repoNameFilter) { DARABONBA_PTR_SET_VALUE(repoNameFilter_, repoNameFilter) };


    // syncRuleName Field Functions 
    bool hasSyncRuleName() const { return this->syncRuleName_ != nullptr;};
    void deleteSyncRuleName() { this->syncRuleName_ = nullptr;};
    inline string syncRuleName() const { DARABONBA_PTR_GET_DEFAULT(syncRuleName_, "") };
    inline CreateRepoSyncRuleRequest& setSyncRuleName(string syncRuleName) { DARABONBA_PTR_SET_VALUE(syncRuleName_, syncRuleName) };


    // syncScope Field Functions 
    bool hasSyncScope() const { return this->syncScope_ != nullptr;};
    void deleteSyncScope() { this->syncScope_ = nullptr;};
    inline string syncScope() const { DARABONBA_PTR_GET_DEFAULT(syncScope_, "") };
    inline CreateRepoSyncRuleRequest& setSyncScope(string syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };


    // syncTrigger Field Functions 
    bool hasSyncTrigger() const { return this->syncTrigger_ != nullptr;};
    void deleteSyncTrigger() { this->syncTrigger_ = nullptr;};
    inline string syncTrigger() const { DARABONBA_PTR_GET_DEFAULT(syncTrigger_, "") };
    inline CreateRepoSyncRuleRequest& setSyncTrigger(string syncTrigger) { DARABONBA_PTR_SET_VALUE(syncTrigger_, syncTrigger) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline string tagFilter() const { DARABONBA_PTR_GET_DEFAULT(tagFilter_, "") };
    inline CreateRepoSyncRuleRequest& setTagFilter(string tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline CreateRepoSyncRuleRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetNamespaceName Field Functions 
    bool hasTargetNamespaceName() const { return this->targetNamespaceName_ != nullptr;};
    void deleteTargetNamespaceName() { this->targetNamespaceName_ = nullptr;};
    inline string targetNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(targetNamespaceName_, "") };
    inline CreateRepoSyncRuleRequest& setTargetNamespaceName(string targetNamespaceName) { DARABONBA_PTR_SET_VALUE(targetNamespaceName_, targetNamespaceName) };


    // targetRegionId Field Functions 
    bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
    void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
    inline string targetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
    inline CreateRepoSyncRuleRequest& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


    // targetRepoName Field Functions 
    bool hasTargetRepoName() const { return this->targetRepoName_ != nullptr;};
    void deleteTargetRepoName() { this->targetRepoName_ = nullptr;};
    inline string targetRepoName() const { DARABONBA_PTR_GET_DEFAULT(targetRepoName_, "") };
    inline CreateRepoSyncRuleRequest& setTargetRepoName(string targetRepoName) { DARABONBA_PTR_SET_VALUE(targetRepoName_, targetRepoName) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline CreateRepoSyncRuleRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The source instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespace name of the source instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The name of the image repository in the source instance.
    std::shared_ptr<string> repoName_ = nullptr;
    // The regular expression that is used to filter repositories.
    // 
    // >  This parameter is valid only when SyncScope is set to `NAMESPACE`.
    std::shared_ptr<string> repoNameFilter_ = nullptr;
    // The name of the image synchronization rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> syncRuleName_ = nullptr;
    // The synchronization scope. Valid values:
    // 
    // *   `REPO`: synchronizes the image tags in an image repository that meet the synchronization rule.
    // *   `NAMESPACE`: synchronizes the image tags in a namespace that meet the synchronization rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> syncScope_ = nullptr;
    // The mode of triggering the synchronization rule. Valid values:
    // 
    // *   `INITIATIVE`: manually triggers the synchronization rule.
    // *   `PASSIVE`: automatically triggers the synchronization rule.
    std::shared_ptr<string> syncTrigger_ = nullptr;
    // The regular expression that is used to filter image tags.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagFilter_ = nullptr;
    // The destination instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The namespace name of the destination instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetNamespaceName_ = nullptr;
    // The region ID of the destination instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetRegionId_ = nullptr;
    // The name of the image repository in the destination instance.
    std::shared_ptr<string> targetRepoName_ = nullptr;
    // The user ID (UID) of the account to which the destination instance belongs.
    // 
    // >  If you synchronize images across accounts, you must use the UID.
    std::shared_ptr<string> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
