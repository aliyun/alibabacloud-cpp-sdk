// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestDataDisk.hpp>
#include <alibabacloud/models/CreateInstanceRequestSystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PublicIpIdentification, publicIpIdentification_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PublicIpIdentification, publicIpIdentification_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDisk_ != nullptr
        && this->systemDisk_ != nullptr && this->autoRenew_ != nullptr && this->autoRenewPeriod_ != nullptr && this->ensRegionId_ != nullptr && this->hostName_ != nullptr
        && this->imageId_ != nullptr && this->instanceName_ != nullptr && this->instanceType_ != nullptr && this->internetChargeType_ != nullptr && this->ipType_ != nullptr
        && this->keyPairName_ != nullptr && this->ownerId_ != nullptr && this->password_ != nullptr && this->passwordInherit_ != nullptr && this->paymentType_ != nullptr
        && this->period_ != nullptr && this->privateIpAddress_ != nullptr && this->publicIpIdentification_ != nullptr && this->quantity_ != nullptr && this->uniqueSuffix_ != nullptr
        && this->userData_ != nullptr && this->vSwitchId_ != nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<CreateInstanceRequestDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<CreateInstanceRequestDataDisk>) };
    inline vector<CreateInstanceRequestDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<CreateInstanceRequestDataDisk>) };
    inline CreateInstanceRequest& setDataDisk(const vector<CreateInstanceRequestDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateInstanceRequest& setDataDisk(vector<CreateInstanceRequestDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const CreateInstanceRequestSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, CreateInstanceRequestSystemDisk) };
    inline CreateInstanceRequestSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, CreateInstanceRequestSystemDisk) };
    inline CreateInstanceRequest& setSystemDisk(const CreateInstanceRequestSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateInstanceRequest& setSystemDisk(CreateInstanceRequestSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateInstanceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateInstanceRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateInstanceRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateInstanceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline CreateInstanceRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateInstanceRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateInstanceRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // publicIpIdentification Field Functions 
    bool hasPublicIpIdentification() const { return this->publicIpIdentification_ != nullptr;};
    void deletePublicIpIdentification() { this->publicIpIdentification_ = nullptr;};
    inline bool publicIpIdentification() const { DARABONBA_PTR_GET_DEFAULT(publicIpIdentification_, false) };
    inline CreateInstanceRequest& setPublicIpIdentification(bool publicIpIdentification) { DARABONBA_PTR_SET_VALUE(publicIpIdentification_, publicIpIdentification) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline CreateInstanceRequest& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // uniqueSuffix Field Functions 
    bool hasUniqueSuffix() const { return this->uniqueSuffix_ != nullptr;};
    void deleteUniqueSuffix() { this->uniqueSuffix_ = nullptr;};
    inline bool uniqueSuffix() const { DARABONBA_PTR_GET_DEFAULT(uniqueSuffix_, false) };
    inline CreateInstanceRequest& setUniqueSuffix(bool uniqueSuffix) { DARABONBA_PTR_SET_VALUE(uniqueSuffix_, uniqueSuffix) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<vector<CreateInstanceRequestDataDisk>> dataDisk_ = nullptr;
    std::shared_ptr<CreateInstanceRequestSystemDisk> systemDisk_ = nullptr;
    // Specifies whether to enable the auto-renewal feature. Valid values: **True** and **False**. Default value: False.
    std::shared_ptr<string> autoRenew_ = nullptr;
    // The auto-renewal period for the instance. This parameter is required when the **AutoRenew** parameter is set to **True**. Valid values: **1** to **12**. Unit: months.
    std::shared_ptr<string> autoRenewPeriod_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The hostname of the Elastic Compute Service (ECS) instance. General naming rules: The hostname cannot start or end with a period (.) or hyphen (-). It cannot contain consecutive periods (.) or hyphens (-).
    // 
    // Naming rules for specific instances:
    // 
    // *   For Windows instances, the hostname must be **2** to **15** characters in length and cannot contain periods (.) or contain only digits. The hostname cannot contain periods (.) or contain only digits.
    // *   For instances that run one of other operating systems such as Linux, the hostname must be **2** to **64** characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image file that you select when creating the instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the instance. The name must conform to the following naming conventions:
    // 
    // *   The name must be **2** to **128** characters in length.
    // *   It must start with a letter but cannot start with http:// or https://.
    // *   The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // If you do not specify this parameter, the instance ID is used as the instance name by default.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The type of the instance.
    // 
    // For more information, see [](~~66124~~).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // This parameter is required if you create the instance for the first time. The existing billing method is used by default if you have created an instance. Valid values:
    // 
    // *   **BandwidthByDay**: Pay by daily peak bandwidth.
    // *   **95BandwidthByMonth**: Pay by monthly 95th percentile bandwidth.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The type of the IP address. Valid values:
    // 
    // *   **ipv4** (default)
    // *   **ipv6**
    // *   **ipv4Andipv6**
    std::shared_ptr<string> ipType_ = nullptr;
    // The name of the key pair. You can specify only one name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The password of the instance.
    // 
    // The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters include: ``()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/``
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to use the preset password of the image. Valid values:
    // 
    // - **true**: The password preset in the image is used, and the **Password** parameter must be null. For secure access, make sure that the selected image has a password configured.
    // 
    // - **false**: does not use the password preset in the image.
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // The billing method of the instance. Set the value to Subscription.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The subscription period of the instance. Valid values: **1** to **9** and **12**. Unit: months.
    // 
    // This parameter is required.
    std::shared_ptr<string> period_ = nullptr;
    // The internal IP address. If this parameter is specified, you must specify the vSwitch ID. The vSwitch must be created first. Otherwise, an error is returned.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // Specifies whether a public IP address can be assigned to the specified instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> publicIpIdentification_ = nullptr;
    // The number of instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> quantity_ = nullptr;
    // Specifies whether to automatically append sequential suffixes to the hostnames specified by the **HostName** parameter and instance names specified by the **InstanceName** parameter. The sequential suffixes range from **001** to **999**.
    // 
    // Examples: **LocalHost001** and **LocalHost002**, and **MyInstance001** and **MyInstance002**.
    // 
    // Default value: **false**.
    std::shared_ptr<bool> uniqueSuffix_ = nullptr;
    // Custom data. The data starts with `#!`. The data can be at most 256 characters in length and 16 KB in size. Only custom scripts are supported and cannot be rendered by InstanceMetaData.
    // 
    // You can specify custom data. The data is encoded in Base64. The system does not encrypt your custom data when API requests are initiated. We recommend that you do not pass in confidential information such as passwords and private keys in plaintext. If you want to provide sensitive data such as passwords and private keys, encrypt the data and then encode it in Base64. The data is decrypted on the instance in the way it is encrypted.
    // 
    // For more information, see [User data formats](https://cloudinit.readthedocs.io/en/latest/topics/format.html).
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
