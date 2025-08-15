// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkspacesResponseBodyWorkspacesPrePaidQuota.hpp>
#include <alibabacloud/models/ListWorkspacesResponseBodyWorkspacesStateChangeReason.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkspacesResponseBodyWorkspacesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dlfCatalogId, dlfCatalogId_);
      DARABONBA_PTR_TO_JSON(dlfType, dlfType_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(failReason, failReason_);
      DARABONBA_PTR_TO_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(paymentStatus, paymentStatus_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(prePaidQuota, prePaidQuota_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(releaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
      DARABONBA_PTR_TO_JSON(storage, storage_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(workspaceStatus, workspaceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dlfCatalogId, dlfCatalogId_);
      DARABONBA_PTR_FROM_JSON(dlfType, dlfType_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(failReason, failReason_);
      DARABONBA_PTR_FROM_JSON(paymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(paymentStatus, paymentStatus_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(prePaidQuota, prePaidQuota_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(releaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
      DARABONBA_PTR_FROM_JSON(storage, storage_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(workspaceStatus, workspaceStatus_);
    };
    ListWorkspacesResponseBodyWorkspaces() = default ;
    ListWorkspacesResponseBodyWorkspaces(const ListWorkspacesResponseBodyWorkspaces &) = default ;
    ListWorkspacesResponseBodyWorkspaces(ListWorkspacesResponseBodyWorkspaces &&) = default ;
    ListWorkspacesResponseBodyWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBodyWorkspaces() = default ;
    ListWorkspacesResponseBodyWorkspaces& operator=(const ListWorkspacesResponseBodyWorkspaces &) = default ;
    ListWorkspacesResponseBodyWorkspaces& operator=(ListWorkspacesResponseBodyWorkspaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->autoRenewPeriodUnit_ != nullptr && this->createTime_ != nullptr && this->dlfCatalogId_ != nullptr && this->dlfType_ != nullptr
        && this->duration_ != nullptr && this->endTime_ != nullptr && this->failReason_ != nullptr && this->paymentDurationUnit_ != nullptr && this->paymentStatus_ != nullptr
        && this->paymentType_ != nullptr && this->prePaidQuota_ != nullptr && this->regionId_ != nullptr && this->releaseType_ != nullptr && this->resourceSpec_ != nullptr
        && this->stateChangeReason_ != nullptr && this->storage_ != nullptr && this->tags_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr
        && this->workspaceStatus_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ListWorkspacesResponseBodyWorkspaces& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline ListWorkspacesResponseBodyWorkspaces& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // autoRenewPeriodUnit Field Functions 
    bool hasAutoRenewPeriodUnit() const { return this->autoRenewPeriodUnit_ != nullptr;};
    void deleteAutoRenewPeriodUnit() { this->autoRenewPeriodUnit_ = nullptr;};
    inline string autoRenewPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriodUnit_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setAutoRenewPeriodUnit(string autoRenewPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewPeriodUnit_, autoRenewPeriodUnit) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListWorkspacesResponseBodyWorkspaces& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dlfCatalogId Field Functions 
    bool hasDlfCatalogId() const { return this->dlfCatalogId_ != nullptr;};
    void deleteDlfCatalogId() { this->dlfCatalogId_ = nullptr;};
    inline string dlfCatalogId() const { DARABONBA_PTR_GET_DEFAULT(dlfCatalogId_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setDlfCatalogId(string dlfCatalogId) { DARABONBA_PTR_SET_VALUE(dlfCatalogId_, dlfCatalogId) };


    // dlfType Field Functions 
    bool hasDlfType() const { return this->dlfType_ != nullptr;};
    void deleteDlfType() { this->dlfType_ = nullptr;};
    inline string dlfType() const { DARABONBA_PTR_GET_DEFAULT(dlfType_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setDlfType(string dlfType) { DARABONBA_PTR_SET_VALUE(dlfType_, dlfType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListWorkspacesResponseBodyWorkspaces& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListWorkspacesResponseBodyWorkspaces& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentStatus Field Functions 
    bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
    void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
    inline string paymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // prePaidQuota Field Functions 
    bool hasPrePaidQuota() const { return this->prePaidQuota_ != nullptr;};
    void deletePrePaidQuota() { this->prePaidQuota_ = nullptr;};
    inline const Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota & prePaidQuota() const { DARABONBA_PTR_GET_CONST(prePaidQuota_, Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota) };
    inline Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota prePaidQuota() { DARABONBA_PTR_GET(prePaidQuota_, Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota) };
    inline ListWorkspacesResponseBodyWorkspaces& setPrePaidQuota(const Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota & prePaidQuota) { DARABONBA_PTR_SET_VALUE(prePaidQuota_, prePaidQuota) };
    inline ListWorkspacesResponseBodyWorkspaces& setPrePaidQuota(Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota && prePaidQuota) { DARABONBA_PTR_SET_RVALUE(prePaidQuota_, prePaidQuota) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline string resourceSpec() const { DARABONBA_PTR_GET_DEFAULT(resourceSpec_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setResourceSpec(string resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason & stateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason) };
    inline Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason stateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason) };
    inline ListWorkspacesResponseBodyWorkspaces& setStateChangeReason(const Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline ListWorkspacesResponseBodyWorkspaces& setStateChangeReason(Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListWorkspacesResponseBodyWorkspacesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListWorkspacesResponseBodyWorkspacesTags>) };
    inline vector<Models::ListWorkspacesResponseBodyWorkspacesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListWorkspacesResponseBodyWorkspacesTags>) };
    inline ListWorkspacesResponseBodyWorkspaces& setTags(const vector<Models::ListWorkspacesResponseBodyWorkspacesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListWorkspacesResponseBodyWorkspaces& setTags(vector<Models::ListWorkspacesResponseBodyWorkspacesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // workspaceStatus Field Functions 
    bool hasWorkspaceStatus() const { return this->workspaceStatus_ != nullptr;};
    void deleteWorkspaceStatus() { this->workspaceStatus_ = nullptr;};
    inline string workspaceStatus() const { DARABONBA_PTR_GET_DEFAULT(workspaceStatus_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setWorkspaceStatus(string workspaceStatus) { DARABONBA_PTR_SET_VALUE(workspaceStatus_, workspaceStatus) };


  protected:
    // Specifies whether to enable auto-renewal. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    // The unit of the auto-renewal duration. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<string> autoRenewPeriodUnit_ = nullptr;
    // The time when the workflow was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The information of the Data Lake Formation (DLF) catalog.
    std::shared_ptr<string> dlfCatalogId_ = nullptr;
    // The version of DLF.
    std::shared_ptr<string> dlfType_ = nullptr;
    // The subscription period. This parameter is required only if the paymentType parameter is set to Pre.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The end of the end time range.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The failure reason.
    std::shared_ptr<string> failReason_ = nullptr;
    // The unit of the subscription duration.
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    // The status of the payment.
    std::shared_ptr<string> paymentStatus_ = nullptr;
    // The billing method. Valid values:
    // 
    // - PayAsYouGo
    // - Pre
    std::shared_ptr<string> paymentType_ = nullptr;
    // The information about the subscription quota.
    std::shared_ptr<Models::ListWorkspacesResponseBodyWorkspacesPrePaidQuota> prePaidQuota_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The reason why the workspace is released.
    std::shared_ptr<string> releaseType_ = nullptr;
    // The resource specifications.
    std::shared_ptr<string> resourceSpec_ = nullptr;
    // The reason of the job status change.
    std::shared_ptr<Models::ListWorkspacesResponseBodyWorkspacesStateChangeReason> stateChangeReason_ = nullptr;
    // The OSS path.
    std::shared_ptr<string> storage_ = nullptr;
    std::shared_ptr<vector<Models::ListWorkspacesResponseBodyWorkspacesTags>> tags_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
    // The workspace status.
    std::shared_ptr<string> workspaceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
