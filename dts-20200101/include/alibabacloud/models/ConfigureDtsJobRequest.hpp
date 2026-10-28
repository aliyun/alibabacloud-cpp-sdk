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
    // The start offset for incremental data migration or the synchronization checkpoint, in UNIX timestamp format. Unit: seconds.
    // 
    // > If you specify the **Checkpoint** parameter, you must ensure that no other running DTS instances use the same source database as the destination DTS instance.
    shared_ptr<string> checkpoint_ {};
    // The parameters for the data validation task, in JSON character string format, such as parameter limits and alert configuration. For more information, see [DataCheckConfigure metric description](https://help.aliyun.com/document_detail/459023.html).
    shared_ptr<string> dataCheckConfigure_ {};
    // Specifies whether to perform full data migration or initial full data synchronization. Valid values:
    // 
    // - **true**: Yes. This is the default value.
    // - **false**: No.
    // 
    // > If **JobType** is set to **CHECK**, you can only set this parameter to **false**.
    // 
    // This parameter is required.
    shared_ptr<bool> dataInitialization_ {};
    // Specifies whether to perform incremental data migration or synchronization. Valid values:
    // 
    // - **false**: No. This is the default value.
    // - **true**: Yes.
    // 
    // > If **JobType** is set to **CHECK**, you can only set this parameter to **false**.
    // 
    // This parameter is required.
    shared_ptr<bool> dataSynchronization_ {};
    // The objects to be migrated or synchronized, in JSON format. For more information, see [Object definitions for migration, synchronization, and change tracking](https://help.aliyun.com/document_detail/209545.html).
    // 
    // - The DbList parameter supports up to 1 MB of data.
    // - If DbList contains filter conditions, the total length of DbList including the filter conditions can be up to 1 MB.
    // - For distributed tasks such as migration or synchronization tasks where the source is PolarDB-X 1.0, DbList is split based on physical table shards to generate multiple subtasks. The DbList of each subtask supports up to 1 MB of data.
    shared_ptr<string> dbList_ {};
    // The ID of the dedicated DTS cluster.
    // 
    // > When the ID of a dedicated cluster is specified, the task is scheduled to the corresponding cluster.
    shared_ptr<string> dedicatedClusterId_ {};
    // Specifies whether to monitor the latency status. Valid values:
    // 
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> delayNotice_ {};
    // The mobile phone numbers of the contacts to receive latency alerts. Separate multiple mobile phone numbers with commas (,).
    // > - This parameter is supported only on the China site and supports only mobile phone numbers in the Chinese mainland. You can specify up to 10 mobile phone numbers.
    // - The international site does not support mobile phone alerts. You can only [set alert rules for DTS tasks through CloudMonitor](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> delayPhone_ {};
    // The threshold for triggering latency alerts. Unit: seconds. The value must be an integer. You can set the threshold based on your business requirements. We recommend that you set the threshold to more than 10 seconds to avoid latency fluctuations caused by network or database loads.
    // > This parameter is required when **DelayNotice** is set to **true**.
    shared_ptr<int64_t> delayRuleTime_ {};
    // The path of the CA certificate when the destination database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destCaCertificateOssUrl_ {};
    // The password of the CA certificate when the destination database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destCaCertificatePassword_ {};
    // The path of the client certificate when the destination database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destClientCertOssUrl_ {};
    // The path of the client certificate private key when the destination database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destClientKeyOssUrl_ {};
    // The password of the client certificate private key when the destination database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> destClientPassword_ {};
    // The primary vSwitch at the destination end of the VPC NAT gateway.
    shared_ptr<string> destPrimaryVswId_ {};
    // The secondary vSwitch at the destination end of the VPC NAT gateway.
    shared_ptr<string> destSecondaryVswId_ {};
    // The name of the database to which the migration objects belong in the destination instance.
    // > - This parameter is available and required only when the destination instance or the database engine of the destination instance is PolarDB for PostgreSQL (Compatible with Oracle), AnalyticDB for PostgreSQL, PostgreSQL, MaxCompute, or MongoDB.
    // - If the destination database is MaxCompute, you must specify the name of the MaxCompute project.
    shared_ptr<string> destinationEndpointDataBaseName_ {};
    // The database type of the destination instance. Valid values:
    // - **MYSQL**: MySQL database, including ApsaraDB RDS for MySQL and self-managed MySQL.
    // - **MARIADB**: ApsaraDB RDS for MariaDB.
    // - **PolarDB**: PolarDB for MySQL.
    // - **POLARDB_O**: PolarDB for PostgreSQL (Compatible with Oracle).
    // - **POLARDBX10**: PolarDB-X 1.0 (formerly DRDS).
    // - **POLARDBX20**: cloud-native distributed database PolarDB-X 2.0.
    // - **ORACLE**: Self-managed Oracle database.
    // - **PostgreSQL**: PostgreSQL database, including ApsaraDB RDS for PostgreSQL and self-managed PostgreSQL.
    // - **MSSQL**: SQL Server database, including ApsaraDB RDS for SQL Server and self-managed SQL Server.
    // - **ADS**: AnalyticDB for MySQL V2.0.
    // - **ADB30**: AnalyticDB for MySQL V3.0.
    // - **MONGODB**: MongoDB database, including self-managed MongoDB and ApsaraDB for MongoDB.
    // - **ROCKETMQ**: MSMQ RocketMQ.
    // - **GREENPLUM**: AnalyticDB for PostgreSQL.
    // - **KAFKA**: Kafka database, including MSMQ for Kafka and self-managed Kafka.
    // - **DATAHUB**: DataHub.
    // - **DB2**: Self-managed Db2 for LUW database.
    // - **AS400**: Self-managed Db2 for i database.
    // - **ODPS**: MaxCompute.
    // - **Tablestore**: Tablestore.
    // - **ELK**: Alibaba Cloud retrieve and analysis service Elasticsearch.
    // - **REDIS**: Redis database, including self-managed Redis and Tair (Redis OSS-Compatible).
    // - **LINDORM**: cloud-native multi-model database Lindorm.
    // 
    // > - Default value: **MYSQL**.
    // - If the database type of the destination instance is set to **KAFKA**, **MONGODB**, or **PolarDB**, you must also specify some information in the reserved parameter Reserve. For more information about the configuration method, see [Reserve metric description](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> destinationEndpointEngineName_ {};
    // The IP address of the destination instance.
    // > This parameter is available and required only when **DestinationEndpointInstanceType** is set to **OTHER**, **EXPRESS**, **DG**, or **CEN**.
    shared_ptr<string> destinationEndpointIP_ {};
    // The instance ID of the destination instance.
    // 
    // If the destination instance is an ApsaraDB database such as ApsaraDB RDS for MySQL, you must specify the instance ID of the ApsaraDB database.
    // 
    // If the destination instance is a self-managed database, the value of this parameter varies based on the value of **DestinationEndpointInstanceType**. For example:
    // 
    // - If **DestinationEndpointInstanceType** is set to **ECS**, specify the instance ID of the ECS instance.
    // - If **DestinationEndpointInstanceType** is set to **DG**, specify the instance ID of the database gateway.
    // - If **DestinationEndpointInstanceType** is set to **EXPRESS** or **CEN**, specify the instance ID of the VPC that is connected to the source database.
    // 
    // > If the value is **CEN**, you must also specify the instance ID of the CEN instance in the reserved parameter Reserve. For more information about the configuration method, see [Reserve metric description](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> destinationEndpointInstanceID_ {};
    // The target instance type. Valid values:
    // 
    // **Alibaba Cloud databases**
    // - **RDS**: ApsaraDB RDS for MySQL, ApsaraDB RDS for SQL Server, ApsaraDB RDS for PostgreSQL, or ApsaraDB RDS for MariaDB.
    // - **PolarDB**: PolarDB for MySQL.
    // - **DISTRIBUTED_POLARDBX10**: PolarDB-X 1.0 (formerly DRDS).
    // - **POLARDBX20**: PolarDB-X 2.0.
    // - **REDIS**: Tair (Redis OSS-Compatible).
    // - **ADS**: AnalyticDB for MySQL V2.0 or V3.0.
    // - **MONGODB**: ApsaraDB for MongoDB.
    // - **ROCKETMQ**: ApsaraDB for RocketMQ.
    // - **GREENPLUM**: AnalyticDB for PostgreSQL.
    // - **DATAHUB**: DataHub, the Alibaba Cloud streaming data processing platform.
    // - **ELK**: Alibaba Cloud retrieve and analysis service Elasticsearch.
    // - **Tablestore**: Tablestore.
    // - **ODPS**: MaxCompute.
    // - **LINDORM**: cloud-native multi-model database Lindorm.
    // 
    // **Self-managed databases**
    // - **OTHER**: Self-managed database with a public IP address.
    // - **ECS**: Self-managed database hosted on ECS.
    // - **EXPRESS**: Self-managed database connected over Express Connect.
    // - **CEN**: Self-managed database connected over CEN.
    // - **DG**: Self-managed database connected over Database Gateway.
    // 
    // > - If the destination instance is a PolarDB for PostgreSQL (Compatible with Oracle) cluster, you must set this parameter to **OTHER** or **EXPRESS** to treat it as a self-managed database and connect it over a public IP address or Express Connect.
    // - If the destination instance is MSMQ for Kafka, you must set this parameter to **ECS** or **EXPRESS** to treat it as a self-managed database and connect it over ECS or Express Connect.
    // - For more information about the supported source and destination databases, see <props="china">[Supported databases](https://help.aliyun.com/document_detail/131497.html)<props="intl">[Supported source and destination databases](https://help.aliyun.com/document_detail/176064.html).
    // - If the destination instance is a self-managed database, you must execute the corresponding preparations. For more information, see [Preparations overview](https://help.aliyun.com/document_detail/146958.html).
    // 
    // This parameter is required.
    shared_ptr<string> destinationEndpointInstanceType_ {};
    // The SID of the Oracle database.
    // > This parameter is available and required only when **DestinationEndpointEngineName** is set to **Oracle** and the **Oracle** database is a non-RAC instance.
    shared_ptr<string> destinationEndpointOracleSID_ {};
    // The Alibaba Cloud account ID to which the destination ApsaraDB RDS for MySQL instance belongs.
    // > - This parameter can be configured only when the destination instance is ApsaraDB RDS for MySQL.
    // - Specifying this parameter indicates that you execute cross-Alibaba Cloud account data migration or synchronization. You must also specify the **DestinationEndpointRole** parameter.
    shared_ptr<string> destinationEndpointOwnerID_ {};
    // The password of the database account of the destination database.
    // > If the destination database is MaxCompute, you must specify the AccessKey secret of the Alibaba Cloud account. For more information about how to obtain an AccessKey secret, see [Create an AccessKey pair](https://help.aliyun.com/document_detail/116401.html).
    shared_ptr<string> destinationEndpointPassword_ {};
    // The database service port of the destination instance.
    // > This parameter is available and required only when the destination instance is a self-managed database.
    shared_ptr<string> destinationEndpointPort_ {};
    // The area of the destination instance. For details, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // > This parameter is required if the destination instance is an ApsaraDB database.
    shared_ptr<string> destinationEndpointRegion_ {};
    // The name of the role configured for the Alibaba Cloud account to which the destination instance belongs.
    // > This parameter is required when you migrate or synchronize data across Alibaba Cloud accounts. For more information about the permissions required for the role and the authorization method, see [Configure RAM authorization for cross-account data migration or synchronization](https://help.aliyun.com/document_detail/48468.html).
    shared_ptr<string> destinationEndpointRole_ {};
    // The database account of the destination database.
    // > - In most cases, you must specify the database account of the destination database.
    // - The permissions required for migrating or synchronizing data vary based on the database. For more information about the permission requirements, see [Prepare database accounts for data migration](https://help.aliyun.com/document_detail/175878.html) and [Prepare database accounts for data synchronization](https://help.aliyun.com/document_detail/213152.html).
    // - If the destination database is MaxCompute, you must specify the AccessKey ID of the Alibaba Cloud account. For more information about how to obtain an AccessKey ID, see [Create an AccessKey pair](https://help.aliyun.com/document_detail/116401.html).
    shared_ptr<string> destinationEndpointUserName_ {};
    // Specifies whether the instance is a disaster recovery instance. Valid values:
    // 
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> disasterRecoveryJob_ {};
    // The environment tag of the DTS instance. Valid values:
    // 
    // - **normal**: Normal.
    // - **online**: Online.
    shared_ptr<string> dtsBisLabel_ {};
    // The ID of the data migration or synchronization instance.
    // > You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the data migration or synchronization task.
    // > You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    shared_ptr<string> dtsJobId_ {};
    // The name of the DTS instance.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobName_ {};
    // Specifies whether to monitor the exception status. Valid values:
    // 
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> errorNotice_ {};
    // The mobile phone numbers of the contacts to receive exception alerts. Separate multiple mobile phone numbers with commas (,).
    // > - This parameter is supported only on the China site and supports only mobile phone numbers in the Chinese mainland. You can specify up to 10 mobile phone numbers.
    // - The international site does not support mobile phone alerts. You can only [set alert rules for DTS tasks through CloudMonitor](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> errorPhone_ {};
    // The OSS URL of the task file.
    shared_ptr<string> fileOssUrl_ {};
    // The node type. Valid values:
    // 
    // - **MIGRATION**: data migration.
    // - **SYNC**: data synchronization.
    // - **CHECK**: data validation (purchased separately).
    // 
    // > - If the value is **MIGRATION** or **SYNC**, you can also configure a data validation node in the migration or synchronization instance.
    // - To configure a data validation node, you must also configure the **DataCheckConfigure** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The maximum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    shared_ptr<double> maxDu_ {};
    // The minimum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    shared_ptr<double> minDu_ {};
    shared_ptr<string> ownerId_ {};
    // The region of the DTS instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The reserved parameter of DTS, in JSON character string format. You can specify this parameter to supplement the information about the source and destination databases, such as the data storage format of the destination Kafka database, the instance ID of the CEN instance, and the ETL feature configuration. For more information, see [Reserve metric description](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> reserve_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the database to which the migration objects belong in the source instance.
    // > This parameter is available and required only when the source instance or the database engine of the source instance is PolarDB for PostgreSQL (Compatible with Oracle), PostgreSQL, or MongoDB.
    shared_ptr<string> sourceEndpointDatabaseName_ {};
    // The database type of the source instance. Valid values:
    // - **MYSQL**: MySQL database, including ApsaraDB RDS for MySQL and self-managed MySQL.
    // - **MARIADB**: ApsaraDB RDS for MariaDB.
    // - **PolarDB**: PolarDB for MySQL.
    // - **POLARDB_O**: PolarDB for PostgreSQL (Compatible with Oracle).
    // - **POLARDBX10**: PolarDB-X 1.0 (formerly DRDS).
    // - **POLARDBX20**: cloud-native distributed database PolarDB-X 2.0.
    // - **ADB30**: AnalyticDB for MySQL V3.0.
    // - **ORACLE**: Self-managed Oracle database.
    // - **POSTGRESQL**: PostgreSQL database, including ApsaraDB RDS for PostgreSQL and self-managed PostgreSQL.
    // - **MSSQL**: SQL Server database, including ApsaraDB RDS for SQL Server and self-managed SQL Server.
    // - **MONGODB**: MongoDB database, including self-managed MongoDB and ApsaraDB for MongoDB.
    // - **DB2**: Self-managed Db2 for LUW database.
    // - **AS400**: Self-managed Db2 for i database.
    // - **DMSPOLARDB**: DMS logical database.
    // - **HBASE**: Self-managed HBase database.
    // - **TERADATA**: Teradata database.
    // - **TiDB**: TiDB database.
    // - **REDIS**: Redis database, including self-managed Redis and Tair (Redis OSS-Compatible).
    // - **LINDORM**: cloud-native multi-model database Lindorm.
    // 
    // 
    // > - Default value: **MYSQL**.
    // - If the database type of the source instance is set to **MONGODB**, you must also specify some information in the reserved parameter Reserve. For more information about the configuration method, see [Reserve metric description](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> sourceEndpointEngineName_ {};
    // The IP address of the source instance.
    // > This parameter is available and required only when **SourceEndpointInstanceType** is set to **OTHER**, **EXPRESS**, **DG**, or **CEN**.
    shared_ptr<string> sourceEndpointIP_ {};
    // The instance ID of the source instance.
    // 
    // If the source instance is an ApsaraDB database such as ApsaraDB RDS for MySQL, you must specify the instance ID of the ApsaraDB database.
    // 
    // If the source instance is a self-managed database, the value of this parameter varies based on the value of **SourceEndpointInstanceType**. For example:
    // 
    // - If **SourceEndpointInstanceType** is set to **ECS**, specify the instance ID of the ECS instance.
    // - If **SourceEndpointInstanceType** is set to **DG**, specify the instance ID of the database gateway.
    // - If **SourceEndpointInstanceType** is set to **EXPRESS** or **CEN**, specify the instance ID of the VPC that is connected to the source database.
    // 
    // > If the value is **CEN**, you must also specify the instance ID of the CEN instance in the reserved parameter Reserve. For more information about the configuration method, see [Reserve metric description](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> sourceEndpointInstanceID_ {};
    // The type of the source instance. Valid values:
    // 
    // **Alibaba Cloud databases**
    // 
    // - **RDS**: ApsaraDB RDS for MySQL, ApsaraDB RDS for SQL Server, ApsaraDB RDS for PostgreSQL, or ApsaraDB RDS for MariaDB.
    // - **PolarDB**: PolarDB for MySQL.
    // - **ADS**: AnalyticDB for MySQL.
    // - **REDIS**: Tair (Redis® OSS-Compatible).
    // - **DISTRIBUTED_POLARDBX10**: PolarDB-X 1.0 (formerly DRDS).
    // - **POLARDBX20**: PolarDB-X 2.0.
    // - **MONGODB**: ApsaraDB for MongoDB.
    // - **DISTRIBUTED_DMSLOGICDB**: Data Management (DMS) logical database.
    // - **LINDORM**: Lindorm.
    // 
    // **Self-managed databases**
    // - **OTHER**: A self-managed database with a public IP address.
    // - **ECS**: A self-managed database hosted on an ECS instance.
    // - **EXPRESS**: A self-managed database connected over an Express Connect circuit.
    // - **CEN**: A self-managed database connected over a Cloud Enterprise Network (CEN) instance.
    // - **DG**: A self-managed database connected over a database gateway.
    // 
    // 
    // > - If the source instance is a PolarDB for PostgreSQL (Oracle-Compatible) cluster, set this parameter to **OTHER** or **EXPRESS**. The cluster is treated as a self-managed database and is connected by using a public IP address or an Express Connect circuit.
    // - For more information about the supported source and destination databases, see [Supported databases](https://help.aliyun.com/document_detail/131497.html).
    // - If the source instance is a self-managed database, you must also complete the corresponding preparations. For more information, see [Preparations overview](https://help.aliyun.com/document_detail/130607.html).
    // 
    // This parameter is required.
    shared_ptr<string> sourceEndpointInstanceType_ {};
    // The system ID (SID) of the Oracle database.
    // > This parameter is available and required only when **SourceEndpointEngineName** is set to **Oracle** and the **Oracle** database is a non-RAC instance.
    shared_ptr<string> sourceEndpointOracleSID_ {};
    // The Alibaba Cloud account ID to which the source instance belongs.
    // > Specifying this parameter indicates that you execute cross-Alibaba Cloud account data migration or synchronization. You must also specify the **SourceEndpointRole** parameter.
    shared_ptr<string> sourceEndpointOwnerID_ {};
    // The password of the database account of the source database.
    shared_ptr<string> sourceEndpointPassword_ {};
    // The database service port of the source instance.
    // > This parameter is available and required only when the source instance is a self-managed database.
    shared_ptr<string> sourceEndpointPort_ {};
    // The area of the source instance. For details, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // > This parameter is required if the source instance is an ApsaraDB database.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The name of the role configured for the Alibaba Cloud account to which the source instance belongs.
    // > This parameter is required when you migrate or synchronize data across Alibaba Cloud accounts. For more information about the permissions required for the role and the authorization method, see [Configure RAM authorization for cross-account data migration or synchronization](https://help.aliyun.com/document_detail/48468.html).
    shared_ptr<string> sourceEndpointRole_ {};
    // The database account of the source database.
    // > - In most cases, you must specify the database account of the source database.
    // - The permissions required for migrating or synchronizing data vary based on the database. For more information about the permission requirements, see [Prepare database accounts for data migration](https://help.aliyun.com/document_detail/175878.html) and [Prepare database accounts for data synchronization](https://help.aliyun.com/document_detail/213152.html).
    shared_ptr<string> sourceEndpointUserName_ {};
    // The instance ID of the vSwitch for the data delivery link.
    shared_ptr<string> sourceEndpointVSwitchID_ {};
    // The path of the CA certificate when the source database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcCaCertificateOssUrl_ {};
    // The password of the CA certificate when the source database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcCaCertificatePassword_ {};
    // The path of the client certificate when the source database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcClientCertOssUrl_ {};
    // The path of the client certificate private key when the source database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcClientKeyOssUrl_ {};
    // The password of the client certificate private key when the source database is connected over SSL.
    // 
    // > This feature is not supported. Do not specify this parameter.
    shared_ptr<string> srcClientPassword_ {};
    // The primary vSwitch at the source end of the VPC NAT gateway.
    shared_ptr<string> srcPrimaryVswId_ {};
    // The secondary vSwitch at the source end of the VPC NAT gateway.
    shared_ptr<string> srcSecondaryVswId_ {};
    // Specifies whether to perform schema migration or initial schema synchronization. Valid values:
    // 
    // - **true**: Yes. This is the default value.
    // - **false**: No.
    // 
    // > If **JobType** is set to **CHECK**, you can only set this parameter to **false**.
    // 
    // This parameter is required.
    shared_ptr<bool> structureInitialization_ {};
    // The synchronization direction. Valid values:
    // 
    // - **Forward**: Forward.
    // - **Reverse**: Reverse.
    // 
    // > - Default value: **Forward**.
    // - This parameter takes effect only when the synchronization topology of the synchronization task is two-way and this parameter is set to **Reverse**.
    shared_ptr<string> synchronizationDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
