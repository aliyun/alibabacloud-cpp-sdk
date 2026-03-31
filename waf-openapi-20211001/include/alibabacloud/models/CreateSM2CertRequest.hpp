// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESM2CERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESM2CERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateSM2CertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSM2CertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(EncryptCertificate, encryptCertificate_);
      DARABONBA_PTR_TO_JSON(EncryptPrivateKey, encryptPrivateKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SignCertificate, signCertificate_);
      DARABONBA_PTR_TO_JSON(SignPrivateKey, signPrivateKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSM2CertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(EncryptCertificate, encryptCertificate_);
      DARABONBA_PTR_FROM_JSON(EncryptPrivateKey, encryptPrivateKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SignCertificate, signCertificate_);
      DARABONBA_PTR_FROM_JSON(SignPrivateKey, signPrivateKey_);
    };
    CreateSM2CertRequest() = default ;
    CreateSM2CertRequest(const CreateSM2CertRequest &) = default ;
    CreateSM2CertRequest(CreateSM2CertRequest &&) = default ;
    CreateSM2CertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSM2CertRequest() = default ;
    CreateSM2CertRequest& operator=(const CreateSM2CertRequest &) = default ;
    CreateSM2CertRequest& operator=(CreateSM2CertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certName_ == nullptr
        && this->encryptCertificate_ == nullptr && this->encryptPrivateKey_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->signCertificate_ == nullptr && this->signPrivateKey_ == nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline CreateSM2CertRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // encryptCertificate Field Functions 
    bool hasEncryptCertificate() const { return this->encryptCertificate_ != nullptr;};
    void deleteEncryptCertificate() { this->encryptCertificate_ = nullptr;};
    inline string getEncryptCertificate() const { DARABONBA_PTR_GET_DEFAULT(encryptCertificate_, "") };
    inline CreateSM2CertRequest& setEncryptCertificate(string encryptCertificate) { DARABONBA_PTR_SET_VALUE(encryptCertificate_, encryptCertificate) };


    // encryptPrivateKey Field Functions 
    bool hasEncryptPrivateKey() const { return this->encryptPrivateKey_ != nullptr;};
    void deleteEncryptPrivateKey() { this->encryptPrivateKey_ = nullptr;};
    inline string getEncryptPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(encryptPrivateKey_, "") };
    inline CreateSM2CertRequest& setEncryptPrivateKey(string encryptPrivateKey) { DARABONBA_PTR_SET_VALUE(encryptPrivateKey_, encryptPrivateKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSM2CertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSM2CertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateSM2CertRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // signCertificate Field Functions 
    bool hasSignCertificate() const { return this->signCertificate_ != nullptr;};
    void deleteSignCertificate() { this->signCertificate_ = nullptr;};
    inline string getSignCertificate() const { DARABONBA_PTR_GET_DEFAULT(signCertificate_, "") };
    inline CreateSM2CertRequest& setSignCertificate(string signCertificate) { DARABONBA_PTR_SET_VALUE(signCertificate_, signCertificate) };


    // signPrivateKey Field Functions 
    bool hasSignPrivateKey() const { return this->signPrivateKey_ != nullptr;};
    void deleteSignPrivateKey() { this->signPrivateKey_ = nullptr;};
    inline string getSignPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(signPrivateKey_, "") };
    inline CreateSM2CertRequest& setSignPrivateKey(string signPrivateKey) { DARABONBA_PTR_SET_VALUE(signPrivateKey_, signPrivateKey) };


  protected:
    // The name of the SM certificate.
    shared_ptr<string> certName_ {};
    // The content of the SM certificate.
    shared_ptr<string> encryptCertificate_ {};
    // The private key of the SM certificate.
    shared_ptr<string> encryptPrivateKey_ {};
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The content of the signing certificate for the SM certificate.
    shared_ptr<string> signCertificate_ {};
    // The private key of the signing certificate for the SM certificate.
    shared_ptr<string> signPrivateKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
