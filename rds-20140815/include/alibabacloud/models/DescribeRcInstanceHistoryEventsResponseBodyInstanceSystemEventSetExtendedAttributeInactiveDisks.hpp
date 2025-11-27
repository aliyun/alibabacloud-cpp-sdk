// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETEXTENDEDATTRIBUTEINACTIVEDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETEXTENDEDATTRIBUTEINACTIVEDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeviceCategory, deviceCategory_);
      DARABONBA_PTR_TO_JSON(DeviceSize, deviceSize_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeviceCategory, deviceCategory_);
      DARABONBA_PTR_FROM_JSON(DeviceSize, deviceSize_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
    };
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks() = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks(const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks &) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks(DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks &&) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks() = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& operator=(const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks &) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& operator=(DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->deviceCategory_ == nullptr && return this->deviceSize_ == nullptr && return this->deviceType_ == nullptr && return this->releaseTime_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deviceCategory Field Functions 
    bool hasDeviceCategory() const { return this->deviceCategory_ != nullptr;};
    void deleteDeviceCategory() { this->deviceCategory_ = nullptr;};
    inline string deviceCategory() const { DARABONBA_PTR_GET_DEFAULT(deviceCategory_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& setDeviceCategory(string deviceCategory) { DARABONBA_PTR_SET_VALUE(deviceCategory_, deviceCategory) };


    // deviceSize Field Functions 
    bool hasDeviceSize() const { return this->deviceSize_ != nullptr;};
    void deleteDeviceSize() { this->deviceSize_ = nullptr;};
    inline string deviceSize() const { DARABONBA_PTR_GET_DEFAULT(deviceSize_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& setDeviceSize(string deviceSize) { DARABONBA_PTR_SET_VALUE(deviceSize_, deviceSize) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttributeInactiveDisks& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


  protected:
    // The time when the disk was created. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The category of the cloud disk or local disk. Valid values:
    // 
    // *   **cloud_efficiency**: ultra disk
    // *   **cloud_ssd**: standard SSD
    // *   **cloud_essd**: ESSD
    // *   **cloud_auto**: Premium ESSD
    std::shared_ptr<string> deviceCategory_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<string> deviceSize_ = nullptr;
    // The disk type. Valid values:
    // 
    // *   **system**: system disk.
    // *   **data**: data disk.
    std::shared_ptr<string> deviceType_ = nullptr;
    // The time when the disk was released. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> releaseTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
