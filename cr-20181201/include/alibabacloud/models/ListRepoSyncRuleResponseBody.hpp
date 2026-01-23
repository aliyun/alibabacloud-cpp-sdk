// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoSyncRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncRules, syncRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoSyncRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncRules, syncRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRepoSyncRuleResponseBody() = default ;
    ListRepoSyncRuleResponseBody(const ListRepoSyncRuleResponseBody &) = default ;
    ListRepoSyncRuleResponseBody(ListRepoSyncRuleResponseBody &&) = default ;
    ListRepoSyncRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncRuleResponseBody() = default ;
    ListRepoSyncRuleResponseBody& operator=(const ListRepoSyncRuleResponseBody &) = default ;
    ListRepoSyncRuleResponseBody& operator=(ListRepoSyncRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SyncRules& obj) { 
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
      SyncRules() = default ;
      SyncRules(const SyncRules &) = default ;
      SyncRules(SyncRules &&) = default ;
      SyncRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncRules() = default ;
      SyncRules& operator=(const SyncRules &) = default ;
      SyncRules& operator=(SyncRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->crossUser_ == nullptr && this->localInstanceId_ == nullptr && this->localNamespaceName_ == nullptr && this->localRegionId_ == nullptr && this->localRepoName_ == nullptr
        && this->modifiedTime_ == nullptr && this->repoNameFilter_ == nullptr && this->syncDirection_ == nullptr && this->syncRuleId_ == nullptr && this->syncRuleName_ == nullptr
        && this->syncScope_ == nullptr && this->syncTrigger_ == nullptr && this->tagFilter_ == nullptr && this->targetInstanceId_ == nullptr && this->targetNamespaceName_ == nullptr
        && this->targetRegionId_ == nullptr && this->targetRepoName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline SyncRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crossUser Field Functions 
      bool hasCrossUser() const { return this->crossUser_ != nullptr;};
      void deleteCrossUser() { this->crossUser_ = nullptr;};
      inline bool getCrossUser() const { DARABONBA_PTR_GET_DEFAULT(crossUser_, false) };
      inline SyncRules& setCrossUser(bool crossUser) { DARABONBA_PTR_SET_VALUE(crossUser_, crossUser) };


      // localInstanceId Field Functions 
      bool hasLocalInstanceId() const { return this->localInstanceId_ != nullptr;};
      void deleteLocalInstanceId() { this->localInstanceId_ = nullptr;};
      inline string getLocalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(localInstanceId_, "") };
      inline SyncRules& setLocalInstanceId(string localInstanceId) { DARABONBA_PTR_SET_VALUE(localInstanceId_, localInstanceId) };


      // localNamespaceName Field Functions 
      bool hasLocalNamespaceName() const { return this->localNamespaceName_ != nullptr;};
      void deleteLocalNamespaceName() { this->localNamespaceName_ = nullptr;};
      inline string getLocalNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(localNamespaceName_, "") };
      inline SyncRules& setLocalNamespaceName(string localNamespaceName) { DARABONBA_PTR_SET_VALUE(localNamespaceName_, localNamespaceName) };


      // localRegionId Field Functions 
      bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
      void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
      inline string getLocalRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
      inline SyncRules& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


      // localRepoName Field Functions 
      bool hasLocalRepoName() const { return this->localRepoName_ != nullptr;};
      void deleteLocalRepoName() { this->localRepoName_ = nullptr;};
      inline string getLocalRepoName() const { DARABONBA_PTR_GET_DEFAULT(localRepoName_, "") };
      inline SyncRules& setLocalRepoName(string localRepoName) { DARABONBA_PTR_SET_VALUE(localRepoName_, localRepoName) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline SyncRules& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // repoNameFilter Field Functions 
      bool hasRepoNameFilter() const { return this->repoNameFilter_ != nullptr;};
      void deleteRepoNameFilter() { this->repoNameFilter_ = nullptr;};
      inline string getRepoNameFilter() const { DARABONBA_PTR_GET_DEFAULT(repoNameFilter_, "") };
      inline SyncRules& setRepoNameFilter(string repoNameFilter) { DARABONBA_PTR_SET_VALUE(repoNameFilter_, repoNameFilter) };


      // syncDirection Field Functions 
      bool hasSyncDirection() const { return this->syncDirection_ != nullptr;};
      void deleteSyncDirection() { this->syncDirection_ = nullptr;};
      inline string getSyncDirection() const { DARABONBA_PTR_GET_DEFAULT(syncDirection_, "") };
      inline SyncRules& setSyncDirection(string syncDirection) { DARABONBA_PTR_SET_VALUE(syncDirection_, syncDirection) };


      // syncRuleId Field Functions 
      bool hasSyncRuleId() const { return this->syncRuleId_ != nullptr;};
      void deleteSyncRuleId() { this->syncRuleId_ = nullptr;};
      inline string getSyncRuleId() const { DARABONBA_PTR_GET_DEFAULT(syncRuleId_, "") };
      inline SyncRules& setSyncRuleId(string syncRuleId) { DARABONBA_PTR_SET_VALUE(syncRuleId_, syncRuleId) };


      // syncRuleName Field Functions 
      bool hasSyncRuleName() const { return this->syncRuleName_ != nullptr;};
      void deleteSyncRuleName() { this->syncRuleName_ = nullptr;};
      inline string getSyncRuleName() const { DARABONBA_PTR_GET_DEFAULT(syncRuleName_, "") };
      inline SyncRules& setSyncRuleName(string syncRuleName) { DARABONBA_PTR_SET_VALUE(syncRuleName_, syncRuleName) };


      // syncScope Field Functions 
      bool hasSyncScope() const { return this->syncScope_ != nullptr;};
      void deleteSyncScope() { this->syncScope_ = nullptr;};
      inline string getSyncScope() const { DARABONBA_PTR_GET_DEFAULT(syncScope_, "") };
      inline SyncRules& setSyncScope(string syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };


      // syncTrigger Field Functions 
      bool hasSyncTrigger() const { return this->syncTrigger_ != nullptr;};
      void deleteSyncTrigger() { this->syncTrigger_ = nullptr;};
      inline string getSyncTrigger() const { DARABONBA_PTR_GET_DEFAULT(syncTrigger_, "") };
      inline SyncRules& setSyncTrigger(string syncTrigger) { DARABONBA_PTR_SET_VALUE(syncTrigger_, syncTrigger) };


      // tagFilter Field Functions 
      bool hasTagFilter() const { return this->tagFilter_ != nullptr;};
      void deleteTagFilter() { this->tagFilter_ = nullptr;};
      inline string getTagFilter() const { DARABONBA_PTR_GET_DEFAULT(tagFilter_, "") };
      inline SyncRules& setTagFilter(string tagFilter) { DARABONBA_PTR_SET_VALUE(tagFilter_, tagFilter) };


      // targetInstanceId Field Functions 
      bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
      void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
      inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
      inline SyncRules& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


      // targetNamespaceName Field Functions 
      bool hasTargetNamespaceName() const { return this->targetNamespaceName_ != nullptr;};
      void deleteTargetNamespaceName() { this->targetNamespaceName_ = nullptr;};
      inline string getTargetNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(targetNamespaceName_, "") };
      inline SyncRules& setTargetNamespaceName(string targetNamespaceName) { DARABONBA_PTR_SET_VALUE(targetNamespaceName_, targetNamespaceName) };


      // targetRegionId Field Functions 
      bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
      void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
      inline string getTargetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
      inline SyncRules& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


      // targetRepoName Field Functions 
      bool hasTargetRepoName() const { return this->targetRepoName_ != nullptr;};
      void deleteTargetRepoName() { this->targetRepoName_ = nullptr;};
      inline string getTargetRepoName() const { DARABONBA_PTR_GET_DEFAULT(targetRepoName_, "") };
      inline SyncRules& setTargetRepoName(string targetRepoName) { DARABONBA_PTR_SET_VALUE(targetRepoName_, targetRepoName) };


    protected:
      // The time when the synchronization rule was created.
      shared_ptr<int64_t> createTime_ {};
      // Indicates whether the synchronization is performed across Alibaba Cloud accounts. Valid values:
      // 
      // *   `true`: Images are synchronized across Alibaba Cloud accounts.
      // *   `false`: Images are synchronized within the same Alibaba Cloud account.
      // 
      // Default value: `false`.
      shared_ptr<bool> crossUser_ {};
      // The ID of the source instance.
      shared_ptr<string> localInstanceId_ {};
      // The name of the namespace in the source instance.
      shared_ptr<string> localNamespaceName_ {};
      // The region ID of the source instance.
      shared_ptr<string> localRegionId_ {};
      // The name of the repository in the source instance.
      shared_ptr<string> localRepoName_ {};
      // The time when the synchronization rule was last modified.
      shared_ptr<int64_t> modifiedTime_ {};
      // The regular expression that is used to filter repositories.
      // 
      // >  This parameter is valid only when SyncScope is set to `NAMESPACE`.
      shared_ptr<string> repoNameFilter_ {};
      // The synchronization direction. Valid values:
      // 
      // *   `FROM`: Images are synchronized from the source instance to the destination instance.
      // *   `TO`: Images are synchronized from the destination instance to the source instance.
      shared_ptr<string> syncDirection_ {};
      // The ID of the synchronization rule.
      shared_ptr<string> syncRuleId_ {};
      // The name of the synchronization rule.
      shared_ptr<string> syncRuleName_ {};
      // The synchronization scope. Valid values:
      // 
      // *   `NAMESPACE`: synchronizes the image tags in a namespace that meet the synchronization rule.
      // *   `REPO`: synchronizes the image tags in an image repository that meet the synchronization rule.
      shared_ptr<string> syncScope_ {};
      // The policy that is applied to trigger the synchronization rule. Valid values:
      // 
      // *   `INITIATIVE`: The synchronization rule is positively triggered.
      // *   `PASSIVE`: The synchronization rule is passively triggered.
      shared_ptr<string> syncTrigger_ {};
      // The regular expression that is used to filter image tags.
      shared_ptr<string> tagFilter_ {};
      // The ID of the destination instance.
      shared_ptr<string> targetInstanceId_ {};
      // The name of the namespace in the destination instance.
      shared_ptr<string> targetNamespaceName_ {};
      // The region ID of the destination instance.
      shared_ptr<string> targetRegionId_ {};
      // The name of the repository in the destination instance.
      shared_ptr<string> targetRepoName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->syncRules_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRepoSyncRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListRepoSyncRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoSyncRuleResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoSyncRuleResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRepoSyncRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncRules Field Functions 
    bool hasSyncRules() const { return this->syncRules_ != nullptr;};
    void deleteSyncRules() { this->syncRules_ = nullptr;};
    inline const vector<ListRepoSyncRuleResponseBody::SyncRules> & getSyncRules() const { DARABONBA_PTR_GET_CONST(syncRules_, vector<ListRepoSyncRuleResponseBody::SyncRules>) };
    inline vector<ListRepoSyncRuleResponseBody::SyncRules> getSyncRules() { DARABONBA_PTR_GET(syncRules_, vector<ListRepoSyncRuleResponseBody::SyncRules>) };
    inline ListRepoSyncRuleResponseBody& setSyncRules(const vector<ListRepoSyncRuleResponseBody::SyncRules> & syncRules) { DARABONBA_PTR_SET_VALUE(syncRules_, syncRules) };
    inline ListRepoSyncRuleResponseBody& setSyncRules(vector<ListRepoSyncRuleResponseBody::SyncRules> && syncRules) { DARABONBA_PTR_SET_RVALUE(syncRules_, syncRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRepoSyncRuleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried synchronization rules.
    shared_ptr<vector<ListRepoSyncRuleResponseBody::SyncRules>> syncRules_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
