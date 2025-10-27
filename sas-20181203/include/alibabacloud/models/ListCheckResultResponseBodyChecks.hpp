// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRESULTRESPONSEBODYCHECKS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRESULTRESPONSEBODYCHECKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckResultResponseBodyChecksCheckPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckResultResponseBodyChecks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckResultResponseBodyChecks& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(AssetVendor, assetVendor_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPolicies, checkPolicies_);
      DARABONBA_PTR_TO_JSON(CheckSaleType, checkSaleType_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TrialPermission, trialPermission_);
      DARABONBA_PTR_TO_JSON(TrialPermissionType, trialPermissionType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorShowName, vendorShowName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckResultResponseBodyChecks& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(AssetVendor, assetVendor_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPolicies, checkPolicies_);
      DARABONBA_PTR_FROM_JSON(CheckSaleType, checkSaleType_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TrialPermission, trialPermission_);
      DARABONBA_PTR_FROM_JSON(TrialPermissionType, trialPermissionType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorShowName, vendorShowName_);
    };
    ListCheckResultResponseBodyChecks() = default ;
    ListCheckResultResponseBodyChecks(const ListCheckResultResponseBodyChecks &) = default ;
    ListCheckResultResponseBodyChecks(ListCheckResultResponseBodyChecks &&) = default ;
    ListCheckResultResponseBodyChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckResultResponseBodyChecks() = default ;
    ListCheckResultResponseBodyChecks& operator=(const ListCheckResultResponseBodyChecks &) = default ;
    ListCheckResultResponseBodyChecks& operator=(ListCheckResultResponseBodyChecks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSubType_ == nullptr
        && return this->assetType_ == nullptr && return this->assetVendor_ == nullptr && return this->checkId_ == nullptr && return this->checkPolicies_ == nullptr && return this->checkSaleType_ == nullptr
        && return this->checkShowName_ == nullptr && return this->checkType_ == nullptr && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr && return this->lastCheckTime_ == nullptr
        && return this->operationType_ == nullptr && return this->riskLevel_ == nullptr && return this->status_ == nullptr && return this->statusMessage_ == nullptr && return this->taskId_ == nullptr
        && return this->trialPermission_ == nullptr && return this->trialPermissionType_ == nullptr && return this->vendor_ == nullptr && return this->vendorShowName_ == nullptr; };
    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline int32_t assetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
    inline ListCheckResultResponseBodyChecks& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline ListCheckResultResponseBodyChecks& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // assetVendor Field Functions 
    bool hasAssetVendor() const { return this->assetVendor_ != nullptr;};
    void deleteAssetVendor() { this->assetVendor_ = nullptr;};
    inline int32_t assetVendor() const { DARABONBA_PTR_GET_DEFAULT(assetVendor_, 0) };
    inline ListCheckResultResponseBodyChecks& setAssetVendor(int32_t assetVendor) { DARABONBA_PTR_SET_VALUE(assetVendor_, assetVendor) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckResultResponseBodyChecks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPolicies Field Functions 
    bool hasCheckPolicies() const { return this->checkPolicies_ != nullptr;};
    void deleteCheckPolicies() { this->checkPolicies_ = nullptr;};
    inline const vector<Models::ListCheckResultResponseBodyChecksCheckPolicies> & checkPolicies() const { DARABONBA_PTR_GET_CONST(checkPolicies_, vector<Models::ListCheckResultResponseBodyChecksCheckPolicies>) };
    inline vector<Models::ListCheckResultResponseBodyChecksCheckPolicies> checkPolicies() { DARABONBA_PTR_GET(checkPolicies_, vector<Models::ListCheckResultResponseBodyChecksCheckPolicies>) };
    inline ListCheckResultResponseBodyChecks& setCheckPolicies(const vector<Models::ListCheckResultResponseBodyChecksCheckPolicies> & checkPolicies) { DARABONBA_PTR_SET_VALUE(checkPolicies_, checkPolicies) };
    inline ListCheckResultResponseBodyChecks& setCheckPolicies(vector<Models::ListCheckResultResponseBodyChecksCheckPolicies> && checkPolicies) { DARABONBA_PTR_SET_RVALUE(checkPolicies_, checkPolicies) };


    // checkSaleType Field Functions 
    bool hasCheckSaleType() const { return this->checkSaleType_ != nullptr;};
    void deleteCheckSaleType() { this->checkSaleType_ = nullptr;};
    inline int32_t checkSaleType() const { DARABONBA_PTR_GET_DEFAULT(checkSaleType_, 0) };
    inline ListCheckResultResponseBodyChecks& setCheckSaleType(int32_t checkSaleType) { DARABONBA_PTR_SET_VALUE(checkSaleType_, checkSaleType) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline ListCheckResultResponseBodyChecks& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListCheckResultResponseBodyChecks& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline ListCheckResultResponseBodyChecks& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListCheckResultResponseBodyChecks& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // lastCheckTime Field Functions 
    bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
    void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
    inline int64_t lastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, 0L) };
    inline ListCheckResultResponseBodyChecks& setLastCheckTime(int64_t lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListCheckResultResponseBodyChecks& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListCheckResultResponseBodyChecks& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCheckResultResponseBodyChecks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline ListCheckResultResponseBodyChecks& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListCheckResultResponseBodyChecks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // trialPermission Field Functions 
    bool hasTrialPermission() const { return this->trialPermission_ != nullptr;};
    void deleteTrialPermission() { this->trialPermission_ = nullptr;};
    inline bool trialPermission() const { DARABONBA_PTR_GET_DEFAULT(trialPermission_, false) };
    inline ListCheckResultResponseBodyChecks& setTrialPermission(bool trialPermission) { DARABONBA_PTR_SET_VALUE(trialPermission_, trialPermission) };


    // trialPermissionType Field Functions 
    bool hasTrialPermissionType() const { return this->trialPermissionType_ != nullptr;};
    void deleteTrialPermissionType() { this->trialPermissionType_ = nullptr;};
    inline int32_t trialPermissionType() const { DARABONBA_PTR_GET_DEFAULT(trialPermissionType_, 0) };
    inline ListCheckResultResponseBodyChecks& setTrialPermissionType(int32_t trialPermissionType) { DARABONBA_PTR_SET_VALUE(trialPermissionType_, trialPermissionType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListCheckResultResponseBodyChecks& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorShowName Field Functions 
    bool hasVendorShowName() const { return this->vendorShowName_ != nullptr;};
    void deleteVendorShowName() { this->vendorShowName_ = nullptr;};
    inline string vendorShowName() const { DARABONBA_PTR_GET_DEFAULT(vendorShowName_, "") };
    inline ListCheckResultResponseBodyChecks& setVendorShowName(string vendorShowName) { DARABONBA_PTR_SET_VALUE(vendorShowName_, vendorShowName) };


  protected:
    // The subtype of the cloud service.
    std::shared_ptr<int32_t> assetSubType_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **0**: an ECS instance
    // *   **1**: a SLB instance
    // *   **2**: a NAT gateway
    // *   **3**: an ApsaraDB RDS instance
    // *   **4**: an ApsaraDB for MongoDB instance
    // *   **5**: an ApsaraDB for Redis instance
    // *   **6**: a container image
    // *   **7**: a container
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The service provider of the asset. Valid values:
    // 
    // *   **0**: Alibaba Cloud
    // *   **3**: Huawei Cloud
    // *   **4**: Microsoft Azure
    // *   **5**: AWS
    // *   **7**: Tencent Cloud
    std::shared_ptr<int32_t> assetVendor_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The check policies.
    std::shared_ptr<vector<Models::ListCheckResultResponseBodyChecksCheckPolicies>> checkPolicies_ = nullptr;
    // The type of the check item. Valid values:
    // 
    // *   **0**: paid
    // *   **1**: free
    std::shared_ptr<int32_t> checkSaleType_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // The source type of the situation awareness check item: 
    // - **CUSTOM**: User-defined 
    // - **SYSTEM**: Predefined by the situation awareness platform
    std::shared_ptr<string> checkType_ = nullptr;
    // The asset subtype of the cloud service. Valid values:
    // 
    // *   If the **InstanceType** parameter is set to **ECS**, this parameter supports the following valid values:
    // 
    //     *   **INSTANCE**
    //     *   **DISK**
    //     *   **SECURITY_GROUP**
    // 
    // *   If the **InstanceType** parameter is set to **ACR**, this parameter supports the following valid values:
    // 
    //     *   **REPOSITORY_ENTERPRISE**
    //     *   **REPOSITORY_PERSON**
    // 
    // *   If the **InstanceType** parameter is set to **RAM**, this parameter supports the following valid values:
    // 
    //     *   **ALIAS**
    //     *   **USER**
    //     *   **POLICY**
    //     *   **GROUP**
    // 
    // *   If the **InstanceType** parameter is set to **WAF**, this parameter supports the following valid values:
    // 
    //     *   **DOMAIN**
    // 
    // *   If the **InstanceType** parameter is set to other values, this parameter supports the following valid values:
    // 
    //     *   **INSTANCE**
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // The asset type of the cloud service. Valid values:
    // 
    // *   **ECS**: ECS
    // *   **SLB**: SLB
    // *   **RDS**: ApsaraDB RDS
    // *   **MONGODB**: MongoDB
    // *   **KVSTORE**: Redis
    // *   **ACR**: Container Registry
    // *   **CSK**: ACK
    // *   **VPC**: VPC
    // *   **ACTIONTRAIL**: ActionTrail
    // *   **CDN**: CDN
    // *   **CAS**: Certificate Management Service (formerly SSL Certificates Service)
    // *   **RDC**: Apsara Devops
    // *   **RAM**: RAM
    // *   **DDOS**: Anti-DDoS
    // *   **WAF**: WAF
    // *   **OSS**: OSS
    // *   **POLARDB**: PolarDB
    // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL
    // *   **MSE**: MSE
    // *   **NAS**: NAS
    // *   **SDDP**: SDDP
    // *   **EIP**: EIP
    std::shared_ptr<string> instanceType_ = nullptr;
    // The timestamp when the last check was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastCheckTime_ = nullptr;
    // Indicates whether fixing is supported. Valid values:
    // 
    // *   **SUPPORT_REPAIR**
    // *   **NOT_SUPPORT_REPAIR**
    std::shared_ptr<string> operationType_ = nullptr;
    // The risk level of the check item. Valid values:
    // 
    // *   **HIGH**
    // *   **MEDIUM**
    // *   **LOW**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   **PASS**: passed
    // *   **NOT_PASS**: failed
    // *   **CHECKING**: being checked
    // *   **NOT_CHECK**: not checked
    // *   **WHITELIST**: added to the whitelist
    std::shared_ptr<string> status_ = nullptr;
    // The message returned if the status of the check item is abnormal.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The ID of the check task.
    std::shared_ptr<string> taskId_ = nullptr;
    // Indicates whether the TRIAL permission is required.
    std::shared_ptr<bool> trialPermission_ = nullptr;
    // Check whether the data delivery period for ActionTrail is enabled for more than 30 days to establish a baseline of behaviour.
    // *   **0**: REQUIRED
    // *   **1**: NOT REQUIRED
    std::shared_ptr<int32_t> trialPermissionType_ = nullptr;
    // The cloud service provider.
    std::shared_ptr<string> vendor_ = nullptr;
    // The name of the cloud service provider.
    std::shared_ptr<string> vendorShowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
