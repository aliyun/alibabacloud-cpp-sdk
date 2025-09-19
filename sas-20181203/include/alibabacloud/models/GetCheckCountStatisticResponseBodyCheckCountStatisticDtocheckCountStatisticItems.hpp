// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODYCHECKCOUNTSTATISTICDTOCHECKCOUNTSTATISTICITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODYCHECKCOUNTSTATISTICDTOCHECKCOUNTSTATISTICITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceSubTypeName, instanceSubTypeName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeName, instanceTypeName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceSubTypeName, instanceSubTypeName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeName, instanceTypeName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems() = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems(const GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems &) = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems(GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems &&) = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems() = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& operator=(const GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems &) = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& operator=(GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cores_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceSubType_ != nullptr && this->instanceSubTypeName_ != nullptr && this->instanceType_ != nullptr
        && this->instanceTypeName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->os_ != nullptr && this->regionId_ != nullptr
        && this->riskCount_ != nullptr && this->uuid_ != nullptr && this->vendor_ != nullptr && this->vpcInstanceId_ != nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline int32_t instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, 0) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInstanceSubType(int32_t instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceSubTypeName Field Functions 
    bool hasInstanceSubTypeName() const { return this->instanceSubTypeName_ != nullptr;};
    void deleteInstanceSubTypeName() { this->instanceSubTypeName_ = nullptr;};
    inline string instanceSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceSubTypeName_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInstanceSubTypeName(string instanceSubTypeName) { DARABONBA_PTR_SET_VALUE(instanceSubTypeName_, instanceSubTypeName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline int32_t instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, 0) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInstanceType(int32_t instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeName Field Functions 
    bool hasInstanceTypeName() const { return this->instanceTypeName_ != nullptr;};
    void deleteInstanceTypeName() { this->instanceTypeName_ = nullptr;};
    inline string instanceTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeName_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInstanceTypeName(string instanceTypeName) { DARABONBA_PTR_SET_VALUE(instanceTypeName_, instanceTypeName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The number of the CPU cores used by the host instance.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The instance ID of the cloud service.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The subtype of the cloud service.
    std::shared_ptr<int32_t> instanceSubType_ = nullptr;
    // The asset subtype of the cloud service. Valid values:
    // 
    // *   If **InstanceTypeName** is set to **ECS**, this parameter supports the following valid values:
    // 
    //     *   **INSTANCE**
    //     *   **DISK**
    //     *   **SECURITY_GROUP**
    // 
    // *   If **InstanceTypeName** is set to **ACR**, this parameter supports the following valid values:
    // 
    //     *   **REPOSITORY_ENTERPRISE**
    //     *   **REPOSITORY_PERSON**
    // 
    // *   If **InstanceTypeName** is set to **RAM**, this parameter supports the following valid values:
    // 
    //     *   **ALIAS**
    //     *   **USER**
    //     *   **POLICY**
    //     *   **GROUP**
    // 
    // *   If **InstanceTypeName** is set to **WAF**, this parameter supports the following valid value:
    // 
    //     *   **DOMAIN**
    // 
    // *   If **InstanceTypeName** is set to other values, this parameter supports the following valid values:
    // 
    //     *   **INSTANCE**
    std::shared_ptr<string> instanceSubTypeName_ = nullptr;
    // The asset type. Valid values:
    // 
    // *   **0**: Elastic Compute Service (ECS) instance.
    // *   **1**: Server Load Balancer (SLB) instance.
    // *   **2**: NAT gateway.
    // *   **3**: ApsaraDB RDS instance.
    // *   **4**: ApsaraDB for MongoDB (MongoDB) instance.
    // *   **5**: Tair (Redis OSS-compatible) (Tair) instance.
    // *   **6**: container image.
    // *   **7**: container.
    std::shared_ptr<int32_t> instanceType_ = nullptr;
    // The asset type of the cloud service. Valid values:
    // 
    // *   **ECS**: ECS.
    // *   **SLB**: SLB.
    // *   **RDS**: ApsaraDB RDS.
    // *   **MONGODB**: ApsaraDB for MongoDB.
    // *   **KVSTORE**: Tair.
    // *   **ACR**: Container Registry.
    // *   **CSK**: Container Service for Kubernetes (ACK).
    // *   **VPC**: Virtual Private Cloud (VPC).
    // *   **ACTIONTRAIL**: ActionTrail.
    // *   **CDN**: Alibaba Cloud CDN (CDN).
    // *   **CAS**: Certificate Management Service (formerly SSL Certificates Service).
    // *   **RDC**: Alibaba Cloud DevOps.
    // *   **RAM**: Resource Access Management (RAM).
    // *   **DDOS**: Anti-DDoS.
    // *   **WAF**: Web Application Firewall (WAF).
    // *   **OSS**: Object Storage Service (OSS).
    // *   **POLARDB**: PolarDB.
    // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL.
    // *   **MSE**: Microservices Engine (MSE).
    // *   **NAS**: File Storage NAS (NAS).
    // *   **SDDP**: Sensitive Data Discovery and Protection (SDDP).
    // *   **EIP**: Elastic IP Address (EIP).
    std::shared_ptr<string> instanceTypeName_ = nullptr;
    // The public IP address of the host instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the host instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The version of the operating system that the host instance runs.
    std::shared_ptr<string> os_ = nullptr;
    // The region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of risk items.
    std::shared_ptr<int32_t> riskCount_ = nullptr;
    // The UUID of the host instance.
    std::shared_ptr<string> uuid_ = nullptr;
    // The cloud service provider. Valid values:
    // 
    // *   **ALIYUN**: Alibaba Cloud.
    // *   **TENCENT**: Tencent Cloud.
    // *   **MICROSOFT**: Microsoft Azure.
    // *   **AWS**: AWS.
    std::shared_ptr<int32_t> vendor_ = nullptr;
    // The ID of the VPC to which the host instance belongs.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
