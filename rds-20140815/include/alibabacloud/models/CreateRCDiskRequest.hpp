// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateRCDiskRequest() = default ;
    CreateRCDiskRequest(const CreateRCDiskRequest &) = default ;
    CreateRCDiskRequest(CreateRCDiskRequest &&) = default ;
    CreateRCDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCDiskRequest() = default ;
    CreateRCDiskRequest& operator=(const CreateRCDiskRequest &) = default ;
    CreateRCDiskRequest& operator=(CreateRCDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can specify up to N tag keys at a time. Valid values of N: **1 to 20**. The tag key cannot be an empty string.
      shared_ptr<string> key_ {};
      // The tag value that corresponds to the tag key. You can specify up to N tag values at a time. Valid values of N: **1** to **20**. The tag value can be an empty string.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->description_ == nullptr && this->diskCategory_ == nullptr && this->diskName_ == nullptr && this->instanceChargeType_ == nullptr
        && this->instanceId_ == nullptr && this->performanceLevel_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr && this->tag_ == nullptr && this->zoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateRCDiskRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateRCDiskRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRCDiskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CreateRCDiskRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateRCDiskRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateRCDiskRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRCDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateRCDiskRequest& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateRCDiskRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateRCDiskRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRCDiskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRCDiskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateRCDiskRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateRCDiskRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRCDiskRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRCDiskRequest::Tag>) };
    inline vector<CreateRCDiskRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateRCDiskRequest::Tag>) };
    inline CreateRCDiskRequest& setTag(const vector<CreateRCDiskRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRCDiskRequest& setTag(vector<CreateRCDiskRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateRCDiskRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true** (default): enables automatic payment. Make sure that your account balance is sufficient.
    // - **false**: generates an order without charging.
    // 
    // 
    // 
    // 
    // > If your payment method has insufficient balance, set this parameter to false. An unpaid order is generated, and you can log on to the ApsaraDB RDS console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. This parameter is valid only when you create a subscription data cloud disk. Valid values:
    // - **true**: enables auto-renewal.
    // - **false**: disables auto-renewal.
    // 
    //  > If you purchase the cloud disk on a monthly basis, the auto-renewal epoch is one month.
    //  If you purchase the cloud disk on a yearly basis, the auto-renewal epoch is one year.
    shared_ptr<bool> autoRenew_ {};
    // The description of the cloud disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The category of the data cloud disk. Valid values:
    // 
    // - **cloud_efficiency**: ultra cloud disk.
    // - **cloud_ssd**: standard SSD.
    // - **cloud_essd**: ESSD.
    // - **cloud_auto** (default): premium performance disk.
    shared_ptr<string> diskCategory_ {};
    // The name of the cloud disk. The name must be 2 to 128 characters in length and can contain characters that are categorized as letter in Unicode, including Chinese characters, English letters, and digits. The name can also contain colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> diskName_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go. Cloud disks with this billing method do not need to be mounted to an instance. You can also mount them to an instance of any billing method during creation as needed.
    // - **Prepaid**: subscription. Cloud disks with this billing method must be mounted to a subscription instance. You must specify the **InstanceId** (instance ID) of a subscription instance.
    shared_ptr<string> instanceChargeType_ {};
    // Instance ID of the instance to which the cloud disk is attached. If **InstanceChargeType** is set to **Prepaid** (subscription), you must specify instance ID of a subscription instance.
    shared_ptr<string> instanceId_ {};
    // The performance level (PL) of the ESSD cloud disk. Valid values:
    // 
    // - **PL0**: A single cloud disk can deliver up to 10,000 random read/write IOPS.
    // - **PL1** (default): A single cloud disk can deliver up to 50,000 random read/write IOPS.
    // - **PL2**: A single cloud disk can deliver up to 100,000 random read/write IOPS.
    // - **PL3**: A single cloud disk can deliver up to 1,000,000 random read/write IOPS.
    // 
    // For more information about how to select an ESSD performance level, see [ESSD cloud disk](https://help.aliyun.com/document_detail/2859916.html).
    shared_ptr<string> performanceLevel_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<int32_t> period_ {};
    // A reserved parameter. You do not need to specify this parameter.
    shared_ptr<string> periodUnit_ {};
    // The region ID. You can call the DescribeRegions operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The capacity size. Unit: GiB. You must specify a value for this parameter. Valid values:
    // 
    // - **cloud_efficiency**: 20 to 32,768.
    // - **cloud_ssd**: 20 to 32,768.
    // - **cloud_auto**: 1 to 65,536.
    // - **cloud_essd**: The valid value range depends on the value of **PerformanceLevel**.
    //   - PL0: 1 to 65,536.
    //   - PL1: 20 to 65,536.
    //   - PL2: 461 to 65,536.
    //   - PL3: 1,261 to 65,536.
    // 
    // If **SnapshotId** is specified and the capacity of the corresponding snapshot is greater than the value of **Size**, snapshot size of the created cloud disk is the same as the snapshot capacity. If the snapshot capacity is less than the value of **Size**, snapshot size of the created cloud disk is the value of **Size**.
    shared_ptr<int32_t> size_ {};
    // The snapshot that is used to create the cloud disk.
    // 
    // - RDS Custom snapshots and ECS snapshots (non-shared type) are supported.
    // - If the capacity of the snapshot specified by **SnapshotId** is greater than the value of **Size**, snapshot size of the created cloud disk is the same as the snapshot capacity. If the snapshot capacity is less than the value of **Size**, snapshot size of the created cloud disk is the value of **Size**.
    // - Creating elastic ephemeral disks from snapshots is not supported.
    // - Snapshots created on or before July 15, 2013 cannot be used to create cloud disks.
    shared_ptr<string> snapshotId_ {};
    // The tags.
    shared_ptr<vector<CreateRCDiskRequest::Tag>> tag_ {};
    // The zone ID.
    // 
    // This parameter is required if the **InstanceId** parameter (the instance ID of the instance to which the cloud disk is mounted) is not specified.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
