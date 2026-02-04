// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPASERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPASERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_TO_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_FROM_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnIpaServiceResponseBody() = default ;
    DescribeDcdnIpaServiceResponseBody(const DescribeDcdnIpaServiceResponseBody &) = default ;
    DescribeDcdnIpaServiceResponseBody(DescribeDcdnIpaServiceResponseBody &&) = default ;
    DescribeDcdnIpaServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaServiceResponseBody() = default ;
    DescribeDcdnIpaServiceResponseBody& operator=(const DescribeDcdnIpaServiceResponseBody &) = default ;
    DescribeDcdnIpaServiceResponseBody& operator=(DescribeDcdnIpaServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationLocks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
        DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      };
      friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
        DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      };
      OperationLocks() = default ;
      OperationLocks(const OperationLocks &) = default ;
      OperationLocks(OperationLocks &&) = default ;
      OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationLocks() = default ;
      OperationLocks& operator=(const OperationLocks &) = default ;
      OperationLocks& operator=(OperationLocks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LockReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LockReason& obj) { 
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        };
        friend void from_json(const Darabonba::Json& j, LockReason& obj) { 
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
        };
        LockReason() = default ;
        LockReason(const LockReason &) = default ;
        LockReason(LockReason &&) = default ;
        LockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LockReason() = default ;
        LockReason& operator=(const LockReason &) = default ;
        LockReason& operator=(LockReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->lockReason_ == nullptr; };
        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline LockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      protected:
        // The reason why the instance is locked. For example, a value of **financial** indicates that an overdue payment exists.
        shared_ptr<string> lockReason_ {};
      };

      virtual bool empty() const override { return this->lockReason_ == nullptr; };
      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline const vector<OperationLocks::LockReason> & getLockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<OperationLocks::LockReason>) };
      inline vector<OperationLocks::LockReason> getLockReason() { DARABONBA_PTR_GET(lockReason_, vector<OperationLocks::LockReason>) };
      inline OperationLocks& setLockReason(const vector<OperationLocks::LockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
      inline OperationLocks& setLockReason(vector<OperationLocks::LockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


    protected:
      shared_ptr<vector<OperationLocks::LockReason>> lockReason_ {};
    };

    virtual bool empty() const override { return this->changingAffectTime_ == nullptr
        && this->changingChargeType_ == nullptr && this->instanceId_ == nullptr && this->internetChargeType_ == nullptr && this->openingTime_ == nullptr && this->operationLocks_ == nullptr
        && this->requestId_ == nullptr; };
    // changingAffectTime Field Functions 
    bool hasChangingAffectTime() const { return this->changingAffectTime_ != nullptr;};
    void deleteChangingAffectTime() { this->changingAffectTime_ = nullptr;};
    inline string getChangingAffectTime() const { DARABONBA_PTR_GET_DEFAULT(changingAffectTime_, "") };
    inline DescribeDcdnIpaServiceResponseBody& setChangingAffectTime(string changingAffectTime) { DARABONBA_PTR_SET_VALUE(changingAffectTime_, changingAffectTime) };


    // changingChargeType Field Functions 
    bool hasChangingChargeType() const { return this->changingChargeType_ != nullptr;};
    void deleteChangingChargeType() { this->changingChargeType_ = nullptr;};
    inline string getChangingChargeType() const { DARABONBA_PTR_GET_DEFAULT(changingChargeType_, "") };
    inline DescribeDcdnIpaServiceResponseBody& setChangingChargeType(string changingChargeType) { DARABONBA_PTR_SET_VALUE(changingChargeType_, changingChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDcdnIpaServiceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeDcdnIpaServiceResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // openingTime Field Functions 
    bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
    void deleteOpeningTime() { this->openingTime_ = nullptr;};
    inline string getOpeningTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
    inline DescribeDcdnIpaServiceResponseBody& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeDcdnIpaServiceResponseBody::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeDcdnIpaServiceResponseBody::OperationLocks) };
    inline DescribeDcdnIpaServiceResponseBody::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeDcdnIpaServiceResponseBody::OperationLocks) };
    inline DescribeDcdnIpaServiceResponseBody& setOperationLocks(const DescribeDcdnIpaServiceResponseBody::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeDcdnIpaServiceResponseBody& setOperationLocks(DescribeDcdnIpaServiceResponseBody::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnIpaServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the change of the billing method starts to take effect. The time is in GMT. This time appears on the frontend only when it is later than the current time.
    shared_ptr<string> changingAffectTime_ {};
    // The new billing method to take effect. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-data-transfer
    // *   **PayByBandwidth**: pay-by-bandwidth
    // *   **PayByBandwidth95**: pay-by-95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay-by-monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay-by-fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay-by-monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay-by-95th percentile bandwidth (50% off during nighttime)
    shared_ptr<string> changingChargeType_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-data-transfer
    // *   **PayByBandwidth**: pay-by-bandwidth
    // *   **PayByBandwidth95**: pay-by-95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay-by-monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay-by-fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay-by-monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay-by-95th percentile bandwidth (50% off during nighttime)
    shared_ptr<string> internetChargeType_ {};
    // The time when the DCDN service was activated. The time follows the ISO 8601 standard.
    shared_ptr<string> openingTime_ {};
    // The lock status of secure DCDN.
    shared_ptr<DescribeDcdnIpaServiceResponseBody::OperationLocks> operationLocks_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
