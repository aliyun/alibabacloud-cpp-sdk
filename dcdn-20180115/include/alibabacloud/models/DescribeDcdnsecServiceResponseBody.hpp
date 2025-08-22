// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnsecServiceResponseBodyOperationLocks.hpp>
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
    virtual bool empty() const override { this->changingAffectTime_ != nullptr
        && this->changingChargeType_ != nullptr && this->domainNum_ != nullptr && this->endTime_ != nullptr && this->flowType_ != nullptr && this->instanceId_ != nullptr
        && this->internetChargeType_ != nullptr && this->operationLocks_ != nullptr && this->requestId_ != nullptr && this->requestType_ != nullptr && this->startTime_ != nullptr
        && this->version_ != nullptr; };
    // changingAffectTime Field Functions 
    bool hasChangingAffectTime() const { return this->changingAffectTime_ != nullptr;};
    void deleteChangingAffectTime() { this->changingAffectTime_ = nullptr;};
    inline string changingAffectTime() const { DARABONBA_PTR_GET_DEFAULT(changingAffectTime_, "") };
    inline DescribeDcdnsecServiceResponseBody& setChangingAffectTime(string changingAffectTime) { DARABONBA_PTR_SET_VALUE(changingAffectTime_, changingAffectTime) };


    // changingChargeType Field Functions 
    bool hasChangingChargeType() const { return this->changingChargeType_ != nullptr;};
    void deleteChangingChargeType() { this->changingChargeType_ = nullptr;};
    inline string changingChargeType() const { DARABONBA_PTR_GET_DEFAULT(changingChargeType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setChangingChargeType(string changingChargeType) { DARABONBA_PTR_SET_VALUE(changingChargeType_, changingChargeType) };


    // domainNum Field Functions 
    bool hasDomainNum() const { return this->domainNum_ != nullptr;};
    void deleteDomainNum() { this->domainNum_ = nullptr;};
    inline string domainNum() const { DARABONBA_PTR_GET_DEFAULT(domainNum_, "") };
    inline DescribeDcdnsecServiceResponseBody& setDomainNum(string domainNum) { DARABONBA_PTR_SET_VALUE(domainNum_, domainNum) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnsecServiceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string flowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDcdnsecServiceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeDcdnsecServiceResponseBodyOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeDcdnsecServiceResponseBodyOperationLocks) };
    inline DescribeDcdnsecServiceResponseBodyOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeDcdnsecServiceResponseBodyOperationLocks) };
    inline DescribeDcdnsecServiceResponseBody& setOperationLocks(const DescribeDcdnsecServiceResponseBodyOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeDcdnsecServiceResponseBody& setOperationLocks(DescribeDcdnsecServiceResponseBodyOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnsecServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestType Field Functions 
    bool hasRequestType() const { return this->requestType_ != nullptr;};
    void deleteRequestType() { this->requestType_ = nullptr;};
    inline string requestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, "") };
    inline DescribeDcdnsecServiceResponseBody& setRequestType(string requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnsecServiceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDcdnsecServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The time when the renewed service takes effect. The time is displayed in UTC.
    std::shared_ptr<string> changingAffectTime_ = nullptr;
    // The new metering method for the renewed DCDN. Valid values:
    // 
    // *   **PayByTraffic**: pay by data transfer
    // *   **PayByBandwidth**: pay by bandwidth
    // *   **PayByBandwidth95**: pay by 95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay by monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay by fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay by monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay by 95th percentile bandwidth (50% off during nighttime)
    std::shared_ptr<string> changingChargeType_ = nullptr;
    // The number of accelerated domain names that use DCDN.
    std::shared_ptr<string> domainNum_ = nullptr;
    // The service expiration time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The metering method for traffic.
    std::shared_ptr<string> flowType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The current metering method. Valid values:
    // 
    // *   **PayByTraffic**: pay by data transfer
    // *   **PayByBandwidth**: pay by bandwidth
    // *   **PayByBandwidth95**: pay by 95th percentile bandwidth
    // *   **PayByBandwidth_monthavg**: pay by monthly average bandwidth
    // *   **PayByBandwidth_month4th**: pay by fourth peak bandwidth per month
    // *   **PayByBandwidth_monthday95avg**: pay by monthly average 95th percentile bandwidth
    // *   **PayByBandwidth_nighthalf95**: pay by 95th percentile bandwidth (50% off during nighttime)
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The lock status of DCDN.
    std::shared_ptr<DescribeDcdnsecServiceResponseBodyOperationLocks> operationLocks_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metering method for requests.
    std::shared_ptr<string> requestType_ = nullptr;
    // The service activation time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
