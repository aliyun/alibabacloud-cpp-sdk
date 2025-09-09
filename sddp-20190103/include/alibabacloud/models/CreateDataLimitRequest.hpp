// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATALIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATALIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class CreateDataLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AutoScan, autoScan_);
      DARABONBA_PTR_TO_JSON(CertificatePermission, certificatePermission_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(InstantlyScan, instantlyScan_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogStoreDay, logStoreDay_);
      DARABONBA_PTR_TO_JSON(OcrStatus, ocrStatus_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SamplingSize, samplingSize_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AutoScan, autoScan_);
      DARABONBA_PTR_FROM_JSON(CertificatePermission, certificatePermission_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(InstantlyScan, instantlyScan_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogStoreDay, logStoreDay_);
      DARABONBA_PTR_FROM_JSON(OcrStatus, ocrStatus_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SamplingSize, samplingSize_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateDataLimitRequest() = default ;
    CreateDataLimitRequest(const CreateDataLimitRequest &) = default ;
    CreateDataLimitRequest(CreateDataLimitRequest &&) = default ;
    CreateDataLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataLimitRequest() = default ;
    CreateDataLimitRequest& operator=(const CreateDataLimitRequest &) = default ;
    CreateDataLimitRequest& operator=(CreateDataLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditStatus_ != nullptr
        && this->autoScan_ != nullptr && this->certificatePermission_ != nullptr && this->enable_ != nullptr && this->engineType_ != nullptr && this->eventStatus_ != nullptr
        && this->featureType_ != nullptr && this->instantlyScan_ != nullptr && this->lang_ != nullptr && this->logStoreDay_ != nullptr && this->ocrStatus_ != nullptr
        && this->parentId_ != nullptr && this->password_ != nullptr && this->port_ != nullptr && this->resourceType_ != nullptr && this->samplingSize_ != nullptr
        && this->serviceRegionId_ != nullptr && this->sourceIp_ != nullptr && this->userName_ != nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline CreateDataLimitRequest& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // autoScan Field Functions 
    bool hasAutoScan() const { return this->autoScan_ != nullptr;};
    void deleteAutoScan() { this->autoScan_ = nullptr;};
    inline int32_t autoScan() const { DARABONBA_PTR_GET_DEFAULT(autoScan_, 0) };
    inline CreateDataLimitRequest& setAutoScan(int32_t autoScan) { DARABONBA_PTR_SET_VALUE(autoScan_, autoScan) };


    // certificatePermission Field Functions 
    bool hasCertificatePermission() const { return this->certificatePermission_ != nullptr;};
    void deleteCertificatePermission() { this->certificatePermission_ = nullptr;};
    inline string certificatePermission() const { DARABONBA_PTR_GET_DEFAULT(certificatePermission_, "") };
    inline CreateDataLimitRequest& setCertificatePermission(string certificatePermission) { DARABONBA_PTR_SET_VALUE(certificatePermission_, certificatePermission) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline CreateDataLimitRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreateDataLimitRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline int32_t eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, 0) };
    inline CreateDataLimitRequest& setEventStatus(int32_t eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline CreateDataLimitRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // instantlyScan Field Functions 
    bool hasInstantlyScan() const { return this->instantlyScan_ != nullptr;};
    void deleteInstantlyScan() { this->instantlyScan_ = nullptr;};
    inline bool instantlyScan() const { DARABONBA_PTR_GET_DEFAULT(instantlyScan_, false) };
    inline CreateDataLimitRequest& setInstantlyScan(bool instantlyScan) { DARABONBA_PTR_SET_VALUE(instantlyScan_, instantlyScan) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataLimitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logStoreDay Field Functions 
    bool hasLogStoreDay() const { return this->logStoreDay_ != nullptr;};
    void deleteLogStoreDay() { this->logStoreDay_ = nullptr;};
    inline int32_t logStoreDay() const { DARABONBA_PTR_GET_DEFAULT(logStoreDay_, 0) };
    inline CreateDataLimitRequest& setLogStoreDay(int32_t logStoreDay) { DARABONBA_PTR_SET_VALUE(logStoreDay_, logStoreDay) };


    // ocrStatus Field Functions 
    bool hasOcrStatus() const { return this->ocrStatus_ != nullptr;};
    void deleteOcrStatus() { this->ocrStatus_ = nullptr;};
    inline int32_t ocrStatus() const { DARABONBA_PTR_GET_DEFAULT(ocrStatus_, 0) };
    inline CreateDataLimitRequest& setOcrStatus(int32_t ocrStatus) { DARABONBA_PTR_SET_VALUE(ocrStatus_, ocrStatus) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline CreateDataLimitRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateDataLimitRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateDataLimitRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline CreateDataLimitRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // samplingSize Field Functions 
    bool hasSamplingSize() const { return this->samplingSize_ != nullptr;};
    void deleteSamplingSize() { this->samplingSize_ = nullptr;};
    inline int32_t samplingSize() const { DARABONBA_PTR_GET_DEFAULT(samplingSize_, 0) };
    inline CreateDataLimitRequest& setSamplingSize(int32_t samplingSize) { DARABONBA_PTR_SET_VALUE(samplingSize_, samplingSize) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline CreateDataLimitRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateDataLimitRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateDataLimitRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether to enable the security audit feature. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> auditStatus_ = nullptr;
    // Specifies whether to automatically trigger a re-scan after a rule is modified. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    // 
    // > When a re-scan is triggered, DSC scans all data in your data asset.
    std::shared_ptr<int32_t> autoScan_ = nullptr;
    // The permissions. Valid values:
    // 
    // *   **ReadOnly**: read-only permissions
    // *   **ReadWrite**: read and write permissions
    std::shared_ptr<string> certificatePermission_ = nullptr;
    // Specifies whether to enable sensitive data detection. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    // 
    // > If this is your first time to authorize DSC to access the data asset, the default value is 1. If this is not your first time to authorize DSC to access the data asset, the default value is the same as that used in the last authorization operation. Both 1 and 0 are possible.
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The database engine that is run by the instance. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // Specifies whether to enable anomalous event detection. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes (default)
    std::shared_ptr<int32_t> eventStatus_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // Specifies whether to immediately scan the authorized asset. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> instantlyScan_ = nullptr;
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The retention period of raw logs after you enable the security audit feature. Unit: days. Valid values:
    // 
    // *   **30**
    // *   **90**
    // *   **180**
    // *   **365**
    std::shared_ptr<int32_t> logStoreDay_ = nullptr;
    // Specifies whether to enable optical character recognition (OCR). Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> ocrStatus_ = nullptr;
    // The name of the asset. The value is a connection string. It consists of an instance ID and a database name, which are separated by a comma (,). This parameter is required.
    std::shared_ptr<string> parentId_ = nullptr;
    // The password that is used to access the database.
    std::shared_ptr<string> password_ = nullptr;
    // The port that is used to connect to the database.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of service to which the data asset belongs. Valid values:
    // 
    // *   **1** :MaxCompute
    // *   **2**: Object Storage Service (OSS)
    // *   **3**: AnalyticDB for MySQL
    // *   **4** :Tablestore
    // *   **5**: ApsaraDB RDS
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    // The number of sensitive data samples that are collected after sensitive data detection is enabled. Valid values:
    // 
    // *   **0**
    // *   **5**
    // *   **10**
    std::shared_ptr<int32_t> samplingSize_ = nullptr;
    // The region in which the data asset resides. Valid values:
    // 
    // *   **cn-beijing**: China (Beijing).
    // *   **cn-zhangjiakou**: China (Zhangjiakou)
    // *   **cn-huhehaote**: China (Hohhot)
    // *   **cn-hangzhou**: China (Hangzhou)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **cn-hongkong**: China (Hong Kong)
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The username that is used to access the database.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
