// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DelayNotice, delayNotice_);
      DARABONBA_PTR_TO_JSON(DelayPhone, delayPhone_);
      DARABONBA_PTR_TO_JSON(DelayRuleTime, delayRuleTime_);
      DARABONBA_PTR_TO_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(ErrorNotice, errorNotice_);
      DARABONBA_PTR_TO_JSON(ErrorPhone, errorPhone_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
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
      DARABONBA_PTR_TO_JSON(SrcCaCertificateOssUrl, srcCaCertificateOssUrl_);
      DARABONBA_PTR_TO_JSON(SrcCaCertificatePassword, srcCaCertificatePassword_);
      DARABONBA_PTR_TO_JSON(SrcClientCertOssUrl, srcClientCertOssUrl_);
      DARABONBA_PTR_TO_JSON(SrcClientKeyOssUrl, srcClientKeyOssUrl_);
      DARABONBA_PTR_TO_JSON(SrcClientPassword, srcClientPassword_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataTypeDDL, subscriptionDataTypeDDL_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataTypeDML, subscriptionDataTypeDML_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceNetworkType, subscriptionInstanceNetworkType_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceVPCId, subscriptionInstanceVPCId_);
      DARABONBA_PTR_TO_JSON(SubscriptionInstanceVSwitchId, subscriptionInstanceVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DelayNotice, delayNotice_);
      DARABONBA_PTR_FROM_JSON(DelayPhone, delayPhone_);
      DARABONBA_PTR_FROM_JSON(DelayRuleTime, delayRuleTime_);
      DARABONBA_PTR_FROM_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(ErrorNotice, errorNotice_);
      DARABONBA_PTR_FROM_JSON(ErrorPhone, errorPhone_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
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
      DARABONBA_PTR_FROM_JSON(SrcCaCertificateOssUrl, srcCaCertificateOssUrl_);
      DARABONBA_PTR_FROM_JSON(SrcCaCertificatePassword, srcCaCertificatePassword_);
      DARABONBA_PTR_FROM_JSON(SrcClientCertOssUrl, srcClientCertOssUrl_);
      DARABONBA_PTR_FROM_JSON(SrcClientKeyOssUrl, srcClientKeyOssUrl_);
      DARABONBA_PTR_FROM_JSON(SrcClientPassword, srcClientPassword_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataTypeDDL, subscriptionDataTypeDDL_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataTypeDML, subscriptionDataTypeDML_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceNetworkType, subscriptionInstanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceVPCId, subscriptionInstanceVPCId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionInstanceVSwitchId, subscriptionInstanceVSwitchId_);
    };
    ConfigureSubscriptionRequest() = default ;
    ConfigureSubscriptionRequest(const ConfigureSubscriptionRequest &) = default ;
    ConfigureSubscriptionRequest(ConfigureSubscriptionRequest &&) = default ;
    ConfigureSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionRequest() = default ;
    ConfigureSubscriptionRequest& operator=(const ConfigureSubscriptionRequest &) = default ;
    ConfigureSubscriptionRequest& operator=(ConfigureSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->dbList_ == nullptr && this->dedicatedClusterId_ == nullptr && this->delayNotice_ == nullptr && this->delayPhone_ == nullptr && this->delayRuleTime_ == nullptr
        && this->dtsBisLabel_ == nullptr && this->dtsInstanceId_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->errorNotice_ == nullptr
        && this->errorPhone_ == nullptr && this->maxDu_ == nullptr && this->minDu_ == nullptr && this->regionId_ == nullptr && this->reserve_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sourceEndpointDatabaseName_ == nullptr && this->sourceEndpointEngineName_ == nullptr && this->sourceEndpointIP_ == nullptr && this->sourceEndpointInstanceID_ == nullptr
        && this->sourceEndpointInstanceType_ == nullptr && this->sourceEndpointOracleSID_ == nullptr && this->sourceEndpointOwnerID_ == nullptr && this->sourceEndpointPassword_ == nullptr && this->sourceEndpointPort_ == nullptr
        && this->sourceEndpointRegion_ == nullptr && this->sourceEndpointRole_ == nullptr && this->sourceEndpointUserName_ == nullptr && this->srcCaCertificateOssUrl_ == nullptr && this->srcCaCertificatePassword_ == nullptr
        && this->srcClientCertOssUrl_ == nullptr && this->srcClientKeyOssUrl_ == nullptr && this->srcClientPassword_ == nullptr && this->subscriptionDataTypeDDL_ == nullptr && this->subscriptionDataTypeDML_ == nullptr
        && this->subscriptionInstanceNetworkType_ == nullptr && this->subscriptionInstanceVPCId_ == nullptr && this->subscriptionInstanceVSwitchId_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline ConfigureSubscriptionRequest& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline ConfigureSubscriptionRequest& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline ConfigureSubscriptionRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // delayNotice Field Functions 
    bool hasDelayNotice() const { return this->delayNotice_ != nullptr;};
    void deleteDelayNotice() { this->delayNotice_ = nullptr;};
    inline bool getDelayNotice() const { DARABONBA_PTR_GET_DEFAULT(delayNotice_, false) };
    inline ConfigureSubscriptionRequest& setDelayNotice(bool delayNotice) { DARABONBA_PTR_SET_VALUE(delayNotice_, delayNotice) };


    // delayPhone Field Functions 
    bool hasDelayPhone() const { return this->delayPhone_ != nullptr;};
    void deleteDelayPhone() { this->delayPhone_ = nullptr;};
    inline string getDelayPhone() const { DARABONBA_PTR_GET_DEFAULT(delayPhone_, "") };
    inline ConfigureSubscriptionRequest& setDelayPhone(string delayPhone) { DARABONBA_PTR_SET_VALUE(delayPhone_, delayPhone) };


    // delayRuleTime Field Functions 
    bool hasDelayRuleTime() const { return this->delayRuleTime_ != nullptr;};
    void deleteDelayRuleTime() { this->delayRuleTime_ = nullptr;};
    inline int64_t getDelayRuleTime() const { DARABONBA_PTR_GET_DEFAULT(delayRuleTime_, 0L) };
    inline ConfigureSubscriptionRequest& setDelayRuleTime(int64_t delayRuleTime) { DARABONBA_PTR_SET_VALUE(delayRuleTime_, delayRuleTime) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string getDtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline ConfigureSubscriptionRequest& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ConfigureSubscriptionRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ConfigureSubscriptionRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline ConfigureSubscriptionRequest& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // errorNotice Field Functions 
    bool hasErrorNotice() const { return this->errorNotice_ != nullptr;};
    void deleteErrorNotice() { this->errorNotice_ = nullptr;};
    inline bool getErrorNotice() const { DARABONBA_PTR_GET_DEFAULT(errorNotice_, false) };
    inline ConfigureSubscriptionRequest& setErrorNotice(bool errorNotice) { DARABONBA_PTR_SET_VALUE(errorNotice_, errorNotice) };


    // errorPhone Field Functions 
    bool hasErrorPhone() const { return this->errorPhone_ != nullptr;};
    void deleteErrorPhone() { this->errorPhone_ = nullptr;};
    inline string getErrorPhone() const { DARABONBA_PTR_GET_DEFAULT(errorPhone_, "") };
    inline ConfigureSubscriptionRequest& setErrorPhone(string errorPhone) { DARABONBA_PTR_SET_VALUE(errorPhone_, errorPhone) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline ConfigureSubscriptionRequest& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline ConfigureSubscriptionRequest& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigureSubscriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserve Field Functions 
    bool hasReserve() const { return this->reserve_ != nullptr;};
    void deleteReserve() { this->reserve_ = nullptr;};
    inline string getReserve() const { DARABONBA_PTR_GET_DEFAULT(reserve_, "") };
    inline ConfigureSubscriptionRequest& setReserve(string reserve) { DARABONBA_PTR_SET_VALUE(reserve_, reserve) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureSubscriptionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string getSourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointEngineName Field Functions 
    bool hasSourceEndpointEngineName() const { return this->sourceEndpointEngineName_ != nullptr;};
    void deleteSourceEndpointEngineName() { this->sourceEndpointEngineName_ = nullptr;};
    inline string getSourceEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointEngineName_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointEngineName(string sourceEndpointEngineName) { DARABONBA_PTR_SET_VALUE(sourceEndpointEngineName_, sourceEndpointEngineName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string getSourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string getSourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointOwnerID Field Functions 
    bool hasSourceEndpointOwnerID() const { return this->sourceEndpointOwnerID_ != nullptr;};
    void deleteSourceEndpointOwnerID() { this->sourceEndpointOwnerID_ = nullptr;};
    inline string getSourceEndpointOwnerID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOwnerID_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointOwnerID(string sourceEndpointOwnerID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOwnerID_, sourceEndpointOwnerID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string getSourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline string getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointPort(string sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointRole Field Functions 
    bool hasSourceEndpointRole() const { return this->sourceEndpointRole_ != nullptr;};
    void deleteSourceEndpointRole() { this->sourceEndpointRole_ = nullptr;};
    inline string getSourceEndpointRole() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRole_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointRole(string sourceEndpointRole) { DARABONBA_PTR_SET_VALUE(sourceEndpointRole_, sourceEndpointRole) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline ConfigureSubscriptionRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


    // srcCaCertificateOssUrl Field Functions 
    bool hasSrcCaCertificateOssUrl() const { return this->srcCaCertificateOssUrl_ != nullptr;};
    void deleteSrcCaCertificateOssUrl() { this->srcCaCertificateOssUrl_ = nullptr;};
    inline string getSrcCaCertificateOssUrl() const { DARABONBA_PTR_GET_DEFAULT(srcCaCertificateOssUrl_, "") };
    inline ConfigureSubscriptionRequest& setSrcCaCertificateOssUrl(string srcCaCertificateOssUrl) { DARABONBA_PTR_SET_VALUE(srcCaCertificateOssUrl_, srcCaCertificateOssUrl) };


    // srcCaCertificatePassword Field Functions 
    bool hasSrcCaCertificatePassword() const { return this->srcCaCertificatePassword_ != nullptr;};
    void deleteSrcCaCertificatePassword() { this->srcCaCertificatePassword_ = nullptr;};
    inline string getSrcCaCertificatePassword() const { DARABONBA_PTR_GET_DEFAULT(srcCaCertificatePassword_, "") };
    inline ConfigureSubscriptionRequest& setSrcCaCertificatePassword(string srcCaCertificatePassword) { DARABONBA_PTR_SET_VALUE(srcCaCertificatePassword_, srcCaCertificatePassword) };


    // srcClientCertOssUrl Field Functions 
    bool hasSrcClientCertOssUrl() const { return this->srcClientCertOssUrl_ != nullptr;};
    void deleteSrcClientCertOssUrl() { this->srcClientCertOssUrl_ = nullptr;};
    inline string getSrcClientCertOssUrl() const { DARABONBA_PTR_GET_DEFAULT(srcClientCertOssUrl_, "") };
    inline ConfigureSubscriptionRequest& setSrcClientCertOssUrl(string srcClientCertOssUrl) { DARABONBA_PTR_SET_VALUE(srcClientCertOssUrl_, srcClientCertOssUrl) };


    // srcClientKeyOssUrl Field Functions 
    bool hasSrcClientKeyOssUrl() const { return this->srcClientKeyOssUrl_ != nullptr;};
    void deleteSrcClientKeyOssUrl() { this->srcClientKeyOssUrl_ = nullptr;};
    inline string getSrcClientKeyOssUrl() const { DARABONBA_PTR_GET_DEFAULT(srcClientKeyOssUrl_, "") };
    inline ConfigureSubscriptionRequest& setSrcClientKeyOssUrl(string srcClientKeyOssUrl) { DARABONBA_PTR_SET_VALUE(srcClientKeyOssUrl_, srcClientKeyOssUrl) };


    // srcClientPassword Field Functions 
    bool hasSrcClientPassword() const { return this->srcClientPassword_ != nullptr;};
    void deleteSrcClientPassword() { this->srcClientPassword_ = nullptr;};
    inline string getSrcClientPassword() const { DARABONBA_PTR_GET_DEFAULT(srcClientPassword_, "") };
    inline ConfigureSubscriptionRequest& setSrcClientPassword(string srcClientPassword) { DARABONBA_PTR_SET_VALUE(srcClientPassword_, srcClientPassword) };


    // subscriptionDataTypeDDL Field Functions 
    bool hasSubscriptionDataTypeDDL() const { return this->subscriptionDataTypeDDL_ != nullptr;};
    void deleteSubscriptionDataTypeDDL() { this->subscriptionDataTypeDDL_ = nullptr;};
    inline bool getSubscriptionDataTypeDDL() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDataTypeDDL_, false) };
    inline ConfigureSubscriptionRequest& setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL) { DARABONBA_PTR_SET_VALUE(subscriptionDataTypeDDL_, subscriptionDataTypeDDL) };


    // subscriptionDataTypeDML Field Functions 
    bool hasSubscriptionDataTypeDML() const { return this->subscriptionDataTypeDML_ != nullptr;};
    void deleteSubscriptionDataTypeDML() { this->subscriptionDataTypeDML_ = nullptr;};
    inline bool getSubscriptionDataTypeDML() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDataTypeDML_, false) };
    inline ConfigureSubscriptionRequest& setSubscriptionDataTypeDML(bool subscriptionDataTypeDML) { DARABONBA_PTR_SET_VALUE(subscriptionDataTypeDML_, subscriptionDataTypeDML) };


    // subscriptionInstanceNetworkType Field Functions 
    bool hasSubscriptionInstanceNetworkType() const { return this->subscriptionInstanceNetworkType_ != nullptr;};
    void deleteSubscriptionInstanceNetworkType() { this->subscriptionInstanceNetworkType_ = nullptr;};
    inline string getSubscriptionInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceNetworkType_, "") };
    inline ConfigureSubscriptionRequest& setSubscriptionInstanceNetworkType(string subscriptionInstanceNetworkType) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceNetworkType_, subscriptionInstanceNetworkType) };


    // subscriptionInstanceVPCId Field Functions 
    bool hasSubscriptionInstanceVPCId() const { return this->subscriptionInstanceVPCId_ != nullptr;};
    void deleteSubscriptionInstanceVPCId() { this->subscriptionInstanceVPCId_ = nullptr;};
    inline string getSubscriptionInstanceVPCId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceVPCId_, "") };
    inline ConfigureSubscriptionRequest& setSubscriptionInstanceVPCId(string subscriptionInstanceVPCId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceVPCId_, subscriptionInstanceVPCId) };


    // subscriptionInstanceVSwitchId Field Functions 
    bool hasSubscriptionInstanceVSwitchId() const { return this->subscriptionInstanceVSwitchId_ != nullptr;};
    void deleteSubscriptionInstanceVSwitchId() { this->subscriptionInstanceVSwitchId_ = nullptr;};
    inline string getSubscriptionInstanceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionInstanceVSwitchId_, "") };
    inline ConfigureSubscriptionRequest& setSubscriptionInstanceVSwitchId(string subscriptionInstanceVSwitchId) { DARABONBA_PTR_SET_VALUE(subscriptionInstanceVSwitchId_, subscriptionInstanceVSwitchId) };


  protected:
    // The start time of change tracking, in the format of a UNIX timestamp. Unit: seconds.
    // > You can use a search engine to find a UNIX timestamp converter.
    shared_ptr<string> checkpoint_ {};
    // The objects to be tracked, in JSON format. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    // 
    // This parameter is required.
    shared_ptr<string> dbList_ {};
    // The ID of the DTS dedicated cluster. This parameter is used to schedule the change tracking task to the specified DTS dedicated cluster.
    shared_ptr<string> dedicatedClusterId_ {};
    // Specifies whether to monitor the latency status. Valid values:
    // 
    // - **true**: monitors the latency status.
    // - **false**: does not monitor the latency status.
    shared_ptr<bool> delayNotice_ {};
    // The mobile phone numbers for receiving latency alerts. Separate multiple phone numbers with commas (,).
    // > - This parameter is supported only on the China site (aliyun.com). Only Chinese mainland phone numbers are supported, and you can specify up to 10 phone numbers.
    // - The China site (Chinese mainland) does not support phone alerts. You can only [configure alert rules for DTS tasks in CloudMonitor](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> delayPhone_ {};
    // The threshold for triggering latency alerts. Unit: seconds. The value must be an integer. Set the threshold based on your business requirements. To avoid alert fluctuations caused by network conditions or database loads, set the threshold to 10 seconds or more.
    // > This parameter is required when **DelayNotice** is set to **true**.
    shared_ptr<int64_t> delayRuleTime_ {};
    // The environment tag of the DTS instance. Valid values:
    // 
    // - **normal**: normal
    // - **online**: online.
    shared_ptr<string> dtsBisLabel_ {};
    // The ID of the change tracking instance. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to query the instance ID.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the change tracking task. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to query the task ID.
    shared_ptr<string> dtsJobId_ {};
    // The name of the change tracking task.
    // > Specify a descriptive name that makes it easy to identify the task. The name does not need to be unique.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobName_ {};
    // Specifies whether to monitor the error status. Valid values:
    // 
    // - **true**: monitors the error status.
    // - **false**: does not monitor the error status.
    shared_ptr<bool> errorNotice_ {};
    // The mobile phone numbers for receiving error alerts. Separate multiple phone numbers with commas (,).
    // > - This parameter is supported only on the China site (aliyun.com). Only Chinese mainland phone numbers are supported, and you can specify up to 10 phone numbers.
    // - The China site (Chinese mainland) does not support phone alerts. You can only [configure alert rules for DTS tasks in CloudMonitor](https://help.aliyun.com/document_detail/175876.html).
    shared_ptr<string> errorPhone_ {};
    // The maximum number of DUs for a serverless instance. Valid values: 2, 4, 8, and 16.
    // <props="intl">
    // > This feature is currently not supported. Do not specify this parameter..
    shared_ptr<double> maxDu_ {};
    // The minimum number of DTS Units (DUs) for a serverless instance. Valid values: 1, 2, 4, 8, and 16.
    // <props="intl">
    // > This feature is currently not supported. Do not specify this parameter..
    shared_ptr<double> minDu_ {};
    // The region in which the change tracking instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The reserved parameter of DTS, in JSON format. You can specify this parameter to add information about the source and destination databases, such as the data storage format of the destination Kafka database or the CEN instance ID. For more information, see the [Reserve metric description](https://help.aliyun.com/document_detail/176470.html).
    shared_ptr<string> reserve_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the database to be tracked.
    shared_ptr<string> sourceEndpointDatabaseName_ {};
    // The engine type of the source database. Valid values: **MySQL**, **PostgreSQL**, and **Oracle**.
    // 
    // > This parameter is required if the source database is a self-managed database.
    shared_ptr<string> sourceEndpointEngineName_ {};
    // The endpoint of the source database.
    // > This parameter is available and required only when the source database is a self-managed database.
    shared_ptr<string> sourceEndpointIP_ {};
    // The instance ID of the source instance.
    // > This parameter is active and required only when the source database is an ApsaraDB RDS for MySQL instance, a PolarDB-X 1.0 instance, or a PolarDB for MySQL cluster.
    shared_ptr<string> sourceEndpointInstanceID_ {};
    // The instance type of the source database. Valid values:
    // 
    // - **RDS**: ApsaraDB RDS instance.
    // - **PolarDB**: PolarDB for MySQL cluster.
    // - **DRDS**: PolarDB-X 1.0 instance.
    // - **LocalInstance**: self-managed database with a public IP address.
    // - **ECS**: self-managed database hosted on an ECS instance.
    // - **Express**: self-managed database connected over Express Connect.
    // - **CEN**: self-managed database connected over Cloud Enterprise Network (CEN).
    // - **dg**: self-managed database connected over Database Gateway.
    shared_ptr<string> sourceEndpointInstanceType_ {};
    // The SID of the Oracle database.
    // > This parameter is available and required only when the source database is a self-managed Oracle database that is not a Real Application Cluster (RAC) instance.
    shared_ptr<string> sourceEndpointOracleSID_ {};
    // The Alibaba Cloud account ID of the account to which the source instance belongs.
    // > This parameter is active and required only when you configure cross-Alibaba Cloud account change tracking. You must subscribe to the task.
    shared_ptr<string> sourceEndpointOwnerID_ {};
    // The password of the database account for the source instance.
    shared_ptr<string> sourceEndpointPassword_ {};
    // The service port of the source database.
    // > This parameter is available and required only when the source database is a self-managed database.
    shared_ptr<string> sourceEndpointPort_ {};
    // The region of the source instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // > If the source instance is a self-managed database with a public IP address, you can set this parameter to **cn-hangzhou** or the region ID closest to the self-managed database.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The authorized role of the source instance. If the source instance and the change tracking task belong to different Alibaba Cloud accounts, specify this parameter to allow the Alibaba Cloud account that owns the change tracking task to access the source instance.
    // > For more information about the permissions and authorization methods required for the role, see [Configure RAM authorization for cross-account data migration or synchronization](https://help.aliyun.com/document_detail/48468.html).
    shared_ptr<string> sourceEndpointRole_ {};
    // The database account of the source instance.
    // > The permissions required for change tracking vary depending on the database type. For more information, see the account permissions section in [Prepare database accounts for change tracking](https://help.aliyun.com/document_detail/212653.html).
    shared_ptr<string> sourceEndpointUserName_ {};
    // The path of the CA certificate when the source database uses an SSL connection.
    // 
    // > This feature is currently not supported. Do not specify this parameter.
    shared_ptr<string> srcCaCertificateOssUrl_ {};
    // The key of the CA certificate when the source database uses an SSL connection.
    // 
    // > This feature is currently not supported. Do not specify this parameter.
    shared_ptr<string> srcCaCertificatePassword_ {};
    // The path of the client certificate when the source database uses an SSL connection.
    // 
    // > This feature is currently not supported. Do not specify this parameter.
    shared_ptr<string> srcClientCertOssUrl_ {};
    // The path of the client certificate private key when the source database uses an SSL connection.
    // 
    // > This feature is currently not supported. Do not specify this parameter.
    shared_ptr<string> srcClientKeyOssUrl_ {};
    // The password of the client certificate private key when the source database uses an SSL connection.
    // 
    // > This feature is currently not supported. Do not specify this parameter.
    shared_ptr<string> srcClientPassword_ {};
    // Specifies whether to track DDL data. Valid values:
    // 
    // - **true** (default): tracks DDL data.
    // - **false**: does not track DDL data.
    shared_ptr<bool> subscriptionDataTypeDDL_ {};
    // Specifies whether to track DML data. Valid values:
    // - **true** (default): tracks DML data.
    // - **false**: does not track DML data.
    shared_ptr<bool> subscriptionDataTypeDML_ {};
    // The network type of the change tracking task. The only valid value is **vpc**, which indicates virtual private cloud (VPC).
    // 
    // > - If you specify this parameter, the change tracking task is defined as the new version. You must also correctly set the **SubscriptionInstanceVPCId** and **SubscriptionInstanceVSwitchID** parameters. If you do not specify this parameter, the change tracking task is defined as the legacy version.
    // - Legacy change tracking tasks support tracking data from self-managed MySQL, ApsaraDB RDS for MySQL, and PolarDB-X 1.0. New-version change tracking tasks support tracking data from self-managed MySQL, ApsaraDB RDS for MySQL, PolarDB for MySQL, and Oracle.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionInstanceNetworkType_ {};
    // The VPC ID of the change tracking instance.
    // > This parameter is available and required only when **SubscriptionInstanceNetworkType** is set to **vpc**.
    shared_ptr<string> subscriptionInstanceVPCId_ {};
    // The vSwitch ID of the change tracking instance.
    // > This parameter is available and required only when **SubscriptionInstanceNetworkType** is set to **vpc**.
    shared_ptr<string> subscriptionInstanceVSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
