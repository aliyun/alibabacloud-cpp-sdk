// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEAPPGROUPCOMMODITYCODERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_REPLACEAPPGROUPCOMMODITYCODERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReplaceAppGroupCommodityCodeResponseBodyResultQuota.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ReplaceAppGroupCommodityCodeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceAppGroupCommodityCodeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(chargingWay, chargingWay_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(expireOn, expireOn_);
      DARABONBA_PTR_TO_JSON(firstRankAlgoDeploymentId, firstRankAlgoDeploymentId_);
      DARABONBA_PTR_TO_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(lockedByExpiration, lockedByExpiration_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pendingSecondRankAlgoDeploymentId, pendingSecondRankAlgoDeploymentId_);
      DARABONBA_PTR_TO_JSON(processingOrderId, processingOrderId_);
      DARABONBA_PTR_TO_JSON(produced, produced_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(secondRankAlgoDeploymentId, secondRankAlgoDeploymentId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(switchedTime, switchedTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceAppGroupCommodityCodeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(chargingWay, chargingWay_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(expireOn, expireOn_);
      DARABONBA_PTR_FROM_JSON(firstRankAlgoDeploymentId, firstRankAlgoDeploymentId_);
      DARABONBA_PTR_FROM_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(lockedByExpiration, lockedByExpiration_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pendingSecondRankAlgoDeploymentId, pendingSecondRankAlgoDeploymentId_);
      DARABONBA_PTR_FROM_JSON(processingOrderId, processingOrderId_);
      DARABONBA_PTR_FROM_JSON(produced, produced_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(secondRankAlgoDeploymentId, secondRankAlgoDeploymentId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(switchedTime, switchedTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ReplaceAppGroupCommodityCodeResponseBodyResult() = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResult(const ReplaceAppGroupCommodityCodeResponseBodyResult &) = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResult(ReplaceAppGroupCommodityCodeResponseBodyResult &&) = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceAppGroupCommodityCodeResponseBodyResult() = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResult& operator=(const ReplaceAppGroupCommodityCodeResponseBodyResult &) = default ;
    ReplaceAppGroupCommodityCodeResponseBodyResult& operator=(ReplaceAppGroupCommodityCodeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->chargingWay_ == nullptr && return this->commodityCode_ == nullptr && return this->created_ == nullptr && return this->currentVersion_ == nullptr && return this->description_ == nullptr
        && return this->expireOn_ == nullptr && return this->firstRankAlgoDeploymentId_ == nullptr && return this->hasPendingQuotaReviewTask_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr
        && return this->lockMode_ == nullptr && return this->lockedByExpiration_ == nullptr && return this->name_ == nullptr && return this->pendingSecondRankAlgoDeploymentId_ == nullptr && return this->processingOrderId_ == nullptr
        && return this->produced_ == nullptr && return this->projectId_ == nullptr && return this->quota_ == nullptr && return this->secondRankAlgoDeploymentId_ == nullptr && return this->status_ == nullptr
        && return this->switchedTime_ == nullptr && return this->type_ == nullptr && return this->updated_ == nullptr && return this->versions_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // chargingWay Field Functions 
    bool hasChargingWay() const { return this->chargingWay_ != nullptr;};
    void deleteChargingWay() { this->chargingWay_ = nullptr;};
    inline int32_t chargingWay() const { DARABONBA_PTR_GET_DEFAULT(chargingWay_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setChargingWay(int32_t chargingWay) { DARABONBA_PTR_SET_VALUE(chargingWay_, chargingWay) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireOn Field Functions 
    bool hasExpireOn() const { return this->expireOn_ != nullptr;};
    void deleteExpireOn() { this->expireOn_ = nullptr;};
    inline string expireOn() const { DARABONBA_PTR_GET_DEFAULT(expireOn_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setExpireOn(string expireOn) { DARABONBA_PTR_SET_VALUE(expireOn_, expireOn) };


    // firstRankAlgoDeploymentId Field Functions 
    bool hasFirstRankAlgoDeploymentId() const { return this->firstRankAlgoDeploymentId_ != nullptr;};
    void deleteFirstRankAlgoDeploymentId() { this->firstRankAlgoDeploymentId_ = nullptr;};
    inline int32_t firstRankAlgoDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(firstRankAlgoDeploymentId_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setFirstRankAlgoDeploymentId(int32_t firstRankAlgoDeploymentId) { DARABONBA_PTR_SET_VALUE(firstRankAlgoDeploymentId_, firstRankAlgoDeploymentId) };


    // hasPendingQuotaReviewTask Field Functions 
    bool hasHasPendingQuotaReviewTask() const { return this->hasPendingQuotaReviewTask_ != nullptr;};
    void deleteHasPendingQuotaReviewTask() { this->hasPendingQuotaReviewTask_ = nullptr;};
    inline int32_t hasPendingQuotaReviewTask() const { DARABONBA_PTR_GET_DEFAULT(hasPendingQuotaReviewTask_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setHasPendingQuotaReviewTask(int32_t hasPendingQuotaReviewTask) { DARABONBA_PTR_SET_VALUE(hasPendingQuotaReviewTask_, hasPendingQuotaReviewTask) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // lockedByExpiration Field Functions 
    bool hasLockedByExpiration() const { return this->lockedByExpiration_ != nullptr;};
    void deleteLockedByExpiration() { this->lockedByExpiration_ = nullptr;};
    inline int32_t lockedByExpiration() const { DARABONBA_PTR_GET_DEFAULT(lockedByExpiration_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setLockedByExpiration(int32_t lockedByExpiration) { DARABONBA_PTR_SET_VALUE(lockedByExpiration_, lockedByExpiration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pendingSecondRankAlgoDeploymentId Field Functions 
    bool hasPendingSecondRankAlgoDeploymentId() const { return this->pendingSecondRankAlgoDeploymentId_ != nullptr;};
    void deletePendingSecondRankAlgoDeploymentId() { this->pendingSecondRankAlgoDeploymentId_ = nullptr;};
    inline int32_t pendingSecondRankAlgoDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(pendingSecondRankAlgoDeploymentId_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setPendingSecondRankAlgoDeploymentId(int32_t pendingSecondRankAlgoDeploymentId) { DARABONBA_PTR_SET_VALUE(pendingSecondRankAlgoDeploymentId_, pendingSecondRankAlgoDeploymentId) };


    // processingOrderId Field Functions 
    bool hasProcessingOrderId() const { return this->processingOrderId_ != nullptr;};
    void deleteProcessingOrderId() { this->processingOrderId_ = nullptr;};
    inline string processingOrderId() const { DARABONBA_PTR_GET_DEFAULT(processingOrderId_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setProcessingOrderId(string processingOrderId) { DARABONBA_PTR_SET_VALUE(processingOrderId_, processingOrderId) };


    // produced Field Functions 
    bool hasProduced() const { return this->produced_ != nullptr;};
    void deleteProduced() { this->produced_ = nullptr;};
    inline int32_t produced() const { DARABONBA_PTR_GET_DEFAULT(produced_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setProduced(int32_t produced) { DARABONBA_PTR_SET_VALUE(produced_, produced) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota) };
    inline Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota quota() { DARABONBA_PTR_GET(quota_, Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setQuota(const Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setQuota(Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // secondRankAlgoDeploymentId Field Functions 
    bool hasSecondRankAlgoDeploymentId() const { return this->secondRankAlgoDeploymentId_ != nullptr;};
    void deleteSecondRankAlgoDeploymentId() { this->secondRankAlgoDeploymentId_ = nullptr;};
    inline int32_t secondRankAlgoDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(secondRankAlgoDeploymentId_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setSecondRankAlgoDeploymentId(int32_t secondRankAlgoDeploymentId) { DARABONBA_PTR_SET_VALUE(secondRankAlgoDeploymentId_, secondRankAlgoDeploymentId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchedTime Field Functions 
    bool hasSwitchedTime() const { return this->switchedTime_ != nullptr;};
    void deleteSwitchedTime() { this->switchedTime_ = nullptr;};
    inline int32_t switchedTime() const { DARABONBA_PTR_GET_DEFAULT(switchedTime_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setSwitchedTime(int32_t switchedTime) { DARABONBA_PTR_SET_VALUE(switchedTime_, switchedTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ReplaceAppGroupCommodityCodeResponseBodyResult& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The billing method. Valid values:
    // 
    // *   POSTPAY: pay-as-you-go.
    // *   PREPAY: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The billing type. Valid values:
    // 
    // *   1: computing resources.
    // *   2: queries per second (QPS).
    std::shared_ptr<int32_t> chargingWay_ = nullptr;
    // The code of the commodity.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The timestamp when the application was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The ID of the current online version.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The expiration time.
    std::shared_ptr<string> expireOn_ = nullptr;
    // The ID of the rough sort expression.
    std::shared_ptr<int32_t> firstRankAlgoDeploymentId_ = nullptr;
    // The approval state of the quotas. Valid values:
    // 
    // *   0: The approval status is normal.
    // *   1: The quotas are being approved.
    std::shared_ptr<int32_t> hasPendingQuotaReviewTask_ = nullptr;
    // The application ID.
    std::shared_ptr<string> id_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The lock state. Valid values:
    // 
    // *   Unlock: The instance is unlocked.
    // *   LockByExpiration: The instance is automatically locked after it expires.
    // *   ManualLock: The instance is manually locked.
    std::shared_ptr<string> lockMode_ = nullptr;
    // Indicates whether the instance is automatically locked after it expires. Valid values:
    // 
    // *   0: The instance is not automatically locked after it expires.
    // *   1: The instance is automatically locked after it expires.
    std::shared_ptr<int32_t> lockedByExpiration_ = nullptr;
    // The name of the order.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the fine sort expression that is being created.
    std::shared_ptr<int32_t> pendingSecondRankAlgoDeploymentId_ = nullptr;
    // The ID of the order that is in progress.
    std::shared_ptr<string> processingOrderId_ = nullptr;
    // Indicates whether the order is produced.
    std::shared_ptr<int32_t> produced_ = nullptr;
    // The name of the A/B test group.
    std::shared_ptr<string> projectId_ = nullptr;
    // The configuration information.
    std::shared_ptr<Models::ReplaceAppGroupCommodityCodeResponseBodyResultQuota> quota_ = nullptr;
    // The ID of the fine sort expression.
    std::shared_ptr<int32_t> secondRankAlgoDeploymentId_ = nullptr;
    // The status of the application.
    std::shared_ptr<string> status_ = nullptr;
    // The timestamp when the current online version was published.
    std::shared_ptr<int32_t> switchedTime_ = nullptr;
    // The type of the application.
    std::shared_ptr<string> type_ = nullptr;
    // The timestamp when the application was updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
    // The versions.
    std::shared_ptr<vector<string>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
