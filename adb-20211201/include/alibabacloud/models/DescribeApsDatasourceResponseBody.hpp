// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsDatasource, apsDatasource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsDatasource, apsDatasource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApsDatasourceResponseBody() = default ;
    DescribeApsDatasourceResponseBody(const DescribeApsDatasourceResponseBody &) = default ;
    DescribeApsDatasourceResponseBody(DescribeApsDatasourceResponseBody &&) = default ;
    DescribeApsDatasourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourceResponseBody() = default ;
    DescribeApsDatasourceResponseBody& operator=(const DescribeApsDatasourceResponseBody &) = default ;
    DescribeApsDatasourceResponseBody& operator=(DescribeApsDatasourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApsDatasource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApsDatasource& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DatabricksInfo, databricksInfo_);
        DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
        DARABONBA_PTR_TO_JSON(HiveInfo, hiveInfo_);
        DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfo_);
        DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
        DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfo_);
        DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ApsDatasource& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DatabricksInfo, databricksInfo_);
        DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
        DARABONBA_PTR_FROM_JSON(HiveInfo, hiveInfo_);
        DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfo_);
        DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
        DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfo_);
        DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
      };
      ApsDatasource() = default ;
      ApsDatasource(const ApsDatasource &) = default ;
      ApsDatasource(ApsDatasource &&) = default ;
      ApsDatasource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApsDatasource() = default ;
      ApsDatasource& operator=(const ApsDatasource &) = default ;
      ApsDatasource& operator=(ApsDatasource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Across, across_);
          DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
          DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
          DARABONBA_PTR_TO_JSON(Store, store_);
        };
        friend void from_json(const Darabonba::Json& j, SlsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Across, across_);
          DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
          DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
          DARABONBA_PTR_FROM_JSON(Store, store_);
        };
        SlsInfo() = default ;
        SlsInfo(const SlsInfo &) = default ;
        SlsInfo(SlsInfo &&) = default ;
        SlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsInfo() = default ;
        SlsInfo& operator=(const SlsInfo &) = default ;
        SlsInfo& operator=(SlsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->across_ == nullptr
        && this->acrossRole_ == nullptr && this->acrossUid_ == nullptr && this->project_ == nullptr && this->sourceRegionId_ == nullptr && this->store_ == nullptr; };
        // across Field Functions 
        bool hasAcross() const { return this->across_ != nullptr;};
        void deleteAcross() { this->across_ = nullptr;};
        inline bool getAcross() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
        inline SlsInfo& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


        // acrossRole Field Functions 
        bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
        void deleteAcrossRole() { this->acrossRole_ = nullptr;};
        inline string getAcrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
        inline SlsInfo& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


        // acrossUid Field Functions 
        bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
        void deleteAcrossUid() { this->acrossUid_ = nullptr;};
        inline string getAcrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
        inline SlsInfo& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline SlsInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // sourceRegionId Field Functions 
        bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
        void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
        inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
        inline SlsInfo& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


        // store Field Functions 
        bool hasStore() const { return this->store_ != nullptr;};
        void deleteStore() { this->store_ = nullptr;};
        inline string getStore() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
        inline SlsInfo& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


      protected:
        // Indicates whether the data source is a cross-account resource. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> across_ {};
        // The name of the cross-account role.
        shared_ptr<string> acrossRole_ {};
        // The cross-account UID.
        shared_ptr<string> acrossUid_ {};
        // The name of the SLS project.
        shared_ptr<string> project_ {};
        // The region ID.
        shared_ptr<string> sourceRegionId_ {};
        // The name of the SLS Logstore.
        shared_ptr<string> store_ {};
      };

      class RdsMysqlInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RdsMysqlInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, RdsMysqlInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        RdsMysqlInfo() = default ;
        RdsMysqlInfo(const RdsMysqlInfo &) = default ;
        RdsMysqlInfo(RdsMysqlInfo &&) = default ;
        RdsMysqlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RdsMysqlInfo() = default ;
        RdsMysqlInfo& operator=(const RdsMysqlInfo &) = default ;
        RdsMysqlInfo& operator=(RdsMysqlInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectUrl_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->securityGroup_ == nullptr && this->userName_ == nullptr; };
        // connectUrl Field Functions 
        bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
        void deleteConnectUrl() { this->connectUrl_ = nullptr;};
        inline string getConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
        inline RdsMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline RdsMysqlInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RdsMysqlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroup Field Functions 
        bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
        void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
        inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
        inline RdsMysqlInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline RdsMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The parameter is no longer supported.
        shared_ptr<string> connectUrl_ {};
        // The parameter is no longer supported.
        shared_ptr<string> instanceId_ {};
        // The parameter is no longer supported.
        shared_ptr<string> regionId_ {};
        // The parameter is no longer supported.
        shared_ptr<string> securityGroup_ {};
        // The parameter is no longer supported.
        shared_ptr<string> userName_ {};
      };

      class PolarDBMysqlInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolarDBMysqlInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Across, across_);
          DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
          DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
          DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, PolarDBMysqlInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Across, across_);
          DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
          DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
          DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        PolarDBMysqlInfo() = default ;
        PolarDBMysqlInfo(const PolarDBMysqlInfo &) = default ;
        PolarDBMysqlInfo(PolarDBMysqlInfo &&) = default ;
        PolarDBMysqlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolarDBMysqlInfo() = default ;
        PolarDBMysqlInfo& operator=(const PolarDBMysqlInfo &) = default ;
        PolarDBMysqlInfo& operator=(PolarDBMysqlInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->across_ == nullptr
        && this->acrossRole_ == nullptr && this->acrossUid_ == nullptr && this->connectUrl_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr
        && this->securityGroup_ == nullptr && this->userName_ == nullptr; };
        // across Field Functions 
        bool hasAcross() const { return this->across_ != nullptr;};
        void deleteAcross() { this->across_ = nullptr;};
        inline bool getAcross() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
        inline PolarDBMysqlInfo& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


        // acrossRole Field Functions 
        bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
        void deleteAcrossRole() { this->acrossRole_ = nullptr;};
        inline string getAcrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
        inline PolarDBMysqlInfo& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


        // acrossUid Field Functions 
        bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
        void deleteAcrossUid() { this->acrossUid_ = nullptr;};
        inline string getAcrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
        inline PolarDBMysqlInfo& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


        // connectUrl Field Functions 
        bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
        void deleteConnectUrl() { this->connectUrl_ = nullptr;};
        inline string getConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
        inline PolarDBMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline PolarDBMysqlInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PolarDBMysqlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroup Field Functions 
        bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
        void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
        inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
        inline PolarDBMysqlInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline PolarDBMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The parameter is no longer supported.
        shared_ptr<bool> across_ {};
        // The parameter is no longer supported.
        shared_ptr<string> acrossRole_ {};
        // The parameter is no longer supported.
        shared_ptr<string> acrossUid_ {};
        // The parameter is no longer supported.
        shared_ptr<string> connectUrl_ {};
        // The parameter is no longer supported.
        shared_ptr<string> instanceId_ {};
        // The parameter is no longer supported.
        shared_ptr<string> regionId_ {};
        // The parameter is no longer supported.
        shared_ptr<string> securityGroup_ {};
        // The parameter is no longer supported.
        shared_ptr<string> userName_ {};
      };

      class KafkaInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KafkaInfo& obj) { 
          DARABONBA_PTR_TO_JSON(KafkaClusterId, kafkaClusterId_);
          DARABONBA_PTR_TO_JSON(KafkaTopic, kafkaTopic_);
        };
        friend void from_json(const Darabonba::Json& j, KafkaInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(KafkaClusterId, kafkaClusterId_);
          DARABONBA_PTR_FROM_JSON(KafkaTopic, kafkaTopic_);
        };
        KafkaInfo() = default ;
        KafkaInfo(const KafkaInfo &) = default ;
        KafkaInfo(KafkaInfo &&) = default ;
        KafkaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KafkaInfo() = default ;
        KafkaInfo& operator=(const KafkaInfo &) = default ;
        KafkaInfo& operator=(KafkaInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->kafkaClusterId_ == nullptr
        && this->kafkaTopic_ == nullptr; };
        // kafkaClusterId Field Functions 
        bool hasKafkaClusterId() const { return this->kafkaClusterId_ != nullptr;};
        void deleteKafkaClusterId() { this->kafkaClusterId_ = nullptr;};
        inline string getKafkaClusterId() const { DARABONBA_PTR_GET_DEFAULT(kafkaClusterId_, "") };
        inline KafkaInfo& setKafkaClusterId(string kafkaClusterId) { DARABONBA_PTR_SET_VALUE(kafkaClusterId_, kafkaClusterId) };


        // kafkaTopic Field Functions 
        bool hasKafkaTopic() const { return this->kafkaTopic_ != nullptr;};
        void deleteKafkaTopic() { this->kafkaTopic_ = nullptr;};
        inline string getKafkaTopic() const { DARABONBA_PTR_GET_DEFAULT(kafkaTopic_, "") };
        inline KafkaInfo& setKafkaTopic(string kafkaTopic) { DARABONBA_PTR_SET_VALUE(kafkaTopic_, kafkaTopic) };


      protected:
        // The ID of the Kafka instance.
        shared_ptr<string> kafkaClusterId_ {};
        // The topic of the Kafka instance.
        shared_ptr<string> kafkaTopic_ {};
      };

      class HiveInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HiveInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EmrClusterId, emrClusterId_);
          DARABONBA_PTR_TO_JSON(MetaStoreUri, metaStoreUri_);
          DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
        };
        friend void from_json(const Darabonba::Json& j, HiveInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EmrClusterId, emrClusterId_);
          DARABONBA_PTR_FROM_JSON(MetaStoreUri, metaStoreUri_);
          DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
        };
        HiveInfo() = default ;
        HiveInfo(const HiveInfo &) = default ;
        HiveInfo(HiveInfo &&) = default ;
        HiveInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HiveInfo() = default ;
        HiveInfo& operator=(const HiveInfo &) = default ;
        HiveInfo& operator=(HiveInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->emrClusterId_ == nullptr
        && this->metaStoreUri_ == nullptr && this->securityGroup_ == nullptr && this->vswitch_ == nullptr; };
        // emrClusterId Field Functions 
        bool hasEmrClusterId() const { return this->emrClusterId_ != nullptr;};
        void deleteEmrClusterId() { this->emrClusterId_ = nullptr;};
        inline string getEmrClusterId() const { DARABONBA_PTR_GET_DEFAULT(emrClusterId_, "") };
        inline HiveInfo& setEmrClusterId(string emrClusterId) { DARABONBA_PTR_SET_VALUE(emrClusterId_, emrClusterId) };


        // metaStoreUri Field Functions 
        bool hasMetaStoreUri() const { return this->metaStoreUri_ != nullptr;};
        void deleteMetaStoreUri() { this->metaStoreUri_ = nullptr;};
        inline string getMetaStoreUri() const { DARABONBA_PTR_GET_DEFAULT(metaStoreUri_, "") };
        inline HiveInfo& setMetaStoreUri(string metaStoreUri) { DARABONBA_PTR_SET_VALUE(metaStoreUri_, metaStoreUri) };


        // securityGroup Field Functions 
        bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
        void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
        inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
        inline HiveInfo& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


        // vswitch Field Functions 
        bool hasVswitch() const { return this->vswitch_ != nullptr;};
        void deleteVswitch() { this->vswitch_ = nullptr;};
        inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
        inline HiveInfo& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


      protected:
        // The ID of the E-MapReduce (EMR) cluster.
        shared_ptr<string> emrClusterId_ {};
        // The URL of the Hive Metastore.
        shared_ptr<string> metaStoreUri_ {};
        // The security group ID.
        shared_ptr<string> securityGroup_ {};
        // The vSwitch ID.
        shared_ptr<string> vswitch_ {};
      };

      class DatabricksInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatabricksInfo& obj) { 
          DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
          DARABONBA_PTR_TO_JSON(workspaceURL, workspaceURL_);
        };
        friend void from_json(const Darabonba::Json& j, DatabricksInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
          DARABONBA_PTR_FROM_JSON(workspaceURL, workspaceURL_);
        };
        DatabricksInfo() = default ;
        DatabricksInfo(const DatabricksInfo &) = default ;
        DatabricksInfo(DatabricksInfo &&) = default ;
        DatabricksInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DatabricksInfo() = default ;
        DatabricksInfo& operator=(const DatabricksInfo &) = default ;
        DatabricksInfo& operator=(DatabricksInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->workspaceURL_ == nullptr; };
        // accessToken Field Functions 
        bool hasAccessToken() const { return this->accessToken_ != nullptr;};
        void deleteAccessToken() { this->accessToken_ = nullptr;};
        inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
        inline DatabricksInfo& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


        // workspaceURL Field Functions 
        bool hasWorkspaceURL() const { return this->workspaceURL_ != nullptr;};
        void deleteWorkspaceURL() { this->workspaceURL_ = nullptr;};
        inline string getWorkspaceURL() const { DARABONBA_PTR_GET_DEFAULT(workspaceURL_, "") };
        inline DatabricksInfo& setWorkspaceURL(string workspaceURL) { DARABONBA_PTR_SET_VALUE(workspaceURL_, workspaceURL) };


      protected:
        // The token that is used to access Databricks.
        shared_ptr<string> accessToken_ {};
        // The URL of the workspace.
        shared_ptr<string> workspaceURL_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBClusterId_ == nullptr && this->databricksInfo_ == nullptr && this->datasourceDescription_ == nullptr && this->datasourceName_ == nullptr && this->datasourceType_ == nullptr
        && this->hiveInfo_ == nullptr && this->kafkaInfo_ == nullptr && this->polarDBMysqlInfo_ == nullptr && this->rdsMysqlInfo_ == nullptr && this->slsInfo_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApsDatasource& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline ApsDatasource& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // databricksInfo Field Functions 
      bool hasDatabricksInfo() const { return this->databricksInfo_ != nullptr;};
      void deleteDatabricksInfo() { this->databricksInfo_ = nullptr;};
      inline const ApsDatasource::DatabricksInfo & getDatabricksInfo() const { DARABONBA_PTR_GET_CONST(databricksInfo_, ApsDatasource::DatabricksInfo) };
      inline ApsDatasource::DatabricksInfo getDatabricksInfo() { DARABONBA_PTR_GET(databricksInfo_, ApsDatasource::DatabricksInfo) };
      inline ApsDatasource& setDatabricksInfo(const ApsDatasource::DatabricksInfo & databricksInfo) { DARABONBA_PTR_SET_VALUE(databricksInfo_, databricksInfo) };
      inline ApsDatasource& setDatabricksInfo(ApsDatasource::DatabricksInfo && databricksInfo) { DARABONBA_PTR_SET_RVALUE(databricksInfo_, databricksInfo) };


      // datasourceDescription Field Functions 
      bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
      void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
      inline string getDatasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
      inline ApsDatasource& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline ApsDatasource& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // datasourceType Field Functions 
      bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
      void deleteDatasourceType() { this->datasourceType_ = nullptr;};
      inline string getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
      inline ApsDatasource& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


      // hiveInfo Field Functions 
      bool hasHiveInfo() const { return this->hiveInfo_ != nullptr;};
      void deleteHiveInfo() { this->hiveInfo_ = nullptr;};
      inline const ApsDatasource::HiveInfo & getHiveInfo() const { DARABONBA_PTR_GET_CONST(hiveInfo_, ApsDatasource::HiveInfo) };
      inline ApsDatasource::HiveInfo getHiveInfo() { DARABONBA_PTR_GET(hiveInfo_, ApsDatasource::HiveInfo) };
      inline ApsDatasource& setHiveInfo(const ApsDatasource::HiveInfo & hiveInfo) { DARABONBA_PTR_SET_VALUE(hiveInfo_, hiveInfo) };
      inline ApsDatasource& setHiveInfo(ApsDatasource::HiveInfo && hiveInfo) { DARABONBA_PTR_SET_RVALUE(hiveInfo_, hiveInfo) };


      // kafkaInfo Field Functions 
      bool hasKafkaInfo() const { return this->kafkaInfo_ != nullptr;};
      void deleteKafkaInfo() { this->kafkaInfo_ = nullptr;};
      inline const ApsDatasource::KafkaInfo & getKafkaInfo() const { DARABONBA_PTR_GET_CONST(kafkaInfo_, ApsDatasource::KafkaInfo) };
      inline ApsDatasource::KafkaInfo getKafkaInfo() { DARABONBA_PTR_GET(kafkaInfo_, ApsDatasource::KafkaInfo) };
      inline ApsDatasource& setKafkaInfo(const ApsDatasource::KafkaInfo & kafkaInfo) { DARABONBA_PTR_SET_VALUE(kafkaInfo_, kafkaInfo) };
      inline ApsDatasource& setKafkaInfo(ApsDatasource::KafkaInfo && kafkaInfo) { DARABONBA_PTR_SET_RVALUE(kafkaInfo_, kafkaInfo) };


      // polarDBMysqlInfo Field Functions 
      bool hasPolarDBMysqlInfo() const { return this->polarDBMysqlInfo_ != nullptr;};
      void deletePolarDBMysqlInfo() { this->polarDBMysqlInfo_ = nullptr;};
      inline const ApsDatasource::PolarDBMysqlInfo & getPolarDBMysqlInfo() const { DARABONBA_PTR_GET_CONST(polarDBMysqlInfo_, ApsDatasource::PolarDBMysqlInfo) };
      inline ApsDatasource::PolarDBMysqlInfo getPolarDBMysqlInfo() { DARABONBA_PTR_GET(polarDBMysqlInfo_, ApsDatasource::PolarDBMysqlInfo) };
      inline ApsDatasource& setPolarDBMysqlInfo(const ApsDatasource::PolarDBMysqlInfo & polarDBMysqlInfo) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };
      inline ApsDatasource& setPolarDBMysqlInfo(ApsDatasource::PolarDBMysqlInfo && polarDBMysqlInfo) { DARABONBA_PTR_SET_RVALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };


      // rdsMysqlInfo Field Functions 
      bool hasRdsMysqlInfo() const { return this->rdsMysqlInfo_ != nullptr;};
      void deleteRdsMysqlInfo() { this->rdsMysqlInfo_ = nullptr;};
      inline const ApsDatasource::RdsMysqlInfo & getRdsMysqlInfo() const { DARABONBA_PTR_GET_CONST(rdsMysqlInfo_, ApsDatasource::RdsMysqlInfo) };
      inline ApsDatasource::RdsMysqlInfo getRdsMysqlInfo() { DARABONBA_PTR_GET(rdsMysqlInfo_, ApsDatasource::RdsMysqlInfo) };
      inline ApsDatasource& setRdsMysqlInfo(const ApsDatasource::RdsMysqlInfo & rdsMysqlInfo) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfo_, rdsMysqlInfo) };
      inline ApsDatasource& setRdsMysqlInfo(ApsDatasource::RdsMysqlInfo && rdsMysqlInfo) { DARABONBA_PTR_SET_RVALUE(rdsMysqlInfo_, rdsMysqlInfo) };


      // slsInfo Field Functions 
      bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
      void deleteSlsInfo() { this->slsInfo_ = nullptr;};
      inline const ApsDatasource::SlsInfo & getSlsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, ApsDatasource::SlsInfo) };
      inline ApsDatasource::SlsInfo getSlsInfo() { DARABONBA_PTR_GET(slsInfo_, ApsDatasource::SlsInfo) };
      inline ApsDatasource& setSlsInfo(const ApsDatasource::SlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
      inline ApsDatasource& setSlsInfo(ApsDatasource::SlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


    protected:
      // The time when the data source was created.
      shared_ptr<string> createTime_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The information about Databricks.
      shared_ptr<ApsDatasource::DatabricksInfo> databricksInfo_ {};
      // The description of the data source.
      shared_ptr<string> datasourceDescription_ {};
      // The name of the data source.
      shared_ptr<string> datasourceName_ {};
      // The type of the data source.
      shared_ptr<string> datasourceType_ {};
      // The information about the Hive data source.
      shared_ptr<ApsDatasource::HiveInfo> hiveInfo_ {};
      // The information about the Kafka instance.
      shared_ptr<ApsDatasource::KafkaInfo> kafkaInfo_ {};
      // The parameter is no longer supported.
      shared_ptr<ApsDatasource::PolarDBMysqlInfo> polarDBMysqlInfo_ {};
      // The parameter is no longer supported.
      shared_ptr<ApsDatasource::RdsMysqlInfo> rdsMysqlInfo_ {};
      // The Simple Log Service (SLS) project.
      shared_ptr<ApsDatasource::SlsInfo> slsInfo_ {};
    };

    virtual bool empty() const override { return this->apsDatasource_ == nullptr
        && this->requestId_ == nullptr; };
    // apsDatasource Field Functions 
    bool hasApsDatasource() const { return this->apsDatasource_ != nullptr;};
    void deleteApsDatasource() { this->apsDatasource_ = nullptr;};
    inline const DescribeApsDatasourceResponseBody::ApsDatasource & getApsDatasource() const { DARABONBA_PTR_GET_CONST(apsDatasource_, DescribeApsDatasourceResponseBody::ApsDatasource) };
    inline DescribeApsDatasourceResponseBody::ApsDatasource getApsDatasource() { DARABONBA_PTR_GET(apsDatasource_, DescribeApsDatasourceResponseBody::ApsDatasource) };
    inline DescribeApsDatasourceResponseBody& setApsDatasource(const DescribeApsDatasourceResponseBody::ApsDatasource & apsDatasource) { DARABONBA_PTR_SET_VALUE(apsDatasource_, apsDatasource) };
    inline DescribeApsDatasourceResponseBody& setApsDatasource(DescribeApsDatasourceResponseBody::ApsDatasource && apsDatasource) { DARABONBA_PTR_SET_RVALUE(apsDatasource_, apsDatasource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsDatasourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried APS data source.
    shared_ptr<DescribeApsDatasourceResponseBody::ApsDatasource> apsDatasource_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
