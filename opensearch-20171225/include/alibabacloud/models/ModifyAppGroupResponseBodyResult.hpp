// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppGroupResponseBodyResultQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyAppGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(chargingWay, chargingWay_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(engineType, engineType_);
      DARABONBA_PTR_TO_JSON(expireOn, expireOn_);
      DARABONBA_PTR_TO_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(produced, produced_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(switchedTime, switchedTime_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(chargingWay, chargingWay_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(engineType, engineType_);
      DARABONBA_PTR_FROM_JSON(expireOn, expireOn_);
      DARABONBA_PTR_FROM_JSON(hasPendingQuotaReviewTask, hasPendingQuotaReviewTask_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(produced, produced_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(switchedTime, switchedTime_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ModifyAppGroupResponseBodyResult() = default ;
    ModifyAppGroupResponseBodyResult(const ModifyAppGroupResponseBodyResult &) = default ;
    ModifyAppGroupResponseBodyResult(ModifyAppGroupResponseBodyResult &&) = default ;
    ModifyAppGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppGroupResponseBodyResult() = default ;
    ModifyAppGroupResponseBodyResult& operator=(const ModifyAppGroupResponseBodyResult &) = default ;
    ModifyAppGroupResponseBodyResult& operator=(ModifyAppGroupResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->chargingWay_ == nullptr && return this->commodityCode_ == nullptr && return this->created_ == nullptr && return this->currentVersion_ == nullptr && return this->description_ == nullptr
        && return this->domain_ == nullptr && return this->engineType_ == nullptr && return this->expireOn_ == nullptr && return this->hasPendingQuotaReviewTask_ == nullptr && return this->id_ == nullptr
        && return this->instanceId_ == nullptr && return this->lockMode_ == nullptr && return this->name_ == nullptr && return this->produced_ == nullptr && return this->projectId_ == nullptr
        && return this->quota_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->switchedTime_ == nullptr && return this->type_ == nullptr
        && return this->updated_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyAppGroupResponseBodyResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // chargingWay Field Functions 
    bool hasChargingWay() const { return this->chargingWay_ != nullptr;};
    void deleteChargingWay() { this->chargingWay_ = nullptr;};
    inline int32_t chargingWay() const { DARABONBA_PTR_GET_DEFAULT(chargingWay_, 0) };
    inline ModifyAppGroupResponseBodyResult& setChargingWay(int32_t chargingWay) { DARABONBA_PTR_SET_VALUE(chargingWay_, chargingWay) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ModifyAppGroupResponseBodyResult& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ModifyAppGroupResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline ModifyAppGroupResponseBodyResult& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAppGroupResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyAppGroupResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ModifyAppGroupResponseBodyResult& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // expireOn Field Functions 
    bool hasExpireOn() const { return this->expireOn_ != nullptr;};
    void deleteExpireOn() { this->expireOn_ = nullptr;};
    inline string expireOn() const { DARABONBA_PTR_GET_DEFAULT(expireOn_, "") };
    inline ModifyAppGroupResponseBodyResult& setExpireOn(string expireOn) { DARABONBA_PTR_SET_VALUE(expireOn_, expireOn) };


    // hasPendingQuotaReviewTask Field Functions 
    bool hasHasPendingQuotaReviewTask() const { return this->hasPendingQuotaReviewTask_ != nullptr;};
    void deleteHasPendingQuotaReviewTask() { this->hasPendingQuotaReviewTask_ = nullptr;};
    inline int32_t hasPendingQuotaReviewTask() const { DARABONBA_PTR_GET_DEFAULT(hasPendingQuotaReviewTask_, 0) };
    inline ModifyAppGroupResponseBodyResult& setHasPendingQuotaReviewTask(int32_t hasPendingQuotaReviewTask) { DARABONBA_PTR_SET_VALUE(hasPendingQuotaReviewTask_, hasPendingQuotaReviewTask) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyAppGroupResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAppGroupResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline ModifyAppGroupResponseBodyResult& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAppGroupResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // produced Field Functions 
    bool hasProduced() const { return this->produced_ != nullptr;};
    void deleteProduced() { this->produced_ = nullptr;};
    inline int32_t produced() const { DARABONBA_PTR_GET_DEFAULT(produced_, 0) };
    inline ModifyAppGroupResponseBodyResult& setProduced(int32_t produced) { DARABONBA_PTR_SET_VALUE(produced_, produced) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifyAppGroupResponseBodyResult& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::ModifyAppGroupResponseBodyResultQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::ModifyAppGroupResponseBodyResultQuota) };
    inline Models::ModifyAppGroupResponseBodyResultQuota quota() { DARABONBA_PTR_GET(quota_, Models::ModifyAppGroupResponseBodyResultQuota) };
    inline ModifyAppGroupResponseBodyResult& setQuota(const Models::ModifyAppGroupResponseBodyResultQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline ModifyAppGroupResponseBodyResult& setQuota(Models::ModifyAppGroupResponseBodyResultQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyAppGroupResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyAppGroupResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchedTime Field Functions 
    bool hasSwitchedTime() const { return this->switchedTime_ != nullptr;};
    void deleteSwitchedTime() { this->switchedTime_ = nullptr;};
    inline int32_t switchedTime() const { DARABONBA_PTR_GET_DEFAULT(switchedTime_, 0) };
    inline ModifyAppGroupResponseBodyResult& setSwitchedTime(int32_t switchedTime) { DARABONBA_PTR_SET_VALUE(switchedTime_, switchedTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyAppGroupResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ModifyAppGroupResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The billing method. Valid values:
    // 
    // *   POSTPAY: pay-as-you-go.
    // *   PREPAY: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The billable item. Valid values:
    // 
    // *   1: computing resources.
    // *   2: QPS.
    std::shared_ptr<int32_t> chargingWay_ = nullptr;
    // The code of the commodity.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The timestamp when the application was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The ID of the current online version.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the industry. Valid values:
    // 
    // *   GENERAL: general.
    // *   ECOMMERCE: e-commerce.
    // *   IT_CONTENT: IT content.
    std::shared_ptr<string> domain_ = nullptr;
    // The engine type.
    std::shared_ptr<string> engineType_ = nullptr;
    // The time when the application expired.
    std::shared_ptr<string> expireOn_ = nullptr;
    // The approval status of the quotas. Valid values:
    // 
    // *   0: normal.
    // *   1: being approved.
    std::shared_ptr<int32_t> hasPendingQuotaReviewTask_ = nullptr;
    // The application ID.
    std::shared_ptr<string> id_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The lock status. Valid values:
    // 
    // *   Unlock: The instance is unlocked.
    // *   LockByExpiration: The instance is automatically locked after it expires.
    // *   ManualLock: The instance is manually locked.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the order is complete. Valid values:
    // 
    // *   0: The order is in progress.
    // *   1: The order is complete.
    std::shared_ptr<int32_t> produced_ = nullptr;
    // The name of the A/B test group.
    std::shared_ptr<string> projectId_ = nullptr;
    // The information about the quotas of the application.
    std::shared_ptr<Models::ModifyAppGroupResponseBodyResultQuota> quota_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The state of the application. Valid values:
    // 
    // *   producing: being produced.
    // *   review_pending: being approved.
    // *   config_pending: to be configured.
    // *   normal: normal.
    // *   frozen: frozen.
    std::shared_ptr<string> status_ = nullptr;
    // The timestamp when the current online version was published.
    std::shared_ptr<int32_t> switchedTime_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   standard: a standard edition application.
    // *   advance: an advanced edition application of an old version. New versions are not supported for this edition.
    // *   enhanced: an advanced edition application of a new version.
    std::shared_ptr<string> type_ = nullptr;
    // The timestamp when the application was last modified.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
