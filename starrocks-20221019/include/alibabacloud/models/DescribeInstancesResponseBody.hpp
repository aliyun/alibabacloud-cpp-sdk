// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(Architecture, architecture_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EnableAutoMinorVersionUpgrade, enableAutoMinorVersionUpgrade_);
        DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_TO_JSON(EnabledAuditLoader, enabledAuditLoader_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(IsolateLeader, isolateLeader_);
        DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_TO_JSON(MaintainablePeriod, maintainablePeriod_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_TO_JSON(SecurityGroupManaged, securityGroupManaged_);
        DARABONBA_PTR_TO_JSON(SgId, sgId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EnableAutoMinorVersionUpgrade, enableAutoMinorVersionUpgrade_);
        DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_FROM_JSON(EnabledAuditLoader, enabledAuditLoader_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(IsolateLeader, isolateLeader_);
        DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_FROM_JSON(MaintainablePeriod, maintainablePeriod_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupManaged, securityGroupManaged_);
        DARABONBA_PTR_FROM_JSON(SgId, sgId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitches : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
          DARABONBA_PTR_TO_JSON(Primary, primary_);
          DARABONBA_PTR_TO_JSON(VswId, vswId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
          DARABONBA_PTR_FROM_JSON(VswId, vswId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VSwitches() = default ;
        VSwitches(const VSwitches &) = default ;
        VSwitches(VSwitches &&) = default ;
        VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitches() = default ;
        VSwitches& operator=(const VSwitches &) = default ;
        VSwitches& operator=(VSwitches &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->primary_ == nullptr
        && this->vswId_ == nullptr && this->zoneId_ == nullptr; };
        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
        inline VSwitches& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


        // vswId Field Functions 
        bool hasVswId() const { return this->vswId_ != nullptr;};
        void deleteVswId() { this->vswId_ = nullptr;};
        inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
        inline VSwitches& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<bool> primary_ {};
        shared_ptr<string> vswId_ {};
        shared_ptr<string> zoneId_ {};
      };

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

      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->architecture_ == nullptr && this->beginTime_ == nullptr && this->enableAutoMinorVersionUpgrade_ == nullptr && this->enableSSL_ == nullptr && this->enabledAuditLoader_ == nullptr
        && this->encrypted_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr
        && this->isolateLeader_ == nullptr && this->kmsKeyId_ == nullptr && this->maintainablePeriod_ == nullptr && this->minorVersion_ == nullptr && this->monitorType_ == nullptr
        && this->ossLocation_ == nullptr && this->packageType_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->runMode_ == nullptr && this->runningTime_ == nullptr && this->securityGroupManaged_ == nullptr && this->sgId_ == nullptr && this->tags_ == nullptr
        && this->vSwitches_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline Data& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // architecture Field Functions 
      bool hasArchitecture() const { return this->architecture_ != nullptr;};
      void deleteArchitecture() { this->architecture_ = nullptr;};
      inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
      inline Data& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // enableAutoMinorVersionUpgrade Field Functions 
      bool hasEnableAutoMinorVersionUpgrade() const { return this->enableAutoMinorVersionUpgrade_ != nullptr;};
      void deleteEnableAutoMinorVersionUpgrade() { this->enableAutoMinorVersionUpgrade_ = nullptr;};
      inline bool getEnableAutoMinorVersionUpgrade() const { DARABONBA_PTR_GET_DEFAULT(enableAutoMinorVersionUpgrade_, false) };
      inline Data& setEnableAutoMinorVersionUpgrade(bool enableAutoMinorVersionUpgrade) { DARABONBA_PTR_SET_VALUE(enableAutoMinorVersionUpgrade_, enableAutoMinorVersionUpgrade) };


      // enableSSL Field Functions 
      bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
      void deleteEnableSSL() { this->enableSSL_ = nullptr;};
      inline bool getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
      inline Data& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


      // enabledAuditLoader Field Functions 
      bool hasEnabledAuditLoader() const { return this->enabledAuditLoader_ != nullptr;};
      void deleteEnabledAuditLoader() { this->enabledAuditLoader_ = nullptr;};
      inline bool getEnabledAuditLoader() const { DARABONBA_PTR_GET_DEFAULT(enabledAuditLoader_, false) };
      inline Data& setEnabledAuditLoader(bool enabledAuditLoader) { DARABONBA_PTR_SET_VALUE(enabledAuditLoader_, enabledAuditLoader) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
      inline Data& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Data& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // isolateLeader Field Functions 
      bool hasIsolateLeader() const { return this->isolateLeader_ != nullptr;};
      void deleteIsolateLeader() { this->isolateLeader_ = nullptr;};
      inline bool getIsolateLeader() const { DARABONBA_PTR_GET_DEFAULT(isolateLeader_, false) };
      inline Data& setIsolateLeader(bool isolateLeader) { DARABONBA_PTR_SET_VALUE(isolateLeader_, isolateLeader) };


      // kmsKeyId Field Functions 
      bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
      void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
      inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
      inline Data& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


      // maintainablePeriod Field Functions 
      bool hasMaintainablePeriod() const { return this->maintainablePeriod_ != nullptr;};
      void deleteMaintainablePeriod() { this->maintainablePeriod_ = nullptr;};
      inline string getMaintainablePeriod() const { DARABONBA_PTR_GET_DEFAULT(maintainablePeriod_, "") };
      inline Data& setMaintainablePeriod(string maintainablePeriod) { DARABONBA_PTR_SET_VALUE(maintainablePeriod_, maintainablePeriod) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline Data& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // monitorType Field Functions 
      bool hasMonitorType() const { return this->monitorType_ != nullptr;};
      void deleteMonitorType() { this->monitorType_ = nullptr;};
      inline string getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
      inline Data& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


      // ossLocation Field Functions 
      bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
      void deleteOssLocation() { this->ossLocation_ = nullptr;};
      inline string getOssLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
      inline Data& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Data& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // runMode Field Functions 
      bool hasRunMode() const { return this->runMode_ != nullptr;};
      void deleteRunMode() { this->runMode_ = nullptr;};
      inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
      inline Data& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      // runningTime Field Functions 
      bool hasRunningTime() const { return this->runningTime_ != nullptr;};
      void deleteRunningTime() { this->runningTime_ = nullptr;};
      inline int64_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
      inline Data& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


      // securityGroupManaged Field Functions 
      bool hasSecurityGroupManaged() const { return this->securityGroupManaged_ != nullptr;};
      void deleteSecurityGroupManaged() { this->securityGroupManaged_ = nullptr;};
      inline bool getSecurityGroupManaged() const { DARABONBA_PTR_GET_DEFAULT(securityGroupManaged_, false) };
      inline Data& setSecurityGroupManaged(bool securityGroupManaged) { DARABONBA_PTR_SET_VALUE(securityGroupManaged_, securityGroupManaged) };


      // sgId Field Functions 
      bool hasSgId() const { return this->sgId_ != nullptr;};
      void deleteSgId() { this->sgId_ = nullptr;};
      inline string getSgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
      inline Data& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vSwitches Field Functions 
      bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
      void deleteVSwitches() { this->vSwitches_ = nullptr;};
      inline const vector<Data::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Data::VSwitches>) };
      inline vector<Data::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Data::VSwitches>) };
      inline Data& setVSwitches(const vector<Data::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
      inline Data& setVSwitches(vector<Data::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> aclId_ {};
      shared_ptr<string> architecture_ {};
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<bool> enableAutoMinorVersionUpgrade_ {};
      shared_ptr<bool> enableSSL_ {};
      shared_ptr<bool> enabledAuditLoader_ {};
      shared_ptr<bool> encrypted_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> instanceStatus_ {};
      shared_ptr<bool> isolateLeader_ {};
      shared_ptr<string> kmsKeyId_ {};
      shared_ptr<string> maintainablePeriod_ {};
      shared_ptr<string> minorVersion_ {};
      shared_ptr<string> monitorType_ {};
      shared_ptr<string> ossLocation_ {};
      shared_ptr<string> packageType_ {};
      shared_ptr<string> payType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> runMode_ {};
      shared_ptr<int64_t> runningTime_ {};
      shared_ptr<bool> securityGroupManaged_ {};
      shared_ptr<string> sgId_ {};
      shared_ptr<vector<Data::Tags>> tags_ {};
      shared_ptr<vector<Data::VSwitches>> vSwitches_ {};
      shared_ptr<string> version_ {};
      // VPC ID。
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeInstancesResponseBody::Data>) };
    inline vector<DescribeInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeInstancesResponseBody::Data>) };
    inline DescribeInstancesResponseBody& setData(const vector<DescribeInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInstancesResponseBody& setData(vector<DescribeInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeInstancesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeInstancesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeInstancesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<DescribeInstancesResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
