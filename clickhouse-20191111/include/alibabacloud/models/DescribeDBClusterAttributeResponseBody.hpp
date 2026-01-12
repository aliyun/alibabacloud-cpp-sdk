// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAttributeResponseBody() = default ;
    DescribeDBClusterAttributeResponseBody(const DescribeDBClusterAttributeResponseBody &) = default ;
    DescribeDBClusterAttributeResponseBody(DescribeDBClusterAttributeResponseBody &&) = default ;
    DescribeDBClusterAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBody() = default ;
    DescribeDBClusterAttributeResponseBody& operator=(const DescribeDBClusterAttributeResponseBody &) = default ;
    DescribeDBClusterAttributeResponseBody& operator=(DescribeDBClusterAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBCluster& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AppointmentElectZookeeperDisableWrite, appointmentElectZookeeperDisableWrite_);
        DARABONBA_PTR_TO_JSON(AppointmentElectZookeeperTime, appointmentElectZookeeperTime_);
        DARABONBA_PTR_TO_JSON(AppointmentRestartNodeList, appointmentRestartNodeList_);
        DARABONBA_PTR_TO_JSON(AppointmentRestartNodeTime, appointmentRestartNodeTime_);
        DARABONBA_PTR_TO_JSON(AppointmentRestartTime, appointmentRestartTime_);
        DARABONBA_ANY_TO_JSON(AvailableUpgradeMajorVersion, availableUpgradeMajorVersion_);
        DARABONBA_PTR_TO_JSON(Bid, bid_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(ControlVersion, controlVersion_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
        DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
        DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
        DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
        DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
        DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineLatestMinorVersion, engineLatestMinorVersion_);
        DARABONBA_PTR_TO_JSON(EngineMinorVersion, engineMinorVersion_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ExtStorageSize, extStorageSize_);
        DARABONBA_PTR_TO_JSON(ExtStorageType, extStorageType_);
        DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
        DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
        DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        DARABONBA_PTR_TO_JSON(MaintainAutoType, maintainAutoType_);
        DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PublicConnectionString, publicConnectionString_);
        DARABONBA_PTR_TO_JSON(PublicIpAddr, publicIpAddr_);
        DARABONBA_PTR_TO_JSON(PublicPort, publicPort_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ScaleOutStatus, scaleOutStatus_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(SupportBackup, supportBackup_);
        DARABONBA_PTR_TO_JSON(SupportHttpsPort, supportHttpsPort_);
        DARABONBA_PTR_TO_JSON(SupportMysqlPort, supportMysqlPort_);
        DARABONBA_PTR_TO_JSON(SupportOss, supportOss_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcIpAddr, vpcIpAddr_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_ANY_TO_JSON(ZoneIdVswitchMap, zoneIdVswitchMap_);
        DARABONBA_PTR_TO_JSON(ZookeeperClass, zookeeperClass_);
      };
      friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AppointmentElectZookeeperDisableWrite, appointmentElectZookeeperDisableWrite_);
        DARABONBA_PTR_FROM_JSON(AppointmentElectZookeeperTime, appointmentElectZookeeperTime_);
        DARABONBA_PTR_FROM_JSON(AppointmentRestartNodeList, appointmentRestartNodeList_);
        DARABONBA_PTR_FROM_JSON(AppointmentRestartNodeTime, appointmentRestartNodeTime_);
        DARABONBA_PTR_FROM_JSON(AppointmentRestartTime, appointmentRestartTime_);
        DARABONBA_ANY_FROM_JSON(AvailableUpgradeMajorVersion, availableUpgradeMajorVersion_);
        DARABONBA_PTR_FROM_JSON(Bid, bid_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(ControlVersion, controlVersion_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
        DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
        DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
        DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
        DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
        DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineLatestMinorVersion, engineLatestMinorVersion_);
        DARABONBA_PTR_FROM_JSON(EngineMinorVersion, engineMinorVersion_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ExtStorageSize, extStorageSize_);
        DARABONBA_PTR_FROM_JSON(ExtStorageType, extStorageType_);
        DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
        DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
        DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
        DARABONBA_PTR_FROM_JSON(MaintainAutoType, maintainAutoType_);
        DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PublicConnectionString, publicConnectionString_);
        DARABONBA_PTR_FROM_JSON(PublicIpAddr, publicIpAddr_);
        DARABONBA_PTR_FROM_JSON(PublicPort, publicPort_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ScaleOutStatus, scaleOutStatus_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(SupportBackup, supportBackup_);
        DARABONBA_PTR_FROM_JSON(SupportHttpsPort, supportHttpsPort_);
        DARABONBA_PTR_FROM_JSON(SupportMysqlPort, supportMysqlPort_);
        DARABONBA_PTR_FROM_JSON(SupportOss, supportOss_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcCloudInstanceId, vpcCloudInstanceId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcIpAddr, vpcIpAddr_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_ANY_FROM_JSON(ZoneIdVswitchMap, zoneIdVswitchMap_);
        DARABONBA_PTR_FROM_JSON(ZookeeperClass, zookeeperClass_);
      };
      DBCluster() = default ;
      DBCluster(const DBCluster &) = default ;
      DBCluster(DBCluster &&) = default ;
      DBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBCluster() = default ;
      DBCluster& operator=(const DBCluster &) = default ;
      DBCluster& operator=(DBCluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          // The tag name.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->tag_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
        inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
        inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      protected:
        shared_ptr<vector<Tags::Tag>> tag_ {};
      };

      class ScaleOutStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScaleOutStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Ratio, ratio_);
        };
        friend void from_json(const Darabonba::Json& j, ScaleOutStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
        };
        ScaleOutStatus() = default ;
        ScaleOutStatus(const ScaleOutStatus &) = default ;
        ScaleOutStatus(ScaleOutStatus &&) = default ;
        ScaleOutStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScaleOutStatus() = default ;
        ScaleOutStatus& operator=(const ScaleOutStatus &) = default ;
        ScaleOutStatus& operator=(ScaleOutStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->progress_ == nullptr
        && this->ratio_ == nullptr; };
        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline ScaleOutStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
        inline ScaleOutStatus& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      protected:
        // The progress of the data migration task in percentage.
        // 
        // >  This parameter is returned only when the cluster is in the SCALING_OUT state.
        shared_ptr<string> progress_ {};
        // The progress of the data migration task. This value is displayed in the following format: Data volume that has been migrated/Total data volume.
        // 
        // >  This parameter is returned only when the cluster is in the SCALING_OUT state.
        shared_ptr<string> ratio_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->appointmentElectZookeeperDisableWrite_ == nullptr && this->appointmentElectZookeeperTime_ == nullptr && this->appointmentRestartNodeList_ == nullptr && this->appointmentRestartNodeTime_ == nullptr && this->appointmentRestartTime_ == nullptr
        && this->availableUpgradeMajorVersion_ == nullptr && this->bid_ == nullptr && this->category_ == nullptr && this->commodityCode_ == nullptr && this->connectionString_ == nullptr
        && this->controlVersion_ == nullptr && this->createTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr
        && this->DBClusterStatus_ == nullptr && this->DBClusterType_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeCount_ == nullptr && this->DBNodeStorage_ == nullptr
        && this->encryptionKey_ == nullptr && this->encryptionType_ == nullptr && this->engine_ == nullptr && this->engineLatestMinorVersion_ == nullptr && this->engineMinorVersion_ == nullptr
        && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->extStorageSize_ == nullptr && this->extStorageType_ == nullptr && this->isExpired_ == nullptr
        && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->maintainAutoType_ == nullptr && this->maintainTime_ == nullptr && this->payType_ == nullptr
        && this->port_ == nullptr && this->publicConnectionString_ == nullptr && this->publicIpAddr_ == nullptr && this->publicPort_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->scaleOutStatus_ == nullptr && this->storageType_ == nullptr && this->supportBackup_ == nullptr && this->supportHttpsPort_ == nullptr
        && this->supportMysqlPort_ == nullptr && this->supportOss_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcCloudInstanceId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcIpAddr_ == nullptr && this->zoneId_ == nullptr && this->zoneIdVswitchMap_ == nullptr && this->zookeeperClass_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline DBCluster& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // appointmentElectZookeeperDisableWrite Field Functions 
      bool hasAppointmentElectZookeeperDisableWrite() const { return this->appointmentElectZookeeperDisableWrite_ != nullptr;};
      void deleteAppointmentElectZookeeperDisableWrite() { this->appointmentElectZookeeperDisableWrite_ = nullptr;};
      inline bool getAppointmentElectZookeeperDisableWrite() const { DARABONBA_PTR_GET_DEFAULT(appointmentElectZookeeperDisableWrite_, false) };
      inline DBCluster& setAppointmentElectZookeeperDisableWrite(bool appointmentElectZookeeperDisableWrite) { DARABONBA_PTR_SET_VALUE(appointmentElectZookeeperDisableWrite_, appointmentElectZookeeperDisableWrite) };


      // appointmentElectZookeeperTime Field Functions 
      bool hasAppointmentElectZookeeperTime() const { return this->appointmentElectZookeeperTime_ != nullptr;};
      void deleteAppointmentElectZookeeperTime() { this->appointmentElectZookeeperTime_ = nullptr;};
      inline string getAppointmentElectZookeeperTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentElectZookeeperTime_, "") };
      inline DBCluster& setAppointmentElectZookeeperTime(string appointmentElectZookeeperTime) { DARABONBA_PTR_SET_VALUE(appointmentElectZookeeperTime_, appointmentElectZookeeperTime) };


      // appointmentRestartNodeList Field Functions 
      bool hasAppointmentRestartNodeList() const { return this->appointmentRestartNodeList_ != nullptr;};
      void deleteAppointmentRestartNodeList() { this->appointmentRestartNodeList_ = nullptr;};
      inline string getAppointmentRestartNodeList() const { DARABONBA_PTR_GET_DEFAULT(appointmentRestartNodeList_, "") };
      inline DBCluster& setAppointmentRestartNodeList(string appointmentRestartNodeList) { DARABONBA_PTR_SET_VALUE(appointmentRestartNodeList_, appointmentRestartNodeList) };


      // appointmentRestartNodeTime Field Functions 
      bool hasAppointmentRestartNodeTime() const { return this->appointmentRestartNodeTime_ != nullptr;};
      void deleteAppointmentRestartNodeTime() { this->appointmentRestartNodeTime_ = nullptr;};
      inline string getAppointmentRestartNodeTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentRestartNodeTime_, "") };
      inline DBCluster& setAppointmentRestartNodeTime(string appointmentRestartNodeTime) { DARABONBA_PTR_SET_VALUE(appointmentRestartNodeTime_, appointmentRestartNodeTime) };


      // appointmentRestartTime Field Functions 
      bool hasAppointmentRestartTime() const { return this->appointmentRestartTime_ != nullptr;};
      void deleteAppointmentRestartTime() { this->appointmentRestartTime_ = nullptr;};
      inline string getAppointmentRestartTime() const { DARABONBA_PTR_GET_DEFAULT(appointmentRestartTime_, "") };
      inline DBCluster& setAppointmentRestartTime(string appointmentRestartTime) { DARABONBA_PTR_SET_VALUE(appointmentRestartTime_, appointmentRestartTime) };


      // availableUpgradeMajorVersion Field Functions 
      bool hasAvailableUpgradeMajorVersion() const { return this->availableUpgradeMajorVersion_ != nullptr;};
      void deleteAvailableUpgradeMajorVersion() { this->availableUpgradeMajorVersion_ = nullptr;};
      inline       const Darabonba::Json & getAvailableUpgradeMajorVersion() const { DARABONBA_GET(availableUpgradeMajorVersion_) };
      Darabonba::Json & getAvailableUpgradeMajorVersion() { DARABONBA_GET(availableUpgradeMajorVersion_) };
      inline DBCluster& setAvailableUpgradeMajorVersion(const Darabonba::Json & availableUpgradeMajorVersion) { DARABONBA_SET_VALUE(availableUpgradeMajorVersion_, availableUpgradeMajorVersion) };
      inline DBCluster& setAvailableUpgradeMajorVersion(Darabonba::Json && availableUpgradeMajorVersion) { DARABONBA_SET_RVALUE(availableUpgradeMajorVersion_, availableUpgradeMajorVersion) };


      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
      inline DBCluster& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline DBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline DBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // controlVersion Field Functions 
      bool hasControlVersion() const { return this->controlVersion_ != nullptr;};
      void deleteControlVersion() { this->controlVersion_ = nullptr;};
      inline string getControlVersion() const { DARABONBA_PTR_GET_DEFAULT(controlVersion_, "") };
      inline DBCluster& setControlVersion(string controlVersion) { DARABONBA_PTR_SET_VALUE(controlVersion_, controlVersion) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBClusterDescription Field Functions 
      bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
      void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
      inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
      inline DBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline DBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBClusterNetworkType Field Functions 
      bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
      void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
      inline string getDBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
      inline DBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


      // DBClusterStatus Field Functions 
      bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
      void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
      inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
      inline DBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


      // DBClusterType Field Functions 
      bool hasDBClusterType() const { return this->DBClusterType_ != nullptr;};
      void deleteDBClusterType() { this->DBClusterType_ = nullptr;};
      inline string getDBClusterType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterType_, "") };
      inline DBCluster& setDBClusterType(string DBClusterType) { DARABONBA_PTR_SET_VALUE(DBClusterType_, DBClusterType) };


      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline DBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


      // DBNodeCount Field Functions 
      bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
      void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
      inline int64_t getDBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
      inline DBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


      // DBNodeStorage Field Functions 
      bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
      void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
      inline int64_t getDBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
      inline DBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


      // encryptionKey Field Functions 
      bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
      void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
      inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
      inline DBCluster& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


      // encryptionType Field Functions 
      bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
      void deleteEncryptionType() { this->encryptionType_ = nullptr;};
      inline string getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
      inline DBCluster& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline DBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineLatestMinorVersion Field Functions 
      bool hasEngineLatestMinorVersion() const { return this->engineLatestMinorVersion_ != nullptr;};
      void deleteEngineLatestMinorVersion() { this->engineLatestMinorVersion_ = nullptr;};
      inline string getEngineLatestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineLatestMinorVersion_, "") };
      inline DBCluster& setEngineLatestMinorVersion(string engineLatestMinorVersion) { DARABONBA_PTR_SET_VALUE(engineLatestMinorVersion_, engineLatestMinorVersion) };


      // engineMinorVersion Field Functions 
      bool hasEngineMinorVersion() const { return this->engineMinorVersion_ != nullptr;};
      void deleteEngineMinorVersion() { this->engineMinorVersion_ = nullptr;};
      inline string getEngineMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(engineMinorVersion_, "") };
      inline DBCluster& setEngineMinorVersion(string engineMinorVersion) { DARABONBA_PTR_SET_VALUE(engineMinorVersion_, engineMinorVersion) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline DBCluster& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline DBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // extStorageSize Field Functions 
      bool hasExtStorageSize() const { return this->extStorageSize_ != nullptr;};
      void deleteExtStorageSize() { this->extStorageSize_ = nullptr;};
      inline int32_t getExtStorageSize() const { DARABONBA_PTR_GET_DEFAULT(extStorageSize_, 0) };
      inline DBCluster& setExtStorageSize(int32_t extStorageSize) { DARABONBA_PTR_SET_VALUE(extStorageSize_, extStorageSize) };


      // extStorageType Field Functions 
      bool hasExtStorageType() const { return this->extStorageType_ != nullptr;};
      void deleteExtStorageType() { this->extStorageType_ = nullptr;};
      inline string getExtStorageType() const { DARABONBA_PTR_GET_DEFAULT(extStorageType_, "") };
      inline DBCluster& setExtStorageType(string extStorageType) { DARABONBA_PTR_SET_VALUE(extStorageType_, extStorageType) };


      // isExpired Field Functions 
      bool hasIsExpired() const { return this->isExpired_ != nullptr;};
      void deleteIsExpired() { this->isExpired_ = nullptr;};
      inline string getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, "") };
      inline DBCluster& setIsExpired(string isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


      // lockMode Field Functions 
      bool hasLockMode() const { return this->lockMode_ != nullptr;};
      void deleteLockMode() { this->lockMode_ = nullptr;};
      inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
      inline DBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline DBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // maintainAutoType Field Functions 
      bool hasMaintainAutoType() const { return this->maintainAutoType_ != nullptr;};
      void deleteMaintainAutoType() { this->maintainAutoType_ = nullptr;};
      inline bool getMaintainAutoType() const { DARABONBA_PTR_GET_DEFAULT(maintainAutoType_, false) };
      inline DBCluster& setMaintainAutoType(bool maintainAutoType) { DARABONBA_PTR_SET_VALUE(maintainAutoType_, maintainAutoType) };


      // maintainTime Field Functions 
      bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
      void deleteMaintainTime() { this->maintainTime_ = nullptr;};
      inline string getMaintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
      inline DBCluster& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline DBCluster& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // publicConnectionString Field Functions 
      bool hasPublicConnectionString() const { return this->publicConnectionString_ != nullptr;};
      void deletePublicConnectionString() { this->publicConnectionString_ = nullptr;};
      inline string getPublicConnectionString() const { DARABONBA_PTR_GET_DEFAULT(publicConnectionString_, "") };
      inline DBCluster& setPublicConnectionString(string publicConnectionString) { DARABONBA_PTR_SET_VALUE(publicConnectionString_, publicConnectionString) };


      // publicIpAddr Field Functions 
      bool hasPublicIpAddr() const { return this->publicIpAddr_ != nullptr;};
      void deletePublicIpAddr() { this->publicIpAddr_ = nullptr;};
      inline string getPublicIpAddr() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddr_, "") };
      inline DBCluster& setPublicIpAddr(string publicIpAddr) { DARABONBA_PTR_SET_VALUE(publicIpAddr_, publicIpAddr) };


      // publicPort Field Functions 
      bool hasPublicPort() const { return this->publicPort_ != nullptr;};
      void deletePublicPort() { this->publicPort_ = nullptr;};
      inline string getPublicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, "") };
      inline DBCluster& setPublicPort(string publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scaleOutStatus Field Functions 
      bool hasScaleOutStatus() const { return this->scaleOutStatus_ != nullptr;};
      void deleteScaleOutStatus() { this->scaleOutStatus_ = nullptr;};
      inline const DBCluster::ScaleOutStatus & getScaleOutStatus() const { DARABONBA_PTR_GET_CONST(scaleOutStatus_, DBCluster::ScaleOutStatus) };
      inline DBCluster::ScaleOutStatus getScaleOutStatus() { DARABONBA_PTR_GET(scaleOutStatus_, DBCluster::ScaleOutStatus) };
      inline DBCluster& setScaleOutStatus(const DBCluster::ScaleOutStatus & scaleOutStatus) { DARABONBA_PTR_SET_VALUE(scaleOutStatus_, scaleOutStatus) };
      inline DBCluster& setScaleOutStatus(DBCluster::ScaleOutStatus && scaleOutStatus) { DARABONBA_PTR_SET_RVALUE(scaleOutStatus_, scaleOutStatus) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline DBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // supportBackup Field Functions 
      bool hasSupportBackup() const { return this->supportBackup_ != nullptr;};
      void deleteSupportBackup() { this->supportBackup_ = nullptr;};
      inline int32_t getSupportBackup() const { DARABONBA_PTR_GET_DEFAULT(supportBackup_, 0) };
      inline DBCluster& setSupportBackup(int32_t supportBackup) { DARABONBA_PTR_SET_VALUE(supportBackup_, supportBackup) };


      // supportHttpsPort Field Functions 
      bool hasSupportHttpsPort() const { return this->supportHttpsPort_ != nullptr;};
      void deleteSupportHttpsPort() { this->supportHttpsPort_ = nullptr;};
      inline bool getSupportHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(supportHttpsPort_, false) };
      inline DBCluster& setSupportHttpsPort(bool supportHttpsPort) { DARABONBA_PTR_SET_VALUE(supportHttpsPort_, supportHttpsPort) };


      // supportMysqlPort Field Functions 
      bool hasSupportMysqlPort() const { return this->supportMysqlPort_ != nullptr;};
      void deleteSupportMysqlPort() { this->supportMysqlPort_ = nullptr;};
      inline bool getSupportMysqlPort() const { DARABONBA_PTR_GET_DEFAULT(supportMysqlPort_, false) };
      inline DBCluster& setSupportMysqlPort(bool supportMysqlPort) { DARABONBA_PTR_SET_VALUE(supportMysqlPort_, supportMysqlPort) };


      // supportOss Field Functions 
      bool hasSupportOss() const { return this->supportOss_ != nullptr;};
      void deleteSupportOss() { this->supportOss_ = nullptr;};
      inline int32_t getSupportOss() const { DARABONBA_PTR_GET_DEFAULT(supportOss_, 0) };
      inline DBCluster& setSupportOss(int32_t supportOss) { DARABONBA_PTR_SET_VALUE(supportOss_, supportOss) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const DBCluster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBCluster::Tags) };
      inline DBCluster::Tags getTags() { DARABONBA_PTR_GET(tags_, DBCluster::Tags) };
      inline DBCluster& setTags(const DBCluster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DBCluster& setTags(DBCluster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline DBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcCloudInstanceId Field Functions 
      bool hasVpcCloudInstanceId() const { return this->vpcCloudInstanceId_ != nullptr;};
      void deleteVpcCloudInstanceId() { this->vpcCloudInstanceId_ = nullptr;};
      inline string getVpcCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcCloudInstanceId_, "") };
      inline DBCluster& setVpcCloudInstanceId(string vpcCloudInstanceId) { DARABONBA_PTR_SET_VALUE(vpcCloudInstanceId_, vpcCloudInstanceId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline DBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcIpAddr Field Functions 
      bool hasVpcIpAddr() const { return this->vpcIpAddr_ != nullptr;};
      void deleteVpcIpAddr() { this->vpcIpAddr_ = nullptr;};
      inline string getVpcIpAddr() const { DARABONBA_PTR_GET_DEFAULT(vpcIpAddr_, "") };
      inline DBCluster& setVpcIpAddr(string vpcIpAddr) { DARABONBA_PTR_SET_VALUE(vpcIpAddr_, vpcIpAddr) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // zoneIdVswitchMap Field Functions 
      bool hasZoneIdVswitchMap() const { return this->zoneIdVswitchMap_ != nullptr;};
      void deleteZoneIdVswitchMap() { this->zoneIdVswitchMap_ = nullptr;};
      inline       const Darabonba::Json & getZoneIdVswitchMap() const { DARABONBA_GET(zoneIdVswitchMap_) };
      Darabonba::Json & getZoneIdVswitchMap() { DARABONBA_GET(zoneIdVswitchMap_) };
      inline DBCluster& setZoneIdVswitchMap(const Darabonba::Json & zoneIdVswitchMap) { DARABONBA_SET_VALUE(zoneIdVswitchMap_, zoneIdVswitchMap) };
      inline DBCluster& setZoneIdVswitchMap(Darabonba::Json && zoneIdVswitchMap) { DARABONBA_SET_RVALUE(zoneIdVswitchMap_, zoneIdVswitchMap) };


      // zookeeperClass Field Functions 
      bool hasZookeeperClass() const { return this->zookeeperClass_ != nullptr;};
      void deleteZookeeperClass() { this->zookeeperClass_ = nullptr;};
      inline string getZookeeperClass() const { DARABONBA_PTR_GET_DEFAULT(zookeeperClass_, "") };
      inline DBCluster& setZookeeperClass(string zookeeperClass) { DARABONBA_PTR_SET_VALUE(zookeeperClass_, zookeeperClass) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      shared_ptr<bool> appointmentElectZookeeperDisableWrite_ {};
      shared_ptr<string> appointmentElectZookeeperTime_ {};
      shared_ptr<string> appointmentRestartNodeList_ {};
      shared_ptr<string> appointmentRestartNodeTime_ {};
      // The scheduled restart time. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in Coordinated Universal Time (UTC).
      shared_ptr<string> appointmentRestartTime_ {};
      // The major engine versions available for upgrades.
      Darabonba::Json availableUpgradeMajorVersion_ {};
      // The site ID. Valid values:
      // 
      // *   **26842**: the China site (aliyun.com)
      // *   **26888**: the international site (alibabacloud.com)
      shared_ptr<string> bid_ {};
      // The edition of the cluster. Valid values:
      // 
      // *   **Basic**: Single-replica Edition
      // *   **HighAvailability**: Double-replica Edition
      shared_ptr<string> category_ {};
      // The commodity code of the cluster.
      shared_ptr<string> commodityCode_ {};
      // The VPC endpoint of the cluster.
      shared_ptr<string> connectionString_ {};
      // The version of the ApsaraDB for ClickHouse console that is used to manage the cluster. Valid values:
      // 
      // *   **v1**
      // *   **v2**
      shared_ptr<string> controlVersion_ {};
      // The time when the cluster was created. The value is in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the cluster.
      shared_ptr<string> DBClusterDescription_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The network type of the cluster. Only VPC is supported.
      shared_ptr<string> DBClusterNetworkType_ {};
      // The cluster state. Valid values:
      // 
      // *   **Preparing**: The cluster is being prepared.
      // *   **Creating**: The cluster is being created.
      // *   **Running**: The cluster is running.
      // *   **Deleting**: The cluster is being deleted.
      // *   **SCALING_OUT**: The storage capacity of the cluster is being expanded.
      shared_ptr<string> DBClusterStatus_ {};
      // The type of the cluster. Valid values:
      // 
      // *   **Common**: a common cluster
      // *   **Readonly**: a read-only cluster
      // *   **Guard**: a disaster recovery cluster
      shared_ptr<string> DBClusterType_ {};
      // The specifications of the cluster.
      // 
      // *   Valid values when the cluster is of Single-replica Edition:
      // 
      //     *   **S4-NEW**
      //     *   **S8**
      //     *   **S16**
      //     *   **S32**
      //     *   **S64**
      //     *   **S104**
      // 
      // *   Valid values when the cluster is of Double-replica Edition:
      // 
      //     *   **C4-NEW**
      //     *   **C8**
      //     *   **C16**
      //     *   **C32**
      //     *   **C64**
      //     *   **C104**
      shared_ptr<string> DBNodeClass_ {};
      // The number of nodes.
      // 
      // *   Valid values when the cluster is of Single-replica Edition: 1 to 48.
      // *   Valid values when the cluster is of Double-replica Edition: 1 to 24.
      shared_ptr<int64_t> DBNodeCount_ {};
      // The storage capacity of a single node of the cluster. Unit: GB.
      // 
      // Valid values: 100 to 32000.
      // 
      // >  This value is a multiple of 100.
      shared_ptr<int64_t> DBNodeStorage_ {};
      // The Key Management Service (KMS) key that is used to encrypt data.
      // 
      // >  If the value of the EncryptionType parameter is off, an empty string is returned for this parameter.
      shared_ptr<string> encryptionKey_ {};
      // The encryption type. Valid values:
      // 
      // *   **CloudDisk**: Disk encryption is enabled.
      // *   **off**: Data is not encrypted.
      shared_ptr<string> encryptionType_ {};
      // The type of the database engine.
      shared_ptr<string> engine_ {};
      // The latest minor version to which the cluster can be updated.
      shared_ptr<string> engineLatestMinorVersion_ {};
      // The current minor version.
      shared_ptr<string> engineMinorVersion_ {};
      // The engine version.
      shared_ptr<string> engineVersion_ {};
      // The time when the cluster expired. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
      // 
      // >  Pay-as-you-go clusters never expire. If the cluster is a pay-as-you-go cluster, an empty string is returned for this parameter.
      shared_ptr<string> expireTime_ {};
      // The extended storage space. Unit: GB.
      shared_ptr<int32_t> extStorageSize_ {};
      // The extended storage type. Valid values:
      // 
      // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
      // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
      // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
      // *   **CloudEfficiency**: The cluster uses an ultra disk.
      shared_ptr<string> extStorageType_ {};
      // Indicates whether the cluster has expired. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> isExpired_ {};
      // The lock mode of the cluster. Valid values:
      // 
      // *   **Unlock**: The cluster is not locked.
      // *   **ManualLock**: The cluster is manually locked.
      // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
      // *   **LockByRestoration**: The cluster is automatically locked because the cluster is about to be rolled back.
      // *   **LockByDiskQuota**: The cluster is automatically locked because the disk space is exhausted.
      shared_ptr<string> lockMode_ {};
      // The cause why the cluster was locked.
      // 
      // >  If the value of the LockMode parameter is Unlock, an empty string is returned for this parameter.
      shared_ptr<string> lockReason_ {};
      // The update type. If the value of the parameter is **false**, it indicates a manual update.
      shared_ptr<bool> maintainAutoType_ {};
      // The maintenance window of the cluster. The value is in the HH:mmZ-HH:mmZ format. The time is displayed in UTC.
      // 
      // For example, if you set the maintenance window to 00:00Z-01:00Z, the cluster can be maintained from 08:00 (UTC+8) to 09:00 (UTC+8).
      shared_ptr<string> maintainTime_ {};
      // The billing method of the cluster. Valid values:
      // 
      // *   **Postpaid**: indicates the pay-as-you-go billing method.
      // *   **Prepaid**: indicates the subscription billing method.
      shared_ptr<string> payType_ {};
      // The HTTP port number.
      shared_ptr<int32_t> port_ {};
      // The public endpoint.
      shared_ptr<string> publicConnectionString_ {};
      // The IP address that is used to connect to the cluster over the Internet.
      shared_ptr<string> publicIpAddr_ {};
      // The TCP port number in the public endpoint.
      shared_ptr<string> publicPort_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the data migration task.
      shared_ptr<DBCluster::ScaleOutStatus> scaleOutStatus_ {};
      // The storage type of the cluster. Valid values:
      // 
      // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level (PL) 1.
      // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL 2.
      // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL 3.
      // *   **CloudEfficiency**: The cluster uses an ultra disk.
      shared_ptr<string> storageType_ {};
      // Indicates whether data backup is supported. Valid values:
      // 
      // *   **1**: Data backup is supported.
      // *   **2**: Data backup is not supported.
      shared_ptr<int32_t> supportBackup_ {};
      // Indicates whether HTTPS ports are supported. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> supportHttpsPort_ {};
      // Indicates whether the cluster supports a MySQL port. Valid values:
      // 
      // *   **true**: A MySQL port is supported.
      // *   **false**: A MySQL port is not supported.
      shared_ptr<bool> supportMysqlPort_ {};
      // Indicates whether tiered storage of hot data and cold data is supported. Valid values:
      // 
      // *   **1**: Tiered storage of hot data and cold data is supported.
      // *   **2**: Tiered storage of hot data and cold data is not supported.
      shared_ptr<int32_t> supportOss_ {};
      // The tags.
      shared_ptr<DBCluster::Tags> tags_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the VPC in which the cluster is deployed.
      shared_ptr<string> vpcCloudInstanceId_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The IP address that is used to connect to the cluster over the VPC.
      shared_ptr<string> vpcIpAddr_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
      // The list of vSwitch IDs in multi-zone clusters.
      Darabonba::Json zoneIdVswitchMap_ {};
      // The ZooKeeper specifications.
      shared_ptr<string> zookeeperClass_ {};
    };

    virtual bool empty() const override { return this->DBCluster_ == nullptr
        && this->requestId_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const DescribeDBClusterAttributeResponseBody::DBCluster & getDBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, DescribeDBClusterAttributeResponseBody::DBCluster) };
    inline DescribeDBClusterAttributeResponseBody::DBCluster getDBCluster() { DARABONBA_PTR_GET(DBCluster_, DescribeDBClusterAttributeResponseBody::DBCluster) };
    inline DescribeDBClusterAttributeResponseBody& setDBCluster(const DescribeDBClusterAttributeResponseBody::DBCluster & dBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, dBCluster) };
    inline DescribeDBClusterAttributeResponseBody& setDBCluster(DescribeDBClusterAttributeResponseBody::DBCluster && dBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, dBCluster) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the cluster.
    shared_ptr<DescribeDBClusterAttributeResponseBody::DBCluster> DBCluster_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
