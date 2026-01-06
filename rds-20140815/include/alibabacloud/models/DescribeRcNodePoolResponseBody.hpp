// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODY_HPP_
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
  class DescribeRCNodePoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCNodePoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodePoolList, nodePoolList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCNodePoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodePoolList, nodePoolList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCNodePoolResponseBody() = default ;
    DescribeRCNodePoolResponseBody(const DescribeRCNodePoolResponseBody &) = default ;
    DescribeRCNodePoolResponseBody(DescribeRCNodePoolResponseBody &&) = default ;
    DescribeRCNodePoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCNodePoolResponseBody() = default ;
    DescribeRCNodePoolResponseBody& operator=(const DescribeRCNodePoolResponseBody &) = default ;
    DescribeRCNodePoolResponseBody& operator=(DescribeRCNodePoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodePoolList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodePoolList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
        DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
        DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
        DARABONBA_PTR_TO_JSON(NodePoolName, nodePoolName_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, NodePoolList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
        DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
        DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
        DARABONBA_PTR_FROM_JSON(NodePoolName, nodePoolName_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      NodePoolList() = default ;
      NodePoolList(const NodePoolList &) = default ;
      NodePoolList(NodePoolList &&) = default ;
      NodePoolList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodePoolList() = default ;
      NodePoolList& operator=(const NodePoolList &) = default ;
      NodePoolList& operator=(NodePoolList &&) = default ;
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
        // The tag keys.
        shared_ptr<string> key_ {};
        // The tag value.
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
        // The type of the system disk. Set the value to **cloud_essd**, which indicates ESSDs.
        shared_ptr<string> category_ {};
        // The performance level of the ESSD. Valid values:
        // 
        // *   **PL0**: A single ESSD delivers up to 10,000 random read/write IOPS.
        // *   **PL1**: A single ESSD delivers up to 50,000 random read/write IOPS.
        // *   **PL2**: A single ESSD delivers up to 100,000 random read/write IOPS.
        // *   **PL3**: A single ESSD delivers up to 1,000,000 random read/write IOPS.
        shared_ptr<string> performanceLevel_ {};
        // The size of the system disk. Unit: GiB.
        shared_ptr<int32_t> size_ {};
      };

      class DataDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
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
        && this->deleteWithInstance_ == nullptr && this->encrypted_ == nullptr && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
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


      protected:
        // The type of the data disk. Set the value to **cloud_essd**, which indicates Enterprise SSDs (ESSDs).
        shared_ptr<string> category_ {};
        // The reserved parameter. This parameter is not supported.
        shared_ptr<bool> deleteWithInstance_ {};
        // Indicates whether to encrypt the cloud disk. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        shared_ptr<string> encrypted_ {};
        // The performance level of the ESSD. Valid values:
        // 
        // *   **PL0**: A single ESSD delivers up to 10,000 random read/write IOPS.
        // *   **PL1**: A single ESSD delivers up to 50,000 random read/write IOPS.
        // *   **PL2**: A single ESSD delivers up to 100,000 random read/write IOPS.
        // *   **PL3**: A single ESSD delivers up to 1,000,000 random read/write IOPS.
        shared_ptr<string> performanceLevel_ {};
        // The data disk size. Unit: GiB.
        shared_ptr<int32_t> size_ {};
      };

      virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->clusterId_ == nullptr && this->createMode_ == nullptr && this->dataDisk_ == nullptr && this->deploymentSetId_ == nullptr
        && this->description_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceName_ == nullptr
        && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->keyPairName_ == nullptr
        && this->nodePoolId_ == nullptr && this->nodePoolName_ == nullptr && this->password_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr && this->spotStrategy_ == nullptr
        && this->systemDisk_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
      inline NodePoolList& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline NodePoolList& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline NodePoolList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline NodePoolList& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // dataDisk Field Functions 
      bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
      void deleteDataDisk() { this->dataDisk_ = nullptr;};
      inline const vector<NodePoolList::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<NodePoolList::DataDisk>) };
      inline vector<NodePoolList::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<NodePoolList::DataDisk>) };
      inline NodePoolList& setDataDisk(const vector<NodePoolList::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
      inline NodePoolList& setDataDisk(vector<NodePoolList::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


      // deploymentSetId Field Functions 
      bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
      void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
      inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
      inline NodePoolList& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NodePoolList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline NodePoolList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline NodePoolList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline NodePoolList& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline NodePoolList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline NodePoolList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline NodePoolList& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // internetMaxBandwidthOut Field Functions 
      bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
      void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
      inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
      inline NodePoolList& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


      // ioOptimized Field Functions 
      bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
      void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
      inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
      inline NodePoolList& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline NodePoolList& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // nodePoolId Field Functions 
      bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
      void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
      inline string getNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
      inline NodePoolList& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


      // nodePoolName Field Functions 
      bool hasNodePoolName() const { return this->nodePoolName_ != nullptr;};
      void deleteNodePoolName() { this->nodePoolName_ = nullptr;};
      inline string getNodePoolName() const { DARABONBA_PTR_GET_DEFAULT(nodePoolName_, "") };
      inline NodePoolList& setNodePoolName(string nodePoolName) { DARABONBA_PTR_SET_VALUE(nodePoolName_, nodePoolName) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline NodePoolList& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline NodePoolList& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline NodePoolList& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline NodePoolList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline NodePoolList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityEnhancementStrategy Field Functions 
      bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
      void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
      inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
      inline NodePoolList& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline NodePoolList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline NodePoolList& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // systemDisk Field Functions 
      bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
      void deleteSystemDisk() { this->systemDisk_ = nullptr;};
      inline const NodePoolList::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, NodePoolList::SystemDisk) };
      inline NodePoolList::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, NodePoolList::SystemDisk) };
      inline NodePoolList& setSystemDisk(const NodePoolList::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
      inline NodePoolList& setSystemDisk(NodePoolList::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<NodePoolList::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<NodePoolList::Tag>) };
      inline vector<NodePoolList::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<NodePoolList::Tag>) };
      inline NodePoolList& setTag(const vector<NodePoolList::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline NodePoolList& setTag(vector<NodePoolList::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NodePoolList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline NodePoolList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Indicates whether to enable automatic payment. Valid values:
      // 
      // *   **true** (default): enables the feature. You must make sure that your account balance is sufficient.
      // *   **false**: disables the feature. An unpaid order is generated.
      shared_ptr<bool> autoPay_ {};
      // Indicates whether to enable auto-renewal for the instance. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> autoRenew_ {};
      // The ID of the container cluster in which the RDS Custom instance resides.
      shared_ptr<string> clusterId_ {};
      // Indicates whether to add the instance to the ACK cluster.
      shared_ptr<string> createMode_ {};
      // The data disks.
      shared_ptr<vector<NodePoolList::DataDisk>> dataDisk_ {};
      // The ID of the deployment set.
      shared_ptr<string> deploymentSetId_ {};
      // The instance description.
      shared_ptr<string> description_ {};
      // The instance hostname.
      shared_ptr<string> hostName_ {};
      // The ID of the image used by the instance.
      shared_ptr<string> imageId_ {};
      // The billing method. Valid value:
      // 
      // *   **Prepaid**: subscription
      // *   **Postpaid**: pay-as-you-go
      shared_ptr<string> instanceChargeType_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // The instance type.
      shared_ptr<string> instanceType_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> internetChargeType_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<int32_t> internetMaxBandwidthOut_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> ioOptimized_ {};
      // The key pair name.
      shared_ptr<string> keyPairName_ {};
      // The node pool ID.
      shared_ptr<string> nodePoolId_ {};
      // The name of the node pool.
      shared_ptr<string> nodePoolName_ {};
      // The password of the root user of the instance.
      shared_ptr<string> password_ {};
      // The subscription duration.
      shared_ptr<int32_t> period_ {};
      // The unit of the subscription period. Valid values:
      // 
      // *   **Year**
      // *   **Month** (default)
      shared_ptr<string> periodUnit_ {};
      // The region ID of the instance.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> securityEnhancementStrategy_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> spotStrategy_ {};
      // The specification of the system disk.
      shared_ptr<NodePoolList::SystemDisk> systemDisk_ {};
      // The tags.
      shared_ptr<vector<NodePoolList::Tag>> tag_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->nodePoolList_ == nullptr
        && this->requestId_ == nullptr; };
    // nodePoolList Field Functions 
    bool hasNodePoolList() const { return this->nodePoolList_ != nullptr;};
    void deleteNodePoolList() { this->nodePoolList_ = nullptr;};
    inline const vector<DescribeRCNodePoolResponseBody::NodePoolList> & getNodePoolList() const { DARABONBA_PTR_GET_CONST(nodePoolList_, vector<DescribeRCNodePoolResponseBody::NodePoolList>) };
    inline vector<DescribeRCNodePoolResponseBody::NodePoolList> getNodePoolList() { DARABONBA_PTR_GET(nodePoolList_, vector<DescribeRCNodePoolResponseBody::NodePoolList>) };
    inline DescribeRCNodePoolResponseBody& setNodePoolList(const vector<DescribeRCNodePoolResponseBody::NodePoolList> & nodePoolList) { DARABONBA_PTR_SET_VALUE(nodePoolList_, nodePoolList) };
    inline DescribeRCNodePoolResponseBody& setNodePoolList(vector<DescribeRCNodePoolResponseBody::NodePoolList> && nodePoolList) { DARABONBA_PTR_SET_RVALUE(nodePoolList_, nodePoolList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCNodePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The node pool information.
    shared_ptr<vector<DescribeRCNodePoolResponseBody::NodePoolList>> nodePoolList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
