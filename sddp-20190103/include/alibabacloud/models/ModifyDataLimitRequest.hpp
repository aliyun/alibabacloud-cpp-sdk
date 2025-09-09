// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATALIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATALIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyDataLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AutoScan, autoScan_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogStoreDay, logStoreDay_);
      DARABONBA_PTR_TO_JSON(ModifyPassword, modifyPassword_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SamplingSize, samplingSize_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIdList, securityGroupIdList_);
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AutoScan, autoScan_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogStoreDay, logStoreDay_);
      DARABONBA_PTR_FROM_JSON(ModifyPassword, modifyPassword_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SamplingSize, samplingSize_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIdList, securityGroupIdList_);
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyDataLimitRequest() = default ;
    ModifyDataLimitRequest(const ModifyDataLimitRequest &) = default ;
    ModifyDataLimitRequest(ModifyDataLimitRequest &&) = default ;
    ModifyDataLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataLimitRequest() = default ;
    ModifyDataLimitRequest& operator=(const ModifyDataLimitRequest &) = default ;
    ModifyDataLimitRequest& operator=(ModifyDataLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditStatus_ != nullptr
        && this->autoScan_ != nullptr && this->engineType_ != nullptr && this->featureType_ != nullptr && this->id_ != nullptr && this->lang_ != nullptr
        && this->logStoreDay_ != nullptr && this->modifyPassword_ != nullptr && this->password_ != nullptr && this->port_ != nullptr && this->resourceType_ != nullptr
        && this->samplingSize_ != nullptr && this->securityGroupIdList_ != nullptr && this->serviceRegionId_ != nullptr && this->userName_ != nullptr && this->vSwitchIdList_ != nullptr
        && this->vpcId_ != nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline ModifyDataLimitRequest& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // autoScan Field Functions 
    bool hasAutoScan() const { return this->autoScan_ != nullptr;};
    void deleteAutoScan() { this->autoScan_ = nullptr;};
    inline int32_t autoScan() const { DARABONBA_PTR_GET_DEFAULT(autoScan_, 0) };
    inline ModifyDataLimitRequest& setAutoScan(int32_t autoScan) { DARABONBA_PTR_SET_VALUE(autoScan_, autoScan) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ModifyDataLimitRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline ModifyDataLimitRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyDataLimitRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyDataLimitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logStoreDay Field Functions 
    bool hasLogStoreDay() const { return this->logStoreDay_ != nullptr;};
    void deleteLogStoreDay() { this->logStoreDay_ = nullptr;};
    inline int32_t logStoreDay() const { DARABONBA_PTR_GET_DEFAULT(logStoreDay_, 0) };
    inline ModifyDataLimitRequest& setLogStoreDay(int32_t logStoreDay) { DARABONBA_PTR_SET_VALUE(logStoreDay_, logStoreDay) };


    // modifyPassword Field Functions 
    bool hasModifyPassword() const { return this->modifyPassword_ != nullptr;};
    void deleteModifyPassword() { this->modifyPassword_ = nullptr;};
    inline bool modifyPassword() const { DARABONBA_PTR_GET_DEFAULT(modifyPassword_, false) };
    inline ModifyDataLimitRequest& setModifyPassword(bool modifyPassword) { DARABONBA_PTR_SET_VALUE(modifyPassword_, modifyPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyDataLimitRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyDataLimitRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline ModifyDataLimitRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // samplingSize Field Functions 
    bool hasSamplingSize() const { return this->samplingSize_ != nullptr;};
    void deleteSamplingSize() { this->samplingSize_ = nullptr;};
    inline int32_t samplingSize() const { DARABONBA_PTR_GET_DEFAULT(samplingSize_, 0) };
    inline ModifyDataLimitRequest& setSamplingSize(int32_t samplingSize) { DARABONBA_PTR_SET_VALUE(samplingSize_, samplingSize) };


    // securityGroupIdList Field Functions 
    bool hasSecurityGroupIdList() const { return this->securityGroupIdList_ != nullptr;};
    void deleteSecurityGroupIdList() { this->securityGroupIdList_ = nullptr;};
    inline const vector<string> & securityGroupIdList() const { DARABONBA_PTR_GET_CONST(securityGroupIdList_, vector<string>) };
    inline vector<string> securityGroupIdList() { DARABONBA_PTR_GET(securityGroupIdList_, vector<string>) };
    inline ModifyDataLimitRequest& setSecurityGroupIdList(const vector<string> & securityGroupIdList) { DARABONBA_PTR_SET_VALUE(securityGroupIdList_, securityGroupIdList) };
    inline ModifyDataLimitRequest& setSecurityGroupIdList(vector<string> && securityGroupIdList) { DARABONBA_PTR_SET_RVALUE(securityGroupIdList_, securityGroupIdList) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string serviceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline ModifyDataLimitRequest& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyDataLimitRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vSwitchIdList Field Functions 
    bool hasVSwitchIdList() const { return this->vSwitchIdList_ != nullptr;};
    void deleteVSwitchIdList() { this->vSwitchIdList_ = nullptr;};
    inline const vector<string> & vSwitchIdList() const { DARABONBA_PTR_GET_CONST(vSwitchIdList_, vector<string>) };
    inline vector<string> vSwitchIdList() { DARABONBA_PTR_GET(vSwitchIdList_, vector<string>) };
    inline ModifyDataLimitRequest& setVSwitchIdList(const vector<string> & vSwitchIdList) { DARABONBA_PTR_SET_VALUE(vSwitchIdList_, vSwitchIdList) };
    inline ModifyDataLimitRequest& setVSwitchIdList(vector<string> && vSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vSwitchIdList_, vSwitchIdList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyDataLimitRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


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
    // The database engine that is run by the instance. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    std::shared_ptr<string> engineType_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // The unique ID of the data asset for which you want to modify configuration items.
    // 
    // > You can call the [DescribeDataLimits](~~DescribeDataLimits~~) operation to query the ID of the data asset.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The retention period of raw logs after you enable the security audit feature. Unit: days. Valid values:
    // 
    // *   **30**
    // *   **90**
    // *   **180**
    // *   **365**
    std::shared_ptr<int32_t> logStoreDay_ = nullptr;
    // Specifies whether to change the username and password that are used to log on to the ApsaraDB RDS database. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> modifyPassword_ = nullptr;
    // The password used to log on to the ApsaraDB RDS database that you authorize DSC to access.
    std::shared_ptr<string> password_ = nullptr;
    // The port that is used to connect to the database.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: Object Storage Service (OSS)
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    // The number of sensitive data samples tht are collected after sensitive data detection is enabled. Valid values:
    // 
    // *   **0**
    // *   **5**
    // *   **10**
    std::shared_ptr<int32_t> samplingSize_ = nullptr;
    // The security group that is used by PrivateLink when you install the DSC agent.
    std::shared_ptr<vector<string>> securityGroupIdList_ = nullptr;
    // The region in which the data asset resides. Valid values:
    // 
    // *   **cn-beijing**: China (Beijing)
    // *   **cn-zhangjiakou**: China (Zhangjiakou)
    // *   **cn-huhehaote**: China (Hohhot)
    // *   **cn-hangzhou**: China (Hangzhou)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **cn-hongkong**: China (Hong Kong)
    std::shared_ptr<string> serviceRegionId_ = nullptr;
    // The username used to log on to the ApsaraDB RDS database that you authorize DSC to access.
    std::shared_ptr<string> userName_ = nullptr;
    // The vSwitch that is used by PrivateLink when you install the DSC agent.
    std::shared_ptr<vector<string>> vSwitchIdList_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the data asset belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
