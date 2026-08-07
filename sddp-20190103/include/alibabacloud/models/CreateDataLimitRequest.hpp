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
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->autoScan_ == nullptr && this->certificatePermission_ == nullptr && this->enable_ == nullptr && this->engineType_ == nullptr && this->eventStatus_ == nullptr
        && this->featureType_ == nullptr && this->instantlyScan_ == nullptr && this->lang_ == nullptr && this->logStoreDay_ == nullptr && this->ocrStatus_ == nullptr
        && this->parentId_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->resourceType_ == nullptr && this->samplingSize_ == nullptr
        && this->serviceRegionId_ == nullptr && this->sourceIp_ == nullptr && this->userName_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline CreateDataLimitRequest& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // autoScan Field Functions 
    bool hasAutoScan() const { return this->autoScan_ != nullptr;};
    void deleteAutoScan() { this->autoScan_ = nullptr;};
    inline int32_t getAutoScan() const { DARABONBA_PTR_GET_DEFAULT(autoScan_, 0) };
    inline CreateDataLimitRequest& setAutoScan(int32_t autoScan) { DARABONBA_PTR_SET_VALUE(autoScan_, autoScan) };


    // certificatePermission Field Functions 
    bool hasCertificatePermission() const { return this->certificatePermission_ != nullptr;};
    void deleteCertificatePermission() { this->certificatePermission_ = nullptr;};
    inline string getCertificatePermission() const { DARABONBA_PTR_GET_DEFAULT(certificatePermission_, "") };
    inline CreateDataLimitRequest& setCertificatePermission(string certificatePermission) { DARABONBA_PTR_SET_VALUE(certificatePermission_, certificatePermission) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline CreateDataLimitRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreateDataLimitRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline int32_t getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, 0) };
    inline CreateDataLimitRequest& setEventStatus(int32_t eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline CreateDataLimitRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // instantlyScan Field Functions 
    bool hasInstantlyScan() const { return this->instantlyScan_ != nullptr;};
    void deleteInstantlyScan() { this->instantlyScan_ = nullptr;};
    inline bool getInstantlyScan() const { DARABONBA_PTR_GET_DEFAULT(instantlyScan_, false) };
    inline CreateDataLimitRequest& setInstantlyScan(bool instantlyScan) { DARABONBA_PTR_SET_VALUE(instantlyScan_, instantlyScan) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataLimitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logStoreDay Field Functions 
    bool hasLogStoreDay() const { return this->logStoreDay_ != nullptr;};
    void deleteLogStoreDay() { this->logStoreDay_ = nullptr;};
    inline int32_t getLogStoreDay() const { DARABONBA_PTR_GET_DEFAULT(logStoreDay_, 0) };
    inline CreateDataLimitRequest& setLogStoreDay(int32_t logStoreDay) { DARABONBA_PTR_SET_VALUE(logStoreDay_, logStoreDay) };


    // ocrStatus Field Functions 
    bool hasOcrStatus() const { return this->ocrStatus_ != nullptr;};
    void deleteOcrStatus() { this->ocrStatus_ = nullptr;};
    inline int32_t getOcrStatus() const { DARABONBA_PTR_GET_DEFAULT(ocrStatus_, 0) };
    inline CreateDataLimitRequest& setOcrStatus(int32_t ocrStatus) { DARABONBA_PTR_SET_VALUE(ocrStatus_, ocrStatus) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline CreateDataLimitRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateDataLimitRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateDataLimitRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline CreateDataLimitRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // samplingSize Field Functions 
    bool hasSamplingSize() const { return this->samplingSize_ != nullptr;};
    void deleteSamplingSize() { this->samplingSize_ = nullptr;};
    inline int32_t getSamplingSize() const { DARABONBA_PTR_GET_DEFAULT(samplingSize_, 0) };
    inline CreateDataLimitRequest& setSamplingSize(int32_t samplingSize) { DARABONBA_PTR_SET_VALUE(samplingSize_, samplingSize) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline CreateDataLimitRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateDataLimitRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateDataLimitRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether to enable auditing. Valid values:
    // 
    // - **0**: Auditing is disabled.
    // - **1**: Auditing is enabled.
    shared_ptr<int32_t> auditStatus_ {};
    // Specifies whether to automatically trigger a rescan when rules are changed. Valid values:
    // 
    // - **0**: Automatic rescan is not triggered.
    // - **1**: Automatic rescan is triggered.
    // 
    // > When a rule change triggers an automatic rescan, a full scan is performed on all data in the data source.
    shared_ptr<int32_t> autoScan_ {};
    // The credential permission. Valid values:
    // - **ReadOnly**: read-only permission.
    // - **ReadWrite**: read and write permission.
    shared_ptr<string> certificatePermission_ {};
    // Specifies whether to enable sensitive data detection. Valid values:
    // - **1**: Enabled.
    // - **0**: Disabled.
    // 
    // > If the asset is authorized for the first time, the default value is 1. If the asset has been previously authorized, the value from the last authorization is used, which may be 0 or 1. To perform sensitive data detection on the asset, set this parameter to 1.
    shared_ptr<int32_t> enable_ {};
    // The type of the database. Valid values:
    // - **MySQL**
    // - **SQLServer**
    shared_ptr<string> engineType_ {};
    // The anomalous activity detection status. Valid values:
    // - **0**: Disabled.
    // - **1**: Enabled (default).
    shared_ptr<int32_t> eventStatus_ {};
    // This parameter is deprecated.
    shared_ptr<int32_t> featureType_ {};
    // Specifies whether to immediately scan the authorized asset. Valid values:
    // 
    // - **false**: The asset is not immediately scanned.
    // - **true**: The asset is immediately scanned.
    shared_ptr<bool> instantlyScan_ {};
    // The language of the request and response. Default value: **zh_cn**. Valid values:
    // - **zh_cn**: Chinese.
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // The retention period of raw logs after auditing is enabled. Unit: days. Valid values:
    // - **30**
    // - **90**
    // - **180**
    // - **365**
    shared_ptr<int32_t> logStoreDay_ {};
    // The OCR status. Valid values:
    // - **1**: Enabled.
    // - **0**: Disabled.
    shared_ptr<int32_t> ocrStatus_ {};
    // Required. The name of the asset, which consists of the instance ID and the database connection string separated by a period (.).
    shared_ptr<string> parentId_ {};
    // The password used to access the database asset.
    shared_ptr<string> password_ {};
    // The database connection port.
    shared_ptr<int32_t> port_ {};
    // The type of the service to which the asset to be scanned belongs. Valid values:
    // 
    // - **1**: MaxCompute.
    // - **2**: OSS.
    // - **3**: ADS.
    // - **4**: OTS.
    // - **5**: RDS.
    // 
    // This parameter is required.
    shared_ptr<int32_t> resourceType_ {};
    // The number of sample entries for sensitive data detection after data detection is enabled. Valid values:
    // - **0**
    // - **5**
    // - **10**
    // > Default value: 10.
    shared_ptr<int32_t> samplingSize_ {};
    // Required. The region in which the asset resides. Valid values:
    // - **cn-beijing**: China (Beijing).
    // - **cn-zhangjiakou**: China (Zhangjiakou).
    // - **cn-huhehaote**: China (Hohhot).
    // - **cn-hangzhou**: China (Hangzhou).
    // - **cn-shanghai**: China (Shanghai).
    // - **cn-shenzhen**: China (Shenzhen).
    // - **cn-hongkong**: Hong Kong (China).
    shared_ptr<string> serviceRegionId_ {};
    // This parameter is deprecated.
    shared_ptr<string> sourceIp_ {};
    // The username of the database asset.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
