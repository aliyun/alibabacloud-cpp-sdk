// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUESTCUSTOMCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGREQUESTCUSTOMCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigRequestCustomCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigRequestCustomCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_TO_JSON(CloudAssetInstance, cloudAssetInstance_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigRequestCustomCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_FROM_JSON(CloudAssetInstance, cloudAssetInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    VerifyCheckCustomConfigRequestCustomCheckConfig() = default ;
    VerifyCheckCustomConfigRequestCustomCheckConfig(const VerifyCheckCustomConfigRequestCustomCheckConfig &) = default ;
    VerifyCheckCustomConfigRequestCustomCheckConfig(VerifyCheckCustomConfigRequestCustomCheckConfig &&) = default ;
    VerifyCheckCustomConfigRequestCustomCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigRequestCustomCheckConfig() = default ;
    VerifyCheckCustomConfigRequestCustomCheckConfig& operator=(const VerifyCheckCustomConfigRequestCustomCheckConfig &) = default ;
    VerifyCheckCustomConfigRequestCustomCheckConfig& operator=(VerifyCheckCustomConfigRequestCustomCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRule_ == nullptr
        && return this->cloudAssetInstance_ == nullptr && return this->instanceSubType_ == nullptr && return this->instanceType_ == nullptr && return this->vendor_ == nullptr; };
    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string checkRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // cloudAssetInstance Field Functions 
    bool hasCloudAssetInstance() const { return this->cloudAssetInstance_ != nullptr;};
    void deleteCloudAssetInstance() { this->cloudAssetInstance_ = nullptr;};
    inline const Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance & cloudAssetInstance() const { DARABONBA_PTR_GET_CONST(cloudAssetInstance_, Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance) };
    inline Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance cloudAssetInstance() { DARABONBA_PTR_GET(cloudAssetInstance_, Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance) };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig& setCloudAssetInstance(const Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance & cloudAssetInstance) { DARABONBA_PTR_SET_VALUE(cloudAssetInstance_, cloudAssetInstance) };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig& setCloudAssetInstance(Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance && cloudAssetInstance) { DARABONBA_PTR_SET_RVALUE(cloudAssetInstance_, cloudAssetInstance) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string instanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline VerifyCheckCustomConfigRequestCustomCheckConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Define rules for custom inspection items.
    std::shared_ptr<string> checkRule_ = nullptr;
    // Asset instance that requires testing rules
    std::shared_ptr<Models::VerifyCheckCustomConfigRequestCustomCheckConfigCloudAssetInstance> cloudAssetInstance_ = nullptr;
    // Asset subtype of the cloud product
    std::shared_ptr<string> instanceSubType_ = nullptr;
    // Asset types of cloud products. Values:
    // - **ECS**: Elastic Compute Service 
    // - **SLB**: Server Load Balancer 
    // - **RDS**: Relational Database Service 
    // - **MONGODB**: MongoDB Database 
    // - **KVSTORE**: Redis Database 
    // - **ACR**: Container Registry 
    // - **CSK**: CSK 
    // - **VPC**: Virtual Private Cloud 
    // - **ACTIONTRAIL**: Action Trail 
    // - **CDN**: Content Delivery Network 
    // - **CAS**: Digital Certificate Management Service [formerly SSL Certificates] 
    // - **RDC**: DevOps 
    // - **RAM**: Resource Access Management 
    // - **DDOS**: Distributed Denial of Service 
    // - **WAF**: Web Application Firewall 
    // - **OSS**: Object Storage Service 
    // - **POLARDB**: POLARDB 
    // - **POSTGRESQL**: PostgreSQL 
    // - **MSE**: MSE 
    // - **NAS**: Network Attached Storage 
    // - **SDDP**: Sensitive Data Discovery and Protection 
    // - **EIP**: Elastic IP
    std::shared_ptr<string> instanceType_ = nullptr;
    // Cloud asset vendor. Values: 
    // - **ALIYUN**: Alibaba Cloud 
    // - **Tencent**: Tencent Cloud 
    // - **HUAWEICLOUD**: Huawei Cloud 
    // - **Azure**: Microsoft 
    // - **AWS**: Amazon Web Services (AWS)
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
