// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstance, kmsInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetKmsInstanceResponseBody() = default ;
    GetKmsInstanceResponseBody(const GetKmsInstanceResponseBody &) = default ;
    GetKmsInstanceResponseBody(GetKmsInstanceResponseBody &&) = default ;
    GetKmsInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceResponseBody() = default ;
    GetKmsInstanceResponseBody& operator=(const GetKmsInstanceResponseBody &) = default ;
    GetKmsInstanceResponseBody& operator=(GetKmsInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KmsInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KmsInstance& obj) { 
        DARABONBA_PTR_TO_JSON(BindVpcs, bindVpcs_);
        DARABONBA_PTR_TO_JSON(CaCertificateChainPem, caCertificateChainPem_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(DeletionProtectionDescription, deletionProtectionDescription_);
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
      friend void from_json(const Darabonba::Json& j, KmsInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(BindVpcs, bindVpcs_);
        DARABONBA_PTR_FROM_JSON(CaCertificateChainPem, caCertificateChainPem_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(DeletionProtectionDescription, deletionProtectionDescription_);
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
      KmsInstance() = default ;
      KmsInstance(const KmsInstance &) = default ;
      KmsInstance(KmsInstance &&) = default ;
      KmsInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KmsInstance() = default ;
      KmsInstance& operator=(const KmsInstance &) = default ;
      KmsInstance& operator=(KmsInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BindVpcs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindVpcs& obj) { 
          DARABONBA_PTR_TO_JSON(BindVpc, bindVpc_);
        };
        friend void from_json(const Darabonba::Json& j, BindVpcs& obj) { 
          DARABONBA_PTR_FROM_JSON(BindVpc, bindVpc_);
        };
        BindVpcs() = default ;
        BindVpcs(const BindVpcs &) = default ;
        BindVpcs(BindVpcs &&) = default ;
        BindVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindVpcs() = default ;
        BindVpcs& operator=(const BindVpcs &) = default ;
        BindVpcs& operator=(BindVpcs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BindVpc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BindVpc& obj) { 
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
          };
          friend void from_json(const Darabonba::Json& j, BindVpc& obj) { 
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
          };
          BindVpc() = default ;
          BindVpc(const BindVpc &) = default ;
          BindVpc(BindVpc &&) = default ;
          BindVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BindVpc() = default ;
          BindVpc& operator=(const BindVpc &) = default ;
          BindVpc& operator=(BindVpc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->vpcOwnerId_ == nullptr; };
          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline BindVpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline BindVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline BindVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // vpcOwnerId Field Functions 
          bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
          void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
          inline string getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, "") };
          inline BindVpc& setVpcOwnerId(string vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


        protected:
          shared_ptr<string> regionId_ {};
          shared_ptr<string> vSwitchId_ {};
          shared_ptr<string> vpcId_ {};
          shared_ptr<string> vpcOwnerId_ {};
        };

        virtual bool empty() const override { return this->bindVpc_ == nullptr; };
        // bindVpc Field Functions 
        bool hasBindVpc() const { return this->bindVpc_ != nullptr;};
        void deleteBindVpc() { this->bindVpc_ = nullptr;};
        inline const vector<BindVpcs::BindVpc> & getBindVpc() const { DARABONBA_PTR_GET_CONST(bindVpc_, vector<BindVpcs::BindVpc>) };
        inline vector<BindVpcs::BindVpc> getBindVpc() { DARABONBA_PTR_GET(bindVpc_, vector<BindVpcs::BindVpc>) };
        inline BindVpcs& setBindVpc(const vector<BindVpcs::BindVpc> & bindVpc) { DARABONBA_PTR_SET_VALUE(bindVpc_, bindVpc) };
        inline BindVpcs& setBindVpc(vector<BindVpcs::BindVpc> && bindVpc) { DARABONBA_PTR_SET_RVALUE(bindVpc_, bindVpc) };


      protected:
        shared_ptr<vector<BindVpcs::BindVpc>> bindVpc_ {};
      };

      virtual bool empty() const override { return this->bindVpcs_ == nullptr
        && this->caCertificateChainPem_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->deletionProtection_ == nullptr && this->deletionProtectionDescription_ == nullptr
        && this->endDate_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->keyNum_ == nullptr && this->log_ == nullptr
        && this->logStorage_ == nullptr && this->productType_ == nullptr && this->productVersion_ == nullptr && this->saleStatus_ == nullptr && this->secretNum_ == nullptr
        && this->spec_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr && this->vpcNum_ == nullptr
        && this->vswitchIds_ == nullptr && this->zoneIds_ == nullptr; };
      // bindVpcs Field Functions 
      bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
      void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
      inline const KmsInstance::BindVpcs & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, KmsInstance::BindVpcs) };
      inline KmsInstance::BindVpcs getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, KmsInstance::BindVpcs) };
      inline KmsInstance& setBindVpcs(const KmsInstance::BindVpcs & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
      inline KmsInstance& setBindVpcs(KmsInstance::BindVpcs && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


      // caCertificateChainPem Field Functions 
      bool hasCaCertificateChainPem() const { return this->caCertificateChainPem_ != nullptr;};
      void deleteCaCertificateChainPem() { this->caCertificateChainPem_ = nullptr;};
      inline string getCaCertificateChainPem() const { DARABONBA_PTR_GET_DEFAULT(caCertificateChainPem_, "") };
      inline KmsInstance& setCaCertificateChainPem(string caCertificateChainPem) { DARABONBA_PTR_SET_VALUE(caCertificateChainPem_, caCertificateChainPem) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline KmsInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline KmsInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline KmsInstance& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // deletionProtectionDescription Field Functions 
      bool hasDeletionProtectionDescription() const { return this->deletionProtectionDescription_ != nullptr;};
      void deleteDeletionProtectionDescription() { this->deletionProtectionDescription_ = nullptr;};
      inline string getDeletionProtectionDescription() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionDescription_, "") };
      inline KmsInstance& setDeletionProtectionDescription(string deletionProtectionDescription) { DARABONBA_PTR_SET_VALUE(deletionProtectionDescription_, deletionProtectionDescription) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline KmsInstance& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline KmsInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline KmsInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // keyNum Field Functions 
      bool hasKeyNum() const { return this->keyNum_ != nullptr;};
      void deleteKeyNum() { this->keyNum_ = nullptr;};
      inline int64_t getKeyNum() const { DARABONBA_PTR_GET_DEFAULT(keyNum_, 0L) };
      inline KmsInstance& setKeyNum(int64_t keyNum) { DARABONBA_PTR_SET_VALUE(keyNum_, keyNum) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline int64_t getLog() const { DARABONBA_PTR_GET_DEFAULT(log_, 0L) };
      inline KmsInstance& setLog(int64_t log) { DARABONBA_PTR_SET_VALUE(log_, log) };


      // logStorage Field Functions 
      bool hasLogStorage() const { return this->logStorage_ != nullptr;};
      void deleteLogStorage() { this->logStorage_ = nullptr;};
      inline int64_t getLogStorage() const { DARABONBA_PTR_GET_DEFAULT(logStorage_, 0L) };
      inline KmsInstance& setLogStorage(int64_t logStorage) { DARABONBA_PTR_SET_VALUE(logStorage_, logStorage) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline KmsInstance& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // productVersion Field Functions 
      bool hasProductVersion() const { return this->productVersion_ != nullptr;};
      void deleteProductVersion() { this->productVersion_ = nullptr;};
      inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
      inline KmsInstance& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


      // saleStatus Field Functions 
      bool hasSaleStatus() const { return this->saleStatus_ != nullptr;};
      void deleteSaleStatus() { this->saleStatus_ = nullptr;};
      inline string getSaleStatus() const { DARABONBA_PTR_GET_DEFAULT(saleStatus_, "") };
      inline KmsInstance& setSaleStatus(string saleStatus) { DARABONBA_PTR_SET_VALUE(saleStatus_, saleStatus) };


      // secretNum Field Functions 
      bool hasSecretNum() const { return this->secretNum_ != nullptr;};
      void deleteSecretNum() { this->secretNum_ = nullptr;};
      inline string getSecretNum() const { DARABONBA_PTR_GET_DEFAULT(secretNum_, "") };
      inline KmsInstance& setSecretNum(string secretNum) { DARABONBA_PTR_SET_VALUE(secretNum_, secretNum) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline int64_t getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, 0L) };
      inline KmsInstance& setSpec(int64_t spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline KmsInstance& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline KmsInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline KmsInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcNum Field Functions 
      bool hasVpcNum() const { return this->vpcNum_ != nullptr;};
      void deleteVpcNum() { this->vpcNum_ = nullptr;};
      inline int64_t getVpcNum() const { DARABONBA_PTR_GET_DEFAULT(vpcNum_, 0L) };
      inline KmsInstance& setVpcNum(int64_t vpcNum) { DARABONBA_PTR_SET_VALUE(vpcNum_, vpcNum) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline KmsInstance& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline KmsInstance& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


      // zoneIds Field Functions 
      bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
      void deleteZoneIds() { this->zoneIds_ = nullptr;};
      inline const vector<string> & getZoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
      inline vector<string> getZoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
      inline KmsInstance& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
      inline KmsInstance& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


    protected:
      shared_ptr<KmsInstance::BindVpcs> bindVpcs_ {};
      // The CA certificate chain for the KMS instance in PEM format.
      shared_ptr<string> caCertificateChainPem_ {};
      // The billing method of the instance. Valid values:
      // 
      // - `PREPAY`: subscription
      // 
      // - `POSTPAY`: pay-as-you-go
      shared_ptr<string> chargeType_ {};
      // The creation time of the KMS instance.
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> deletionProtection_ {};
      shared_ptr<string> deletionProtectionDescription_ {};
      // The expiration time of the KMS instance.
      shared_ptr<string> endDate_ {};
      // The ID of the KMS instance.
      shared_ptr<string> instanceId_ {};
      // The name of the KMS instance.
      shared_ptr<string> instanceName_ {};
      // The maximum number of keys that can be created in the KMS instance.
      shared_ptr<int64_t> keyNum_ {};
      // Indicates whether logging is enabled for the KMS instance. Valid values: `1` (enabled) and `0` (disabled).
      shared_ptr<int64_t> log_ {};
      // The log storage capacity. Unit: GB.
      shared_ptr<int64_t> logStorage_ {};
      // The product type.<br>Subscription:<br>`kms_ddi_public_cn`: China site<br>`kms_ddi_public_intl`: international site<br>Pay-as-you-go:<br>`kms_ppi_public_cn`: China site<br>`kms_ppi_public_intl`: international site<br><br><br><br><br><br>
      shared_ptr<string> productType_ {};
      // The version of the KMS instance.
      shared_ptr<string> productVersion_ {};
      // The sales status of the instance.
      shared_ptr<string> saleStatus_ {};
      // The maximum number of credentials that can be created in the KMS instance.
      shared_ptr<string> secretNum_ {};
      // The computing performance of the KMS instance.
      shared_ptr<int64_t> spec_ {};
      // The time when the KMS instance was enabled.
      shared_ptr<string> startDate_ {};
      // The status of the KMS instance. Valid values:
      // 
      // - `Uninitialized`: The instance is not enabled.
      // 
      // - `Connecting`: The instance is connecting.
      // 
      // - `Connected`: The instance is enabled.
      // 
      // - `Disconnected`: The instance is disconnected.
      // 
      // - `Error`: The instance is in an error state.
      shared_ptr<string> status_ {};
      // The VPC to which the KMS instance is attached.
      shared_ptr<string> vpcId_ {};
      // The maximum number of VPCs that can be associated with the KMS instance for access control.
      shared_ptr<int64_t> vpcNum_ {};
      // The vSwitches in the VPC to which the KMS instance is attached.
      shared_ptr<vector<string>> vswitchIds_ {};
      // The zones to which the KMS instance is attached.
      shared_ptr<vector<string>> zoneIds_ {};
    };

    virtual bool empty() const override { return this->kmsInstance_ == nullptr
        && this->requestId_ == nullptr; };
    // kmsInstance Field Functions 
    bool hasKmsInstance() const { return this->kmsInstance_ != nullptr;};
    void deleteKmsInstance() { this->kmsInstance_ = nullptr;};
    inline const GetKmsInstanceResponseBody::KmsInstance & getKmsInstance() const { DARABONBA_PTR_GET_CONST(kmsInstance_, GetKmsInstanceResponseBody::KmsInstance) };
    inline GetKmsInstanceResponseBody::KmsInstance getKmsInstance() { DARABONBA_PTR_GET(kmsInstance_, GetKmsInstanceResponseBody::KmsInstance) };
    inline GetKmsInstanceResponseBody& setKmsInstance(const GetKmsInstanceResponseBody::KmsInstance & kmsInstance) { DARABONBA_PTR_SET_VALUE(kmsInstance_, kmsInstance) };
    inline GetKmsInstanceResponseBody& setKmsInstance(GetKmsInstanceResponseBody::KmsInstance && kmsInstance) { DARABONBA_PTR_SET_RVALUE(kmsInstance_, kmsInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKmsInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the KMS instance.
    shared_ptr<GetKmsInstanceResponseBody::KmsInstance> kmsInstance_ {};
    // The request ID. Alibaba Cloud generates a unique identifier for each request. You can use this ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
