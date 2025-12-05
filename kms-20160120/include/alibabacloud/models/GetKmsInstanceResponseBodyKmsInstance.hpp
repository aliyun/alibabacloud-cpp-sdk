// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODYKMSINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODYKMSINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKmsInstanceResponseBodyKmsInstanceBindVpcs.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceResponseBodyKmsInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceResponseBodyKmsInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_TO_JSON(CaCertificateChainPem, caCertificateChainPem_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(KeyNum, keyNum_);
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(LogStorage, logStorage_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(SaleStatus, saleStatus_);
      DARABONBA_PTR_TO_JSON(SecretNum, secretNum_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcNum, vpcNum_);
      DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceResponseBodyKmsInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_FROM_JSON(CaCertificateChainPem, caCertificateChainPem_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(KeyNum, keyNum_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(LogStorage, logStorage_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(SaleStatus, saleStatus_);
      DARABONBA_PTR_FROM_JSON(SecretNum, secretNum_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcNum, vpcNum_);
      DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    GetKmsInstanceResponseBodyKmsInstance() = default ;
    GetKmsInstanceResponseBodyKmsInstance(const GetKmsInstanceResponseBodyKmsInstance &) = default ;
    GetKmsInstanceResponseBodyKmsInstance(GetKmsInstanceResponseBodyKmsInstance &&) = default ;
    GetKmsInstanceResponseBodyKmsInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceResponseBodyKmsInstance() = default ;
    GetKmsInstanceResponseBodyKmsInstance& operator=(const GetKmsInstanceResponseBodyKmsInstance &) = default ;
    GetKmsInstanceResponseBodyKmsInstance& operator=(GetKmsInstanceResponseBodyKmsInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindVpcs_ == nullptr
        && return this->caCertificateChainPem_ == nullptr && return this->chargeType_ == nullptr && return this->createTime_ == nullptr && return this->endDate_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->keyNum_ == nullptr && return this->log_ == nullptr && return this->logStorage_ == nullptr && return this->productType_ == nullptr
        && return this->productVersion_ == nullptr && return this->saleStatus_ == nullptr && return this->secretNum_ == nullptr && return this->spec_ == nullptr && return this->startDate_ == nullptr
        && return this->status_ == nullptr && return this->vpcId_ == nullptr && return this->vpcNum_ == nullptr && return this->vswitchIds_ == nullptr && return this->zoneIds_ == nullptr; };
    // bindVpcs Field Functions 
    bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
    void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
    inline const Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs & bindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs) };
    inline Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs bindVpcs() { DARABONBA_PTR_GET(bindVpcs_, Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs) };
    inline GetKmsInstanceResponseBodyKmsInstance& setBindVpcs(const Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
    inline GetKmsInstanceResponseBodyKmsInstance& setBindVpcs(Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


    // caCertificateChainPem Field Functions 
    bool hasCaCertificateChainPem() const { return this->caCertificateChainPem_ != nullptr;};
    void deleteCaCertificateChainPem() { this->caCertificateChainPem_ = nullptr;};
    inline string caCertificateChainPem() const { DARABONBA_PTR_GET_DEFAULT(caCertificateChainPem_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setCaCertificateChainPem(string caCertificateChainPem) { DARABONBA_PTR_SET_VALUE(caCertificateChainPem_, caCertificateChainPem) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // keyNum Field Functions 
    bool hasKeyNum() const { return this->keyNum_ != nullptr;};
    void deleteKeyNum() { this->keyNum_ = nullptr;};
    inline int64_t keyNum() const { DARABONBA_PTR_GET_DEFAULT(keyNum_, 0L) };
    inline GetKmsInstanceResponseBodyKmsInstance& setKeyNum(int64_t keyNum) { DARABONBA_PTR_SET_VALUE(keyNum_, keyNum) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline int64_t log() const { DARABONBA_PTR_GET_DEFAULT(log_, 0L) };
    inline GetKmsInstanceResponseBodyKmsInstance& setLog(int64_t log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // logStorage Field Functions 
    bool hasLogStorage() const { return this->logStorage_ != nullptr;};
    void deleteLogStorage() { this->logStorage_ = nullptr;};
    inline int64_t logStorage() const { DARABONBA_PTR_GET_DEFAULT(logStorage_, 0L) };
    inline GetKmsInstanceResponseBodyKmsInstance& setLogStorage(int64_t logStorage) { DARABONBA_PTR_SET_VALUE(logStorage_, logStorage) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // saleStatus Field Functions 
    bool hasSaleStatus() const { return this->saleStatus_ != nullptr;};
    void deleteSaleStatus() { this->saleStatus_ = nullptr;};
    inline string saleStatus() const { DARABONBA_PTR_GET_DEFAULT(saleStatus_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setSaleStatus(string saleStatus) { DARABONBA_PTR_SET_VALUE(saleStatus_, saleStatus) };


    // secretNum Field Functions 
    bool hasSecretNum() const { return this->secretNum_ != nullptr;};
    void deleteSecretNum() { this->secretNum_ = nullptr;};
    inline string secretNum() const { DARABONBA_PTR_GET_DEFAULT(secretNum_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setSecretNum(string secretNum) { DARABONBA_PTR_SET_VALUE(secretNum_, secretNum) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline int64_t spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, 0L) };
    inline GetKmsInstanceResponseBodyKmsInstance& setSpec(int64_t spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetKmsInstanceResponseBodyKmsInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcNum Field Functions 
    bool hasVpcNum() const { return this->vpcNum_ != nullptr;};
    void deleteVpcNum() { this->vpcNum_ = nullptr;};
    inline int64_t vpcNum() const { DARABONBA_PTR_GET_DEFAULT(vpcNum_, 0L) };
    inline GetKmsInstanceResponseBodyKmsInstance& setVpcNum(int64_t vpcNum) { DARABONBA_PTR_SET_VALUE(vpcNum_, vpcNum) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline GetKmsInstanceResponseBodyKmsInstance& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline GetKmsInstanceResponseBodyKmsInstance& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & zoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> zoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline GetKmsInstanceResponseBodyKmsInstance& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline GetKmsInstanceResponseBodyKmsInstance& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    // A list of associated VPCs.
    // 
    // >  If your self-managed applications are deployed in multiple VPCs in the same region, you can associate VPCs with the KMS instance beyond the VPC that you specify when you enable the KMS instance. The VPCs can belong to the same Alibaba Cloud account or different Alibaba Cloud accounts. After the configuration is complete, self-managed applications in the VPCs can access the specified KMS instance.
    std::shared_ptr<Models::GetKmsInstanceResponseBodyKmsInstanceBindVpcs> bindVpcs_ = nullptr;
    // The content of the certificate authority (CA) certificate of the KMS instance.
    std::shared_ptr<string> caCertificateChainPem_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the KMS instance is created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The expiration time of the KMS instance.
    std::shared_ptr<string> endDate_ = nullptr;
    // The ID of the KMS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the KMS instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The number of keys that can be created for the KMS instance.
    std::shared_ptr<int64_t> keyNum_ = nullptr;
    std::shared_ptr<int64_t> log_ = nullptr;
    std::shared_ptr<int64_t> logStorage_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<string> saleStatus_ = nullptr;
    // The number of secrets that can be created for the KMS instance.
    std::shared_ptr<string> secretNum_ = nullptr;
    // The computing performance of the KMS instance.
    std::shared_ptr<int64_t> spec_ = nullptr;
    // The time when the KMS instance is enabled.
    std::shared_ptr<string> startDate_ = nullptr;
    // The status of the KMS instance. Valid values:
    // 
    // *   Uninitialized: The KMS instance is not enabled.
    // *   Connecting: The KMS instance is being connected.
    // *   Connected: The KMS instance is enabled.
    // *   Disconnected: The KMS instance is disconnected.
    // *   Error: The KMS instance is abnormal.
    std::shared_ptr<string> status_ = nullptr;
    // The virtual private cloud (VPC) with which the KMS instance is associated.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The access management quota for the KMS instance.
    std::shared_ptr<int64_t> vpcNum_ = nullptr;
    // The vSwitch in the VPC.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
    // The zone with which the KMS instance is associated.
    std::shared_ptr<vector<string>> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
