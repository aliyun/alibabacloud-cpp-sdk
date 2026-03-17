// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEAUTOUPGRADEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEAUTOUPGRADEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeDeviceAutoUpgradePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceAutoUpgradePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Jitter, jitter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceAutoUpgradePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Jitter, jitter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
    };
    DescribeDeviceAutoUpgradePolicyResponseBody() = default ;
    DescribeDeviceAutoUpgradePolicyResponseBody(const DescribeDeviceAutoUpgradePolicyResponseBody &) = default ;
    DescribeDeviceAutoUpgradePolicyResponseBody(DescribeDeviceAutoUpgradePolicyResponseBody &&) = default ;
    DescribeDeviceAutoUpgradePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceAutoUpgradePolicyResponseBody() = default ;
    DescribeDeviceAutoUpgradePolicyResponseBody& operator=(const DescribeDeviceAutoUpgradePolicyResponseBody &) = default ;
    DescribeDeviceAutoUpgradePolicyResponseBody& operator=(DescribeDeviceAutoUpgradePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->duration_ == nullptr && this->jitter_ == nullptr && this->requestId_ == nullptr && this->serialNumber_ == nullptr && this->smartAGId_ == nullptr
        && this->timeZone_ == nullptr && this->upgradeType_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // jitter Field Functions 
    bool hasJitter() const { return this->jitter_ != nullptr;};
    void deleteJitter() { this->jitter_ = nullptr;};
    inline string getJitter() const { DARABONBA_PTR_GET_DEFAULT(jitter_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setJitter(string jitter) { DARABONBA_PTR_SET_VALUE(jitter_, jitter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline DescribeDeviceAutoUpgradePolicyResponseBody& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    // The time when upgrades start. The time was configured by using a cron expression.
    // 
    // Example value: `0 0 4 1/1 * ?`. The example value indicates that upgrades start at 04:00:00 (UTC+8) on the first day of each month.
    shared_ptr<string> cronExpression_ {};
    // The time period during which upgrades are performed.
    // 
    // Valid values: **30 to 120**.
    // 
    // Unit: minutes.
    shared_ptr<string> duration_ {};
    // The time differences between upgrades. Unit: minutes.
    shared_ptr<string> jitter_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The serial number of the SAG instance.
    shared_ptr<string> serialNumber_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
    // The time zone in which the trigger period takes effect.
    shared_ptr<string> timeZone_ {};
    // The update type. Valid values:
    // 
    // *   **scheduled**: scheduled upgrade.
    // *   **boot**: automatic upgrade upon instance startup.
    // *   **manual**: manual upgrade.
    shared_ptr<string> upgradeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
