// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceTopologyResponseBody() = default ;
    DescribeDBInstanceTopologyResponseBody(const DescribeDBInstanceTopologyResponseBody &) = default ;
    DescribeDBInstanceTopologyResponseBody(DescribeDBInstanceTopologyResponseBody &&) = default ;
    DescribeDBInstanceTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBody() = default ;
    DescribeDBInstanceTopologyResponseBody& operator=(const DescribeDBInstanceTopologyResponseBody &) = default ;
    DescribeDBInstanceTopologyResponseBody& operator=(DescribeDBInstanceTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LogicInstanceTopology, logicInstanceTopology_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicInstanceTopology, logicInstanceTopology_);
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
      class LogicInstanceTopology : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogicInstanceTopology& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceConnType, DBInstanceConnType_);
          DARABONBA_PTR_TO_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, LogicInstanceTopology& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceConnType, DBInstanceConnType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
          DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
        };
        LogicInstanceTopology() = default ;
        LogicInstanceTopology(const LogicInstanceTopology &) = default ;
        LogicInstanceTopology(LogicInstanceTopology &&) = default ;
        LogicInstanceTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogicInstanceTopology() = default ;
        LogicInstanceTopology& operator=(const LogicInstanceTopology &) = default ;
        LogicInstanceTopology& operator=(LogicInstanceTopology &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(Activated, activated_);
            DARABONBA_PTR_TO_JSON(Azone, azone_);
            DARABONBA_PTR_TO_JSON(AzoneRoleList, azoneRoleList_);
            DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
            DARABONBA_PTR_TO_JSON(ConnectionIp, connectionIp_);
            DARABONBA_PTR_TO_JSON(DBInstanceConnType, DBInstanceConnType_);
            DARABONBA_PTR_TO_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
            DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
            DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
            DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
            DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
            DARABONBA_PTR_TO_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
            DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
            DARABONBA_PTR_TO_JSON(Engine, engine_);
            DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
            DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
            DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
            DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
            DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
            DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
            DARABONBA_PTR_TO_JSON(MaxIops, maxIops_);
            DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
            DARABONBA_PTR_TO_JSON(PhyInstanceName, phyInstanceName_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Role, role_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(Activated, activated_);
            DARABONBA_PTR_FROM_JSON(Azone, azone_);
            DARABONBA_PTR_FROM_JSON(AzoneRoleList, azoneRoleList_);
            DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
            DARABONBA_PTR_FROM_JSON(ConnectionIp, connectionIp_);
            DARABONBA_PTR_FROM_JSON(DBInstanceConnType, DBInstanceConnType_);
            DARABONBA_PTR_FROM_JSON(DBInstanceCreateTime, DBInstanceCreateTime_);
            DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
            DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
            DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
            DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
            DARABONBA_PTR_FROM_JSON(DBInstanceStatusDescription, DBInstanceStatusDescription_);
            DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
            DARABONBA_PTR_FROM_JSON(Engine, engine_);
            DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
            DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
            DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
            DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
            DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
            DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
            DARABONBA_PTR_FROM_JSON(MaxIops, maxIops_);
            DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
            DARABONBA_PTR_FROM_JSON(PhyInstanceName, phyInstanceName_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
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
          class ConnectionIp : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConnectionIp& obj) { 
              DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
              DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
              DARABONBA_PTR_TO_JSON(Port, port_);
            };
            friend void from_json(const Darabonba::Json& j, ConnectionIp& obj) { 
              DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
              DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
            };
            ConnectionIp() = default ;
            ConnectionIp(const ConnectionIp &) = default ;
            ConnectionIp(ConnectionIp &&) = default ;
            ConnectionIp(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConnectionIp() = default ;
            ConnectionIp& operator=(const ConnectionIp &) = default ;
            ConnectionIp& operator=(ConnectionIp &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceNetType_ == nullptr && this->port_ == nullptr; };
            // connectionString Field Functions 
            bool hasConnectionString() const { return this->connectionString_ != nullptr;};
            void deleteConnectionString() { this->connectionString_ = nullptr;};
            inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
            inline ConnectionIp& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


            // DBInstanceNetType Field Functions 
            bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
            void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
            inline int32_t getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, 0) };
            inline ConnectionIp& setDBInstanceNetType(int32_t DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline ConnectionIp& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          protected:
            shared_ptr<string> connectionString_ {};
            shared_ptr<int32_t> DBInstanceNetType_ {};
            shared_ptr<string> port_ {};
          };

          class AzoneRoleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AzoneRoleList& obj) { 
              DARABONBA_PTR_TO_JSON(Azone, azone_);
              DARABONBA_PTR_TO_JSON(Role, role_);
            };
            friend void from_json(const Darabonba::Json& j, AzoneRoleList& obj) { 
              DARABONBA_PTR_FROM_JSON(Azone, azone_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
            };
            AzoneRoleList() = default ;
            AzoneRoleList(const AzoneRoleList &) = default ;
            AzoneRoleList(AzoneRoleList &&) = default ;
            AzoneRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AzoneRoleList() = default ;
            AzoneRoleList& operator=(const AzoneRoleList &) = default ;
            AzoneRoleList& operator=(AzoneRoleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->azone_ == nullptr
        && this->role_ == nullptr; };
            // azone Field Functions 
            bool hasAzone() const { return this->azone_ != nullptr;};
            void deleteAzone() { this->azone_ = nullptr;};
            inline string getAzone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
            inline AzoneRoleList& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline AzoneRoleList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          protected:
            shared_ptr<string> azone_ {};
            shared_ptr<string> role_ {};
          };

          virtual bool empty() const override { return this->activated_ == nullptr
        && this->azone_ == nullptr && this->azoneRoleList_ == nullptr && this->characterType_ == nullptr && this->connectionIp_ == nullptr && this->DBInstanceConnType_ == nullptr
        && this->DBInstanceCreateTime_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceName_ == nullptr && this->DBInstanceStatus_ == nullptr
        && this->DBInstanceStatusDescription_ == nullptr && this->diskSize_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->lockMode_ == nullptr
        && this->lockReason_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->maxConnections_ == nullptr && this->maxIops_ == nullptr
        && this->nodeClass_ == nullptr && this->phyInstanceName_ == nullptr && this->region_ == nullptr && this->role_ == nullptr && this->status_ == nullptr
        && this->storageUsed_ == nullptr && this->version_ == nullptr; };
          // activated Field Functions 
          bool hasActivated() const { return this->activated_ != nullptr;};
          void deleteActivated() { this->activated_ = nullptr;};
          inline bool getActivated() const { DARABONBA_PTR_GET_DEFAULT(activated_, false) };
          inline Items& setActivated(bool activated) { DARABONBA_PTR_SET_VALUE(activated_, activated) };


          // azone Field Functions 
          bool hasAzone() const { return this->azone_ != nullptr;};
          void deleteAzone() { this->azone_ = nullptr;};
          inline string getAzone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
          inline Items& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


          // azoneRoleList Field Functions 
          bool hasAzoneRoleList() const { return this->azoneRoleList_ != nullptr;};
          void deleteAzoneRoleList() { this->azoneRoleList_ = nullptr;};
          inline const vector<Items::AzoneRoleList> & getAzoneRoleList() const { DARABONBA_PTR_GET_CONST(azoneRoleList_, vector<Items::AzoneRoleList>) };
          inline vector<Items::AzoneRoleList> getAzoneRoleList() { DARABONBA_PTR_GET(azoneRoleList_, vector<Items::AzoneRoleList>) };
          inline Items& setAzoneRoleList(const vector<Items::AzoneRoleList> & azoneRoleList) { DARABONBA_PTR_SET_VALUE(azoneRoleList_, azoneRoleList) };
          inline Items& setAzoneRoleList(vector<Items::AzoneRoleList> && azoneRoleList) { DARABONBA_PTR_SET_RVALUE(azoneRoleList_, azoneRoleList) };


          // characterType Field Functions 
          bool hasCharacterType() const { return this->characterType_ != nullptr;};
          void deleteCharacterType() { this->characterType_ = nullptr;};
          inline string getCharacterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
          inline Items& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


          // connectionIp Field Functions 
          bool hasConnectionIp() const { return this->connectionIp_ != nullptr;};
          void deleteConnectionIp() { this->connectionIp_ = nullptr;};
          inline const vector<Items::ConnectionIp> & getConnectionIp() const { DARABONBA_PTR_GET_CONST(connectionIp_, vector<Items::ConnectionIp>) };
          inline vector<Items::ConnectionIp> getConnectionIp() { DARABONBA_PTR_GET(connectionIp_, vector<Items::ConnectionIp>) };
          inline Items& setConnectionIp(const vector<Items::ConnectionIp> & connectionIp) { DARABONBA_PTR_SET_VALUE(connectionIp_, connectionIp) };
          inline Items& setConnectionIp(vector<Items::ConnectionIp> && connectionIp) { DARABONBA_PTR_SET_RVALUE(connectionIp_, connectionIp) };


          // DBInstanceConnType Field Functions 
          bool hasDBInstanceConnType() const { return this->DBInstanceConnType_ != nullptr;};
          void deleteDBInstanceConnType() { this->DBInstanceConnType_ = nullptr;};
          inline int32_t getDBInstanceConnType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceConnType_, 0) };
          inline Items& setDBInstanceConnType(int32_t DBInstanceConnType) { DARABONBA_PTR_SET_VALUE(DBInstanceConnType_, DBInstanceConnType) };


          // DBInstanceCreateTime Field Functions 
          bool hasDBInstanceCreateTime() const { return this->DBInstanceCreateTime_ != nullptr;};
          void deleteDBInstanceCreateTime() { this->DBInstanceCreateTime_ = nullptr;};
          inline string getDBInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCreateTime_, "") };
          inline Items& setDBInstanceCreateTime(string DBInstanceCreateTime) { DARABONBA_PTR_SET_VALUE(DBInstanceCreateTime_, DBInstanceCreateTime) };


          // DBInstanceDescription Field Functions 
          bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
          void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
          inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
          inline Items& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


          // DBInstanceId Field Functions 
          bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
          void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
          inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
          inline Items& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


          // DBInstanceName Field Functions 
          bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
          void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
          inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
          inline Items& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


          // DBInstanceStatus Field Functions 
          bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
          void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
          inline int32_t getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, 0) };
          inline Items& setDBInstanceStatus(int32_t DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


          // DBInstanceStatusDescription Field Functions 
          bool hasDBInstanceStatusDescription() const { return this->DBInstanceStatusDescription_ != nullptr;};
          void deleteDBInstanceStatusDescription() { this->DBInstanceStatusDescription_ = nullptr;};
          inline string getDBInstanceStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatusDescription_, "") };
          inline Items& setDBInstanceStatusDescription(string DBInstanceStatusDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceStatusDescription_, DBInstanceStatusDescription) };


          // diskSize Field Functions 
          bool hasDiskSize() const { return this->diskSize_ != nullptr;};
          void deleteDiskSize() { this->diskSize_ = nullptr;};
          inline int64_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0L) };
          inline Items& setDiskSize(int64_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


          // engine Field Functions 
          bool hasEngine() const { return this->engine_ != nullptr;};
          void deleteEngine() { this->engine_ = nullptr;};
          inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
          inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


          // engineVersion Field Functions 
          bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
          void deleteEngineVersion() { this->engineVersion_ = nullptr;};
          inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
          inline Items& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


          // lockMode Field Functions 
          bool hasLockMode() const { return this->lockMode_ != nullptr;};
          void deleteLockMode() { this->lockMode_ = nullptr;};
          inline int32_t getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0) };
          inline Items& setLockMode(int32_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


          // lockReason Field Functions 
          bool hasLockReason() const { return this->lockReason_ != nullptr;};
          void deleteLockReason() { this->lockReason_ = nullptr;};
          inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
          inline Items& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


          // maintainEndTime Field Functions 
          bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
          void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
          inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
          inline Items& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


          // maintainStartTime Field Functions 
          bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
          void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
          inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
          inline Items& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


          // maxConnections Field Functions 
          bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
          void deleteMaxConnections() { this->maxConnections_ = nullptr;};
          inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
          inline Items& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


          // maxIops Field Functions 
          bool hasMaxIops() const { return this->maxIops_ != nullptr;};
          void deleteMaxIops() { this->maxIops_ = nullptr;};
          inline int32_t getMaxIops() const { DARABONBA_PTR_GET_DEFAULT(maxIops_, 0) };
          inline Items& setMaxIops(int32_t maxIops) { DARABONBA_PTR_SET_VALUE(maxIops_, maxIops) };


          // nodeClass Field Functions 
          bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
          void deleteNodeClass() { this->nodeClass_ = nullptr;};
          inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
          inline Items& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


          // phyInstanceName Field Functions 
          bool hasPhyInstanceName() const { return this->phyInstanceName_ != nullptr;};
          void deletePhyInstanceName() { this->phyInstanceName_ = nullptr;};
          inline string getPhyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(phyInstanceName_, "") };
          inline Items& setPhyInstanceName(string phyInstanceName) { DARABONBA_PTR_SET_VALUE(phyInstanceName_, phyInstanceName) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Items& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // storageUsed Field Functions 
          bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
          void deleteStorageUsed() { this->storageUsed_ = nullptr;};
          inline string getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, "") };
          inline Items& setStorageUsed(string storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline Items& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<bool> activated_ {};
          shared_ptr<string> azone_ {};
          shared_ptr<vector<Items::AzoneRoleList>> azoneRoleList_ {};
          shared_ptr<string> characterType_ {};
          shared_ptr<vector<Items::ConnectionIp>> connectionIp_ {};
          shared_ptr<int32_t> DBInstanceConnType_ {};
          shared_ptr<string> DBInstanceCreateTime_ {};
          shared_ptr<string> DBInstanceDescription_ {};
          shared_ptr<string> DBInstanceId_ {};
          shared_ptr<string> DBInstanceName_ {};
          shared_ptr<int32_t> DBInstanceStatus_ {};
          shared_ptr<string> DBInstanceStatusDescription_ {};
          shared_ptr<int64_t> diskSize_ {};
          shared_ptr<string> engine_ {};
          shared_ptr<string> engineVersion_ {};
          shared_ptr<int32_t> lockMode_ {};
          shared_ptr<string> lockReason_ {};
          shared_ptr<string> maintainEndTime_ {};
          shared_ptr<string> maintainStartTime_ {};
          shared_ptr<int32_t> maxConnections_ {};
          shared_ptr<int32_t> maxIops_ {};
          shared_ptr<string> nodeClass_ {};
          shared_ptr<string> phyInstanceName_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> role_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> storageUsed_ {};
          shared_ptr<string> version_ {};
        };

        class HistoryItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HistoryItems& obj) { 
            DARABONBA_PTR_TO_JSON(Activated, activated_);
            DARABONBA_PTR_TO_JSON(Azone, azone_);
            DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
            DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
            DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
            DARABONBA_PTR_TO_JSON(PhyInstanceName, phyInstanceName_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(Role, role_);
          };
          friend void from_json(const Darabonba::Json& j, HistoryItems& obj) { 
            DARABONBA_PTR_FROM_JSON(Activated, activated_);
            DARABONBA_PTR_FROM_JSON(Azone, azone_);
            DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
            DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
            DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
            DARABONBA_PTR_FROM_JSON(PhyInstanceName, phyInstanceName_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
          };
          HistoryItems() = default ;
          HistoryItems(const HistoryItems &) = default ;
          HistoryItems(HistoryItems &&) = default ;
          HistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HistoryItems() = default ;
          HistoryItems& operator=(const HistoryItems &) = default ;
          HistoryItems& operator=(HistoryItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->activated_ == nullptr
        && this->azone_ == nullptr && this->characterType_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceName_ == nullptr && this->phyInstanceName_ == nullptr
        && this->region_ == nullptr && this->role_ == nullptr; };
          // activated Field Functions 
          bool hasActivated() const { return this->activated_ != nullptr;};
          void deleteActivated() { this->activated_ = nullptr;};
          inline bool getActivated() const { DARABONBA_PTR_GET_DEFAULT(activated_, false) };
          inline HistoryItems& setActivated(bool activated) { DARABONBA_PTR_SET_VALUE(activated_, activated) };


          // azone Field Functions 
          bool hasAzone() const { return this->azone_ != nullptr;};
          void deleteAzone() { this->azone_ = nullptr;};
          inline string getAzone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
          inline HistoryItems& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


          // characterType Field Functions 
          bool hasCharacterType() const { return this->characterType_ != nullptr;};
          void deleteCharacterType() { this->characterType_ = nullptr;};
          inline string getCharacterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
          inline HistoryItems& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


          // DBInstanceId Field Functions 
          bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
          void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
          inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
          inline HistoryItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


          // DBInstanceName Field Functions 
          bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
          void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
          inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
          inline HistoryItems& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


          // phyInstanceName Field Functions 
          bool hasPhyInstanceName() const { return this->phyInstanceName_ != nullptr;};
          void deletePhyInstanceName() { this->phyInstanceName_ = nullptr;};
          inline string getPhyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(phyInstanceName_, "") };
          inline HistoryItems& setPhyInstanceName(string phyInstanceName) { DARABONBA_PTR_SET_VALUE(phyInstanceName_, phyInstanceName) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline HistoryItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline HistoryItems& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        protected:
          shared_ptr<bool> activated_ {};
          shared_ptr<string> azone_ {};
          shared_ptr<string> characterType_ {};
          shared_ptr<string> DBInstanceId_ {};
          shared_ptr<string> DBInstanceName_ {};
          shared_ptr<string> phyInstanceName_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> role_ {};
        };

        virtual bool empty() const override { return this->DBInstanceConnType_ == nullptr
        && this->DBInstanceCreateTime_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceName_ == nullptr && this->DBInstanceStatus_ == nullptr
        && this->DBInstanceStatusDescription_ == nullptr && this->DBInstanceStorage_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->historyItems_ == nullptr
        && this->items_ == nullptr && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr; };
        // DBInstanceConnType Field Functions 
        bool hasDBInstanceConnType() const { return this->DBInstanceConnType_ != nullptr;};
        void deleteDBInstanceConnType() { this->DBInstanceConnType_ = nullptr;};
        inline string getDBInstanceConnType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceConnType_, "") };
        inline LogicInstanceTopology& setDBInstanceConnType(string DBInstanceConnType) { DARABONBA_PTR_SET_VALUE(DBInstanceConnType_, DBInstanceConnType) };


        // DBInstanceCreateTime Field Functions 
        bool hasDBInstanceCreateTime() const { return this->DBInstanceCreateTime_ != nullptr;};
        void deleteDBInstanceCreateTime() { this->DBInstanceCreateTime_ = nullptr;};
        inline string getDBInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCreateTime_, "") };
        inline LogicInstanceTopology& setDBInstanceCreateTime(string DBInstanceCreateTime) { DARABONBA_PTR_SET_VALUE(DBInstanceCreateTime_, DBInstanceCreateTime) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline LogicInstanceTopology& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline LogicInstanceTopology& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline LogicInstanceTopology& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline int32_t getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, 0) };
        inline LogicInstanceTopology& setDBInstanceStatus(int32_t DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


        // DBInstanceStatusDescription Field Functions 
        bool hasDBInstanceStatusDescription() const { return this->DBInstanceStatusDescription_ != nullptr;};
        void deleteDBInstanceStatusDescription() { this->DBInstanceStatusDescription_ = nullptr;};
        inline string getDBInstanceStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatusDescription_, "") };
        inline LogicInstanceTopology& setDBInstanceStatusDescription(string DBInstanceStatusDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceStatusDescription_, DBInstanceStatusDescription) };


        // DBInstanceStorage Field Functions 
        bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
        void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
        inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
        inline LogicInstanceTopology& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline LogicInstanceTopology& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline LogicInstanceTopology& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // historyItems Field Functions 
        bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
        void deleteHistoryItems() { this->historyItems_ = nullptr;};
        inline const vector<LogicInstanceTopology::HistoryItems> & getHistoryItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<LogicInstanceTopology::HistoryItems>) };
        inline vector<LogicInstanceTopology::HistoryItems> getHistoryItems() { DARABONBA_PTR_GET(historyItems_, vector<LogicInstanceTopology::HistoryItems>) };
        inline LogicInstanceTopology& setHistoryItems(const vector<LogicInstanceTopology::HistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
        inline LogicInstanceTopology& setHistoryItems(vector<LogicInstanceTopology::HistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<LogicInstanceTopology::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<LogicInstanceTopology::Items>) };
        inline vector<LogicInstanceTopology::Items> getItems() { DARABONBA_PTR_GET(items_, vector<LogicInstanceTopology::Items>) };
        inline LogicInstanceTopology& setItems(const vector<LogicInstanceTopology::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline LogicInstanceTopology& setItems(vector<LogicInstanceTopology::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline int32_t getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, 0) };
        inline LogicInstanceTopology& setLockMode(int32_t lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline LogicInstanceTopology& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // maintainEndTime Field Functions 
        bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
        void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
        inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
        inline LogicInstanceTopology& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


        // maintainStartTime Field Functions 
        bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
        void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
        inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
        inline LogicInstanceTopology& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


      protected:
        shared_ptr<string> DBInstanceConnType_ {};
        shared_ptr<string> DBInstanceCreateTime_ {};
        shared_ptr<string> DBInstanceDescription_ {};
        shared_ptr<string> DBInstanceId_ {};
        shared_ptr<string> DBInstanceName_ {};
        shared_ptr<int32_t> DBInstanceStatus_ {};
        shared_ptr<string> DBInstanceStatusDescription_ {};
        shared_ptr<int32_t> DBInstanceStorage_ {};
        shared_ptr<string> engine_ {};
        shared_ptr<string> engineVersion_ {};
        shared_ptr<vector<LogicInstanceTopology::HistoryItems>> historyItems_ {};
        shared_ptr<vector<LogicInstanceTopology::Items>> items_ {};
        shared_ptr<int32_t> lockMode_ {};
        shared_ptr<string> lockReason_ {};
        shared_ptr<string> maintainEndTime_ {};
        shared_ptr<string> maintainStartTime_ {};
      };

      virtual bool empty() const override { return this->logicInstanceTopology_ == nullptr; };
      // logicInstanceTopology Field Functions 
      bool hasLogicInstanceTopology() const { return this->logicInstanceTopology_ != nullptr;};
      void deleteLogicInstanceTopology() { this->logicInstanceTopology_ = nullptr;};
      inline const Data::LogicInstanceTopology & getLogicInstanceTopology() const { DARABONBA_PTR_GET_CONST(logicInstanceTopology_, Data::LogicInstanceTopology) };
      inline Data::LogicInstanceTopology getLogicInstanceTopology() { DARABONBA_PTR_GET(logicInstanceTopology_, Data::LogicInstanceTopology) };
      inline Data& setLogicInstanceTopology(const Data::LogicInstanceTopology & logicInstanceTopology) { DARABONBA_PTR_SET_VALUE(logicInstanceTopology_, logicInstanceTopology) };
      inline Data& setLogicInstanceTopology(Data::LogicInstanceTopology && logicInstanceTopology) { DARABONBA_PTR_SET_RVALUE(logicInstanceTopology_, logicInstanceTopology) };


    protected:
      shared_ptr<Data::LogicInstanceTopology> logicInstanceTopology_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceTopologyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceTopologyResponseBody::Data) };
    inline DescribeDBInstanceTopologyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceTopologyResponseBody::Data) };
    inline DescribeDBInstanceTopologyResponseBody& setData(const DescribeDBInstanceTopologyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceTopologyResponseBody& setData(DescribeDBInstanceTopologyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceTopologyResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
