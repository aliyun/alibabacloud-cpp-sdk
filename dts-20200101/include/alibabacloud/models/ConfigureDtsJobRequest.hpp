// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREDTSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREDTSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureDtsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureDtsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(DataCheckConfigure, dataCheckConfigure_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DelayNotice, delayNotice_);
      DARABONBA_PTR_TO_JSON(DelayPhone, delayPhone_);
      DARABONBA_PTR_TO_JSON(DelayRuleTime, delayRuleTime_);
      DARABONBA_PTR_TO_JSON(DestCaCertificateOssUrl, destCaCertificateOssUrl_);
      DARABONBA_PTR_TO_JSON(DestCaCertificatePassword, destCaCertificatePassword_);
      DARABONBA_PTR_TO_JSON(DestClientCertOssUrl, destClientCertOssUrl_);
      DARABONBA_PTR_TO_JSON(DestClientKeyOssUrl, destClientKeyOssUrl_);
      DARABONBA_PTR_TO_JSON(DestClientPassword, destClientPassword_);
      DARABONBA_PTR_TO_JSON(DestPrimaryVswId, destPrimaryVswId_);
      DARABONBA_PTR_TO_JSON(DestSecondaryVswId, destSecondaryVswId_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointDataBaseName, destinationEndpointDataBaseName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointEngineName, destinationEndpointEngineName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointIP, destinationEndpointIP_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointOwnerID, destinationEndpointOwnerID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPort, destinationEndpointPort_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointRole, destinationEndpointRole_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryJob, disasterRecoveryJob_);
      DARABONBA_PTR_TO_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(ErrorNotice, errorNotice_);
      DARABONBA_PTR_TO_JSON(ErrorPhone, errorPhone_);
      DARABONBA_PTR_TO_JSON(FileOssUrl, fileOssUrl_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reserve, reserve_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointEngineName, sourceEndpointEngineName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOwnerID, sourceEndpointOwnerID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRole, sourceEndpointRole_);
      DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointVSwitchID, sourceEndpointVSwitchID_);
      DARABONBA_PTR_TO_JSON(SrcCaCertificateOssUrl, srcCaCertificateOssUrl_);
      DARABONBA_PTR_TO_JSON(SrcCaCertificatePassword, srcCaCertificatePassword_);
      DARABONBA_PTR_TO_JSON(SrcClientCertOssUrl, srcClientCertOssUrl_);
      DARABONBA_PTR_TO_JSON(SrcClientKeyOssUrl, srcClientKeyOssUrl_);
      DARABONBA_PTR_TO_JSON(SrcClientPassword, srcClientPassword_);
      DARABONBA_PTR_TO_JSON(SrcPrimaryVswId, srcPrimaryVswId_);
      DARABONBA_PTR_TO_JSON(SrcSecondaryVswId, srcSecondaryVswId_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureDtsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(DataCheckConfigure, dataCheckConfigure_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DelayNotice, delayNotice_);
      DARABONBA_PTR_FROM_JSON(DelayPhone, delayPhone_);
      DARABONBA_PTR_FROM_JSON(DelayRuleTime, delayRuleTime_);
      DARABONBA_PTR_FROM_JSON(DestCaCertificateOssUrl, destCaCertificateOssUrl_);
      DARABONBA_PTR_FROM_JSON(DestCaCertificatePassword, destCaCertificatePassword_);
      DARABONBA_PTR_FROM_JSON(DestClientCertOssUrl, destClientCertOssUrl_);
      DARABONBA_PTR_FROM_JSON(DestClientKeyOssUrl, destClientKeyOssUrl_);
      DARABONBA_PTR_FROM_JSON(DestClientPassword, destClientPassword_);
      DARABONBA_PTR_FROM_JSON(DestPrimaryVswId, destPrimaryVswId_);
      DARABONBA_PTR_FROM_JSON(DestSecondaryVswId, destSecondaryVswId_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointDataBaseName, destinationEndpointDataBaseName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointEngineName, destinationEndpointEngineName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointIP, destinationEndpointIP_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointOwnerID, destinationEndpointOwnerID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPort, destinationEndpointPort_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointRole, destinationEndpointRole_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryJob, disasterRecoveryJob_);
      DARABONBA_PTR_FROM_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(ErrorNotice, errorNotice_);
      DARABONBA_PTR_FROM_JSON(ErrorPhone, errorPhone_);
      DARABONBA_PTR_FROM_JSON(FileOssUrl, fileOssUrl_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reserve, reserve_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointEngineName, sourceEndpointEngineName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOwnerID, sourceEndpointOwnerID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRole, sourceEndpointRole_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointVSwitchID, sourceEndpointVSwitchID_);
      DARABONBA_PTR_FROM_JSON(SrcCaCertificateOssUrl, srcCaCertificateOssUrl_);
      DARABONBA_PTR_FROM_JSON(SrcCaCertificatePassword, srcCaCertificatePassword_);
      DARABONBA_PTR_FROM_JSON(SrcClientCertOssUrl, srcClientCertOssUrl_);
      DARABONBA_PTR_FROM_JSON(SrcClientKeyOssUrl, srcClientKeyOssUrl_);
      DARABONBA_PTR_FROM_JSON(SrcClientPassword, srcClientPassword_);
      DARABONBA_PTR_FROM_JSON(SrcPrimaryVswId, srcPrimaryVswId_);
      DARABONBA_PTR_FROM_JSON(SrcSecondaryVswId, srcSecondaryVswId_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
    };
    ConfigureDtsJobRequest() = default ;
    ConfigureDtsJobRequest(const ConfigureDtsJobRequest &) = default ;
    ConfigureDtsJobRequest(ConfigureDtsJobRequest &&) = default ;
    ConfigureDtsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureDtsJobRequest() = default ;
    ConfigureDtsJobRequest& operator=(const ConfigureDtsJobRequest &) = default ;
    ConfigureDtsJobRequest& operator=(ConfigureDtsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->dataCheckConfigure_ == nullptr && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->dbList_ == nullptr && this->dedicatedClusterId_ == nullptr
        && this->delayNotice_ == nullptr && this->delayPhone_ == nullptr && this->delayRuleTime_ == nullptr && this->destCaCertificateOssUrl_ == nullptr && this->destCaCertificatePassword_ == nullptr
        && this->destClientCertOssUrl_ == nullptr && this->destClientKeyOssUrl_ == nullptr && this->destClientPassword_ == nullptr && this->destPrimaryVswId_ == nullptr && this->destSecondaryVswId_ == nullptr
        && this->destinationEndpointDataBaseName_ == nullptr && this->destinationEndpointEngineName_ == nullptr && this->destinationEndpointIP_ == nullptr && this->destinationEndpointInstanceID_ == nullptr && this->destinationEndpointInstanceType_ == nullptr
        && this->destinationEndpointOracleSID_ == nullptr && this->destinationEndpointOwnerID_ == nullptr && this->destinationEndpointPassword_ == nullptr && this->destinationEndpointPort_ == nullptr && this->destinationEndpointRegion_ == nullptr
        && this->destinationEndpointRole_ == nullptr && this->destinationEndpointUserName_ == nullptr && this->disasterRecoveryJob_ == nullptr && this->dtsBisLabel_ == nullptr && this->dtsInstanceId_ == nullptr
        && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->errorNotice_ == nullptr && this->errorPhone_ == nullptr && this->fileOssUrl_ == nullptr
        && this->jobType_ == nullptr && this->maxDu_ == nullptr && this->minDu_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->reserve_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceEndpointDatabaseName_ == nullptr && this->sourceEndpointEngineName_ == nullptr && this->sourceEndpointIP_ == nullptr
        && this->sourceEndpointInstanceID_ == nullptr && this->sourceEndpointInstanceType_ == nullptr && this->sourceEndpointOracleSID_ == nullptr && this->sourceEndpointOwnerID_ == nullptr && this->sourceEndpointPassword_ == nullptr
        && this->sourceEndpointPort_ == nullptr && this->sourceEndpointRegion_ == nullptr && this->sourceEndpointRole_ == nullptr && this->sourceEndpointUserName_ == nullptr && this->sourceEndpointVSwitchID_ == nullptr
        && this->srcCaCertificateOssUrl_ == nullptr && this->srcCaCertificatePassword_ == nullptr && this->srcClientCertOssUrl_ == nullptr && this->srcClientKeyOssUrl_ == nullptr && this->srcClientPassword_ == nullptr
        && this->srcPrimaryVswId_ == nullptr && this->srcSecondaryVswId_ == nullptr && this->structureInitialization_ == nullptr && this->synchronizationDirection_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline ConfigureDtsJobRequest& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // dataCheckConfigure Field Functions 
    bool hasDataCheckConfigure() const { return this->dataCheckConfigure_ != nullptr;};
    void deleteDataCheckConfigure() { this->dataCheckConfigure_ = nullptr;};
    inline string getDataCheckConfigure() const { DARABONBA_PTR_GET_DEFAULT(dataCheckConfigure_, "") };
    inline ConfigureDtsJobRequest& setDataCheckConfigure(string dataCheckConfigure) { DARABONBA_PTR_SET_VALUE(dataCheckConfigure_, dataCheckConfigure) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline ConfigureDtsJobRequest& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline ConfigureDtsJobRequest& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline ConfigureDtsJobRequest& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline ConfigureDtsJobRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // delayNotice Field Functions 
    bool hasDelayNotice() const { return this->delayNotice_ != nullptr;};
    void deleteDelayNotice() { this->delayNotice_ = nullptr;};
    inline bool getDelayNotice() const { DARABONBA_PTR_GET_DEFAULT(delayNotice_, false) };
    inline ConfigureDtsJobRequest& setDelayNotice(bool delayNotice) { DARABONBA_PTR_SET_VALUE(delayNotice_, delayNotice) };


    // delayPhone Field Functions 
    bool hasDelayPhone() const { return this->delayPhone_ != nullptr;};
    void deleteDelayPhone() { this->delayPhone_ = nullptr;};
    inline string getDelayPhone() const { DARABONBA_PTR_GET_DEFAULT(delayPhone_, "") };
    inline ConfigureDtsJobRequest& setDelayPhone(string delayPhone) { DARABONBA_PTR_SET_VALUE(delayPhone_, delayPhone) };


    // delayRuleTime Field Functions 
    bool hasDelayRuleTime() const { return this->delayRuleTime_ != nullptr;};
    void deleteDelayRuleTime() { this->delayRuleTime_ = nullptr;};
    inline int64_t getDelayRuleTime() const { DARABONBA_PTR_GET_DEFAULT(delayRuleTime_, 0L) };
    inline ConfigureDtsJobRequest& setDelayRuleTime(int64_t delayRuleTime) { DARABONBA_PTR_SET_VALUE(delayRuleTime_, delayRuleTime) };


    // destCaCertificateOssUrl Field Functions 
    bool hasDestCaCertificateOssUrl() const { return this->destCaCertificateOssUrl_ != nullptr;};
    void deleteDestCaCertificateOssUrl() { this->destCaCertificateOssUrl_ = nullptr;};
    inline string getDestCaCertificateOssUrl() const { DARABONBA_PTR_GET_DEFAULT(destCaCertificateOssUrl_, "") };
    inline ConfigureDtsJobRequest& setDestCaCertificateOssUrl(string destCaCertificateOssUrl) { DARABONBA_PTR_SET_VALUE(destCaCertificateOssUrl_, destCaCertificateOssUrl) };


    // destCaCertificatePassword Field Functions 
    bool hasDestCaCertificatePassword() const { return this->destCaCertificatePassword_ != nullptr;};
    void deleteDestCaCertificatePassword() { this->destCaCertificatePassword_ = nullptr;};
    inline string getDestCaCertificatePassword() const { DARABONBA_PTR_GET_DEFAULT(destCaCertificatePassword_, "") };
    inline ConfigureDtsJobRequest& setDestCaCertificatePassword(string destCaCertificatePassword) { DARABONBA_PTR_SET_VALUE(destCaCertificatePassword_, destCaCertificatePassword) };


    // destClientCertOssUrl Field Functions 
    bool hasDestClientCertOssUrl() const { return this->destClientCertOssUrl_ != nullptr;};
    void deleteDestClientCertOssUrl() { this->destClientCertOssUrl_ = nullptr;};
    inline string getDestClientCertOssUrl() const { DARABONBA_PTR_GET_DEFAULT(destClientCertOssUrl_, "") };
    inline ConfigureDtsJobRequest& setDestClientCertOssUrl(string destClientCertOssUrl) { DARABONBA_PTR_SET_VALUE(destClientCertOssUrl_, destClientCertOssUrl) };


    // destClientKeyOssUrl Field Functions 
    bool hasDestClientKeyOssUrl() const { return this->destClientKeyOssUrl_ != nullptr;};
    void deleteDestClientKeyOssUrl() { this->destClientKeyOssUrl_ = nullptr;};
    inline string getDestClientKeyOssUrl() const { DARABONBA_PTR_GET_DEFAULT(destClientKeyOssUrl_, "") };
    inline ConfigureDtsJobRequest& setDestClientKeyOssUrl(string destClientKeyOssUrl) { DARABONBA_PTR_SET_VALUE(destClientKeyOssUrl_, destClientKeyOssUrl) };


    // destClientPassword Field Functions 
    bool hasDestClientPassword() const { return this->destClientPassword_ != nullptr;};
    void deleteDestClientPassword() { this->destClientPassword_ = nullptr;};
    inline string getDestClientPassword() const { DARABONBA_PTR_GET_DEFAULT(destClientPassword_, "") };
    inline ConfigureDtsJobRequest& setDestClientPassword(string destClientPassword) { DARABONBA_PTR_SET_VALUE(destClientPassword_, destClientPassword) };


    // destPrimaryVswId Field Functions 
    bool hasDestPrimaryVswId() const { return this->destPrimaryVswId_ != nullptr;};
    void deleteDestPrimaryVswId() { this->destPrimaryVswId_ = nullptr;};
    inline string getDestPrimaryVswId() const { DARABONBA_PTR_GET_DEFAULT(destPrimaryVswId_, "") };
    inline ConfigureDtsJobRequest& setDestPrimaryVswId(string destPrimaryVswId) { DARABONBA_PTR_SET_VALUE(destPrimaryVswId_, destPrimaryVswId) };


    // destSecondaryVswId Field Functions 
    bool hasDestSecondaryVswId() const { return this->destSecondaryVswId_ != nullptr;};
    void deleteDestSecondaryVswId() { this->destSecondaryVswId_ = nullptr;};
    inline string getDestSecondaryVswId() const { DARABONBA_PTR_GET_DEFAULT(destSecondaryVswId_, "") };
    inline ConfigureDtsJobRequest& setDestSecondaryVswId(string destSecondaryVswId) { DARABONBA_PTR_SET_VALUE(destSecondaryVswId_, destSecondaryVswId) };


    // destinationEndpointDataBaseName Field Functions 
    bool hasDestinationEndpointDataBaseName() const { return this->destinationEndpointDataBaseName_ != nullptr;};
    void deleteDestinationEndpointDataBaseName() { this->destinationEndpointDataBaseName_ = nullptr;};
    inline string getDestinationEndpointDataBaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointDataBaseName_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointDataBaseName(string destinationEndpointDataBaseName) { DARABONBA_PTR_SET_VALUE(destinationEndpointDataBaseName_, destinationEndpointDataBaseName) };


    // destinationEndpointEngineName Field Functions 
    bool hasDestinationEndpointEngineName() const { return this->destinationEndpointEngineName_ != nullptr;};
    void deleteDestinationEndpointEngineName() { this->destinationEndpointEngineName_ = nullptr;};
    inline string getDestinationEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointEngineName_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointEngineName(string destinationEndpointEngineName) { DARABONBA_PTR_SET_VALUE(destinationEndpointEngineName_, destinationEndpointEngineName) };


    // destinationEndpointIP Field Functions 
    bool hasDestinationEndpointIP() const { return this->destinationEndpointIP_ != nullptr;};
    void deleteDestinationEndpointIP() { this->destinationEndpointIP_ = nullptr;};
    inline string getDestinationEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointIP_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointIP(string destinationEndpointIP) { DARABONBA_PTR_SET_VALUE(destinationEndpointIP_, destinationEndpointIP) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string getDestinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointInstanceType Field Functions 
    bool hasDestinationEndpointInstanceType() const { return this->destinationEndpointInstanceType_ != nullptr;};
    void deleteDestinationEndpointInstanceType() { this->destinationEndpointInstanceType_ = nullptr;};
    inline string getDestinationEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceType_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointInstanceType(string destinationEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceType_, destinationEndpointInstanceType) };


    // destinationEndpointOracleSID Field Functions 
    bool hasDestinationEndpointOracleSID() const { return this->destinationEndpointOracleSID_ != nullptr;};
    void deleteDestinationEndpointOracleSID() { this->destinationEndpointOracleSID_ = nullptr;};
    inline string getDestinationEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOracleSID_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointOracleSID(string destinationEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOracleSID_, destinationEndpointOracleSID) };


    // destinationEndpointOwnerID Field Functions 
    bool hasDestinationEndpointOwnerID() const { return this->destinationEndpointOwnerID_ != nullptr;};
    void deleteDestinationEndpointOwnerID() { this->destinationEndpointOwnerID_ = nullptr;};
    inline string getDestinationEndpointOwnerID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOwnerID_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointOwnerID(string destinationEndpointOwnerID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOwnerID_, destinationEndpointOwnerID) };


    // destinationEndpointPassword Field Functions 
    bool hasDestinationEndpointPassword() const { return this->destinationEndpointPassword_ != nullptr;};
    void deleteDestinationEndpointPassword() { this->destinationEndpointPassword_ = nullptr;};
    inline string getDestinationEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPassword_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointPassword(string destinationEndpointPassword) { DARABONBA_PTR_SET_VALUE(destinationEndpointPassword_, destinationEndpointPassword) };


    // destinationEndpointPort Field Functions 
    bool hasDestinationEndpointPort() const { return this->destinationEndpointPort_ != nullptr;};
    void deleteDestinationEndpointPort() { this->destinationEndpointPort_ = nullptr;};
    inline string getDestinationEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPort_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointPort(string destinationEndpointPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointPort_, destinationEndpointPort) };


    // destinationEndpointRegion Field Functions 
    bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
    void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
    inline string getDestinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


    // destinationEndpointRole Field Functions 
    bool hasDestinationEndpointRole() const { return this->destinationEndpointRole_ != nullptr;};
    void deleteDestinationEndpointRole() { this->destinationEndpointRole_ = nullptr;};
    inline string getDestinationEndpointRole() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRole_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointRole(string destinationEndpointRole) { DARABONBA_PTR_SET_VALUE(destinationEndpointRole_, destinationEndpointRole) };


    // destinationEndpointUserName Field Functions 
    bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
    void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
    inline string getDestinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
    inline ConfigureDtsJobRequest& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


    // disasterRecoveryJob Field Functions 
    bool hasDisasterRecoveryJob() const { return this->disasterRecoveryJob_ != nullptr;};
    void deleteDisasterRecoveryJob() { this->disasterRecoveryJob_ = nullptr;};
    inline bool getDisasterRecoveryJob() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryJob_, false) };
    inline ConfigureDtsJobRequest& setDisasterRecoveryJob(bool disasterRecoveryJob) { DARABONBA_PTR_SET_VALUE(disasterRecoveryJob_, disasterRecoveryJob) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string getDtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline ConfigureDtsJobRequest& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ConfigureDtsJobRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ConfigureDtsJobRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline ConfigureDtsJobRequest& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // errorNotice Field Functions 
    bool hasErrorNotice() const { return this->errorNotice_ != nullptr;};
    void deleteErrorNotice() { this->errorNotice_ = nullptr;};
    inline bool getErrorNotice() const { DARABONBA_PTR_GET_DEFAULT(errorNotice_, false) };
    inline ConfigureDtsJobRequest& setErrorNotice(bool errorNotice) { DARABONBA_PTR_SET_VALUE(errorNotice_, errorNotice) };


    // errorPhone Field Functions 
    bool hasErrorPhone() const { return this->errorPhone_ != nullptr;};
    void deleteErrorPhone() { this->errorPhone_ = nullptr;};
    inline string getErrorPhone() const { DARABONBA_PTR_GET_DEFAULT(errorPhone_, "") };
    inline ConfigureDtsJobRequest& setErrorPhone(string errorPhone) { DARABONBA_PTR_SET_VALUE(errorPhone_, errorPhone) };


    // fileOssUrl Field Functions 
    bool hasFileOssUrl() const { return this->fileOssUrl_ != nullptr;};
    void deleteFileOssUrl() { this->fileOssUrl_ = nullptr;};
    inline string getFileOssUrl() const { DARABONBA_PTR_GET_DEFAULT(fileOssUrl_, "") };
    inline ConfigureDtsJobRequest& setFileOssUrl(string fileOssUrl) { DARABONBA_PTR_SET_VALUE(fileOssUrl_, fileOssUrl) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ConfigureDtsJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline ConfigureDtsJobRequest& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline ConfigureDtsJobRequest& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureDtsJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureDtsJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserve Field Functions 
    bool hasReserve() const { return this->reserve_ != nullptr;};
    void deleteReserve() { this->reserve_ = nullptr;};
    inline string getReserve() const { DARABONBA_PTR_GET_DEFAULT(reserve_, "") };
    inline ConfigureDtsJobRequest& setReserve(string reserve) { DARABONBA_PTR_SET_VALUE(reserve_, reserve) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureDtsJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string getSourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointEngineName Field Functions 
    bool hasSourceEndpointEngineName() const { return this->sourceEndpointEngineName_ != nullptr;};
    void deleteSourceEndpointEngineName() { this->sourceEndpointEngineName_ = nullptr;};
    inline string getSourceEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointEngineName_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointEngineName(string sourceEndpointEngineName) { DARABONBA_PTR_SET_VALUE(sourceEndpointEngineName_, sourceEndpointEngineName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string getSourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string getSourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointOwnerID Field Functions 
    bool hasSourceEndpointOwnerID() const { return this->sourceEndpointOwnerID_ != nullptr;};
    void deleteSourceEndpointOwnerID() { this->sourceEndpointOwnerID_ = nullptr;};
    inline string getSourceEndpointOwnerID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOwnerID_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointOwnerID(string sourceEndpointOwnerID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOwnerID_, sourceEndpointOwnerID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string getSourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline string getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointPort(string sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointRole Field Functions 
    bool hasSourceEndpointRole() const { return this->sourceEndpointRole_ != nullptr;};
    void deleteSourceEndpointRole() { this->sourceEndpointRole_ = nullptr;};
    inline string getSourceEndpointRole() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRole_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointRole(string sourceEndpointRole) { DARABONBA_PTR_SET_VALUE(sourceEndpointRole_, sourceEndpointRole) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


    // sourceEndpointVSwitchID Field Functions 
    bool hasSourceEndpointVSwitchID() const { return this->sourceEndpointVSwitchID_ != nullptr;};
    void deleteSourceEndpointVSwitchID() { this->sourceEndpointVSwitchID_ = nullptr;};
    inline string getSourceEndpointVSwitchID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointVSwitchID_, "") };
    inline ConfigureDtsJobRequest& setSourceEndpointVSwitchID(string sourceEndpointVSwitchID) { DARABONBA_PTR_SET_VALUE(sourceEndpointVSwitchID_, sourceEndpointVSwitchID) };


    // srcCaCertificateOssUrl Field Functions 
    bool hasSrcCaCertificateOssUrl() const { return this->srcCaCertificateOssUrl_ != nullptr;};
    void deleteSrcCaCertificateOssUrl() { this->srcCaCertificateOssUrl_ = nullptr;};
    inline string getSrcCaCertificateOssUrl() const { DARABONBA_PTR_GET_DEFAULT(srcCaCertificateOssUrl_, "") };
    inline ConfigureDtsJobRequest& setSrcCaCertificateOssUrl(string srcCaCertificateOssUrl) { DARABONBA_PTR_SET_VALUE(srcCaCertificateOssUrl_, srcCaCertificateOssUrl) };


    // srcCaCertificatePassword Field Functions 
    bool hasSrcCaCertificatePassword() const { return this->srcCaCertificatePassword_ != nullptr;};
    void deleteSrcCaCertificatePassword() { this->srcCaCertificatePassword_ = nullptr;};
    inline string getSrcCaCertificatePassword() const { DARABONBA_PTR_GET_DEFAULT(srcCaCertificatePassword_, "") };
    inline ConfigureDtsJobRequest& setSrcCaCertificatePassword(string srcCaCertificatePassword) { DARABONBA_PTR_SET_VALUE(srcCaCertificatePassword_, srcCaCertificatePassword) };


    // srcClientCertOssUrl Field Functions 
    bool hasSrcClientCertOssUrl() const { return this->srcClientCertOssUrl_ != nullptr;};
    void deleteSrcClientCertOssUrl() { this->srcClientCertOssUrl_ = nullptr;};
    inline string getSrcClientCertOssUrl() const { DARABONBA_PTR_GET_DEFAULT(srcClientCertOssUrl_, "") };
    inline ConfigureDtsJobRequest& setSrcClientCertOssUrl(string srcClientCertOssUrl) { DARABONBA_PTR_SET_VALUE(srcClientCertOssUrl_, srcClientCertOssUrl) };


    // srcClientKeyOssUrl Field Functions 
    bool hasSrcClientKeyOssUrl() const { return this->srcClientKeyOssUrl_ != nullptr;};
    void deleteSrcClientKeyOssUrl() { this->srcClientKeyOssUrl_ = nullptr;};
    inline string getSrcClientKeyOssUrl() const { DARABONBA_PTR_GET_DEFAULT(srcClientKeyOssUrl_, "") };
    inline ConfigureDtsJobRequest& setSrcClientKeyOssUrl(string srcClientKeyOssUrl) { DARABONBA_PTR_SET_VALUE(srcClientKeyOssUrl_, srcClientKeyOssUrl) };


    // srcClientPassword Field Functions 
    bool hasSrcClientPassword() const { return this->srcClientPassword_ != nullptr;};
    void deleteSrcClientPassword() { this->srcClientPassword_ = nullptr;};
    inline string getSrcClientPassword() const { DARABONBA_PTR_GET_DEFAULT(srcClientPassword_, "") };
    inline ConfigureDtsJobRequest& setSrcClientPassword(string srcClientPassword) { DARABONBA_PTR_SET_VALUE(srcClientPassword_, srcClientPassword) };


    // srcPrimaryVswId Field Functions 
    bool hasSrcPrimaryVswId() const { return this->srcPrimaryVswId_ != nullptr;};
    void deleteSrcPrimaryVswId() { this->srcPrimaryVswId_ = nullptr;};
    inline string getSrcPrimaryVswId() const { DARABONBA_PTR_GET_DEFAULT(srcPrimaryVswId_, "") };
    inline ConfigureDtsJobRequest& setSrcPrimaryVswId(string srcPrimaryVswId) { DARABONBA_PTR_SET_VALUE(srcPrimaryVswId_, srcPrimaryVswId) };


    // srcSecondaryVswId Field Functions 
    bool hasSrcSecondaryVswId() const { return this->srcSecondaryVswId_ != nullptr;};
    void deleteSrcSecondaryVswId() { this->srcSecondaryVswId_ = nullptr;};
    inline string getSrcSecondaryVswId() const { DARABONBA_PTR_GET_DEFAULT(srcSecondaryVswId_, "") };
    inline ConfigureDtsJobRequest& setSrcSecondaryVswId(string srcSecondaryVswId) { DARABONBA_PTR_SET_VALUE(srcSecondaryVswId_, srcSecondaryVswId) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline ConfigureDtsJobRequest& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ConfigureDtsJobRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


  protected:
    // The start offset of incremental data migration or incremental data synchronization. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> checkpoint_ {};
    // The parameters for data verification, including the configurations for data verification and alerts. The value is a JSON string. For more information, see [DataCheckConfigure parameter description](https://help.aliyun.com/document_detail/459023.html).
    shared_ptr<string> dataCheckConfigure_ {};
    // Specifies whether to perform full data migration or full data synchronization. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > If **JobType** is set to **CHECK**, set this parameter to **false**.
    // 
    // This parameter is required.
    shared_ptr<bool> dataInitialization_ {};
    // Specifies whether to perform incremental data migration or incremental data synchronization. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    // 
    // > If **JobType** is set to **CHECK**, set this parameter to **false**.
    // 
    // This parameter is required.
    shared_ptr<bool> dataSynchronization_ {};
    // The objects that you want to migrate or synchronize. The value is a JSON string. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    shared_ptr<string> dbList_ {};
    // The ID of the DTS dedicated cluster on which the task runs.
    // 
    // > If this parameter is specified, the task is scheduled to the specified DTS dedicated cluster.
    shared_ptr<string> dedicatedClusterId_ {};
    // Specifies whether to monitor task latency. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> delayNotice_ {};
    // The mobile phone numbers to which latency-related alerts are sent. Separate multiple mobile phone numbers with commas (,).
    // 
    // > 
    // 
    // *   This parameter is available only for users of the China site (aliyun.com). Only mobile phone numbers in the Chinese mainland are supported. You can specify up to 10 mobile phone numbers.
    // *   Users of the international site (alibabacloud.com) cannot receive alerts by using mobile phone numbers, but can configure alert rules for DTS tasks in the CloudMonitor console. For more information, see [Configure alert rules for DTS tasks in the CloudMonitor console](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> delayPhone_ {};
    // The threshold for latency alerts. Unit: seconds. The value must be an integer. You can set the threshold based on your business requirements. To prevent unstable latency caused by network and database overloads, we recommend that you set the threshold to more than 10 seconds.
    // 
    // > If **DelayNotice** is set to **true**, this parameter is required.
    shared_ptr<int64_t> delayRuleTime_ {};
    // The path of the CA certificate that is used if the connection to the destination database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destCaCertificateOssUrl_ {};
    // The key of the CA certificate that is used if the connection to the destination database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destCaCertificatePassword_ {};
    // The path to the client certificate that is used if the connection to the destination database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destClientCertOssUrl_ {};
    // The path to the private key of the client certificate that is used if the connection to the destination database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destClientKeyOssUrl_ {};
    // The password of the private key of the client certificate that is used if the connection to the destination database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destClientPassword_ {};
    // VPCNAT destination main VSW
    shared_ptr<string> destPrimaryVswId_ {};
    // VPCNAT destination backup VSW
    shared_ptr<string> destSecondaryVswId_ {};
    // The name of the database to which the objects are migrated or synchronized in the destination instance.
    // 
    // > 
    // 
    // *   This parameter is valid and required only if the destination database is a PolarDB for PostgreSQL (Compatible with Oracle) cluster, an AnalyticDB for PostgreSQL instance, a PostgreSQL database, a MaxCompute project, or a MongoDB database.
    // *   If the destination instance is a MaxCompute project, you must specify the MaxCompute project ID.
    shared_ptr<string> destinationEndpointDataBaseName_ {};
    // The type of the destination database. Valid values:
    // 
    // *   **MYSQL**: ApsaraDB RDS for MySQL instance or self-managed MySQL database.
    // *   **MARIADB**: ApsaraDB RDS for MariaDB instance.
    // *   **PolarDB**: PolarDB for MySQL cluster.
    // *   **POLARDB_O**: PolarDB for PostgreSQL (Compatible with Oracle) cluster.
    // *   **POLARDBX10**: PolarDB-X 1.0 instance (formerly DRDS).
    // *   **POLARDBX20**: PolarDB-X 2.0 instance.
    // *   **ORACLE**: self-managed Oracle database.
    // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL instance or self-managed PostgreSQL database.
    // *   **MSSQL**: ApsaraDB RDS for SQL Server instance or self-managed SQL Server database.
    // *   **ADS**: AnalyticDB for MySQL V2.0 cluster.
    // *   **ADB30**: AnalyticDB for MySQL V3.0 cluster.
    // *   **MONGODB**: ApsaraDB for MongoDB instance or self-managed MongoDB database.
    // *   **GREENPLUM**: AnalyticDB for PostgreSQL instance.
    // *   **KAFKA**: ApsaraMQ for Kafka instance or self-managed Kafka cluster.
    // *   **DATAHUB**: DataHub project.
    // *   **DB2**: self-managed Db2 for LUW database.
    // *   **AS400**: Db2 for i database.
    // *   **ODPS**: MaxCompute project.
    // *   **Tablestore**: Tablestore instance.
    // *   **ELK**: Elasticsearch cluster.
    // *   **REDIS**: ApsaraDB for Redis instance or self-managed Redis database.
    // 
    // > 
    // 
    // *   Default value: **MYSQL**.
    // *   If this parameter is set to **KAFKA**, **MONGODB**, or **PolarDB**, you must also specify the database information in Reserve. For more information, see [Reserve parameter](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> destinationEndpointEngineName_ {};
    // The IP address of the destination instance.
    // 
    // > This parameter is valid and required only if **DestinationEndpointInstanceType** is set to **OTHER**, **EXPRESS**, **DG**, or **CEN**.
    shared_ptr<string> destinationEndpointIP_ {};
    // The destination instance ID.
    // 
    // If the destination instance is an Alibaba Cloud database instance, you must specify the database instance ID. For example, if the destination instance is an ApsaraDB RDS for MySQL instance, you must specify the ID of the ApsaraDB RDS for MySQL instance.
    // 
    // If the destination instance is a self-managed database, the value of this parameter varies with the value of **DestinationEndpointInstanceType**.****
    // 
    // *   If DestinationEndpointInstanceType is set to **ECS**, you must specify the ECS instance ID.
    // *   If DestinationEndpointInstanceType is set to **DG**, you must specify the database gateway ID.
    // *   If DestinationEndpointInstanceType is set to **EXPRESS** or **CEN**, you must specify the ID of the VPC that is connected to the source instance.
    // 
    // > If DestinationEndpointInstanceType is set to **CEN**, you must also specify the ID of the CEN instance in Reserve. For more information, see [Reserve parameter](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> destinationEndpointInstanceID_ {};
    // The type of the destination instance. Valid values:
    // 
    // **Alibaba Cloud database instance**
    // 
    // *   **RDS**: ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, ApsaraDB RDS for PostgreSQL instance, or ApsaraDB RDS for MariaDB instance.
    // *   **PolarDB**: PolarDB for MySQL cluster.
    // *   **DISTRIBUTED_POLARDBX10**: PolarDB-X 1.0 instance (formerly DRDS).
    // *   **POLARDBX20**: PolarDB-X 2.0 instance.
    // *   **REDIS**: ApsaraDB for Redis instance.
    // *   **ADS**: AnalyticDB for MySQL V2.0 cluster or AnalyticDB for MySQL V3.0 cluster.
    // *   **MONGODB**: ApsaraDB for MongoDB instance.
    // *   **GREENPLUM**: AnalyticDB for PostgreSQL instance.
    // *   **DATAHUB**: DataHub project.
    // *   **ELK**: Elasticsearch cluster.
    // *   **Tablestore**: Tablestore instance.
    // *   **ODPS**: MaxCompute project.
    // 
    // **Self-managed database**
    // 
    // *   **OTHER**: self-managed database with a public IP address.
    // *   **ECS**: self-managed database hosted on an ECS instance.
    // *   **EXPRESS**: self-managed database connected over Express Connect.
    // *   **CEN**: self-managed database connected over Cloud Enterprise Network (CEN).
    // *   **DG**: self-managed database connected over Database Gateway.
    // 
    // > 
    // 
    // *   If the destination instance is a PolarDB for PostgreSQL (Compatible with Oracle) cluster, you must connect the cluster to DTS as a self-managed database by using a public IP address or Express Connect and set this parameter to **OTHER** or **EXPRESS**.
    // *   If the destination instance is an ApsaraMQ for Kafka instance, you must connect the instance to DTS as a self-managed database by using ECS or Express Connect and set this parameter to **ECS** or **EXPRESS**.
    // *   For more information, see [Supported source and destination databases](https://help.aliyun.com/document_detail/176064.html).
    // *   If the destination instance is a self-managed database, you must deploy the network environment for the database. For more information, see [Preparation overview](https://help.aliyun.com/document_detail/146958.html).
    // 
    // This parameter is required.
    shared_ptr<string> destinationEndpointInstanceType_ {};
    // The SID of the Oracle database.
    // 
    // > This parameter is valid and required only if **DestinationEndpointEngineName** is set to **ORACLE** and the **Oracle** database is deployed in a non-RAC architecture.
    shared_ptr<string> destinationEndpointOracleSID_ {};
    // The ID of the Alibaba Cloud account to which the destination ApsaraDB RDS for MySQL instance belongs.
    // 
    // > 
    // 
    // *   This parameter is available only if the destination instance is an ApsaraDB RDS for MySQL instance.
    // *   You can specify this parameter to migrate or synchronize data across different Alibaba Cloud accounts. In this case, you must specify **DestinationEndpointRole**.
    shared_ptr<string> destinationEndpointOwnerID_ {};
    // The password of the account that is used to log on to the destination database.
    // 
    // > If the destination database is a MaxCompute project, you must specify the AccessKey secret of your Alibaba Cloud account. For information about how to obtain an AccessKey pair, see [Create an AccessKey pair](https://help.aliyun.com/document_detail/116401.html).
    shared_ptr<string> destinationEndpointPassword_ {};
    // The port number of the destination instance.
    // 
    // > This parameter is valid and required only if the destination instance is a self-managed database.
    shared_ptr<string> destinationEndpointPort_ {};
    // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // > If the destination instance is an Alibaba Cloud database instance, this parameter is required.
    shared_ptr<string> destinationEndpointRegion_ {};
    // The name of the RAM role configured for the Alibaba Cloud account to which the destination instance belongs.
    // 
    // > This parameter is required if you migrate or synchronize data across Alibaba Cloud accounts. For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account DTS tasks](https://help.aliyun.com/document_detail/48468.html).
    shared_ptr<string> destinationEndpointRole_ {};
    // The username of the account that is used to log on to the destination database.
    // 
    // > 
    // 
    // *   In most cases, this parameter is required.
    // *   The permissions that are required for the database account vary with the migration or synchronization scenario. For more information, see [Prepare the database accounts for data migration](https://help.aliyun.com/document_detail/175878.html) or [Prepare the database accounts for data synchronization](https://help.aliyun.com/document_detail/213152.html).
    // *   If the destination database is a MaxCompute project, you must specify the AccessKey ID of your Alibaba Cloud account. For information about how to obtain an AccessKey pair, see [Create an AccessKey pair](https://help.aliyun.com/document_detail/116401.html).
    shared_ptr<string> destinationEndpointUserName_ {};
    // Specifies whether the instance is a disaster recovery instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> disasterRecoveryJob_ {};
    // The environment tag of the DTS instance. Valid values:
    // 
    // *   **normal******
    // *   **online******
    shared_ptr<string> dtsBisLabel_ {};
    // The ID of the data migration or synchronization instance.
    // 
    // > You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the data migration or synchronization task.
    // 
    // > You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    shared_ptr<string> dtsJobId_ {};
    // The name of the DTS instance.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobName_ {};
    // Specifies whether to monitor task status. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> errorNotice_ {};
    // The mobile phone numbers to which status-related alerts are sent. Separate multiple mobile phone numbers with commas (,).
    // 
    // > 
    // 
    // *   This parameter is available only for users of the China site (aliyun.com). Only mobile phone numbers in the Chinese mainland are supported. You can specify up to 10 mobile phone numbers.
    // *   Users of the international site (alibabacloud.com) cannot receive alerts by using mobile phone numbers, but can configure alert rules for DTS tasks in the CloudMonitor console. For more information, see [Configure alert rules for DTS tasks in the CloudMonitor console](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> errorPhone_ {};
    // The URL of the Object Storage Service (OSS) bucket that stores the files related to the DTS task.
    shared_ptr<string> fileOssUrl_ {};
    // The type of the task. Valid values:
    // 
    // *   **MIGRATION**: data migration task.
    // *   **SYNC**: data synchronization task.
    // *   **CHECK**: data verification task. You must separately purchase a data verification instance.
    // 
    // > If you set this parameter to **MIGRATION** or **SYNC**, you can also enable data verification in the data migration or synchronization task.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The maximum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    shared_ptr<double> maxDu_ {};
    // The minimum number of DTS Units (DUs).
    // 
    // > This parameter is supported only for serverless instances.
    shared_ptr<double> minDu_ {};
    shared_ptr<string> ownerId_ {};
    // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to add more configurations of the source or destination instance to the DTS task. For example, you can specify the data storage format of the destination Kafka database and the CEN instance ID. For more information, see [Reserve parameter](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> reserve_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the database from which the objects are migrated or synchronized in the source instance.
    // 
    // > This parameter is valid and required only if the source instance is a PolarDB for PostgreSQL (Compatible with Oracle) cluster, a PostgreSQL database, or a MongoDB database.
    shared_ptr<string> sourceEndpointDatabaseName_ {};
    // The database type of the source instance.
    // 
    // *   **MYSQL**: ApsaraDB RDS for MySQL instance or self-managed MySQL database.
    // *   **MARIADB**: ApsaraDB RDS for MariaDB instance.
    // *   **PolarDB**: PolarDB for MySQL cluster.
    // *   **POLARDB_O**: PolarDB for PostgreSQL (Compatible with Oracle) cluster.
    // *   **POLARDBX10**: PolarDB-X 1.0 instance (formerly DRDS).
    // *   **POLARDBX20**: PolarDB-X 2.0 instance.
    // *   **ORACLE**: self-managed Oracle database.
    // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL instance or self-managed PostgreSQL database.
    // *   **MSSQL**: ApsaraDB RDS for SQL Server instance or self-managed SQL Server database.
    // *   **MONGODB**: ApsaraDB for MongoDB instance or self-managed MongoDB database.
    // *   **DB2**: self-managed Db2 for LUW database.
    // *   **AS400**: self-managed Db2 for i database.
    // *   **DMSPOLARDB**: DMS logical database.
    // *   **HBASE**: self-managed HBase database.
    // *   **TERADATA**: Teradata database.
    // *   **TiDB**: TiDB database.
    // *   **REDIS**: ApsaraDB for Redis instance or self-managed Redis database.
    // 
    // > 
    // 
    // *   Default value: **MYSQL**.
    // *   If this parameter is set to **MONGODB**, you must also specify the architecture type of the MongoDB database in Reserve. For more information, see [Reserve parameter](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> sourceEndpointEngineName_ {};
    // The IP address of the source instance.
    // 
    // > This parameter is valid and required only if **SourceEndpointInstanceType** is set to **OTHER**, **EXPRESS**, **DG**, or **CEN**.
    shared_ptr<string> sourceEndpointIP_ {};
    // The source instance ID.
    // 
    // If the source instance is an Alibaba Cloud database instance, you must specify the database instance ID. For example, if the source instance is an ApsaraDB RDS for MySQL instance, you must specify the ID of the ApsaraDB RDS for MySQL instance.
    // 
    // If the source instance is a self-managed database, the value of this parameter varies with the value of **SourceEndpointInstanceType**.****
    // 
    // *   If SourceEndpointInstanceType is set to **ECS**, you must specify the ECS instance ID.
    // *   If SourceEndpointInstanceType is set to **DG**, you must specify the database gateway ID.
    // *   If SourceEndpointInstanceType is set to **EXPRESS** or **CEN**, you must specify the ID of the virtual private cloud (VPC) that is connected to the source instance.
    // 
    // > If SourceEndpointInstanceType is set to **CEN**, you must also specify the ID of the CEN instance in Reserve. For more information, see [Reserve parameter](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> sourceEndpointInstanceID_ {};
    // The type of the source instance. Valid values:
    // 
    // **Alibaba Cloud database instance**
    // 
    // *   **RDS**: ApsaraDB RDS for MySQL instance, ApsaraDB RDS for SQL Server instance, ApsaraDB RDS for PostgreSQL instance, or ApsaraDB RDS for MariaDB instance
    // *   **PolarDB**: PolarDB for MySQL cluster.
    // *   **REDIS**: ApsaraDB for Redis instance.
    // *   **DISTRIBUTED_POLARDBX10**: PolarDB-X 1.0 instance (formerly DRDS).
    // *   **POLARDBX20**: PolarDB-X 2.0 instance.
    // *   **MONGODB**: ApsaraDB for MongoDB instance.
    // *   **DISTRIBUTED_DMSLOGICDB**: Data Management (DMS) logical database
    // 
    // **Self-managed database**
    // 
    // *   **OTHER**: self-managed database with a public IP address.
    // *   **ECS**: self-managed database hosted on an ECS instance.
    // *   **EXPRESS**: self-managed database connected over Express Connect.
    // *   **CEN**: self-managed database connected over Cloud Enterprise Network (CEN).
    // *   **DG**: self-managed database connected over Database Gateway.
    // 
    // > 
    // 
    // *   If the source instance is a PolarDB for PostgreSQL (Compatible with Oracle) cluster, you must connect the cluster to DTS as a self-managed database by using a public IP address or Express Connect and set this parameter to **OTHER** or **EXPRESS**.
    // *   For more information, see [Supported sources and targets](https://help.aliyun.com/document_detail/176064.html).
    // *   If the source instance is a self-managed database, you must deploy the network environment for the database. For more information, see [Preparation overview](https://help.aliyun.com/document_detail/146958.html).
    // 
    // This parameter is required.
    shared_ptr<string> sourceEndpointInstanceType_ {};
    // The SID of the Oracle database.
    // 
    // > This parameter is valid and required only if **SourceEndpointEngineName** is set to **ORACLE** and the **Oracle** database is deployed in a non-Real Application Cluster (RAC) architecture.
    shared_ptr<string> sourceEndpointOracleSID_ {};
    // The ID of the Alibaba Cloud account to which the source database belongs.
    // 
    // > You can specify this parameter to migrate or synchronize data across different Alibaba Cloud accounts. In this case, you must specify **SourceEndpointRole**.
    shared_ptr<string> sourceEndpointOwnerID_ {};
    // The password of the account that is used to log on to the source database.
    shared_ptr<string> sourceEndpointPassword_ {};
    // The port number of the source instance.
    // 
    // > This parameter is required only if the source instance is a self-managed database.
    shared_ptr<string> sourceEndpointPort_ {};
    // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // > If the source instance is an Alibaba Cloud database instance, this parameter is required.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The name of the Resource Access Management (RAM) role configured for the Alibaba Cloud account to which the source instance belongs.
    // 
    // > This parameter is required if you migrate or synchronize data across different Alibaba Cloud accounts. For information about the permissions and authorization methods of the RAM role, see [Configure RAM authorization for cross-account DTS tasks](https://help.aliyun.com/document_detail/48468.html).
    shared_ptr<string> sourceEndpointRole_ {};
    // The username of the account that is used to log on to the source database.
    // 
    // > 
    // 
    // *   In most cases, this parameter is required.
    // *   The permissions that are required for the database account vary with the migration or synchronization scenario. For more information, see [Prepare the database accounts for data migration](https://help.aliyun.com/document_detail/175878.html) or [Prepare the database accounts for data synchronization](https://help.aliyun.com/document_detail/213152.html).
    shared_ptr<string> sourceEndpointUserName_ {};
    // The ID of the vSwitch that is used for data shipping.
    shared_ptr<string> sourceEndpointVSwitchID_ {};
    // The path of the certificate authority (CA) certificate that is used if the connection to the source database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcCaCertificateOssUrl_ {};
    // The key of the CA certificate that is used if the connection to the source database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcCaCertificatePassword_ {};
    // The path to the client certificate that is used if the connection to the source database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcClientCertOssUrl_ {};
    // The path to the private key of the client certificate that is used if the connection to the source database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcClientKeyOssUrl_ {};
    // The password of the private key of the client certificate that is used if the connection to the source database is encrypted by using SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcClientPassword_ {};
    // VPCNAT source end main VSW
    shared_ptr<string> srcPrimaryVswId_ {};
    // VPCNAT source backup VSW
    shared_ptr<string> srcSecondaryVswId_ {};
    // Specifies whether to perform schema migration or schema synchronization. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > If **JobType** is set to **CHECK**, set this parameter to **false**.
    // 
    // This parameter is required.
    shared_ptr<bool> structureInitialization_ {};
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > 
    // 
    // *   The default value is **Forward**.
    // *   The value **Reverse** takes effect only if the topology of the data synchronization task is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
