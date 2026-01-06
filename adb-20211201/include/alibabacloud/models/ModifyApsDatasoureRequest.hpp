// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsDatasoureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsDatasoureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_TO_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsDatasoureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_FROM_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    ModifyApsDatasoureRequest() = default ;
    ModifyApsDatasoureRequest(const ModifyApsDatasoureRequest &) = default ;
    ModifyApsDatasoureRequest(ModifyApsDatasoureRequest &&) = default ;
    ModifyApsDatasoureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsDatasoureRequest() = default ;
    ModifyApsDatasoureRequest& operator=(const ModifyApsDatasoureRequest &) = default ;
    ModifyApsDatasoureRequest& operator=(ModifyApsDatasoureRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, SlsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Across, across_);
        DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
        DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
        DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
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
        && this->acrossRole_ == nullptr && this->acrossUid_ == nullptr && this->sourceRegionId_ == nullptr; };
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


      // sourceRegionId Field Functions 
      bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
      void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
      inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
      inline SlsInfo& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    protected:
      // Specifies whether to use a cross-account resource as the data source. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> across_ {};
      // The name of the cross-account role.
      shared_ptr<string> acrossRole_ {};
      // The cross-account UID.
      shared_ptr<string> acrossUid_ {};
      // The region ID.
      shared_ptr<string> sourceRegionId_ {};
    };

    class RdsMysqlInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RdsMysqlInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, RdsMysqlInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
        && this->password_ == nullptr && this->regionId_ == nullptr && this->userName_ == nullptr; };
      // connectUrl Field Functions 
      bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
      void deleteConnectUrl() { this->connectUrl_ = nullptr;};
      inline string getConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
      inline RdsMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


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


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline RdsMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The parameter is no longer supported.
      shared_ptr<string> connectUrl_ {};
      // The parameter is no longer supported.
      shared_ptr<string> password_ {};
      // The parameter is no longer supported.
      shared_ptr<string> regionId_ {};
      // The parameter is no longer supported.
      shared_ptr<string> userName_ {};
    };

    class PolarDBMysqlInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolarDBMysqlInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, PolarDBMysqlInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      virtual bool empty() const override { return this->connectUrl_ == nullptr
        && this->password_ == nullptr && this->regionId_ == nullptr && this->userName_ == nullptr; };
      // connectUrl Field Functions 
      bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
      void deleteConnectUrl() { this->connectUrl_ = nullptr;};
      inline string getConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
      inline PolarDBMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


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


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline PolarDBMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The parameter is no longer supported.
      shared_ptr<string> connectUrl_ {};
      // The parameter is no longer supported.
      shared_ptr<string> password_ {};
      // The parameter is no longer supported.
      shared_ptr<string> regionId_ {};
      // The parameter is no longer supported.
      shared_ptr<string> userName_ {};
    };

    class LakehouseId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LakehouseId& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
      };
      friend void from_json(const Darabonba::Json& j, LakehouseId& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
      };
      LakehouseId() = default ;
      LakehouseId(const LakehouseId &) = default ;
      LakehouseId(LakehouseId &&) = default ;
      LakehouseId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LakehouseId() = default ;
      LakehouseId& operator=(const LakehouseId &) = default ;
      LakehouseId& operator=(LakehouseId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroup_ == nullptr
        && this->vpcId_ == nullptr && this->vswitch_ == nullptr; };
      // securityGroup Field Functions 
      bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
      void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
      inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
      inline LakehouseId& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline LakehouseId& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitch Field Functions 
      bool hasVswitch() const { return this->vswitch_ != nullptr;};
      void deleteVswitch() { this->vswitch_ = nullptr;};
      inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
      inline LakehouseId& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


    protected:
      // The name of the security group.
      shared_ptr<string> securityGroup_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The name of the vSwitch.
      shared_ptr<string> vswitch_ {};
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

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasourceDescription_ == nullptr && this->datasourceId_ == nullptr && this->datasourceName_ == nullptr && this->kafkaInfo_ == nullptr && this->lakehouseId_ == nullptr
        && this->polarDBMysqlInfo_ == nullptr && this->rdsMysqlInfo_ == nullptr && this->regionId_ == nullptr && this->slsInfo_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyApsDatasoureRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string getDatasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline ModifyApsDatasoureRequest& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline ModifyApsDatasoureRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline ModifyApsDatasoureRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // kafkaInfo Field Functions 
    bool hasKafkaInfo() const { return this->kafkaInfo_ != nullptr;};
    void deleteKafkaInfo() { this->kafkaInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequest::KafkaInfo & getKafkaInfo() const { DARABONBA_PTR_GET_CONST(kafkaInfo_, ModifyApsDatasoureRequest::KafkaInfo) };
    inline ModifyApsDatasoureRequest::KafkaInfo getKafkaInfo() { DARABONBA_PTR_GET(kafkaInfo_, ModifyApsDatasoureRequest::KafkaInfo) };
    inline ModifyApsDatasoureRequest& setKafkaInfo(const ModifyApsDatasoureRequest::KafkaInfo & kafkaInfo) { DARABONBA_PTR_SET_VALUE(kafkaInfo_, kafkaInfo) };
    inline ModifyApsDatasoureRequest& setKafkaInfo(ModifyApsDatasoureRequest::KafkaInfo && kafkaInfo) { DARABONBA_PTR_SET_RVALUE(kafkaInfo_, kafkaInfo) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline const ModifyApsDatasoureRequest::LakehouseId & getLakehouseId() const { DARABONBA_PTR_GET_CONST(lakehouseId_, ModifyApsDatasoureRequest::LakehouseId) };
    inline ModifyApsDatasoureRequest::LakehouseId getLakehouseId() { DARABONBA_PTR_GET(lakehouseId_, ModifyApsDatasoureRequest::LakehouseId) };
    inline ModifyApsDatasoureRequest& setLakehouseId(const ModifyApsDatasoureRequest::LakehouseId & lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };
    inline ModifyApsDatasoureRequest& setLakehouseId(ModifyApsDatasoureRequest::LakehouseId && lakehouseId) { DARABONBA_PTR_SET_RVALUE(lakehouseId_, lakehouseId) };


    // polarDBMysqlInfo Field Functions 
    bool hasPolarDBMysqlInfo() const { return this->polarDBMysqlInfo_ != nullptr;};
    void deletePolarDBMysqlInfo() { this->polarDBMysqlInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequest::PolarDBMysqlInfo & getPolarDBMysqlInfo() const { DARABONBA_PTR_GET_CONST(polarDBMysqlInfo_, ModifyApsDatasoureRequest::PolarDBMysqlInfo) };
    inline ModifyApsDatasoureRequest::PolarDBMysqlInfo getPolarDBMysqlInfo() { DARABONBA_PTR_GET(polarDBMysqlInfo_, ModifyApsDatasoureRequest::PolarDBMysqlInfo) };
    inline ModifyApsDatasoureRequest& setPolarDBMysqlInfo(const ModifyApsDatasoureRequest::PolarDBMysqlInfo & polarDBMysqlInfo) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };
    inline ModifyApsDatasoureRequest& setPolarDBMysqlInfo(ModifyApsDatasoureRequest::PolarDBMysqlInfo && polarDBMysqlInfo) { DARABONBA_PTR_SET_RVALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };


    // rdsMysqlInfo Field Functions 
    bool hasRdsMysqlInfo() const { return this->rdsMysqlInfo_ != nullptr;};
    void deleteRdsMysqlInfo() { this->rdsMysqlInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequest::RdsMysqlInfo & getRdsMysqlInfo() const { DARABONBA_PTR_GET_CONST(rdsMysqlInfo_, ModifyApsDatasoureRequest::RdsMysqlInfo) };
    inline ModifyApsDatasoureRequest::RdsMysqlInfo getRdsMysqlInfo() { DARABONBA_PTR_GET(rdsMysqlInfo_, ModifyApsDatasoureRequest::RdsMysqlInfo) };
    inline ModifyApsDatasoureRequest& setRdsMysqlInfo(const ModifyApsDatasoureRequest::RdsMysqlInfo & rdsMysqlInfo) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfo_, rdsMysqlInfo) };
    inline ModifyApsDatasoureRequest& setRdsMysqlInfo(ModifyApsDatasoureRequest::RdsMysqlInfo && rdsMysqlInfo) { DARABONBA_PTR_SET_RVALUE(rdsMysqlInfo_, rdsMysqlInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsDatasoureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequest::SlsInfo & getSlsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, ModifyApsDatasoureRequest::SlsInfo) };
    inline ModifyApsDatasoureRequest::SlsInfo getSlsInfo() { DARABONBA_PTR_GET(slsInfo_, ModifyApsDatasoureRequest::SlsInfo) };
    inline ModifyApsDatasoureRequest& setSlsInfo(const ModifyApsDatasoureRequest::SlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline ModifyApsDatasoureRequest& setSlsInfo(ModifyApsDatasoureRequest::SlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The description of the data source.
    shared_ptr<string> datasourceDescription_ {};
    // The data source ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> datasourceId_ {};
    // The name of the data source.
    shared_ptr<string> datasourceName_ {};
    // The information about the Kafka instance.
    shared_ptr<ModifyApsDatasoureRequest::KafkaInfo> kafkaInfo_ {};
    // The lakehouse ID.
    shared_ptr<ModifyApsDatasoureRequest::LakehouseId> lakehouseId_ {};
    // The parameter is no longer supported.
    shared_ptr<ModifyApsDatasoureRequest::PolarDBMysqlInfo> polarDBMysqlInfo_ {};
    // The parameter is no longer supported.
    shared_ptr<ModifyApsDatasoureRequest::RdsMysqlInfo> rdsMysqlInfo_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The information about Simple Log Service (SLS).
    shared_ptr<ModifyApsDatasoureRequest::SlsInfo> slsInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
