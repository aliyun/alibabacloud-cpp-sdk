// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUEST_HPP_
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
  class RunRCInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcuType, acuType_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateAckEdgeParam, createAckEdgeParam_);
      DARABONBA_PTR_TO_JSON(CreateExtraParam, createExtraParam_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduledRule, scheduledRule_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SupportCase, supportCase_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserDataInBase64, userDataInBase64_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcuType, acuType_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateAckEdgeParam, createAckEdgeParam_);
      DARABONBA_PTR_FROM_JSON(CreateExtraParam, createExtraParam_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduledRule, scheduledRule_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SupportCase, supportCase_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserDataInBase64, userDataInBase64_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    RunRCInstancesRequest() = default ;
    RunRCInstancesRequest(const RunRCInstancesRequest &) = default ;
    RunRCInstancesRequest(RunRCInstancesRequest &&) = default ;
    RunRCInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesRequest() = default ;
    RunRCInstancesRequest& operator=(const RunRCInstancesRequest &) = default ;
    RunRCInstancesRequest& operator=(RunRCInstancesRequest &&) = default ;
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
      // The tag key. You can create up to N tag keys at a time. Valid values of N: **1 to 20**. Empty strings are not allowed.
      shared_ptr<string> key_ {};
      // The tag value corresponding to the tag key. You can create up to N tag values at a time. Valid values of N: **1 to 20**. Empty strings are allowed.
      shared_ptr<string> value_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The type of the system cloud disk. Valid values:
      // 
      // - **cloud_efficiency**: ultra cloud disk.
      // - **cloud_ssd**: standard SSD.
      // - **cloud_essd** (default): ESSD.
      // - **cloud_auto**: premium performance disk.
      shared_ptr<string> category_ {};
      // The performance level (PL) of the system cloud disk when it is an ESSD. For information about the performance differences of ESSDs, see [ESSD](https://help.aliyun.com/document_detail/2859916.html). Valid values:
      // 
      // - **PL0**
      // - **PL1** (default)
      // - **PL2**
      // - **PL3**
      // 
      // > When the system cloud disk type is standard SSD, this parameter is not applicable.
      shared_ptr<string> performanceLevel_ {};
      // The size of the system cloud disk. Unit: GiB. The value must be greater than or equal to the size of the image specified by the **ImageId** parameter. Valid values:
      // 
      // - **cloud_efficiency**: 20 to 2048.
      // - **cloud_ssd**: 20 to 2048.
      // - **cloud_auto**: 1 to 2048.
      // - **cloud_essd**: The valid values depend on the value of **SystemDisk.PerformanceLevel**.
      //   - PL0: 1 to 2048.
      //   - PL1: 20 to 2048.
      //   - PL2: 461 to 2048.
      //   - PL3: 1,261 to 2048.
      shared_ptr<int32_t> size_ {};
    };

    class NetworkOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkOptions& obj) { 
        DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      };
      NetworkOptions() = default ;
      NetworkOptions(const NetworkOptions &) = default ;
      NetworkOptions(NetworkOptions &&) = default ;
      NetworkOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkOptions() = default ;
      NetworkOptions& operator=(const NetworkOptions &) = default ;
      NetworkOptions& operator=(NetworkOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableJumboFrame_ == nullptr; };
      // enableJumboFrame Field Functions 
      bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
      void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
      inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
      inline NetworkOptions& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    protected:
      // Specifies whether to enable the Jumbo frame feature for the instance. Valid values:
      // 
      // - **false** (default): Jumbo frame is disabled. The MTU of all NICs (including the primary NIC and secondary NICs) on the instance is set to 1500.
      // - **true**: Jumbo frame is enabled. The MTU of all NICs (including the primary NIC and secondary NICs) on the instance is set to 8500.
      // 
      // > Only specific instance types of the eighth generation or later support the Jumbo frame feature. For more information, see ECS Instance MTU.
      shared_ptr<bool> enableJumboFrame_ {};
    };

    class DataDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_TO_JSON(Device, device_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_FROM_JSON(Device, device_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      };
      DataDisk() = default ;
      DataDisk(const DataDisk &) = default ;
      DataDisk(DataDisk &&) = default ;
      DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisk() = default ;
      DataDisk& operator=(const DataDisk &) = default ;
      DataDisk& operator=(DataDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->deleteWithInstance_ == nullptr && this->device_ == nullptr && this->encrypted_ == nullptr && this->performanceLevel_ == nullptr && this->size_ == nullptr
        && this->snapshotId_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // deleteWithInstance Field Functions 
      bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
      void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
      inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
      inline DataDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


      // device Field Functions 
      bool hasDevice() const { return this->device_ != nullptr;};
      void deleteDevice() { this->device_ = nullptr;};
      inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
      inline DataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
      inline DataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline DataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    protected:
      // The type of the data cloud disk. Valid values:
      // 
      // - **cloud_efficiency**: ultra cloud disk.
      // - **cloud_ssd**: standard SSD.
      // - **cloud_essd** (default): ESSD.
      // - **cloud_auto**: premium performance disk.
      shared_ptr<string> category_ {};
      // Reserved parameter. Not supported.
      shared_ptr<bool> deleteWithInstance_ {};
      // The mount point of the data cloud disk.
      // 
      // >This parameter is applicable only to full image (whole-machine image) scenarios. You can set this parameter to the mount point of the data cloud disk in the full image and modify the corresponding **DataDisk.Size** and **DataDisk.Category** parameters to change the cloud disk type and size of the data cloud disk in the full image.
      shared_ptr<string> device_ {};
      // Specifies whether to encrypt the cloud disk. Valid values:
      // - **true**: The cloud disk is encrypted.
      // - **false** (default): The cloud disk is not encrypted.
      shared_ptr<string> encrypted_ {};
      // The performance level (PL) of the data cloud disk when it is an ESSD. For information about the performance differences of ESSDs, see [ESSD](https://help.aliyun.com/document_detail/2859916.html). Valid values:
      // 
      // - **PL0**
      // - **PL1** (default)
      // - **PL2**
      // - **PL3**
      // 
      // > When the data cloud disk type is standard SSD, this parameter is not applicable.
      shared_ptr<string> performanceLevel_ {};
      // The size of the data cloud disk. Unit: GiB. Valid values:
      // 
      // - cloud_efficiency: 20 to 32,768.
      // - cloud_ssd: 20 to 32,768.
      // - cloud_auto: 1 to 65,536.
      // - cloud_essd: The valid values depend on the value of **DataDisk.PerformanceLevel**.
      //   - PL0: 1 to 65,536.
      //   - PL1: 20 to 65,536.
      //   - PL2: 461 to 65,536.
      //   - PL3: 1,261 to 65,536.
      // 
      // If the **DataDisk.SnapshotId** parameter is specified and the snapshot size is greater than the value of **DataDisk.Size**, the cloud disk is created with the same size as the snapshot. If the snapshot size is smaller than the value of **DataDisk.Size**, the cloud disk is created with the size specified by **DataDisk.Size**.
      shared_ptr<int32_t> size_ {};
      // The snapshot used to create the data cloud disk.
      // 
      // - If the snapshot size corresponding to **DataDisk.SnapshotId** is greater than the value of **DataDisk.Size**, the cloud disk is created with the same size as the snapshot. If the snapshot size is smaller than the value of **DataDisk.Size**, the cloud disk is created with the size specified by **DataDisk.Size**.
      // - Snapshots cannot be used to create elastic ephemeral disks.
      // - Snapshots created on or before July 15, 2013 cannot be used to create cloud disks.
      shared_ptr<string> snapshotId_ {};
    };

    class CreateAckEdgeParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateAckEdgeParam& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateAckEdgeParam& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      };
      CreateAckEdgeParam() = default ;
      CreateAckEdgeParam(const CreateAckEdgeParam &) = default ;
      CreateAckEdgeParam(CreateAckEdgeParam &&) = default ;
      CreateAckEdgeParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateAckEdgeParam() = default ;
      CreateAckEdgeParam& operator=(const CreateAckEdgeParam &) = default ;
      CreateAckEdgeParam& operator=(CreateAckEdgeParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->nodePoolId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline CreateAckEdgeParam& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // nodePoolId Field Functions 
      bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
      void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
      inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
      inline CreateAckEdgeParam& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    protected:
      // The ID of the target ACK Edge cluster.
      shared_ptr<string> clusterId_ {};
      // The ID of the target edge node pool in the ACK Edge cluster.
      shared_ptr<string> nodePoolId_ {};
    };

    virtual bool empty() const override { return this->acuType_ == nullptr
        && this->amount_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->businessInfo_ == nullptr
        && this->clientToken_ == nullptr && this->createAckEdgeParam_ == nullptr && this->createExtraParam_ == nullptr && this->createMode_ == nullptr && this->dataDisk_ == nullptr
        && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->hostName_ == nullptr
        && this->imageId_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->keyPairName_ == nullptr && this->networkOptions_ == nullptr && this->password_ == nullptr
        && this->passwordInherit_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->privateIpAddress_ == nullptr && this->promotionCode_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduledRule_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr
        && this->securityGroupIds_ == nullptr && this->spotStrategy_ == nullptr && this->supportCase_ == nullptr && this->systemDisk_ == nullptr && this->tag_ == nullptr
        && this->userData_ == nullptr && this->userDataInBase64_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // acuType Field Functions 
    bool hasAcuType() const { return this->acuType_ != nullptr;};
    void deleteAcuType() { this->acuType_ = nullptr;};
    inline string getAcuType() const { DARABONBA_PTR_GET_DEFAULT(acuType_, "") };
    inline RunRCInstancesRequest& setAcuType(string acuType) { DARABONBA_PTR_SET_VALUE(acuType_, acuType) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline RunRCInstancesRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RunRCInstancesRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RunRCInstancesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline RunRCInstancesRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline RunRCInstancesRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunRCInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createAckEdgeParam Field Functions 
    bool hasCreateAckEdgeParam() const { return this->createAckEdgeParam_ != nullptr;};
    void deleteCreateAckEdgeParam() { this->createAckEdgeParam_ = nullptr;};
    inline const RunRCInstancesRequest::CreateAckEdgeParam & getCreateAckEdgeParam() const { DARABONBA_PTR_GET_CONST(createAckEdgeParam_, RunRCInstancesRequest::CreateAckEdgeParam) };
    inline RunRCInstancesRequest::CreateAckEdgeParam getCreateAckEdgeParam() { DARABONBA_PTR_GET(createAckEdgeParam_, RunRCInstancesRequest::CreateAckEdgeParam) };
    inline RunRCInstancesRequest& setCreateAckEdgeParam(const RunRCInstancesRequest::CreateAckEdgeParam & createAckEdgeParam) { DARABONBA_PTR_SET_VALUE(createAckEdgeParam_, createAckEdgeParam) };
    inline RunRCInstancesRequest& setCreateAckEdgeParam(RunRCInstancesRequest::CreateAckEdgeParam && createAckEdgeParam) { DARABONBA_PTR_SET_RVALUE(createAckEdgeParam_, createAckEdgeParam) };


    // createExtraParam Field Functions 
    bool hasCreateExtraParam() const { return this->createExtraParam_ != nullptr;};
    void deleteCreateExtraParam() { this->createExtraParam_ = nullptr;};
    inline string getCreateExtraParam() const { DARABONBA_PTR_GET_DEFAULT(createExtraParam_, "") };
    inline RunRCInstancesRequest& setCreateExtraParam(string createExtraParam) { DARABONBA_PTR_SET_VALUE(createExtraParam_, createExtraParam) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline RunRCInstancesRequest& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<RunRCInstancesRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<RunRCInstancesRequest::DataDisk>) };
    inline vector<RunRCInstancesRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<RunRCInstancesRequest::DataDisk>) };
    inline RunRCInstancesRequest& setDataDisk(const vector<RunRCInstancesRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline RunRCInstancesRequest& setDataDisk(vector<RunRCInstancesRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunRCInstancesRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline RunRCInstancesRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunRCInstancesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RunRCInstancesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline RunRCInstancesRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RunRCInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline RunRCInstancesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline RunRCInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline RunRCInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline RunRCInstancesRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline RunRCInstancesRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline RunRCInstancesRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline RunRCInstancesRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // networkOptions Field Functions 
    bool hasNetworkOptions() const { return this->networkOptions_ != nullptr;};
    void deleteNetworkOptions() { this->networkOptions_ = nullptr;};
    inline const RunRCInstancesRequest::NetworkOptions & getNetworkOptions() const { DARABONBA_PTR_GET_CONST(networkOptions_, RunRCInstancesRequest::NetworkOptions) };
    inline RunRCInstancesRequest::NetworkOptions getNetworkOptions() { DARABONBA_PTR_GET(networkOptions_, RunRCInstancesRequest::NetworkOptions) };
    inline RunRCInstancesRequest& setNetworkOptions(const RunRCInstancesRequest::NetworkOptions & networkOptions) { DARABONBA_PTR_SET_VALUE(networkOptions_, networkOptions) };
    inline RunRCInstancesRequest& setNetworkOptions(RunRCInstancesRequest::NetworkOptions && networkOptions) { DARABONBA_PTR_SET_RVALUE(networkOptions_, networkOptions) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RunRCInstancesRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline RunRCInstancesRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RunRCInstancesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RunRCInstancesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline RunRCInstancesRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline RunRCInstancesRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunRCInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunRCInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduledRule Field Functions 
    bool hasScheduledRule() const { return this->scheduledRule_ != nullptr;};
    void deleteScheduledRule() { this->scheduledRule_ = nullptr;};
    inline string getScheduledRule() const { DARABONBA_PTR_GET_DEFAULT(scheduledRule_, "") };
    inline RunRCInstancesRequest& setScheduledRule(string scheduledRule) { DARABONBA_PTR_SET_VALUE(scheduledRule_, scheduledRule) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline RunRCInstancesRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RunRCInstancesRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline RunRCInstancesRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline RunRCInstancesRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline RunRCInstancesRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // supportCase Field Functions 
    bool hasSupportCase() const { return this->supportCase_ != nullptr;};
    void deleteSupportCase() { this->supportCase_ = nullptr;};
    inline string getSupportCase() const { DARABONBA_PTR_GET_DEFAULT(supportCase_, "") };
    inline RunRCInstancesRequest& setSupportCase(string supportCase) { DARABONBA_PTR_SET_VALUE(supportCase_, supportCase) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const RunRCInstancesRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, RunRCInstancesRequest::SystemDisk) };
    inline RunRCInstancesRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, RunRCInstancesRequest::SystemDisk) };
    inline RunRCInstancesRequest& setSystemDisk(const RunRCInstancesRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline RunRCInstancesRequest& setSystemDisk(RunRCInstancesRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunRCInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunRCInstancesRequest::Tag>) };
    inline vector<RunRCInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<RunRCInstancesRequest::Tag>) };
    inline RunRCInstancesRequest& setTag(const vector<RunRCInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunRCInstancesRequest& setTag(vector<RunRCInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RunRCInstancesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userDataInBase64 Field Functions 
    bool hasUserDataInBase64() const { return this->userDataInBase64_ != nullptr;};
    void deleteUserDataInBase64() { this->userDataInBase64_ = nullptr;};
    inline bool getUserDataInBase64() const { DARABONBA_PTR_GET_DEFAULT(userDataInBase64_, false) };
    inline RunRCInstancesRequest& setUserDataInBase64(bool userDataInBase64) { DARABONBA_PTR_SET_VALUE(userDataInBase64_, userDataInBase64) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RunRCInstancesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline RunRCInstancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ACU type.
    shared_ptr<string> acuType_ {};
    // The number of RDS Custom instances to create. This parameter is applicable only to batch creation of RDS Custom instances.
    // 
    // Valid values: **1** to **30**. Default value: **1**.
    shared_ptr<int32_t> amount_ {};
    // Specifies whether to enable automatic payment. Valid values:
    // - **true** (default): Automatic payment is enabled. Ensure that your account balance is sufficient.
    // - **false**: Only an order is generated. No payment is made.
    // > If your payment method has an insufficient balance, set the AutoPay parameter to false. An unpaid order is generated, and you can log on to the ApsaraDB RDS console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // * **true** (default): Auto-renewal is enabled.
    // * **false**: Auto-renewal is disabled.
    shared_ptr<bool> autoRenew_ {};
    // Specifies whether to automatically use coupons. Valid values:
    // * **true** (default): Coupons are automatically used.
    // * **false**: Coupons are not automatically used.
    // 
    // > After a coupon is used, the amount deducted by the coupon is not refunded if you perform a downgrade operation.
    shared_ptr<bool> autoUseCoupon_ {};
    // The business information.
    shared_ptr<string> businessInfo_ {};
    // The client token that is used to ensure the idempotence of the request and prevent repeated submissions. The value is generated by the client and must be unique across different requests. The value can be up to 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The ACK Edge cluster information.
    shared_ptr<RunRCInstancesRequest::CreateAckEdgeParam> createAckEdgeParam_ {};
    // Reserved parameter. Not supported.
    shared_ptr<string> createExtraParam_ {};
    // Specifies whether the instance can be added to an ACK cluster. If this parameter is set to **1**, the created instance can be added to an ACK cluster by calling the **AttachRCInstances** API operation, which enables efficient management of containerized applications.
    // 
    // - **1**: The instance can be added to an ACK cluster.
    // - **0** (default): The instance cannot be added to an ACK cluster.
    shared_ptr<string> createMode_ {};
    // The list of data cloud disks.
    shared_ptr<vector<RunRCInstancesRequest::DataDisk>> dataDisk_ {};
    // Specifies whether to enable deletion protection. Valid values:
    // * **true**: Deletion protection is enabled.
    // * **false** (default): Deletion protection is disabled.
    shared_ptr<bool> deletionProtection_ {};
    // The deployment set ID.
    shared_ptr<string> deploymentSetId_ {};
    // The instance description. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for the instance creation. Valid values:
    // * **true**: A dry run is performed without creating the instance. The check items include request parameters, request format, business limits, and inventory.
    // * **false** (default): A normal request is sent. After the check is passed, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The hostname of the instance (2 to 64 characters).
    // 
    // - Periods (.) can be used to separate the hostname into multiple segments. Each segment can contain uppercase and lowercase letters, digits, and hyphens (-).
    // - Periods (.) and hyphens (-) cannot be used as the first or last character, and cannot be used consecutively.
    shared_ptr<string> hostName_ {};
    // The image ID used by the instance.
    shared_ptr<string> imageId_ {};
    // The billing method. Valid values:
    // * **Prepaid**: subscription.
    // * **Postpaid**: pay-as-you-go.
    shared_ptr<string> instanceChargeType_ {};
    // The instance name. The name must be 2 to 128 characters in length and must start with an uppercase or lowercase letter or a Chinese character. The name can contain uppercase and lowercase letters, Chinese characters, digits, periods (.), underscores (_), colons (:), or hyphens (-). The default value is the InstanceId of the instance. When creating multiple RDS Custom instances, you can set sequential instance names that can contain brackets ([]) and commas (,). For more information, see [Create an RDS Custom instance](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/create-an-rds-custom-instance#00481f9ba381u).
    shared_ptr<string> instanceName_ {};
    // The instance type. For the instance types supported by RDS Custom instances, see [RDS Custom instance types](https://help.aliyun.com/document_detail/2844823.html).
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // Reserved parameter. Not supported.
    shared_ptr<string> internetChargeType_ {};
    // The maximum outbound public bandwidth for Custom for SQL Server. Unit: Mbit/s.
    // 
    // Valid values: 0 to 1024. Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Reserved parameter. Not supported.
    shared_ptr<string> ioOptimized_ {};
    // The name of the key pair. Only a single name is supported.
    shared_ptr<string> keyPairName_ {};
    // The network-related attribute parameters.
    shared_ptr<RunRCInstancesRequest::NetworkOptions> networkOptions_ {};
    // The password of the instance account. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported: `()~!@#$%^&*-_+=|{}[]:;\\"<>,.?/`.
    shared_ptr<string> password_ {};
    // Specifies whether to use the preset password of the image. When this parameter is used, the Password parameter must be empty, and the image must have a password configured. Default value: false.
    shared_ptr<bool> passwordInherit_ {};
    // The subscription duration of the resource. Default value: **1**.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription billable methods duration. Valid values:
    // - **Year**
    // - **Month** (default)
    shared_ptr<string> periodUnit_ {};
    // The private IP address of the instance. When setting the private IP address for a VPC-type ECS instance, you must select an address from the idle CIDR block of the vSwitch (VSwitchId).
    shared_ptr<string> privateIpAddress_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The region ID. You can call DescribeRegions to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The time-based elastic scaling rule.
    shared_ptr<string> scheduledRule_ {};
    // Reserved parameter. Not supported.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which the instance belongs. Instances in the same security group can communicate with each other. The maximum number of instances that a security group can contain depends on the security group type. For more information, see the security group section in [Limits](https://help.aliyun.com/document_detail/25412.html).
    // > The SecurityGroupId parameter determines the network type of the instance. For example, if the specified security group is of the VPC type, the instance is a VPC-type instance, and you must also specify the VSwitchId parameter.
    shared_ptr<string> securityGroupId_ {};
    // Adds the instance to multiple security groups. The maximum number of associated security groups is 10. You cannot set both SecurityGroupId and SecurityGroupIds.N at the same time.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The bidding strategy for pay-as-you-go instances. This parameter takes effect only when the **InstanceChargeType** parameter is set to **PostPaid**. Valid values:
    // 
    // - **NoSpot**: a regular pay-as-you-go instance.
    // - **SpotAsPriceGo**: the system automatically bids at the current market price.
    // 
    // Default value: **NoSpot**.
    shared_ptr<string> spotStrategy_ {};
    // The form factor of RDS Custom. Valid values:
    // 
    // - **eni**: dual network interface.
    // - **edge**: edge node pool.
    // - **share**: VPC.
    shared_ptr<string> supportCase_ {};
    // The system cloud disk specifications.
    shared_ptr<RunRCInstancesRequest::SystemDisk> systemDisk_ {};
    // The list of tags.
    shared_ptr<vector<RunRCInstancesRequest::Tag>> tag_ {};
    // The instance user data. The raw data can be up to 32 KB in size.
    // 
    // Do not pass confidential information such as passwords and private keys in plaintext. If you must pass such information, encrypt it first and then use Base64 encoding before transmission. Perform decryption inside the instance. The following example shows how to transform a script to a Base64 character string:
    // 
    // ```
    // echo -n \\"#!/bin/sh
    // echo "Hello World"\\" | base64 -w 0
    // ```
    shared_ptr<string> userData_ {};
    // Specifies whether the custom data is Base64-encoded.
    // 
    // - **true**: The custom data is Base64-encoded.
    // - **false** (default): The custom data is not Base64-encoded.
    shared_ptr<bool> userDataInBase64_ {};
    // The vSwitch ID of the target instance. If you are creating a VPC-type RDS Custom instance, you must specify the vSwitch ID. The security group and the vSwitch must belong to the same VPC.
    // > If you configure the VSwitchId parameter, the ZoneId parameter must match the zone of the vSwitch. You can also leave ZoneId empty, and the system automatically selects the zone of the specified vSwitch.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID of the instance. You can call DescribeZones to obtain the list of zones.
    // > If you specify the VSwitchId parameter, the ZoneId parameter must match the zone of the vSwitch. You can also leave ZoneId empty, and the system automatically selects the zone of the specified vSwitch.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
