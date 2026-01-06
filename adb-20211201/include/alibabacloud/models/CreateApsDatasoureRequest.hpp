// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabricksInfo, databricksInfo_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(HiveInfo, hiveInfo_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_TO_JSON(PolarDBXInfo, polarDBXInfo_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabricksInfo, databricksInfo_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(HiveInfo, hiveInfo_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(PolarDBXInfo, polarDBXInfo_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    CreateApsDatasoureRequest() = default ;
    CreateApsDatasoureRequest(const CreateApsDatasoureRequest &) = default ;
    CreateApsDatasoureRequest(CreateApsDatasoureRequest &&) = default ;
    CreateApsDatasoureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequest() = default ;
    CreateApsDatasoureRequest& operator=(const CreateApsDatasoureRequest &) = default ;
    CreateApsDatasoureRequest& operator=(CreateApsDatasoureRequest &&) = default ;
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
      // Specifies whether the data source is a cross-account resource.
      shared_ptr<bool> across_ {};
      // The name of the cross-account role.
      shared_ptr<string> acrossRole_ {};
      // The cross-account UID.
      shared_ptr<string> acrossUid_ {};
      // The SLS project.
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
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, RdsMysqlInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
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
        && this->instanceId_ == nullptr && this->password_ == nullptr && this->regionId_ == nullptr && this->securityGroup_ == nullptr && this->userName_ == nullptr; };
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


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline RdsMysqlInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


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
      // The URL used to connect to the read-only instance.
      shared_ptr<string> connectUrl_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The password of the database account of the instance.
      shared_ptr<string> password_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The security group ID.
      shared_ptr<string> securityGroup_ {};
      // The name of the database account of the instance.
      shared_ptr<string> userName_ {};
    };

    class PolarDBXInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolarDBXInfo& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, PolarDBXInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      PolarDBXInfo() = default ;
      PolarDBXInfo(const PolarDBXInfo &) = default ;
      PolarDBXInfo(PolarDBXInfo &&) = default ;
      PolarDBXInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolarDBXInfo() = default ;
      PolarDBXInfo& operator=(const PolarDBXInfo &) = default ;
      PolarDBXInfo& operator=(PolarDBXInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PolarDBXInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The instance ID.
      shared_ptr<string> instanceId_ {};
    };

    class PolarDBMysqlInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolarDBMysqlInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Across, across_);
        DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
        DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
        DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Password, password_);
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
        DARABONBA_PTR_FROM_JSON(Password, password_);
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
        && this->acrossRole_ == nullptr && this->acrossUid_ == nullptr && this->connectUrl_ == nullptr && this->instanceId_ == nullptr && this->password_ == nullptr
        && this->regionId_ == nullptr && this->securityGroup_ == nullptr && this->userName_ == nullptr; };
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


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline PolarDBMysqlInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


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
      // Specifies whether the data source is a cross-account resource. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> across_ {};
      // The name of the cross-account role.
      shared_ptr<string> acrossRole_ {};
      // The cross-account UID.
      shared_ptr<string> acrossUid_ {};
      // The URL used to connect to the custom ApsaraDB RDS for MySQL instance.
      shared_ptr<string> connectUrl_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The security group ID.
      shared_ptr<string> securityGroup_ {};
      // The username used to access the instance.
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
      // The ID of the Apache Kafka instance.
      shared_ptr<string> kafkaClusterId_ {};
      // The topic of the Apache Kafka instance.
      shared_ptr<string> kafkaTopic_ {};
    };

    class HiveInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HiveInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(HostConfig, hostConfig_);
        DARABONBA_PTR_TO_JSON(MetaStoreUri, metaStoreUri_);
        DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
      };
      friend void from_json(const Darabonba::Json& j, HiveInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(HostConfig, hostConfig_);
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
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->hostConfig_ == nullptr && this->metaStoreUri_ == nullptr && this->securityGroup_ == nullptr && this->vswitch_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline HiveInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // hostConfig Field Functions 
      bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
      void deleteHostConfig() { this->hostConfig_ = nullptr;};
      inline string getHostConfig() const { DARABONBA_PTR_GET_DEFAULT(hostConfig_, "") };
      inline HiveInfo& setHostConfig(string hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };


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
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The configuration of the host.
      shared_ptr<string> hostConfig_ {};
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
        DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_TO_JSON(WorkspaceURL, workspaceURL_);
      };
      friend void from_json(const Darabonba::Json& j, DatabricksInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_FROM_JSON(WorkspaceURL, workspaceURL_);
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

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->databricksInfo_ == nullptr && this->datasourceDescription_ == nullptr && this->datasourceName_ == nullptr && this->datasourceType_ == nullptr && this->hiveInfo_ == nullptr
        && this->kafkaInfo_ == nullptr && this->mode_ == nullptr && this->polarDBMysqlInfo_ == nullptr && this->polarDBXInfo_ == nullptr && this->rdsMysqlInfo_ == nullptr
        && this->regionId_ == nullptr && this->slsInfo_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsDatasoureRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databricksInfo Field Functions 
    bool hasDatabricksInfo() const { return this->databricksInfo_ != nullptr;};
    void deleteDatabricksInfo() { this->databricksInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::DatabricksInfo & getDatabricksInfo() const { DARABONBA_PTR_GET_CONST(databricksInfo_, CreateApsDatasoureRequest::DatabricksInfo) };
    inline CreateApsDatasoureRequest::DatabricksInfo getDatabricksInfo() { DARABONBA_PTR_GET(databricksInfo_, CreateApsDatasoureRequest::DatabricksInfo) };
    inline CreateApsDatasoureRequest& setDatabricksInfo(const CreateApsDatasoureRequest::DatabricksInfo & databricksInfo) { DARABONBA_PTR_SET_VALUE(databricksInfo_, databricksInfo) };
    inline CreateApsDatasoureRequest& setDatabricksInfo(CreateApsDatasoureRequest::DatabricksInfo && databricksInfo) { DARABONBA_PTR_SET_RVALUE(databricksInfo_, databricksInfo) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string getDatasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline CreateApsDatasoureRequest& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline CreateApsDatasoureRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline string getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
    inline CreateApsDatasoureRequest& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // hiveInfo Field Functions 
    bool hasHiveInfo() const { return this->hiveInfo_ != nullptr;};
    void deleteHiveInfo() { this->hiveInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::HiveInfo & getHiveInfo() const { DARABONBA_PTR_GET_CONST(hiveInfo_, CreateApsDatasoureRequest::HiveInfo) };
    inline CreateApsDatasoureRequest::HiveInfo getHiveInfo() { DARABONBA_PTR_GET(hiveInfo_, CreateApsDatasoureRequest::HiveInfo) };
    inline CreateApsDatasoureRequest& setHiveInfo(const CreateApsDatasoureRequest::HiveInfo & hiveInfo) { DARABONBA_PTR_SET_VALUE(hiveInfo_, hiveInfo) };
    inline CreateApsDatasoureRequest& setHiveInfo(CreateApsDatasoureRequest::HiveInfo && hiveInfo) { DARABONBA_PTR_SET_RVALUE(hiveInfo_, hiveInfo) };


    // kafkaInfo Field Functions 
    bool hasKafkaInfo() const { return this->kafkaInfo_ != nullptr;};
    void deleteKafkaInfo() { this->kafkaInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::KafkaInfo & getKafkaInfo() const { DARABONBA_PTR_GET_CONST(kafkaInfo_, CreateApsDatasoureRequest::KafkaInfo) };
    inline CreateApsDatasoureRequest::KafkaInfo getKafkaInfo() { DARABONBA_PTR_GET(kafkaInfo_, CreateApsDatasoureRequest::KafkaInfo) };
    inline CreateApsDatasoureRequest& setKafkaInfo(const CreateApsDatasoureRequest::KafkaInfo & kafkaInfo) { DARABONBA_PTR_SET_VALUE(kafkaInfo_, kafkaInfo) };
    inline CreateApsDatasoureRequest& setKafkaInfo(CreateApsDatasoureRequest::KafkaInfo && kafkaInfo) { DARABONBA_PTR_SET_RVALUE(kafkaInfo_, kafkaInfo) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateApsDatasoureRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // polarDBMysqlInfo Field Functions 
    bool hasPolarDBMysqlInfo() const { return this->polarDBMysqlInfo_ != nullptr;};
    void deletePolarDBMysqlInfo() { this->polarDBMysqlInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::PolarDBMysqlInfo & getPolarDBMysqlInfo() const { DARABONBA_PTR_GET_CONST(polarDBMysqlInfo_, CreateApsDatasoureRequest::PolarDBMysqlInfo) };
    inline CreateApsDatasoureRequest::PolarDBMysqlInfo getPolarDBMysqlInfo() { DARABONBA_PTR_GET(polarDBMysqlInfo_, CreateApsDatasoureRequest::PolarDBMysqlInfo) };
    inline CreateApsDatasoureRequest& setPolarDBMysqlInfo(const CreateApsDatasoureRequest::PolarDBMysqlInfo & polarDBMysqlInfo) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };
    inline CreateApsDatasoureRequest& setPolarDBMysqlInfo(CreateApsDatasoureRequest::PolarDBMysqlInfo && polarDBMysqlInfo) { DARABONBA_PTR_SET_RVALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };


    // polarDBXInfo Field Functions 
    bool hasPolarDBXInfo() const { return this->polarDBXInfo_ != nullptr;};
    void deletePolarDBXInfo() { this->polarDBXInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::PolarDBXInfo & getPolarDBXInfo() const { DARABONBA_PTR_GET_CONST(polarDBXInfo_, CreateApsDatasoureRequest::PolarDBXInfo) };
    inline CreateApsDatasoureRequest::PolarDBXInfo getPolarDBXInfo() { DARABONBA_PTR_GET(polarDBXInfo_, CreateApsDatasoureRequest::PolarDBXInfo) };
    inline CreateApsDatasoureRequest& setPolarDBXInfo(const CreateApsDatasoureRequest::PolarDBXInfo & polarDBXInfo) { DARABONBA_PTR_SET_VALUE(polarDBXInfo_, polarDBXInfo) };
    inline CreateApsDatasoureRequest& setPolarDBXInfo(CreateApsDatasoureRequest::PolarDBXInfo && polarDBXInfo) { DARABONBA_PTR_SET_RVALUE(polarDBXInfo_, polarDBXInfo) };


    // rdsMysqlInfo Field Functions 
    bool hasRdsMysqlInfo() const { return this->rdsMysqlInfo_ != nullptr;};
    void deleteRdsMysqlInfo() { this->rdsMysqlInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::RdsMysqlInfo & getRdsMysqlInfo() const { DARABONBA_PTR_GET_CONST(rdsMysqlInfo_, CreateApsDatasoureRequest::RdsMysqlInfo) };
    inline CreateApsDatasoureRequest::RdsMysqlInfo getRdsMysqlInfo() { DARABONBA_PTR_GET(rdsMysqlInfo_, CreateApsDatasoureRequest::RdsMysqlInfo) };
    inline CreateApsDatasoureRequest& setRdsMysqlInfo(const CreateApsDatasoureRequest::RdsMysqlInfo & rdsMysqlInfo) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfo_, rdsMysqlInfo) };
    inline CreateApsDatasoureRequest& setRdsMysqlInfo(CreateApsDatasoureRequest::RdsMysqlInfo && rdsMysqlInfo) { DARABONBA_PTR_SET_RVALUE(rdsMysqlInfo_, rdsMysqlInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsDatasoureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const CreateApsDatasoureRequest::SlsInfo & getSlsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, CreateApsDatasoureRequest::SlsInfo) };
    inline CreateApsDatasoureRequest::SlsInfo getSlsInfo() { DARABONBA_PTR_GET(slsInfo_, CreateApsDatasoureRequest::SlsInfo) };
    inline CreateApsDatasoureRequest& setSlsInfo(const CreateApsDatasoureRequest::SlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline CreateApsDatasoureRequest& setSlsInfo(CreateApsDatasoureRequest::SlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The information about the Databricks data source.
    shared_ptr<CreateApsDatasoureRequest::DatabricksInfo> databricksInfo_ {};
    // The description of the data source.
    shared_ptr<string> datasourceDescription_ {};
    // The name of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> datasourceName_ {};
    // The type of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> datasourceType_ {};
    // The information about the Hive data source.
    shared_ptr<CreateApsDatasoureRequest::HiveInfo> hiveInfo_ {};
    // The information about the source Apache Kafka instance.
    shared_ptr<CreateApsDatasoureRequest::KafkaInfo> kafkaInfo_ {};
    // The mode.
    shared_ptr<string> mode_ {};
    // The information about the source PolarDB for MySQL cluster.
    shared_ptr<CreateApsDatasoureRequest::PolarDBMysqlInfo> polarDBMysqlInfo_ {};
    // The information about the source PolarDB-X instance.
    shared_ptr<CreateApsDatasoureRequest::PolarDBXInfo> polarDBXInfo_ {};
    // The information about the source ApsaraDB RDS for MySQL instance.
    shared_ptr<CreateApsDatasoureRequest::RdsMysqlInfo> rdsMysqlInfo_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The information about the source Simple Log Service (SLS) instance or cluster.
    shared_ptr<CreateApsDatasoureRequest::SlsInfo> slsInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
