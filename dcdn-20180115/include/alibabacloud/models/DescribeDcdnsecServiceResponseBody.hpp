// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSERVICERESPONSEBODY_HPP_
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
  class DescribeDcdnsecServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnsecServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_TO_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_TO_JSON(DomainNum, domainNum_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestType, requestType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnsecServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_FROM_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_FROM_JSON(DomainNum, domainNum_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestType, requestType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDcdnsecServiceResponseBody() = default ;
    DescribeDcdnsecServiceResponseBody(const DescribeDcdnsecServiceResponseBody &) = default ;
    DescribeDcdnsecServiceResponseBody(DescribeDcdnsecServiceResponseBody &&) = default ;
    DescribeDcdnsecServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnsecServiceResponseBody() = default ;
    DescribeDcdnsecServiceResponseBody& operator=(const DescribeDcdnsecServiceResponseBody &) = default ;
    DescribeDcdnsecServiceResponseBody& operator=(DescribeDcdnsecServiceResponseBody &&) = default ;
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
        // The reason why the instance was locked.
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
        && this->changingChargeType_ == nullptr && this->domainNum_ == nullptr && this->endTime_ == nullptr && this->flowType_ == nullptr && this->instanceId_ == nullptr
        && this->internetChargeType_ == nullptr && this->operationLocks_ == nullptr && this->requestId_ == nullptr && this->requestType_ == nullptr && this->startTime_ == nullptr
        && this->version_ == nullptr; };
    // changingAffectTime Field Functions 
    bool hasChangingAffectTime() const { return this->changingAffectTime_ != nullptr;};
    void deleteChangingAffectTime() { this->changingAffectTime_ = nullptr;};
    inline string getChangingAffectTime() const { DARABONBA_PTR_GET_DEFAULT(changingAffectTime_, "") };
    inline DescribeDcdnsecServiceResponseBody& setChangingAffectTime(string changingAffectTime) { DARABONBA_PTR_SET_VALUE(changingAffectTime_, changingAffectTime) };


    // changingChargeType Field Functions 
    bool hasChangingChargeType() const { return this->changingChargeType_ != nullptr;};
    void deleteChangingChargeType() { this->changingChargeType_ = nullptr;};
    inline string getChangingChargeType() const { DARABONBA_PTR_GET_DEFAULT(changingChargeType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setChangingChargeType(string changingChargeType) { DARABONBA_PTR_SET_VALUE(changingChargeType_, changingChargeType) };


    // domainNum Field Functions 
    bool hasDomainNum() const { return this->domainNum_ != nullptr;};
    void deleteDomainNum() { this->domainNum_ = nullptr;};
    inline string getDomainNum() const { DARABONBA_PTR_GET_DEFAULT(domainNum_, "") };
    inline DescribeDcdnsecServiceResponseBody& setDomainNum(string domainNum) { DARABONBA_PTR_SET_VALUE(domainNum_, domainNum) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnsecServiceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDcdnsecServiceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeDcdnsecServiceResponseBody::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeDcdnsecServiceResponseBody::OperationLocks) };
    inline DescribeDcdnsecServiceResponseBody::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeDcdnsecServiceResponseBody::OperationLocks) };
    inline DescribeDcdnsecServiceResponseBody& setOperationLocks(const DescribeDcdnsecServiceResponseBody::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeDcdnsecServiceResponseBody& setOperationLocks(DescribeDcdnsecServiceResponseBody::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnsecServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestType Field Functions 
    bool hasRequestType() const { return this->requestType_ != nullptr;};
    void deleteRequestType() { this->requestType_ = nullptr;};
    inline string getRequestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setRequestType(string requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnsecServiceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDcdnsecServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The time when the renewed service takes effect. The time is displayed in UTC.
    shared_ptr<string> changingAffectTime_ {};
    // The new metering method for the renewed DCDN. Valid values:
    // 
    // *   **PayByTraffic**: pay by data transfer
    // *   **PayByBandwidth**: pay by bandwidth
    // *   **PayByBandwidth95**: pay by 95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay by monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay by fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay by monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay by 95th percentile bandwidth (50% off during nighttime)
    shared_ptr<string> changingChargeType_ {};
    // The number of accelerated domain names that use DCDN.
    shared_ptr<string> domainNum_ {};
    // The service expiration time.
    shared_ptr<string> endTime_ {};
    // The metering method for traffic.
    shared_ptr<string> flowType_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The current metering method. Valid values:
    // 
    // *   **PayByTraffic**: pay by data transfer
    // *   **PayByBandwidth**: pay by bandwidth
    // *   **PayByBandwidth95**: pay by 95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay by monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay by fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay by monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay by 95th percentile bandwidth (50% off during nighttime)
    shared_ptr<string> internetChargeType_ {};
    // The lock status of DCDN.
    shared_ptr<DescribeDcdnsecServiceResponseBody::OperationLocks> operationLocks_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The metering method for requests.
    shared_ptr<string> requestType_ {};
    // The service activation time.
    shared_ptr<string> startTime_ {};
    // The version number.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
