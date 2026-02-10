// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckCountStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckCountStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCountStatisticDTO, checkCountStatisticDTO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckCountStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCountStatisticDTO, checkCountStatisticDTO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCheckCountStatisticResponseBody() = default ;
    GetCheckCountStatisticResponseBody(const GetCheckCountStatisticResponseBody &) = default ;
    GetCheckCountStatisticResponseBody(GetCheckCountStatisticResponseBody &&) = default ;
    GetCheckCountStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckCountStatisticResponseBody() = default ;
    GetCheckCountStatisticResponseBody& operator=(const GetCheckCountStatisticResponseBody &) = default ;
    GetCheckCountStatisticResponseBody& operator=(GetCheckCountStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCountStatisticDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCountStatisticDTO& obj) { 
        DARABONBA_PTR_TO_JSON(CheckCountStatisticItems, checkCountStatisticItems_);
        DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCountStatisticDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckCountStatisticItems, checkCountStatisticItems_);
        DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
      };
      CheckCountStatisticDTO() = default ;
      CheckCountStatisticDTO(const CheckCountStatisticDTO &) = default ;
      CheckCountStatisticDTO(CheckCountStatisticDTO &&) = default ;
      CheckCountStatisticDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckCountStatisticDTO() = default ;
      CheckCountStatisticDTO& operator=(const CheckCountStatisticDTO &) = default ;
      CheckCountStatisticDTO& operator=(CheckCountStatisticDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CheckCountStatisticItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckCountStatisticItems& obj) { 
          DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
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
          DARABONBA_PTR_TO_JSON(VendorShowName, vendorShowName_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, CheckCountStatisticItems& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
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
          DARABONBA_PTR_FROM_JSON(VendorShowName, vendorShowName_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        };
        CheckCountStatisticItems() = default ;
        CheckCountStatisticItems(const CheckCountStatisticItems &) = default ;
        CheckCountStatisticItems(CheckCountStatisticItems &&) = default ;
        CheckCountStatisticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckCountStatisticItems() = default ;
        CheckCountStatisticItems& operator=(const CheckCountStatisticItems &) = default ;
        CheckCountStatisticItems& operator=(CheckCountStatisticItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkShowName_ == nullptr
        && this->cores_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceSubType_ == nullptr && this->instanceSubTypeName_ == nullptr
        && this->instanceType_ == nullptr && this->instanceTypeName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->os_ == nullptr
        && this->regionId_ == nullptr && this->riskCount_ == nullptr && this->uuid_ == nullptr && this->vendor_ == nullptr && this->vendorShowName_ == nullptr
        && this->vpcInstanceId_ == nullptr; };
        // checkShowName Field Functions 
        bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
        void deleteCheckShowName() { this->checkShowName_ = nullptr;};
        inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
        inline CheckCountStatisticItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
        inline CheckCountStatisticItems& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CheckCountStatisticItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline CheckCountStatisticItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceSubType Field Functions 
        bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
        void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
        inline int32_t getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, 0) };
        inline CheckCountStatisticItems& setInstanceSubType(int32_t instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


        // instanceSubTypeName Field Functions 
        bool hasInstanceSubTypeName() const { return this->instanceSubTypeName_ != nullptr;};
        void deleteInstanceSubTypeName() { this->instanceSubTypeName_ = nullptr;};
        inline string getInstanceSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceSubTypeName_, "") };
        inline CheckCountStatisticItems& setInstanceSubTypeName(string instanceSubTypeName) { DARABONBA_PTR_SET_VALUE(instanceSubTypeName_, instanceSubTypeName) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline int32_t getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, 0) };
        inline CheckCountStatisticItems& setInstanceType(int32_t instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // instanceTypeName Field Functions 
        bool hasInstanceTypeName() const { return this->instanceTypeName_ != nullptr;};
        void deleteInstanceTypeName() { this->instanceTypeName_ = nullptr;};
        inline string getInstanceTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeName_, "") };
        inline CheckCountStatisticItems& setInstanceTypeName(string instanceTypeName) { DARABONBA_PTR_SET_VALUE(instanceTypeName_, instanceTypeName) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline CheckCountStatisticItems& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // intranetIp Field Functions 
        bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
        void deleteIntranetIp() { this->intranetIp_ = nullptr;};
        inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
        inline CheckCountStatisticItems& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


        // os Field Functions 
        bool hasOs() const { return this->os_ != nullptr;};
        void deleteOs() { this->os_ = nullptr;};
        inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
        inline CheckCountStatisticItems& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CheckCountStatisticItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // riskCount Field Functions 
        bool hasRiskCount() const { return this->riskCount_ != nullptr;};
        void deleteRiskCount() { this->riskCount_ = nullptr;};
        inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
        inline CheckCountStatisticItems& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline CheckCountStatisticItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline CheckCountStatisticItems& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


        // vendorShowName Field Functions 
        bool hasVendorShowName() const { return this->vendorShowName_ != nullptr;};
        void deleteVendorShowName() { this->vendorShowName_ = nullptr;};
        inline string getVendorShowName() const { DARABONBA_PTR_GET_DEFAULT(vendorShowName_, "") };
        inline CheckCountStatisticItems& setVendorShowName(string vendorShowName) { DARABONBA_PTR_SET_VALUE(vendorShowName_, vendorShowName) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline CheckCountStatisticItems& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        shared_ptr<string> checkShowName_ {};
        // The number of the CPU cores used by the host instance.
        shared_ptr<int32_t> cores_ {};
        // The instance ID of the cloud service.
        shared_ptr<string> instanceId_ {};
        // The instance name of the asset.
        shared_ptr<string> instanceName_ {};
        // The subtype of the cloud service.
        shared_ptr<int32_t> instanceSubType_ {};
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
        shared_ptr<string> instanceSubTypeName_ {};
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
        shared_ptr<int32_t> instanceType_ {};
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
        shared_ptr<string> instanceTypeName_ {};
        // The public IP address of the host instance.
        shared_ptr<string> internetIp_ {};
        // The private IP address of the host instance.
        shared_ptr<string> intranetIp_ {};
        // The version of the operating system that the host instance runs.
        shared_ptr<string> os_ {};
        // The region.
        shared_ptr<string> regionId_ {};
        // The number of risk items.
        shared_ptr<int32_t> riskCount_ {};
        // The UUID of the host instance.
        shared_ptr<string> uuid_ {};
        // The cloud service provider. Valid values:
        // 
        // *   **ALIYUN**: Alibaba Cloud.
        // *   **TENCENT**: Tencent Cloud.
        // *   **MICROSOFT**: Microsoft Azure.
        // *   **AWS**: AWS.
        shared_ptr<int32_t> vendor_ {};
        shared_ptr<string> vendorShowName_ {};
        // The ID of the VPC to which the host instance belongs.
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->checkCountStatisticItems_ == nullptr
        && this->statisticType_ == nullptr; };
      // checkCountStatisticItems Field Functions 
      bool hasCheckCountStatisticItems() const { return this->checkCountStatisticItems_ != nullptr;};
      void deleteCheckCountStatisticItems() { this->checkCountStatisticItems_ = nullptr;};
      inline const vector<CheckCountStatisticDTO::CheckCountStatisticItems> & getCheckCountStatisticItems() const { DARABONBA_PTR_GET_CONST(checkCountStatisticItems_, vector<CheckCountStatisticDTO::CheckCountStatisticItems>) };
      inline vector<CheckCountStatisticDTO::CheckCountStatisticItems> getCheckCountStatisticItems() { DARABONBA_PTR_GET(checkCountStatisticItems_, vector<CheckCountStatisticDTO::CheckCountStatisticItems>) };
      inline CheckCountStatisticDTO& setCheckCountStatisticItems(const vector<CheckCountStatisticDTO::CheckCountStatisticItems> & checkCountStatisticItems) { DARABONBA_PTR_SET_VALUE(checkCountStatisticItems_, checkCountStatisticItems) };
      inline CheckCountStatisticDTO& setCheckCountStatisticItems(vector<CheckCountStatisticDTO::CheckCountStatisticItems> && checkCountStatisticItems) { DARABONBA_PTR_SET_RVALUE(checkCountStatisticItems_, checkCountStatisticItems) };


      // statisticType Field Functions 
      bool hasStatisticType() const { return this->statisticType_ != nullptr;};
      void deleteStatisticType() { this->statisticType_ = nullptr;};
      inline string getStatisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
      inline CheckCountStatisticDTO& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


    protected:
      // The risk item statistics.
      shared_ptr<vector<CheckCountStatisticDTO::CheckCountStatisticItems>> checkCountStatisticItems_ {};
      // The type of the statistics. Valid values:
      // 
      // *   **user**: the top five users that are granted excessive permissions.
      // *   **role**: the top five roles that are granted excessive permissions.
      // *   **instance**: the top five cloud services on which risks are detected.
      shared_ptr<string> statisticType_ {};
    };

    virtual bool empty() const override { return this->checkCountStatisticDTO_ == nullptr
        && this->requestId_ == nullptr; };
    // checkCountStatisticDTO Field Functions 
    bool hasCheckCountStatisticDTO() const { return this->checkCountStatisticDTO_ != nullptr;};
    void deleteCheckCountStatisticDTO() { this->checkCountStatisticDTO_ = nullptr;};
    inline const GetCheckCountStatisticResponseBody::CheckCountStatisticDTO & getCheckCountStatisticDTO() const { DARABONBA_PTR_GET_CONST(checkCountStatisticDTO_, GetCheckCountStatisticResponseBody::CheckCountStatisticDTO) };
    inline GetCheckCountStatisticResponseBody::CheckCountStatisticDTO getCheckCountStatisticDTO() { DARABONBA_PTR_GET(checkCountStatisticDTO_, GetCheckCountStatisticResponseBody::CheckCountStatisticDTO) };
    inline GetCheckCountStatisticResponseBody& setCheckCountStatisticDTO(const GetCheckCountStatisticResponseBody::CheckCountStatisticDTO & checkCountStatisticDTO) { DARABONBA_PTR_SET_VALUE(checkCountStatisticDTO_, checkCountStatisticDTO) };
    inline GetCheckCountStatisticResponseBody& setCheckCountStatisticDTO(GetCheckCountStatisticResponseBody::CheckCountStatisticDTO && checkCountStatisticDTO) { DARABONBA_PTR_SET_RVALUE(checkCountStatisticDTO_, checkCountStatisticDTO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckCountStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The risk item statistics.
    shared_ptr<GetCheckCountStatisticResponseBody::CheckCountStatisticDTO> checkCountStatisticDTO_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
