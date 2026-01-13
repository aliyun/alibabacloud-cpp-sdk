// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODY_HPP_
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
  class DescribeDBInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody(DescribeDBInstancesResponseBody &&) = default ;
    DescribeDBInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBody() = default ;
    DescribeDBInstancesResponseBody& operator=(const DescribeDBInstancesResponseBody &) = default ;
    DescribeDBInstancesResponseBody& operator=(DescribeDBInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstance& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_TO_JSON(BlueGreenDeploymentName, blueGreenDeploymentName_);
          DARABONBA_PTR_TO_JSON(BlueInstanceName, blueInstanceName_);
          DARABONBA_PTR_TO_JSON(BpeEnabled, bpeEnabled_);
          DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ColdDataEnabled, coldDataEnabled_);
          DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceCPU, DBInstanceCPU_);
          DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceMemory, DBInstanceMemory_);
          DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostGroupName, dedicatedHostGroupName_);
          DARABONBA_PTR_TO_JSON(DedicatedHostIdForLog, dedicatedHostIdForLog_);
          DARABONBA_PTR_TO_JSON(DedicatedHostIdForMaster, dedicatedHostIdForMaster_);
          DARABONBA_PTR_TO_JSON(DedicatedHostIdForSlave, dedicatedHostIdForSlave_);
          DARABONBA_PTR_TO_JSON(DedicatedHostNameForLog, dedicatedHostNameForLog_);
          DARABONBA_PTR_TO_JSON(DedicatedHostNameForMaster, dedicatedHostNameForMaster_);
          DARABONBA_PTR_TO_JSON(DedicatedHostNameForSlave, dedicatedHostNameForSlave_);
          DARABONBA_PTR_TO_JSON(DedicatedHostZoneIdForLog, dedicatedHostZoneIdForLog_);
          DARABONBA_PTR_TO_JSON(DedicatedHostZoneIdForMaster, dedicatedHostZoneIdForMaster_);
          DARABONBA_PTR_TO_JSON(DedicatedHostZoneIdForSlave, dedicatedHostZoneIdForSlave_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(GeneralGroupName, generalGroupName_);
          DARABONBA_PTR_TO_JSON(GreenInstanceName, greenInstanceName_);
          DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
          DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_TO_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
          DARABONBA_PTR_TO_JSON(IsAnalyticIns, isAnalyticIns_);
          DARABONBA_PTR_TO_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_TO_JSON(MutriORsignle, mutriORsignle_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SwitchWeight, switchWeight_);
          DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
          DARABONBA_PTR_TO_JSON(Tips, tips_);
          DARABONBA_PTR_TO_JSON(TipsLevel, tipsLevel_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_FROM_JSON(BlueGreenDeploymentName, blueGreenDeploymentName_);
          DARABONBA_PTR_FROM_JSON(BlueInstanceName, blueInstanceName_);
          DARABONBA_PTR_FROM_JSON(BpeEnabled, bpeEnabled_);
          DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ColdDataEnabled, coldDataEnabled_);
          DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceCPU, DBInstanceCPU_);
          DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceMemory, DBInstanceMemory_);
          DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostGroupName, dedicatedHostGroupName_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostIdForLog, dedicatedHostIdForLog_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostIdForMaster, dedicatedHostIdForMaster_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostIdForSlave, dedicatedHostIdForSlave_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostNameForLog, dedicatedHostNameForLog_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostNameForMaster, dedicatedHostNameForMaster_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostNameForSlave, dedicatedHostNameForSlave_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostZoneIdForLog, dedicatedHostZoneIdForLog_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostZoneIdForMaster, dedicatedHostZoneIdForMaster_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostZoneIdForSlave, dedicatedHostZoneIdForSlave_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(GeneralGroupName, generalGroupName_);
          DARABONBA_PTR_FROM_JSON(GreenInstanceName, greenInstanceName_);
          DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_FROM_JSON(IoAccelerationEnabled, ioAccelerationEnabled_);
          DARABONBA_PTR_FROM_JSON(IsAnalyticIns, isAnalyticIns_);
          DARABONBA_PTR_FROM_JSON(IsAnalyticReadOnlyIns, isAnalyticReadOnlyIns_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_FROM_JSON(MutriORsignle, mutriORsignle_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SwitchWeight, switchWeight_);
          DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(Tips, tips_);
          DARABONBA_PTR_FROM_JSON(TipsLevel, tipsLevel_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBInstance() = default ;
        DBInstance(const DBInstance &) = default ;
        DBInstance(DBInstance &&) = default ;
        DBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstance() = default ;
        DBInstance& operator=(const DBInstance &) = default ;
        DBInstance& operator=(DBInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReadOnlyDBInstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadOnlyDBInstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, ReadOnlyDBInstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
          };
          ReadOnlyDBInstanceIds() = default ;
          ReadOnlyDBInstanceIds(const ReadOnlyDBInstanceIds &) = default ;
          ReadOnlyDBInstanceIds(ReadOnlyDBInstanceIds &&) = default ;
          ReadOnlyDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadOnlyDBInstanceIds() = default ;
          ReadOnlyDBInstanceIds& operator=(const ReadOnlyDBInstanceIds &) = default ;
          ReadOnlyDBInstanceIds& operator=(ReadOnlyDBInstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReadOnlyDBInstanceId : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReadOnlyDBInstanceId& obj) { 
              DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
            };
            friend void from_json(const Darabonba::Json& j, ReadOnlyDBInstanceId& obj) { 
              DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
            };
            ReadOnlyDBInstanceId() = default ;
            ReadOnlyDBInstanceId(const ReadOnlyDBInstanceId &) = default ;
            ReadOnlyDBInstanceId(ReadOnlyDBInstanceId &&) = default ;
            ReadOnlyDBInstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReadOnlyDBInstanceId() = default ;
            ReadOnlyDBInstanceId& operator=(const ReadOnlyDBInstanceId &) = default ;
            ReadOnlyDBInstanceId& operator=(ReadOnlyDBInstanceId &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
            // DBInstanceId Field Functions 
            bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
            void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
            inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
            inline ReadOnlyDBInstanceId& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


          protected:
            // The read-only instance ID.
            shared_ptr<string> DBInstanceId_ {};
          };

          virtual bool empty() const override { return this->readOnlyDBInstanceId_ == nullptr; };
          // readOnlyDBInstanceId Field Functions 
          bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
          void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
          inline const vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> & getReadOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId>) };
          inline vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> getReadOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId>) };
          inline ReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(const vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
          inline ReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


        protected:
          shared_ptr<vector<ReadOnlyDBInstanceIds::ReadOnlyDBInstanceId>> readOnlyDBInstanceId_ {};
        };

        virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->blueGreenDeploymentName_ == nullptr && this->blueInstanceName_ == nullptr && this->bpeEnabled_ == nullptr && this->burstingEnabled_ == nullptr && this->category_ == nullptr
        && this->coldDataEnabled_ == nullptr && this->connectionMode_ == nullptr && this->connectionString_ == nullptr && this->createTime_ == nullptr && this->DBInstanceCPU_ == nullptr
        && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceMemory_ == nullptr && this->DBInstanceNetType_ == nullptr
        && this->DBInstanceStatus_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->DBInstanceType_ == nullptr && this->dedicatedHostGroupId_ == nullptr && this->dedicatedHostGroupName_ == nullptr
        && this->dedicatedHostIdForLog_ == nullptr && this->dedicatedHostIdForMaster_ == nullptr && this->dedicatedHostIdForSlave_ == nullptr && this->dedicatedHostNameForLog_ == nullptr && this->dedicatedHostNameForMaster_ == nullptr
        && this->dedicatedHostNameForSlave_ == nullptr && this->dedicatedHostZoneIdForLog_ == nullptr && this->dedicatedHostZoneIdForMaster_ == nullptr && this->dedicatedHostZoneIdForSlave_ == nullptr && this->deletionProtection_ == nullptr
        && this->destroyTime_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->generalGroupName_ == nullptr
        && this->greenInstanceName_ == nullptr && this->guardDBInstanceId_ == nullptr && this->instanceNetworkType_ == nullptr && this->ioAccelerationEnabled_ == nullptr && this->isAnalyticIns_ == nullptr
        && this->isAnalyticReadOnlyIns_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->masterInstanceId_ == nullptr && this->mutriORsignle_ == nullptr
        && this->payType_ == nullptr && this->readOnlyDBInstanceIds_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->switchWeight_ == nullptr
        && this->tempDBInstanceId_ == nullptr && this->tips_ == nullptr && this->tipsLevel_ == nullptr && this->vSwitchId_ == nullptr && this->vpcCloudInstanceId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr && this->zoneId_ == nullptr; };
        // autoRenewal Field Functions 
        bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
        void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
        inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
        inline DBInstance& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


        // blueGreenDeploymentName Field Functions 
        bool hasBlueGreenDeploymentName() const { return this->blueGreenDeploymentName_ != nullptr;};
        void deleteBlueGreenDeploymentName() { this->blueGreenDeploymentName_ = nullptr;};
        inline string getBlueGreenDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(blueGreenDeploymentName_, "") };
        inline DBInstance& setBlueGreenDeploymentName(string blueGreenDeploymentName) { DARABONBA_PTR_SET_VALUE(blueGreenDeploymentName_, blueGreenDeploymentName) };


        // blueInstanceName Field Functions 
        bool hasBlueInstanceName() const { return this->blueInstanceName_ != nullptr;};
        void deleteBlueInstanceName() { this->blueInstanceName_ = nullptr;};
        inline string getBlueInstanceName() const { DARABONBA_PTR_GET_DEFAULT(blueInstanceName_, "") };
        inline DBInstance& setBlueInstanceName(string blueInstanceName) { DARABONBA_PTR_SET_VALUE(blueInstanceName_, blueInstanceName) };


        // bpeEnabled Field Functions 
        bool hasBpeEnabled() const { return this->bpeEnabled_ != nullptr;};
        void deleteBpeEnabled() { this->bpeEnabled_ = nullptr;};
        inline string getBpeEnabled() const { DARABONBA_PTR_GET_DEFAULT(bpeEnabled_, "") };
        inline DBInstance& setBpeEnabled(string bpeEnabled) { DARABONBA_PTR_SET_VALUE(bpeEnabled_, bpeEnabled) };


        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline DBInstance& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBInstance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // coldDataEnabled Field Functions 
        bool hasColdDataEnabled() const { return this->coldDataEnabled_ != nullptr;};
        void deleteColdDataEnabled() { this->coldDataEnabled_ = nullptr;};
        inline bool getColdDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(coldDataEnabled_, false) };
        inline DBInstance& setColdDataEnabled(bool coldDataEnabled) { DARABONBA_PTR_SET_VALUE(coldDataEnabled_, coldDataEnabled) };


        // connectionMode Field Functions 
        bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
        void deleteConnectionMode() { this->connectionMode_ = nullptr;};
        inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
        inline DBInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBInstance& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBInstanceCPU Field Functions 
        bool hasDBInstanceCPU() const { return this->DBInstanceCPU_ != nullptr;};
        void deleteDBInstanceCPU() { this->DBInstanceCPU_ = nullptr;};
        inline string getDBInstanceCPU() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCPU_, "") };
        inline DBInstance& setDBInstanceCPU(string DBInstanceCPU) { DARABONBA_PTR_SET_VALUE(DBInstanceCPU_, DBInstanceCPU) };


        // DBInstanceClass Field Functions 
        bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
        void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
        inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
        inline DBInstance& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline DBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceMemory Field Functions 
        bool hasDBInstanceMemory() const { return this->DBInstanceMemory_ != nullptr;};
        void deleteDBInstanceMemory() { this->DBInstanceMemory_ = nullptr;};
        inline int32_t getDBInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMemory_, 0) };
        inline DBInstance& setDBInstanceMemory(int32_t DBInstanceMemory) { DARABONBA_PTR_SET_VALUE(DBInstanceMemory_, DBInstanceMemory) };


        // DBInstanceNetType Field Functions 
        bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
        void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
        inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
        inline DBInstance& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline DBInstance& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // DBInstanceStorageType Field Functions 
        bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
        void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
        inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
        inline DBInstance& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


        // DBInstanceType Field Functions 
        bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
        void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
        inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
        inline DBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


        // dedicatedHostGroupId Field Functions 
        bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
        void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
        inline string getDedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
        inline DBInstance& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


        // dedicatedHostGroupName Field Functions 
        bool hasDedicatedHostGroupName() const { return this->dedicatedHostGroupName_ != nullptr;};
        void deleteDedicatedHostGroupName() { this->dedicatedHostGroupName_ = nullptr;};
        inline string getDedicatedHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupName_, "") };
        inline DBInstance& setDedicatedHostGroupName(string dedicatedHostGroupName) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupName_, dedicatedHostGroupName) };


        // dedicatedHostIdForLog Field Functions 
        bool hasDedicatedHostIdForLog() const { return this->dedicatedHostIdForLog_ != nullptr;};
        void deleteDedicatedHostIdForLog() { this->dedicatedHostIdForLog_ = nullptr;};
        inline string getDedicatedHostIdForLog() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIdForLog_, "") };
        inline DBInstance& setDedicatedHostIdForLog(string dedicatedHostIdForLog) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdForLog_, dedicatedHostIdForLog) };


        // dedicatedHostIdForMaster Field Functions 
        bool hasDedicatedHostIdForMaster() const { return this->dedicatedHostIdForMaster_ != nullptr;};
        void deleteDedicatedHostIdForMaster() { this->dedicatedHostIdForMaster_ = nullptr;};
        inline string getDedicatedHostIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIdForMaster_, "") };
        inline DBInstance& setDedicatedHostIdForMaster(string dedicatedHostIdForMaster) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdForMaster_, dedicatedHostIdForMaster) };


        // dedicatedHostIdForSlave Field Functions 
        bool hasDedicatedHostIdForSlave() const { return this->dedicatedHostIdForSlave_ != nullptr;};
        void deleteDedicatedHostIdForSlave() { this->dedicatedHostIdForSlave_ = nullptr;};
        inline string getDedicatedHostIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIdForSlave_, "") };
        inline DBInstance& setDedicatedHostIdForSlave(string dedicatedHostIdForSlave) { DARABONBA_PTR_SET_VALUE(dedicatedHostIdForSlave_, dedicatedHostIdForSlave) };


        // dedicatedHostNameForLog Field Functions 
        bool hasDedicatedHostNameForLog() const { return this->dedicatedHostNameForLog_ != nullptr;};
        void deleteDedicatedHostNameForLog() { this->dedicatedHostNameForLog_ = nullptr;};
        inline string getDedicatedHostNameForLog() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostNameForLog_, "") };
        inline DBInstance& setDedicatedHostNameForLog(string dedicatedHostNameForLog) { DARABONBA_PTR_SET_VALUE(dedicatedHostNameForLog_, dedicatedHostNameForLog) };


        // dedicatedHostNameForMaster Field Functions 
        bool hasDedicatedHostNameForMaster() const { return this->dedicatedHostNameForMaster_ != nullptr;};
        void deleteDedicatedHostNameForMaster() { this->dedicatedHostNameForMaster_ = nullptr;};
        inline string getDedicatedHostNameForMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostNameForMaster_, "") };
        inline DBInstance& setDedicatedHostNameForMaster(string dedicatedHostNameForMaster) { DARABONBA_PTR_SET_VALUE(dedicatedHostNameForMaster_, dedicatedHostNameForMaster) };


        // dedicatedHostNameForSlave Field Functions 
        bool hasDedicatedHostNameForSlave() const { return this->dedicatedHostNameForSlave_ != nullptr;};
        void deleteDedicatedHostNameForSlave() { this->dedicatedHostNameForSlave_ = nullptr;};
        inline string getDedicatedHostNameForSlave() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostNameForSlave_, "") };
        inline DBInstance& setDedicatedHostNameForSlave(string dedicatedHostNameForSlave) { DARABONBA_PTR_SET_VALUE(dedicatedHostNameForSlave_, dedicatedHostNameForSlave) };


        // dedicatedHostZoneIdForLog Field Functions 
        bool hasDedicatedHostZoneIdForLog() const { return this->dedicatedHostZoneIdForLog_ != nullptr;};
        void deleteDedicatedHostZoneIdForLog() { this->dedicatedHostZoneIdForLog_ = nullptr;};
        inline string getDedicatedHostZoneIdForLog() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostZoneIdForLog_, "") };
        inline DBInstance& setDedicatedHostZoneIdForLog(string dedicatedHostZoneIdForLog) { DARABONBA_PTR_SET_VALUE(dedicatedHostZoneIdForLog_, dedicatedHostZoneIdForLog) };


        // dedicatedHostZoneIdForMaster Field Functions 
        bool hasDedicatedHostZoneIdForMaster() const { return this->dedicatedHostZoneIdForMaster_ != nullptr;};
        void deleteDedicatedHostZoneIdForMaster() { this->dedicatedHostZoneIdForMaster_ = nullptr;};
        inline string getDedicatedHostZoneIdForMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostZoneIdForMaster_, "") };
        inline DBInstance& setDedicatedHostZoneIdForMaster(string dedicatedHostZoneIdForMaster) { DARABONBA_PTR_SET_VALUE(dedicatedHostZoneIdForMaster_, dedicatedHostZoneIdForMaster) };


        // dedicatedHostZoneIdForSlave Field Functions 
        bool hasDedicatedHostZoneIdForSlave() const { return this->dedicatedHostZoneIdForSlave_ != nullptr;};
        void deleteDedicatedHostZoneIdForSlave() { this->dedicatedHostZoneIdForSlave_ = nullptr;};
        inline string getDedicatedHostZoneIdForSlave() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostZoneIdForSlave_, "") };
        inline DBInstance& setDedicatedHostZoneIdForSlave(string dedicatedHostZoneIdForSlave) { DARABONBA_PTR_SET_VALUE(dedicatedHostZoneIdForSlave_, dedicatedHostZoneIdForSlave) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline DBInstance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // destroyTime Field Functions 
        bool hasDestroyTime() const { return this->destroyTime_ != nullptr;};
        void deleteDestroyTime() { this->destroyTime_ = nullptr;};
        inline string getDestroyTime() const { DARABONBA_PTR_GET_DEFAULT(destroyTime_, "") };
        inline DBInstance& setDestroyTime(string destroyTime) { DARABONBA_PTR_SET_VALUE(destroyTime_, destroyTime) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBInstance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // generalGroupName Field Functions 
        bool hasGeneralGroupName() const { return this->generalGroupName_ != nullptr;};
        void deleteGeneralGroupName() { this->generalGroupName_ = nullptr;};
        inline string getGeneralGroupName() const { DARABONBA_PTR_GET_DEFAULT(generalGroupName_, "") };
        inline DBInstance& setGeneralGroupName(string generalGroupName) { DARABONBA_PTR_SET_VALUE(generalGroupName_, generalGroupName) };


        // greenInstanceName Field Functions 
        bool hasGreenInstanceName() const { return this->greenInstanceName_ != nullptr;};
        void deleteGreenInstanceName() { this->greenInstanceName_ = nullptr;};
        inline string getGreenInstanceName() const { DARABONBA_PTR_GET_DEFAULT(greenInstanceName_, "") };
        inline DBInstance& setGreenInstanceName(string greenInstanceName) { DARABONBA_PTR_SET_VALUE(greenInstanceName_, greenInstanceName) };


        // guardDBInstanceId Field Functions 
        bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
        void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
        inline string getGuardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
        inline DBInstance& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


        // instanceNetworkType Field Functions 
        bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
        void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
        inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
        inline DBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


        // ioAccelerationEnabled Field Functions 
        bool hasIoAccelerationEnabled() const { return this->ioAccelerationEnabled_ != nullptr;};
        void deleteIoAccelerationEnabled() { this->ioAccelerationEnabled_ = nullptr;};
        inline string getIoAccelerationEnabled() const { DARABONBA_PTR_GET_DEFAULT(ioAccelerationEnabled_, "") };
        inline DBInstance& setIoAccelerationEnabled(string ioAccelerationEnabled) { DARABONBA_PTR_SET_VALUE(ioAccelerationEnabled_, ioAccelerationEnabled) };


        // isAnalyticIns Field Functions 
        bool hasIsAnalyticIns() const { return this->isAnalyticIns_ != nullptr;};
        void deleteIsAnalyticIns() { this->isAnalyticIns_ = nullptr;};
        inline string getIsAnalyticIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticIns_, "") };
        inline DBInstance& setIsAnalyticIns(string isAnalyticIns) { DARABONBA_PTR_SET_VALUE(isAnalyticIns_, isAnalyticIns) };


        // isAnalyticReadOnlyIns Field Functions 
        bool hasIsAnalyticReadOnlyIns() const { return this->isAnalyticReadOnlyIns_ != nullptr;};
        void deleteIsAnalyticReadOnlyIns() { this->isAnalyticReadOnlyIns_ = nullptr;};
        inline bool getIsAnalyticReadOnlyIns() const { DARABONBA_PTR_GET_DEFAULT(isAnalyticReadOnlyIns_, false) };
        inline DBInstance& setIsAnalyticReadOnlyIns(bool isAnalyticReadOnlyIns) { DARABONBA_PTR_SET_VALUE(isAnalyticReadOnlyIns_, isAnalyticReadOnlyIns) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBInstance& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline DBInstance& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // masterInstanceId Field Functions 
        bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
        void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
        inline string getMasterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
        inline DBInstance& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


        // mutriORsignle Field Functions 
        bool hasMutriORsignle() const { return this->mutriORsignle_ != nullptr;};
        void deleteMutriORsignle() { this->mutriORsignle_ = nullptr;};
        inline bool getMutriORsignle() const { DARABONBA_PTR_GET_DEFAULT(mutriORsignle_, false) };
        inline DBInstance& setMutriORsignle(bool mutriORsignle) { DARABONBA_PTR_SET_VALUE(mutriORsignle_, mutriORsignle) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBInstance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // readOnlyDBInstanceIds Field Functions 
        bool hasReadOnlyDBInstanceIds() const { return this->readOnlyDBInstanceIds_ != nullptr;};
        void deleteReadOnlyDBInstanceIds() { this->readOnlyDBInstanceIds_ = nullptr;};
        inline const DBInstance::ReadOnlyDBInstanceIds & getReadOnlyDBInstanceIds() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceIds_, DBInstance::ReadOnlyDBInstanceIds) };
        inline DBInstance::ReadOnlyDBInstanceIds getReadOnlyDBInstanceIds() { DARABONBA_PTR_GET(readOnlyDBInstanceIds_, DBInstance::ReadOnlyDBInstanceIds) };
        inline DBInstance& setReadOnlyDBInstanceIds(const DBInstance::ReadOnlyDBInstanceIds & readOnlyDBInstanceIds) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };
        inline DBInstance& setReadOnlyDBInstanceIds(DBInstance::ReadOnlyDBInstanceIds && readOnlyDBInstanceIds) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceIds_, readOnlyDBInstanceIds) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // switchWeight Field Functions 
        bool hasSwitchWeight() const { return this->switchWeight_ != nullptr;};
        void deleteSwitchWeight() { this->switchWeight_ = nullptr;};
        inline int32_t getSwitchWeight() const { DARABONBA_PTR_GET_DEFAULT(switchWeight_, 0) };
        inline DBInstance& setSwitchWeight(int32_t switchWeight) { DARABONBA_PTR_SET_VALUE(switchWeight_, switchWeight) };


        // tempDBInstanceId Field Functions 
        bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
        void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
        inline string getTempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
        inline DBInstance& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
        inline DBInstance& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


        // tipsLevel Field Functions 
        bool hasTipsLevel() const { return this->tipsLevel_ != nullptr;};
        void deleteTipsLevel() { this->tipsLevel_ = nullptr;};
        inline int32_t getTipsLevel() const { DARABONBA_PTR_GET_DEFAULT(tipsLevel_, 0) };
        inline DBInstance& setTipsLevel(int32_t tipsLevel) { DARABONBA_PTR_SET_VALUE(tipsLevel_, tipsLevel) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcCloudInstanceId Field Functions 
        bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
        void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
        inline string getVpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
        inline DBInstance& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline DBInstance& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<bool> autoRenewal_ {};
        shared_ptr<string> blueGreenDeploymentName_ {};
        shared_ptr<string> blueInstanceName_ {};
        // A deprecated parameter.
        shared_ptr<string> bpeEnabled_ {};
        // Indicates whether the I/O burst feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> burstingEnabled_ {};
        // The RDS edition of the instance. Valid values:
        // 
        // *   **Basic**: RDS Basic Edition
        // *   **HighAvailability**: RDS High-availability Edition
        // *   **Finance**: RDS Enterprise Edition
        // 
        // >  This parameter is returned only when the **InstanceLevel** parameter is set to **1**.
        shared_ptr<string> category_ {};
        // A reserved parameter.
        shared_ptr<bool> coldDataEnabled_ {};
        // The connection mode of the instance. Valid values:
        // 
        // *   **Standard**: standard mode
        // *   **Safe**: database proxy mode
        shared_ptr<string> connectionMode_ {};
        // The endpoint of the instance.
        shared_ptr<string> connectionString_ {};
        // The creation time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The number of CPU instances.
        // 
        // Returns only when the InstanceLevel parameter is 1.
        shared_ptr<string> DBInstanceCPU_ {};
        // The instance type of the instance. For information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
        shared_ptr<string> DBInstanceClass_ {};
        // The instance description.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The memory size of the node. Unit: MB.
        // 
        // Returns only when the InstanceLevel parameter is 1.
        shared_ptr<int32_t> DBInstanceMemory_ {};
        // The type of the network connection to the instance. Valid values:
        // 
        // *   **Internet**
        // *   **Intranet**
        shared_ptr<string> DBInstanceNetType_ {};
        // The instance status. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/26315.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The storage type of the instance.
        shared_ptr<string> DBInstanceStorageType_ {};
        // The type of the instance. Valid values:
        // 
        // *   **Primary**: primary instance
        // *   **Readonly**: read-only instance
        // *   **Guard**: disaster recovery instance
        // *   **Temp**: temporary instance
        shared_ptr<string> DBInstanceType_ {};
        // The ID of the dedicated cluster.
        shared_ptr<string> dedicatedHostGroupId_ {};
        // The name of the dedicated cluster.
        shared_ptr<string> dedicatedHostGroupName_ {};
        // The ID of the host on which the logger instance resides.
        shared_ptr<string> dedicatedHostIdForLog_ {};
        // The ID of the host on which the primary instance resides.
        shared_ptr<string> dedicatedHostIdForMaster_ {};
        // The ID of the host on which the secondary instance resides.
        shared_ptr<string> dedicatedHostIdForSlave_ {};
        // The name of the host on which the logger instance resides.
        shared_ptr<string> dedicatedHostNameForLog_ {};
        // The name of the host on which the primary instance resides.
        shared_ptr<string> dedicatedHostNameForMaster_ {};
        // The name of the host on which the secondary instance resides.
        shared_ptr<string> dedicatedHostNameForSlave_ {};
        // The zone ID of the host on which the logger instance resides.
        shared_ptr<string> dedicatedHostZoneIdForLog_ {};
        // The zone ID of the host on which the primary instance resides.
        shared_ptr<string> dedicatedHostZoneIdForMaster_ {};
        // The zone ID of the host on which the secondary instance resides.
        shared_ptr<string> dedicatedHostZoneIdForSlave_ {};
        // Indicates whether the release protection feature is enabled for the instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> deletionProtection_ {};
        // The time when the instance was destroyed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> destroyTime_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version.
        shared_ptr<string> engineVersion_ {};
        // The expiration time of the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // >  Pay-as-you-go instances never expire.
        shared_ptr<string> expireTime_ {};
        // The name of the dedicated cluster to which the instance belongs. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
        shared_ptr<string> generalGroupName_ {};
        shared_ptr<string> greenInstanceName_ {};
        // The ID of the disaster recovery instance. This parameter is returned only when the instance is a primary instance and has a disaster recovery instance attached.
        shared_ptr<string> guardDBInstanceId_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Classic**
        // *   **VPC**
        shared_ptr<string> instanceNetworkType_ {};
        // Indicates whether the I/O acceleration feature is enabled. Valid values:
        // 
        // *   1: enabled
        // *   0: disabled
        shared_ptr<string> ioAccelerationEnabled_ {};
        shared_ptr<string> isAnalyticIns_ {};
        shared_ptr<bool> isAnalyticReadOnlyIns_ {};
        // The lock mode of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
        // *   **LockByRestoration**: The instance is automatically locked before the instance is rolled back.
        // *   **LockByDiskQuota**: The instance is automatically locked due to exhausted storage capacity.
        // *   **Released**: The instance is released. After an instance is released, the instance cannot be unlocked. You can only restore the backup data of the instance to a new instance. This process requires a long period of time.
        shared_ptr<string> lockMode_ {};
        // The reason why the instance was locked.
        shared_ptr<string> lockReason_ {};
        // The ID of the primary instance. If this parameter is null, the instance is a primary instance.
        shared_ptr<string> masterInstanceId_ {};
        // Indicates whether the multi-zone deployment method is used for the instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  If the multi-zone deployment method is used for the instance, the zone ID of the instance contains MAZ. Example: `cn-hangzhou-MAZ10(h,i)`.
        shared_ptr<bool> mutriORsignle_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go
        // *   **Prepaid**: subscription
        shared_ptr<string> payType_ {};
        // The IDs of the read-only instances. This parameter is returned only when the instance is a primary instance and has the read-only instances attached.
        shared_ptr<DBInstance::ReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether the instance supports weight-based switchovers for high availability. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition. Valid values:
        // 
        // *   **100**: The instance supports weight-based switchovers for high availability.
        // *   **0**: The instance does not support weight-based switchovers for high availability.
        shared_ptr<int32_t> switchWeight_ {};
        // The ID of the temporary instance. This parameter is returned only when the instance is a primary instance and has a temporary instance attached.
        shared_ptr<string> tempDBInstanceId_ {};
        // The information about the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition.
        shared_ptr<string> tips_ {};
        // The severity of the exception that is detected on the instance. This parameter is returned only when the instance is created in an ApsaraDB MyBase cluster that runs MySQL on Standard Edition. Valid values:
        // 
        // *   **1**: The instance is normal.
        // *   **2**: The specifications of the read-only instances do not match the specifications of the primary instance, and instance performance may be affected. You must adjust the specifications of these instances based on your business requirements.
        shared_ptr<int32_t> tipsLevel_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the instance. This parameter is returned only when the instance resides in a VPC.
        shared_ptr<string> vpcCloudInstanceId_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
        // The VPC name.
        shared_ptr<string> vpcName_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBInstance_ == nullptr; };
      // DBInstance Field Functions 
      bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
      void deleteDBInstance() { this->DBInstance_ = nullptr;};
      inline const vector<Items::DBInstance> & getDBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<Items::DBInstance>) };
      inline vector<Items::DBInstance> getDBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<Items::DBInstance>) };
      inline Items& setDBInstance(const vector<Items::DBInstance> & dBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, dBInstance) };
      inline Items& setDBInstance(vector<Items::DBInstance> && dBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, dBInstance) };


    protected:
      shared_ptr<vector<Items::DBInstance>> DBInstance_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesResponseBody::Items) };
    inline DescribeDBInstancesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancesResponseBody::Items) };
    inline DescribeDBInstancesResponseBody& setItems(const DescribeDBInstancesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesResponseBody& setItems(DescribeDBInstancesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDBInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstancesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstancesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The information about the instances.
    shared_ptr<DescribeDBInstancesResponseBody::Items> items_ {};
    // The token that is used to display the next page. If the returned entries are displayed on multiple pages, the next page can be displayed when you call this operation again with **NextToken** specified.
    shared_ptr<string> nextToken_ {};
    // The page number of the returned page.
    // 
    // > If you specify **MaxResults** or **NextToken**, only the value **1** is returned. You can ignore the value 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    // 
    // > If you specify **MaxResults** or **NextToken**, only the number of entries on the current page is returned. You can ignore the number.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
