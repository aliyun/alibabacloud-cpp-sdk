// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYLOCK_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CapacityLock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityLock& obj) { 
      DARABONBA_PTR_TO_JSON(availableCount, availableCount_);
      DARABONBA_PTR_TO_JSON(crsReservationId, crsReservationId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(lastReconcileAttemptTime, lastReconcileAttemptTime_);
      DARABONBA_PTR_TO_JSON(lastSyncTime, lastSyncTime_);
      DARABONBA_PTR_TO_JSON(lockProvider, lockProvider_);
      DARABONBA_PTR_TO_JSON(lockedCount, lockedCount_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(privatePoolId, privatePoolId_);
      DARABONBA_PTR_TO_JSON(requestedCount, requestedCount_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(usedCount, usedCount_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityLock& obj) { 
      DARABONBA_PTR_FROM_JSON(availableCount, availableCount_);
      DARABONBA_PTR_FROM_JSON(crsReservationId, crsReservationId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(lastReconcileAttemptTime, lastReconcileAttemptTime_);
      DARABONBA_PTR_FROM_JSON(lastSyncTime, lastSyncTime_);
      DARABONBA_PTR_FROM_JSON(lockProvider, lockProvider_);
      DARABONBA_PTR_FROM_JSON(lockedCount, lockedCount_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(privatePoolId, privatePoolId_);
      DARABONBA_PTR_FROM_JSON(requestedCount, requestedCount_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(usedCount, usedCount_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    CapacityLock() = default ;
    CapacityLock(const CapacityLock &) = default ;
    CapacityLock(CapacityLock &&) = default ;
    CapacityLock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityLock() = default ;
    CapacityLock& operator=(const CapacityLock &) = default ;
    CapacityLock& operator=(CapacityLock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableCount_ == nullptr
        && return this->crsReservationId_ == nullptr && return this->description_ == nullptr && return this->expireTime_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->instanceType_ == nullptr && return this->lastReconcileAttemptTime_ == nullptr && return this->lastSyncTime_ == nullptr && return this->lockProvider_ == nullptr
        && return this->lockedCount_ == nullptr && return this->operator_ == nullptr && return this->paymentType_ == nullptr && return this->privatePoolId_ == nullptr && return this->requestedCount_ == nullptr
        && return this->status_ == nullptr && return this->tenantId_ == nullptr && return this->usedCount_ == nullptr && return this->zoneId_ == nullptr; };
    // availableCount Field Functions 
    bool hasAvailableCount() const { return this->availableCount_ != nullptr;};
    void deleteAvailableCount() { this->availableCount_ = nullptr;};
    inline int32_t availableCount() const { DARABONBA_PTR_GET_DEFAULT(availableCount_, 0) };
    inline CapacityLock& setAvailableCount(int32_t availableCount) { DARABONBA_PTR_SET_VALUE(availableCount_, availableCount) };


    // crsReservationId Field Functions 
    bool hasCrsReservationId() const { return this->crsReservationId_ != nullptr;};
    void deleteCrsReservationId() { this->crsReservationId_ = nullptr;};
    inline string crsReservationId() const { DARABONBA_PTR_GET_DEFAULT(crsReservationId_, "") };
    inline CapacityLock& setCrsReservationId(string crsReservationId) { DARABONBA_PTR_SET_VALUE(crsReservationId_, crsReservationId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CapacityLock& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CapacityLock& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline CapacityLock& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CapacityLock& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CapacityLock& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CapacityLock& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // lastReconcileAttemptTime Field Functions 
    bool hasLastReconcileAttemptTime() const { return this->lastReconcileAttemptTime_ != nullptr;};
    void deleteLastReconcileAttemptTime() { this->lastReconcileAttemptTime_ = nullptr;};
    inline string lastReconcileAttemptTime() const { DARABONBA_PTR_GET_DEFAULT(lastReconcileAttemptTime_, "") };
    inline CapacityLock& setLastReconcileAttemptTime(string lastReconcileAttemptTime) { DARABONBA_PTR_SET_VALUE(lastReconcileAttemptTime_, lastReconcileAttemptTime) };


    // lastSyncTime Field Functions 
    bool hasLastSyncTime() const { return this->lastSyncTime_ != nullptr;};
    void deleteLastSyncTime() { this->lastSyncTime_ = nullptr;};
    inline string lastSyncTime() const { DARABONBA_PTR_GET_DEFAULT(lastSyncTime_, "") };
    inline CapacityLock& setLastSyncTime(string lastSyncTime) { DARABONBA_PTR_SET_VALUE(lastSyncTime_, lastSyncTime) };


    // lockProvider Field Functions 
    bool hasLockProvider() const { return this->lockProvider_ != nullptr;};
    void deleteLockProvider() { this->lockProvider_ = nullptr;};
    inline string lockProvider() const { DARABONBA_PTR_GET_DEFAULT(lockProvider_, "") };
    inline CapacityLock& setLockProvider(string lockProvider) { DARABONBA_PTR_SET_VALUE(lockProvider_, lockProvider) };


    // lockedCount Field Functions 
    bool hasLockedCount() const { return this->lockedCount_ != nullptr;};
    void deleteLockedCount() { this->lockedCount_ = nullptr;};
    inline int32_t lockedCount() const { DARABONBA_PTR_GET_DEFAULT(lockedCount_, 0) };
    inline CapacityLock& setLockedCount(int32_t lockedCount) { DARABONBA_PTR_SET_VALUE(lockedCount_, lockedCount) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CapacityLock& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CapacityLock& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // privatePoolId Field Functions 
    bool hasPrivatePoolId() const { return this->privatePoolId_ != nullptr;};
    void deletePrivatePoolId() { this->privatePoolId_ = nullptr;};
    inline string privatePoolId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolId_, "") };
    inline CapacityLock& setPrivatePoolId(string privatePoolId) { DARABONBA_PTR_SET_VALUE(privatePoolId_, privatePoolId) };


    // requestedCount Field Functions 
    bool hasRequestedCount() const { return this->requestedCount_ != nullptr;};
    void deleteRequestedCount() { this->requestedCount_ = nullptr;};
    inline int32_t requestedCount() const { DARABONBA_PTR_GET_DEFAULT(requestedCount_, 0) };
    inline CapacityLock& setRequestedCount(int32_t requestedCount) { DARABONBA_PTR_SET_VALUE(requestedCount_, requestedCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CapacityLock& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CapacityLock& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int32_t usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0) };
    inline CapacityLock& setUsedCount(int32_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CapacityLock& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<int32_t> availableCount_ = nullptr;
    std::shared_ptr<string> crsReservationId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> lastReconcileAttemptTime_ = nullptr;
    std::shared_ptr<string> lastSyncTime_ = nullptr;
    std::shared_ptr<string> lockProvider_ = nullptr;
    std::shared_ptr<int32_t> lockedCount_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> privatePoolId_ = nullptr;
    std::shared_ptr<int32_t> requestedCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<int32_t> usedCount_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
