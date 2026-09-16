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
      DARABONBA_PTR_TO_JSON(LinkId, linkId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NamespaceNameFilter, namespaceNameFilter_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
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
      DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NamespaceNameFilter, namespaceNameFilter_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
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
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->linkId_ == nullptr && this->namespaceName_ == nullptr && this->namespaceNameFilter_ == nullptr && this->priority_ == nullptr && this->repoName_ == nullptr
        && this->repoNameFilter_ == nullptr && this->syncRuleName_ == nullptr && this->syncScope_ == nullptr && this->syncTrigger_ == nullptr && this->tagFilter_ == nullptr
        && this->targetInstanceId_ == nullptr && this->targetNamespaceName_ == nullptr && this->targetRegionId_ == nullptr && this->targetRepoName_ == nullptr && this->targetUserId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoSyncRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // linkId Field Functions 
    bool hasLinkId() const { return this->linkId_ != nullptr;};
    void deleteLinkId() { this->linkId_ = nullptr;};
    inline string getLinkId() const { DARABONBA_PTR_GET_DEFAULT(linkId_, "") };
    inline CreateRepoSyncRuleRequest& setLinkId(string linkId) { DARABONBA_PTR_SET_VALUE(linkId_, linkId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateRepoSyncRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // namespaceNameFilter Field Functions 
    bool hasNamespaceNameFilter() const { return this->namespaceNameFilter_ != nullptr;};
    void deleteNamespaceNameFilter() { this->namespaceNameFilter_ = nullptr;};
    inline string getNamespaceNameFilter() const { DARABONBA_PTR_GET_DEFAULT(namespaceNameFilter_, "") };
    inline CreateRepoSyncRuleRequest& setNamespaceNameFilter(string namespaceNameFilter) { DARABONBA_PTR_SET_VALUE(namespaceNameFilter_, namespaceNameFilter) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateRepoSyncRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateRepoSyncRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNameFilter Field Functions 
    bool hasRepoNameFilter() const { return this->repoNameFilter_ != nullptr;};
    void deleteRepoNameFilter() { this->repoNameFilter_ = nullptr;};
    inline string getRepoNameFilter() const { DARABONBA_PTR_GET_DEFAULT(repoNameFilter_, "") };
    inline CreateRepoSyncRuleRequest& setRepoNameFilter(string repoNameFilter) { DARABONBA_PTR_SET_VALUE(repoNameFilter_, repoNameFilter) };


    // syncRuleName Field Functions 
    bool hasSyncRuleName() const { return this->syncRuleName_ != nullptr;};
    void deleteSyncRuleName() { this->syncRuleName_ = nullptr;};
    inline string getSyncRuleName() const { DARABONBA_PTR_GET_DEFAULT(syncRuleName_, "") };
    inline CreateRepoSyncRuleRequest& setSyncRuleName(string syncRuleName) { DARABONBA_PTR_SET_VALUE(syncRuleName_, syncRuleName) };


    // syncScope Field Functions 
    bool hasSyncScope() const { return this->syncScope_ != nullptr;};
    void deleteSyncScope() { this->syncScope_ = nullptr;};
    inline string getSyncScope() const { DARABONBA_PTR_GET_DEFAULT(syncScope_, "") };
    inline CreateRepoSyncRuleRequest& setSyncScope(string syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };


    // syncTrigger Field Functions 
    bool hasSyncTrigger() const { return this->syncTrigger_ != nullptr;};
    void deleteSyncTrigger() { this->syncTrigger_ = nullptr;};
    inline string getSyncTrigger() const { DARABONBA_PTR_GET_DEFAULT(syncTrigger_, "") };
    inline CreateRepoSyncRuleRequest& setSyncTrigger(string syncTrigger) { DARABONBA_PTR_SET_VALUE(syncTrigger_, syncTrigger) };


    // tagFilter Field Functions 
    bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
    void deleteTagFilter() { this->tagFilter_ = nullptr;};
    inline string getTagFilter() const { DARABONBA_PTR_GET_DEFAULT(tagFilter_, "") };
    inline CreateRepoSyncRuleRequest& setTagFilter(string tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline CreateRepoSyncRuleRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetNamespaceName Field Functions 
    bool hasTargetNamespaceName() const { return this->targetNamespaceName_ != nullptr;};
    void deleteTargetNamespaceName() { this->targetNamespaceName_ = nullptr;};
    inline string getTargetNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(targetNamespaceName_, "") };
    inline CreateRepoSyncRuleRequest& setTargetNamespaceName(string targetNamespaceName) { DARABONBA_PTR_SET_VALUE(targetNamespaceName_, targetNamespaceName) };


    // targetRegionId Field Functions 
    bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
    void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
    inline string getTargetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
    inline CreateRepoSyncRuleRequest& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


    // targetRepoName Field Functions 
    bool hasTargetRepoName() const { return this->targetRepoName_ != nullptr;};
    void deleteTargetRepoName() { this->targetRepoName_ = nullptr;};
    inline string getTargetRepoName() const { DARABONBA_PTR_GET_DEFAULT(targetRepoName_, "") };
    inline CreateRepoSyncRuleRequest& setTargetRepoName(string targetRepoName) { DARABONBA_PTR_SET_VALUE(targetRepoName_, targetRepoName) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline CreateRepoSyncRuleRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The ID of the source instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the custom synchronization link.
    shared_ptr<string> linkId_ {};
    // The namespace name of the source instance.
    shared_ptr<string> namespaceName_ {};
    // The instance-level namespace regex filter.
    // > This parameter takes effect only when SyncScope is set to `INSTANCE`.
    shared_ptr<string> namespaceNameFilter_ {};
    // The execution priority of the synchronization task. Synchronization tasks are executed in descending order of priority. Tasks with the same priority are executed in random order.
    // 
    // Valid values: 1 to 5.
    // 
    // Default value: 3.
    shared_ptr<int32_t> priority_ {};
    // The repository name of the source instance.
    shared_ptr<string> repoName_ {};
    // The repository filter rule.
    // > This parameter takes effect only when SyncScope is set to `INSTANCE` or `NAMESPACE`.
    shared_ptr<string> repoNameFilter_ {};
    // The name of the synchronization rule.
    // 
    // This parameter is required.
    shared_ptr<string> syncRuleName_ {};
    // The synchronization type. Valid values:
    // 
    // - `REPO`: Synchronizes by image repository.
    // 
    // - `NAMESPACE`: Synchronizes by namespace.
    // 
    // - `INSTANCE`: Synchronizes by namespace regex and repository regex.
    // 
    // This parameter is required.
    shared_ptr<string> syncScope_ {};
    // The trigger for the synchronization action. Valid values:
    // 
    // - `INITIATIVE`: Manual trigger.
    //  
    // - `PASSIVE`: Automatic trigger.
    shared_ptr<string> syncTrigger_ {};
    // The tag filter rule.
    // 
    // This parameter is required.
    shared_ptr<string> tagFilter_ {};
    // The ID of the target instance.
    // 
    // This parameter is required.
    shared_ptr<string> targetInstanceId_ {};
    // The namespace name of the target instance.
    shared_ptr<string> targetNamespaceName_ {};
    // The region ID of the target instance.
    // 
    // This parameter is required.
    shared_ptr<string> targetRegionId_ {};
    // The image repository name of the target instance.
    shared_ptr<string> targetRepoName_ {};
    // The UID of the account to which the target instance belongs.
    // 
    // > This parameter is required for cross-account image synchronization.
    shared_ptr<string> targetUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
