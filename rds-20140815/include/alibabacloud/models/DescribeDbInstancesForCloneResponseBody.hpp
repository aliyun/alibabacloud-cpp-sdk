// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODY_HPP_
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
  class DescribeDBInstancesForCloneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesForCloneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesForCloneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstancesForCloneResponseBody() = default ;
    DescribeDBInstancesForCloneResponseBody(const DescribeDBInstancesForCloneResponseBody &) = default ;
    DescribeDBInstancesForCloneResponseBody(DescribeDBInstancesForCloneResponseBody &&) = default ;
    DescribeDBInstancesForCloneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesForCloneResponseBody() = default ;
    DescribeDBInstancesForCloneResponseBody& operator=(const DescribeDBInstancesForCloneResponseBody &) = default ;
    DescribeDBInstancesForCloneResponseBody& operator=(DescribeDBInstancesForCloneResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
          DARABONBA_PTR_TO_JSON(InsId, insId_);
          DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_TO_JSON(MutriORsignle, mutriORsignle_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReplicateId, replicateId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(TempDBInstanceId, tempDBInstanceId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ConnectionMode, connectionMode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(DestroyTime, destroyTime_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(InsId, insId_);
          DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
          DARABONBA_PTR_FROM_JSON(MutriORsignle, mutriORsignle_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceIds, readOnlyDBInstanceIds_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReplicateId, replicateId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(TempDBInstanceId, tempDBInstanceId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
            // The ID of the read-only instance.
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

        virtual bool empty() const override { return this->category_ == nullptr
        && this->connectionMode_ == nullptr && this->createTime_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceNetType_ == nullptr && this->DBInstanceStatus_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->DBInstanceType_ == nullptr && this->destroyTime_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->guardDBInstanceId_ == nullptr && this->insId_ == nullptr
        && this->instanceNetworkType_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->masterInstanceId_ == nullptr && this->mutriORsignle_ == nullptr
        && this->payType_ == nullptr && this->readOnlyDBInstanceIds_ == nullptr && this->regionId_ == nullptr && this->replicateId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tempDBInstanceId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcCloudInstanceId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBInstance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // connectionMode Field Functions 
        bool hasConnectionMode() const { return this->connectionMode_ != nullptr;};
        void deleteConnectionMode() { this->connectionMode_ = nullptr;};
        inline string getConnectionMode() const { DARABONBA_PTR_GET_DEFAULT(connectionMode_, "") };
        inline DBInstance& setConnectionMode(string connectionMode) { DARABONBA_PTR_SET_VALUE(connectionMode_, connectionMode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


        // guardDBInstanceId Field Functions 
        bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
        void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
        inline string getGuardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
        inline DBInstance& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


        // insId Field Functions 
        bool hasInsId() const { return this->insId_ != nullptr;};
        void deleteInsId() { this->insId_ = nullptr;};
        inline int32_t getInsId() const { DARABONBA_PTR_GET_DEFAULT(insId_, 0) };
        inline DBInstance& setInsId(int32_t insId) { DARABONBA_PTR_SET_VALUE(insId_, insId) };


        // instanceNetworkType Field Functions 
        bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
        void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
        inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
        inline DBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


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


        // replicateId Field Functions 
        bool hasReplicateId() const { return this->replicateId_ != nullptr;};
        void deleteReplicateId() { this->replicateId_ = nullptr;};
        inline string getReplicateId() const { DARABONBA_PTR_GET_DEFAULT(replicateId_, "") };
        inline DBInstance& setReplicateId(string replicateId) { DARABONBA_PTR_SET_VALUE(replicateId_, replicateId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tempDBInstanceId Field Functions 
        bool hasTempDBInstanceId() const { return this->tempDBInstanceId_ != nullptr;};
        void deleteTempDBInstanceId() { this->tempDBInstanceId_ = nullptr;};
        inline string getTempDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(tempDBInstanceId_, "") };
        inline DBInstance& setTempDBInstanceId(string tempDBInstanceId) { DARABONBA_PTR_SET_VALUE(tempDBInstanceId_, tempDBInstanceId) };


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


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The RDS edition of the instance. Valid values:
        // 
        // *   **Basic**: RDS Basic Edition
        // *   **HighAvailability**: RDS High-availability Edition
        // *   **Finance**: RDS Enterprise Edition
        shared_ptr<string> category_ {};
        // The connection mode of the instance. Valid values:
        // 
        // *   **Standard**: standard mode
        // *   **Safe**: database proxy mode
        shared_ptr<string> connectionMode_ {};
        // The time when the instance was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The instance type of the instance. For more information, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
        shared_ptr<string> DBInstanceClass_ {};
        // The name of the instance. It must be 2 to 256 characters in length. The value can contain letters, digits, underscores (_), and hyphens (-). The value must start with a letter.
        // 
        // > The value cannot start with http:// or https://.
        shared_ptr<string> DBInstanceDescription_ {};
        // The ID of the instance.
        shared_ptr<string> DBInstanceId_ {};
        // The network connection type of the instance. Valid values:
        // 
        // *   **Internet**
        // *   **Intranet**
        shared_ptr<string> DBInstanceNetType_ {};
        // The status of the instance. For more information, see [Instance state table](https://help.aliyun.com/document_detail/26315.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The storage type of the instance. Valid values:
        // 
        // *   **local_ssd/ephemeral_ssd**: local SSD
        // *   **cloud_ssd**: standard SSD.
        // *   **cloud_essd**: enhanced SSD (ESSD)
        shared_ptr<string> DBInstanceStorageType_ {};
        // The role of the instance. Valid values:
        // 
        // *   **Primary**: primary instance
        // *   **Readonly**: read-only instance
        // *   **Guard**: disaster recovery instance
        // *   **Temp**: temporary instance
        shared_ptr<string> DBInstanceType_ {};
        // The time when the instance was destroyed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> destroyTime_ {};
        // The database engine of the instance. Valid values:
        // 
        // *   MySQL
        // *   SQLServer
        // *   PostgreSQL
        // *   PPAS
        // *   MariaDB
        shared_ptr<string> engine_ {};
        // The version of the database engine.
        shared_ptr<string> engineVersion_ {};
        // The time when the instance expired. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> expireTime_ {};
        // The ID of the disaster recovery instance. This parameter is returned only when the instance is a primary instance and has a disaster recovery instance.
        shared_ptr<string> guardDBInstanceId_ {};
        // The ID of the instance role.
        shared_ptr<int32_t> insId_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **Classic**
        // *   **VPC**
        shared_ptr<string> instanceNetworkType_ {};
        // The lock method of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked after it expires.
        // *   **LockByRestoration**: The instance is automatically locked before a rollback.
        // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
        shared_ptr<string> lockMode_ {};
        // The reason why the instance was locked.
        shared_ptr<string> lockReason_ {};
        // The ID of the primary instance. If the value of this parameter is null, the instance is a primary instance.
        shared_ptr<string> masterInstanceId_ {};
        // Indicates whether multi-region deployment is used. Valid values:
        // 
        // *   **true**: Multi-region deployment is used.
        // *   **false**: Multi-region deployment is not used.
        shared_ptr<bool> mutriORsignle_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go
        // *   **Prepaid**: subscription
        shared_ptr<string> payType_ {};
        // An array consisting of the IDs of the read-only instances that are attached to the primary instance.
        shared_ptr<DBInstance::ReadOnlyDBInstanceIds> readOnlyDBInstanceIds_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
        // None.
        shared_ptr<string> replicateId_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the temporary instance.
        shared_ptr<string> tempDBInstanceId_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        // The ID of the instance in the VPC.
        shared_ptr<string> vpcCloudInstanceId_ {};
        // The ID of the virtual private cloud (VPC).
        shared_ptr<string> vpcId_ {};
        // The zone ID of the instance.
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
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancesForCloneResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancesForCloneResponseBody::Items) };
    inline DescribeDBInstancesForCloneResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancesForCloneResponseBody::Items) };
    inline DescribeDBInstancesForCloneResponseBody& setItems(const DescribeDBInstancesForCloneResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancesForCloneResponseBody& setItems(DescribeDBInstancesForCloneResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancesForCloneResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstancesForCloneResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancesForCloneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstancesForCloneResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // An array that consists of the details about the instances.
    shared_ptr<DescribeDBInstancesForCloneResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
