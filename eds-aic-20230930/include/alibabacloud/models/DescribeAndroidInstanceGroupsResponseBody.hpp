// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupModel, instanceGroupModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupModel, instanceGroupModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAndroidInstanceGroupsResponseBody() = default ;
    DescribeAndroidInstanceGroupsResponseBody(const DescribeAndroidInstanceGroupsResponseBody &) = default ;
    DescribeAndroidInstanceGroupsResponseBody(DescribeAndroidInstanceGroupsResponseBody &&) = default ;
    DescribeAndroidInstanceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsResponseBody() = default ;
    DescribeAndroidInstanceGroupsResponseBody& operator=(const DescribeAndroidInstanceGroupsResponseBody &) = default ;
    DescribeAndroidInstanceGroupsResponseBody& operator=(DescribeAndroidInstanceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceGroupModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceGroupModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_TO_JSON(AvailableInstanceAmount, availableInstanceAmount_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
        DARABONBA_PTR_TO_JSON(BindQosRules, bindQosRules_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Disks, disks_);
        DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_TO_JSON(InstalledAppList, installedAppList_);
        DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
        DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
        DARABONBA_PTR_TO_JSON(InstanceGroupSpec, instanceGroupSpec_);
        DARABONBA_PTR_TO_JSON(InstanceGroupSpecDescribe, instanceGroupSpecDescribe_);
        DARABONBA_PTR_TO_JSON(InstanceGroupStatus, instanceGroupStatus_);
        DARABONBA_PTR_TO_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(NumberOfInstances, numberOfInstances_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RenderingType, renderingType_);
        DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
        DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
        DARABONBA_PTR_TO_JSON(SystemVersion, systemVersion_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceGroupModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_FROM_JSON(AvailableInstanceAmount, availableInstanceAmount_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
        DARABONBA_PTR_FROM_JSON(BindQosRules, bindQosRules_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
        DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
        DARABONBA_PTR_FROM_JSON(InstalledAppList, installedAppList_);
        DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
        DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
        DARABONBA_PTR_FROM_JSON(InstanceGroupSpec, instanceGroupSpec_);
        DARABONBA_PTR_FROM_JSON(InstanceGroupSpecDescribe, instanceGroupSpecDescribe_);
        DARABONBA_PTR_FROM_JSON(InstanceGroupStatus, instanceGroupStatus_);
        DARABONBA_PTR_FROM_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(NumberOfInstances, numberOfInstances_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RenderingType, renderingType_);
        DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
        DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
        DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
        DARABONBA_PTR_FROM_JSON(SystemVersion, systemVersion_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      InstanceGroupModel() = default ;
      InstanceGroupModel(const InstanceGroupModel &) = default ;
      InstanceGroupModel(InstanceGroupModel &&) = default ;
      InstanceGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceGroupModel() = default ;
      InstanceGroupModel& operator=(const InstanceGroupModel &) = default ;
      InstanceGroupModel& operator=(InstanceGroupModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class Disks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disks& obj) { 
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        };
        friend void from_json(const Darabonba::Json& j, Disks& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        };
        Disks() = default ;
        Disks(const Disks &) = default ;
        Disks(Disks &&) = default ;
        Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disks() = default ;
        Disks& operator=(const Disks &) = default ;
        Disks& operator=(Disks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskSize_ == nullptr
        && this->diskType_ == nullptr; };
        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline Disks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline Disks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      protected:
        // The size of the disk. Unit: GB.
        shared_ptr<int32_t> diskSize_ {};
        // The type of the disk.
        shared_ptr<string> diskType_ {};
      };

      class BindQosRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindQosRules& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceQosRule, instanceQosRule_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, BindQosRules& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceQosRule, instanceQosRule_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        };
        BindQosRules() = default ;
        BindQosRules(const BindQosRules &) = default ;
        BindQosRules(BindQosRules &&) = default ;
        BindQosRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindQosRules() = default ;
        BindQosRules& operator=(const BindQosRules &) = default ;
        BindQosRules& operator=(BindQosRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceQosRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceQosRule& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceQosRule& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
          };
          InstanceQosRule() = default ;
          InstanceQosRule(const InstanceQosRule &) = default ;
          InstanceQosRule(InstanceQosRule &&) = default ;
          InstanceQosRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceQosRule() = default ;
          InstanceQosRule& operator=(const InstanceQosRule &) = default ;
          InstanceQosRule& operator=(InstanceQosRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->qosRuleId_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline InstanceQosRule& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // qosRuleId Field Functions 
          bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
          void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
          inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
          inline InstanceQosRule& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


        protected:
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> qosRuleId_ {};
        };

        virtual bool empty() const override { return this->instanceQosRule_ == nullptr
        && this->totalCount_ == nullptr; };
        // instanceQosRule Field Functions 
        bool hasInstanceQosRule() const { return this->instanceQosRule_ != nullptr;};
        void deleteInstanceQosRule() { this->instanceQosRule_ = nullptr;};
        inline const vector<BindQosRules::InstanceQosRule> & getInstanceQosRule() const { DARABONBA_PTR_GET_CONST(instanceQosRule_, vector<BindQosRules::InstanceQosRule>) };
        inline vector<BindQosRules::InstanceQosRule> getInstanceQosRule() { DARABONBA_PTR_GET(instanceQosRule_, vector<BindQosRules::InstanceQosRule>) };
        inline BindQosRules& setInstanceQosRule(const vector<BindQosRules::InstanceQosRule> & instanceQosRule) { DARABONBA_PTR_SET_VALUE(instanceQosRule_, instanceQosRule) };
        inline BindQosRules& setInstanceQosRule(vector<BindQosRules::InstanceQosRule> && instanceQosRule) { DARABONBA_PTR_SET_RVALUE(instanceQosRule_, instanceQosRule) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline BindQosRules& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<vector<BindQosRules::InstanceQosRule>> instanceQosRule_ {};
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->architectureType_ == nullptr && this->availableInstanceAmount_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthPackageStatus_ == nullptr && this->bandwidthPackageType_ == nullptr
        && this->bindQosRules_ == nullptr && this->chargeType_ == nullptr && this->cpu_ == nullptr && this->disks_ == nullptr && this->enableIpv6_ == nullptr
        && this->errorCode_ == nullptr && this->gmtCreate_ == nullptr && this->gmtExpired_ == nullptr && this->gmtModified_ == nullptr && this->imageId_ == nullptr
        && this->imageVersion_ == nullptr && this->installedAppList_ == nullptr && this->instanceGroupId_ == nullptr && this->instanceGroupName_ == nullptr && this->instanceGroupSpec_ == nullptr
        && this->instanceGroupSpecDescribe_ == nullptr && this->instanceGroupStatus_ == nullptr && this->ipv6Bandwidth_ == nullptr && this->memory_ == nullptr && this->networkType_ == nullptr
        && this->numberOfInstances_ == nullptr && this->officeSiteId_ == nullptr && this->policyGroupId_ == nullptr && this->regionId_ == nullptr && this->renderingType_ == nullptr
        && this->resolutionHeight_ == nullptr && this->resolutionWidth_ == nullptr && this->saleMode_ == nullptr && this->systemVersion_ == nullptr && this->tags_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline InstanceGroupModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // architectureType Field Functions 
      bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
      void deleteArchitectureType() { this->architectureType_ = nullptr;};
      inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
      inline InstanceGroupModel& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


      // availableInstanceAmount Field Functions 
      bool hasAvailableInstanceAmount() const { return this->availableInstanceAmount_ != nullptr;};
      void deleteAvailableInstanceAmount() { this->availableInstanceAmount_ = nullptr;};
      inline int32_t getAvailableInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceAmount_, 0) };
      inline InstanceGroupModel& setAvailableInstanceAmount(int32_t availableInstanceAmount) { DARABONBA_PTR_SET_VALUE(availableInstanceAmount_, availableInstanceAmount) };


      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline InstanceGroupModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // bandwidthPackageStatus Field Functions 
      bool hasBandwidthPackageStatus() const { return this->bandwidthPackageStatus_ != nullptr;};
      void deleteBandwidthPackageStatus() { this->bandwidthPackageStatus_ = nullptr;};
      inline string getBandwidthPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageStatus_, "") };
      inline InstanceGroupModel& setBandwidthPackageStatus(string bandwidthPackageStatus) { DARABONBA_PTR_SET_VALUE(bandwidthPackageStatus_, bandwidthPackageStatus) };


      // bandwidthPackageType Field Functions 
      bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
      void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
      inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
      inline InstanceGroupModel& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


      // bindQosRules Field Functions 
      bool hasBindQosRules() const { return this->bindQosRules_ != nullptr;};
      void deleteBindQosRules() { this->bindQosRules_ = nullptr;};
      inline const InstanceGroupModel::BindQosRules & getBindQosRules() const { DARABONBA_PTR_GET_CONST(bindQosRules_, InstanceGroupModel::BindQosRules) };
      inline InstanceGroupModel::BindQosRules getBindQosRules() { DARABONBA_PTR_GET(bindQosRules_, InstanceGroupModel::BindQosRules) };
      inline InstanceGroupModel& setBindQosRules(const InstanceGroupModel::BindQosRules & bindQosRules) { DARABONBA_PTR_SET_VALUE(bindQosRules_, bindQosRules) };
      inline InstanceGroupModel& setBindQosRules(InstanceGroupModel::BindQosRules && bindQosRules) { DARABONBA_PTR_SET_RVALUE(bindQosRules_, bindQosRules) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline InstanceGroupModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline InstanceGroupModel& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<InstanceGroupModel::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<InstanceGroupModel::Disks>) };
      inline vector<InstanceGroupModel::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<InstanceGroupModel::Disks>) };
      inline InstanceGroupModel& setDisks(const vector<InstanceGroupModel::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline InstanceGroupModel& setDisks(vector<InstanceGroupModel::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


      // enableIpv6 Field Functions 
      bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
      void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
      inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
      inline InstanceGroupModel& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InstanceGroupModel& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline InstanceGroupModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtExpired Field Functions 
      bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
      void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
      inline string getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
      inline InstanceGroupModel& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline InstanceGroupModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline InstanceGroupModel& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageVersion Field Functions 
      bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
      void deleteImageVersion() { this->imageVersion_ = nullptr;};
      inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
      inline InstanceGroupModel& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


      // installedAppList Field Functions 
      bool hasInstalledAppList() const { return this->installedAppList_ != nullptr;};
      void deleteInstalledAppList() { this->installedAppList_ = nullptr;};
      inline string getInstalledAppList() const { DARABONBA_PTR_GET_DEFAULT(installedAppList_, "") };
      inline InstanceGroupModel& setInstalledAppList(string installedAppList) { DARABONBA_PTR_SET_VALUE(installedAppList_, installedAppList) };


      // instanceGroupId Field Functions 
      bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
      void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
      inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
      inline InstanceGroupModel& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


      // instanceGroupName Field Functions 
      bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
      void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
      inline string getInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
      inline InstanceGroupModel& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


      // instanceGroupSpec Field Functions 
      bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
      void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
      inline string getInstanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
      inline InstanceGroupModel& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


      // instanceGroupSpecDescribe Field Functions 
      bool hasInstanceGroupSpecDescribe() const { return this->instanceGroupSpecDescribe_ != nullptr;};
      void deleteInstanceGroupSpecDescribe() { this->instanceGroupSpecDescribe_ = nullptr;};
      inline string getInstanceGroupSpecDescribe() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpecDescribe_, "") };
      inline InstanceGroupModel& setInstanceGroupSpecDescribe(string instanceGroupSpecDescribe) { DARABONBA_PTR_SET_VALUE(instanceGroupSpecDescribe_, instanceGroupSpecDescribe) };


      // instanceGroupStatus Field Functions 
      bool hasInstanceGroupStatus() const { return this->instanceGroupStatus_ != nullptr;};
      void deleteInstanceGroupStatus() { this->instanceGroupStatus_ = nullptr;};
      inline string getInstanceGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupStatus_, "") };
      inline InstanceGroupModel& setInstanceGroupStatus(string instanceGroupStatus) { DARABONBA_PTR_SET_VALUE(instanceGroupStatus_, instanceGroupStatus) };


      // ipv6Bandwidth Field Functions 
      bool hasIpv6Bandwidth() const { return this->ipv6Bandwidth_ != nullptr;};
      void deleteIpv6Bandwidth() { this->ipv6Bandwidth_ = nullptr;};
      inline int32_t getIpv6Bandwidth() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bandwidth_, 0) };
      inline InstanceGroupModel& setIpv6Bandwidth(int32_t ipv6Bandwidth) { DARABONBA_PTR_SET_VALUE(ipv6Bandwidth_, ipv6Bandwidth) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline InstanceGroupModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline InstanceGroupModel& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // numberOfInstances Field Functions 
      bool hasNumberOfInstances() const { return this->numberOfInstances_ != nullptr;};
      void deleteNumberOfInstances() { this->numberOfInstances_ = nullptr;};
      inline string getNumberOfInstances() const { DARABONBA_PTR_GET_DEFAULT(numberOfInstances_, "") };
      inline InstanceGroupModel& setNumberOfInstances(string numberOfInstances) { DARABONBA_PTR_SET_VALUE(numberOfInstances_, numberOfInstances) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline InstanceGroupModel& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline InstanceGroupModel& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceGroupModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // renderingType Field Functions 
      bool hasRenderingType() const { return this->renderingType_ != nullptr;};
      void deleteRenderingType() { this->renderingType_ = nullptr;};
      inline string getRenderingType() const { DARABONBA_PTR_GET_DEFAULT(renderingType_, "") };
      inline InstanceGroupModel& setRenderingType(string renderingType) { DARABONBA_PTR_SET_VALUE(renderingType_, renderingType) };


      // resolutionHeight Field Functions 
      bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
      void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
      inline int32_t getResolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
      inline InstanceGroupModel& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


      // resolutionWidth Field Functions 
      bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
      void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
      inline int32_t getResolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
      inline InstanceGroupModel& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


      // saleMode Field Functions 
      bool hasSaleMode() const { return this->saleMode_ != nullptr;};
      void deleteSaleMode() { this->saleMode_ = nullptr;};
      inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
      inline InstanceGroupModel& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


      // systemVersion Field Functions 
      bool hasSystemVersion() const { return this->systemVersion_ != nullptr;};
      void deleteSystemVersion() { this->systemVersion_ = nullptr;};
      inline string getSystemVersion() const { DARABONBA_PTR_GET_DEFAULT(systemVersion_, "") };
      inline InstanceGroupModel& setSystemVersion(string systemVersion) { DARABONBA_PTR_SET_VALUE(systemVersion_, systemVersion) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<InstanceGroupModel::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InstanceGroupModel::Tags>) };
      inline vector<InstanceGroupModel::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InstanceGroupModel::Tags>) };
      inline InstanceGroupModel& setTags(const vector<InstanceGroupModel::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline InstanceGroupModel& setTags(vector<InstanceGroupModel::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline InstanceGroupModel& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline InstanceGroupModel& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The type of the architecture.
      shared_ptr<string> architectureType_ {};
      // The number of available instances.
      // 
      // >  Available instances are those not in the Deleting or Deleted state.
      shared_ptr<int32_t> availableInstanceAmount_ {};
      shared_ptr<string> bandwidthPackageId_ {};
      shared_ptr<string> bandwidthPackageStatus_ {};
      shared_ptr<string> bandwidthPackageType_ {};
      shared_ptr<InstanceGroupModel::BindQosRules> bindQosRules_ {};
      // The billing method.
      shared_ptr<string> chargeType_ {};
      // The number of vCPUs.
      shared_ptr<string> cpu_ {};
      // The disks.
      shared_ptr<vector<InstanceGroupModel::Disks>> disks_ {};
      shared_ptr<bool> enableIpv6_ {};
      // The cause of the creation failure.
      shared_ptr<string> errorCode_ {};
      // The time when the instance group was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the subscription instance group expires.
      shared_ptr<string> gmtExpired_ {};
      // The time when the instance group was updated.
      shared_ptr<string> gmtModified_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      shared_ptr<string> imageVersion_ {};
      // The list of installed applications.
      shared_ptr<string> installedAppList_ {};
      // The ID of the instance group.
      shared_ptr<string> instanceGroupId_ {};
      // The name of the instance group.
      shared_ptr<string> instanceGroupName_ {};
      // The specifications of the instance group.
      shared_ptr<string> instanceGroupSpec_ {};
      // The description of the instance group specifications.
      shared_ptr<string> instanceGroupSpecDescribe_ {};
      // The status of the instance group.
      shared_ptr<string> instanceGroupStatus_ {};
      shared_ptr<int32_t> ipv6Bandwidth_ {};
      // The memory size.
      shared_ptr<int32_t> memory_ {};
      shared_ptr<string> networkType_ {};
      // The number of instances in the instance group.
      shared_ptr<string> numberOfInstances_ {};
      // The ID of the network.
      shared_ptr<string> officeSiteId_ {};
      // The ID of the policy.
      shared_ptr<string> policyGroupId_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
      // The rendering mode of the instance group.
      // 
      // Valid values:
      // 
      // *   GPURemote: GPU remote rendering.
      // *   CPU: CPU rendering.
      // *   GPUocal: GPU local rendering.
      shared_ptr<string> renderingType_ {};
      // The height of the resolution.
      shared_ptr<int32_t> resolutionHeight_ {};
      // The width of the resolution.
      shared_ptr<int32_t> resolutionWidth_ {};
      // The sales mode.
      shared_ptr<string> saleMode_ {};
      // The version of the operating system.
      shared_ptr<string> systemVersion_ {};
      shared_ptr<vector<InstanceGroupModel::Tags>> tags_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instanceGroupModel_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceGroupModel Field Functions 
    bool hasInstanceGroupModel() const { return this->instanceGroupModel_ != nullptr;};
    void deleteInstanceGroupModel() { this->instanceGroupModel_ = nullptr;};
    inline const vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel> & getInstanceGroupModel() const { DARABONBA_PTR_GET_CONST(instanceGroupModel_, vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel>) };
    inline vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel> getInstanceGroupModel() { DARABONBA_PTR_GET(instanceGroupModel_, vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel>) };
    inline DescribeAndroidInstanceGroupsResponseBody& setInstanceGroupModel(const vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel> & instanceGroupModel) { DARABONBA_PTR_SET_VALUE(instanceGroupModel_, instanceGroupModel) };
    inline DescribeAndroidInstanceGroupsResponseBody& setInstanceGroupModel(vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel> && instanceGroupModel) { DARABONBA_PTR_SET_RVALUE(instanceGroupModel_, instanceGroupModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstanceGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance group.
    shared_ptr<vector<DescribeAndroidInstanceGroupsResponseBody::InstanceGroupModel>> instanceGroupModel_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
