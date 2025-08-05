// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDCLUSTERMONITORRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDCLUSTERMONITORRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDedicatedClusterMonitorRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedClusterMonitorRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CpuAlarmThreshold, cpuAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DiskAlarmThreshold, diskAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(DuAlarmThreshold, duAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MemAlarmThreshold, memAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(NoticeSwitch, noticeSwitch_);
      DARABONBA_PTR_TO_JSON(Phones, phones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedClusterMonitorRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuAlarmThreshold, cpuAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DiskAlarmThreshold, diskAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(DuAlarmThreshold, duAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MemAlarmThreshold, memAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(NoticeSwitch, noticeSwitch_);
      DARABONBA_PTR_FROM_JSON(Phones, phones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDedicatedClusterMonitorRuleResponseBody() = default ;
    DescribeDedicatedClusterMonitorRuleResponseBody(const DescribeDedicatedClusterMonitorRuleResponseBody &) = default ;
    DescribeDedicatedClusterMonitorRuleResponseBody(DescribeDedicatedClusterMonitorRuleResponseBody &&) = default ;
    DescribeDedicatedClusterMonitorRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedClusterMonitorRuleResponseBody() = default ;
    DescribeDedicatedClusterMonitorRuleResponseBody& operator=(const DescribeDedicatedClusterMonitorRuleResponseBody &) = default ;
    DescribeDedicatedClusterMonitorRuleResponseBody& operator=(DescribeDedicatedClusterMonitorRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuAlarmThreshold_ != nullptr
        && this->dedicatedClusterId_ != nullptr && this->diskAlarmThreshold_ != nullptr && this->duAlarmThreshold_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr
        && this->httpStatusCode_ != nullptr && this->memAlarmThreshold_ != nullptr && this->noticeSwitch_ != nullptr && this->phones_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // cpuAlarmThreshold Field Functions 
    bool hasCpuAlarmThreshold() const { return this->cpuAlarmThreshold_ != nullptr;};
    void deleteCpuAlarmThreshold() { this->cpuAlarmThreshold_ = nullptr;};
    inline string cpuAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuAlarmThreshold_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setCpuAlarmThreshold(string cpuAlarmThreshold) { DARABONBA_PTR_SET_VALUE(cpuAlarmThreshold_, cpuAlarmThreshold) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // diskAlarmThreshold Field Functions 
    bool hasDiskAlarmThreshold() const { return this->diskAlarmThreshold_ != nullptr;};
    void deleteDiskAlarmThreshold() { this->diskAlarmThreshold_ = nullptr;};
    inline string diskAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskAlarmThreshold_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setDiskAlarmThreshold(string diskAlarmThreshold) { DARABONBA_PTR_SET_VALUE(diskAlarmThreshold_, diskAlarmThreshold) };


    // duAlarmThreshold Field Functions 
    bool hasDuAlarmThreshold() const { return this->duAlarmThreshold_ != nullptr;};
    void deleteDuAlarmThreshold() { this->duAlarmThreshold_ = nullptr;};
    inline string duAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(duAlarmThreshold_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setDuAlarmThreshold(string duAlarmThreshold) { DARABONBA_PTR_SET_VALUE(duAlarmThreshold_, duAlarmThreshold) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // memAlarmThreshold Field Functions 
    bool hasMemAlarmThreshold() const { return this->memAlarmThreshold_ != nullptr;};
    void deleteMemAlarmThreshold() { this->memAlarmThreshold_ = nullptr;};
    inline string memAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(memAlarmThreshold_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setMemAlarmThreshold(string memAlarmThreshold) { DARABONBA_PTR_SET_VALUE(memAlarmThreshold_, memAlarmThreshold) };


    // noticeSwitch Field Functions 
    bool hasNoticeSwitch() const { return this->noticeSwitch_ != nullptr;};
    void deleteNoticeSwitch() { this->noticeSwitch_ = nullptr;};
    inline string noticeSwitch() const { DARABONBA_PTR_GET_DEFAULT(noticeSwitch_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setNoticeSwitch(string noticeSwitch) { DARABONBA_PTR_SET_VALUE(noticeSwitch_, noticeSwitch) };


    // phones Field Functions 
    bool hasPhones() const { return this->phones_ != nullptr;};
    void deletePhones() { this->phones_ = nullptr;};
    inline string phones() const { DARABONBA_PTR_GET_DEFAULT(phones_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setPhones(string phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeDedicatedClusterMonitorRuleResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The alert threshold for CPU utilization. Unit: percentage.
    std::shared_ptr<string> cpuAlarmThreshold_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The alert threshold for disk usage. Unit: percentage.
    std::shared_ptr<string> diskAlarmThreshold_ = nullptr;
    // The alert threshold for DTS Unit (DU) usage. Unit: percentage.
    std::shared_ptr<string> duAlarmThreshold_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The alert threshold for memory usage. Unit: percentage.
    std::shared_ptr<string> memAlarmThreshold_ = nullptr;
    // Indicates whether the alert feature is enabled. Valid values:
    // 
    // *   **1**: The alert feature is enabled.
    // *   **0**: The alert feature is disabled.
    std::shared_ptr<string> noticeSwitch_ = nullptr;
    // The mobile phone number to which alerts are sent. Separate multiple mobile phone numbers with commas (,).
    std::shared_ptr<string> phones_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
