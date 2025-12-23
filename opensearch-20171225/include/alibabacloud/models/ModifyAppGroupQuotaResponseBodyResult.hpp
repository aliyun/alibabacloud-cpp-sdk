// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPGROUPQUOTARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPGROUPQUOTARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppGroupQuotaResponseBodyResultQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyAppGroupQuotaResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppGroupQuotaResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(chargingWay, chargingWay_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(description, description_);
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
    friend void from_json(const Darabonba::Json& j, ModifyAppGroupQuotaResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(chargingWay, chargingWay_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(description, description_);
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
    ModifyAppGroupQuotaResponseBodyResult() = default ;
    ModifyAppGroupQuotaResponseBodyResult(const ModifyAppGroupQuotaResponseBodyResult &) = default ;
    ModifyAppGroupQuotaResponseBodyResult(ModifyAppGroupQuotaResponseBodyResult &&) = default ;
    ModifyAppGroupQuotaResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppGroupQuotaResponseBodyResult() = default ;
    ModifyAppGroupQuotaResponseBodyResult& operator=(const ModifyAppGroupQuotaResponseBodyResult &) = default ;
    ModifyAppGroupQuotaResponseBodyResult& operator=(ModifyAppGroupQuotaResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->chargingWay_ == nullptr && return this->commodityCode_ == nullptr && return this->created_ == nullptr && return this->currentVersion_ == nullptr && return this->description_ == nullptr
        && return this->engineType_ == nullptr && return this->expireOn_ == nullptr && return this->hasPendingQuotaReviewTask_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr
        && return this->lockMode_ == nullptr && return this->name_ == nullptr && return this->produced_ == nullptr && return this->projectId_ == nullptr && return this->quota_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->switchedTime_ == nullptr && return this->type_ == nullptr && return this->updated_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // chargingWay Field Functions 
    bool hasChargingWay() const { return this->chargingWay_ != nullptr;};
    void deleteChargingWay() { this->chargingWay_ = nullptr;};
    inline int32_t chargingWay() const { DARABONBA_PTR_GET_DEFAULT(chargingWay_, 0) };
    inline ModifyAppGroupQuotaResponseBodyResult& setChargingWay(int32_t chargingWay) { DARABONBA_PTR_SET_VALUE(chargingWay_, chargingWay) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ModifyAppGroupQuotaResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // expireOn Field Functions 
    bool hasExpireOn() const { return this->expireOn_ != nullptr;};
    void deleteExpireOn() { this->expireOn_ = nullptr;};
    inline string expireOn() const { DARABONBA_PTR_GET_DEFAULT(expireOn_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setExpireOn(string expireOn) { DARABONBA_PTR_SET_VALUE(expireOn_, expireOn) };


    // hasPendingQuotaReviewTask Field Functions 
    bool hasHasPendingQuotaReviewTask() const { return this->hasPendingQuotaReviewTask_ != nullptr;};
    void deleteHasPendingQuotaReviewTask() { this->hasPendingQuotaReviewTask_ = nullptr;};
    inline int32_t hasPendingQuotaReviewTask() const { DARABONBA_PTR_GET_DEFAULT(hasPendingQuotaReviewTask_, 0) };
    inline ModifyAppGroupQuotaResponseBodyResult& setHasPendingQuotaReviewTask(int32_t hasPendingQuotaReviewTask) { DARABONBA_PTR_SET_VALUE(hasPendingQuotaReviewTask_, hasPendingQuotaReviewTask) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // produced Field Functions 
    bool hasProduced() const { return this->produced_ != nullptr;};
    void deleteProduced() { this->produced_ = nullptr;};
    inline int32_t produced() const { DARABONBA_PTR_GET_DEFAULT(produced_, 0) };
    inline ModifyAppGroupQuotaResponseBodyResult& setProduced(int32_t produced) { DARABONBA_PTR_SET_VALUE(produced_, produced) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const Models::ModifyAppGroupQuotaResponseBodyResultQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, Models::ModifyAppGroupQuotaResponseBodyResultQuota) };
    inline Models::ModifyAppGroupQuotaResponseBodyResultQuota quota() { DARABONBA_PTR_GET(quota_, Models::ModifyAppGroupQuotaResponseBodyResultQuota) };
    inline ModifyAppGroupQuotaResponseBodyResult& setQuota(const Models::ModifyAppGroupQuotaResponseBodyResultQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline ModifyAppGroupQuotaResponseBodyResult& setQuota(Models::ModifyAppGroupQuotaResponseBodyResultQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchedTime Field Functions 
    bool hasSwitchedTime() const { return this->switchedTime_ != nullptr;};
    void deleteSwitchedTime() { this->switchedTime_ = nullptr;};
    inline int32_t switchedTime() const { DARABONBA_PTR_GET_DEFAULT(switchedTime_, 0) };
    inline ModifyAppGroupQuotaResponseBodyResult& setSwitchedTime(int32_t switchedTime) { DARABONBA_PTR_SET_VALUE(switchedTime_, switchedTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyAppGroupQuotaResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ModifyAppGroupQuotaResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The billing method. Valid values:
    // 
    // *   POSTPAY: pay-as-you-go.
    // *   PREPAY: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The billable item. Valid values:
    // 
    // *   1: computing resources.
    // *   2: queries per second (QPS).
    std::shared_ptr<int32_t> chargingWay_ = nullptr;
    // The commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The timestamp when the application was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The ID of the current online version.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The engine type.
    // 
    // Valid values:
    // 
    // *   ha3: ha3.
    std::shared_ptr<string> engineType_ = nullptr;
    // The time when the application expired.
    std::shared_ptr<string> expireOn_ = nullptr;
    // The approval state of the quotas. Valid values:
    // 
    // *   0: The application is in service.
    // *   1: The quotas are being reviewed.
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
    // The name of the application
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the application is created. Valid values:
    // 
    // *   0: The application is being created.
    // *   1: The application is created.
    std::shared_ptr<int32_t> produced_ = nullptr;
    // The name of the A/B test group.
    std::shared_ptr<string> projectId_ = nullptr;
    // The information about the quotas of the application.
    std::shared_ptr<Models::ModifyAppGroupQuotaResponseBodyResultQuota> quota_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The state of the application. Valid values:
    // 
    // *   producing: The application is being created.
    // *   review_pending: The application is being reviewed.
    // *   config_pending: The application is to be configured.
    // *   normal: The application is in service.
    // *   frozen: The application is frozen.
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
