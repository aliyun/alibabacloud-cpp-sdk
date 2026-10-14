// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->size_ == nullptr; };
      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline SystemDisk& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The size of the system cloud disk. Unit: GiB. The value must be a multiple of 10 and cannot be smaller than the image size. For the valid range, refer to the SystemDiskMinSize and SystemDiskMaxSize values returned by DescribeAvailableResourceInfo. 20 GiB and 40 GiB are common configurations and do not indicate that only these two values are supported.
      shared_ptr<string> size_ {};
    };

    class DataDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      DataDisk() = default ;
      DataDisk(const DataDisk &) = default ;
      DataDisk(DataDisk &&) = default ;
      DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisk() = default ;
      DataDisk& operator=(const DataDisk &) = default ;
      DataDisk& operator=(DataDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->size_ == nullptr; };
      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline DataDisk& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The size of the first data cloud disk. Unit: GiB. The size must be at least 20 GiB and a multiple of 10.
      shared_ptr<string> size_ {};
    };

    virtual bool empty() const override { return this->dataDisk_ == nullptr
        && this->systemDisk_ == nullptr && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->ensRegionId_ == nullptr && this->hostName_ == nullptr
        && this->imageId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->ipType_ == nullptr
        && this->keyPairName_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->paymentType_ == nullptr
        && this->period_ == nullptr && this->privateIpAddress_ == nullptr && this->publicIpIdentification_ == nullptr && this->quantity_ == nullptr && this->uniqueSuffix_ == nullptr
        && this->userData_ == nullptr && this->vSwitchId_ == nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<CreateInstanceRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<CreateInstanceRequest::DataDisk>) };
    inline vector<CreateInstanceRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<CreateInstanceRequest::DataDisk>) };
    inline CreateInstanceRequest& setDataDisk(const vector<CreateInstanceRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateInstanceRequest& setDataDisk(vector<CreateInstanceRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const CreateInstanceRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, CreateInstanceRequest::SystemDisk) };
    inline CreateInstanceRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, CreateInstanceRequest::SystemDisk) };
    inline CreateInstanceRequest& setSystemDisk(const CreateInstanceRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateInstanceRequest& setSystemDisk(CreateInstanceRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateInstanceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateInstanceRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateInstanceRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateInstanceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateInstanceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline CreateInstanceRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateInstanceRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateInstanceRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateInstanceRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // publicIpIdentification Field Functions 
    bool hasPublicIpIdentification() const { return this->publicIpIdentification_ != nullptr;};
    void deletePublicIpIdentification() { this->publicIpIdentification_ = nullptr;};
    inline bool getPublicIpIdentification() const { DARABONBA_PTR_GET_DEFAULT(publicIpIdentification_, false) };
    inline CreateInstanceRequest& setPublicIpIdentification(bool publicIpIdentification) { DARABONBA_PTR_SET_VALUE(publicIpIdentification_, publicIpIdentification) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline CreateInstanceRequest& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // uniqueSuffix Field Functions 
    bool hasUniqueSuffix() const { return this->uniqueSuffix_ != nullptr;};
    void deleteUniqueSuffix() { this->uniqueSuffix_ = nullptr;};
    inline bool getUniqueSuffix() const { DARABONBA_PTR_GET_DEFAULT(uniqueSuffix_, false) };
    inline CreateInstanceRequest& setUniqueSuffix(bool uniqueSuffix) { DARABONBA_PTR_SET_VALUE(uniqueSuffix_, uniqueSuffix) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    shared_ptr<vector<CreateInstanceRequest::DataDisk>> dataDisk_ {};
    shared_ptr<CreateInstanceRequest::SystemDisk> systemDisk_ {};
    // Specifies whether to enable auto-renewal. Valid values: **True** | **False** (default).
    shared_ptr<string> autoRenew_ {};
    // The auto-renewal period. This parameter is required when **AutoRenew** is set to **True**. Valid values: **1** to **12**. Unit: months.
    shared_ptr<string> autoRenewPeriod_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // The hostname of the instance.
    // General naming conventions: Periods (.) and hyphens (-) cannot be used as the first or last character and cannot be used consecutively.
    // 
    // Specific naming conventions:
    // - Windows instances: The hostname must be **2** to **15** characters in length. Periods (.) are not supported. The hostname cannot consist entirely of digits. Uppercase letters, lowercase letters, digits, and hyphens (-) are allowed.
    // - Other instances (such as Linux): The hostname must be **2** to **64** characters in length. Multiple periods (.) are supported. Each segment separated by a period can contain uppercase letters, lowercase letters, digits, and hyphens (-).
    shared_ptr<string> hostName_ {};
    // The ID of the image that is used to start the instance.
    shared_ptr<string> imageId_ {};
    // The name of the instance. Naming conventions:
    // 
    // - The name must be **2** to **128** characters in length and can contain letters and Chinese characters.
    // - The name must start with an uppercase letter, a lowercase letter, or a Chinese character. It cannot start with http:// or https://.
    // - The name can contain digits, colons (:), underscores (_), periods (.), or hyphens (-).
    // 
    // If this parameter is not specified, the default value is the InstanceId of the instance.
    shared_ptr<string> instanceName_ {};
    // The instance type.
    // 
    // For details about instance types, see [Limits](https://help.aliyun.com/document_detail/66124.html).
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // This parameter is required when you create an instance for the first time. If you already have instance resources, the existing billing method is used by default. Valid values:
    // 
    // - **BandwidthByDay**: daily peak bandwidth.
    // 
    // - **95BandwidthByMonth**: monthly 95th percentile bandwidth.
    shared_ptr<string> internetChargeType_ {};
    // The IP type. Valid values:
    // 
    // - **ipv4** (default): IPv4.
    // 
    // - **ipv6**: IPv6.
    // 
    // - **ipv4Andipv6**: IPv4 and IPv6.
    shared_ptr<string> ipType_ {};
    // The name of the key pair. Only a single name is supported.
    shared_ptr<string> keyPairName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the instance.
    // 
    // The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported: ```()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/```
    shared_ptr<string> password_ {};
    // Specifies whether to use the preset password of the image. Valid values:
    // 
    // - **true**: The preset password of the image is used. The **Password** parameter must be empty, and you must make sure that the image has a preset password.
    // - **false**: The preset password of the image is not used.
    shared_ptr<bool> passwordInherit_ {};
    // The payment method. Currently, this is a fixed value of Subscription (subscription instance). Modification is not supported.
    shared_ptr<string> paymentType_ {};
    // The subscription duration. Valid values: **1** to **9** and **12**. Unit: months.
    // 
    // This parameter is required.
    shared_ptr<string> period_ {};
    // The private IP address. If you specify a private IP address, you must also specify the VSwitchId parameter. The vSwitch must be created in advance. Otherwise, an error is returned.
    shared_ptr<string> privateIpAddress_ {};
    // Specifies whether a public IP address can be assigned to the specified instance. Valid values:
    // 
    // - **true** (default): A public IP address can be assigned.
    // - **false**: A public IP address cannot be assigned.
    shared_ptr<bool> publicIpIdentification_ {};
    // The number of instances.
    // 
    // This parameter is required.
    shared_ptr<string> quantity_ {};
    // Specifies whether to add sequential suffixes to **HostName** and **InstanceName**. The sequential suffixes start from **001** and cannot exceed **999**.
    // 
    // Example: **LocalHost001**, **LocalHost002**, **MyInstance001**, and **MyInstance002**.
    // 
    // Default value: **false**.
    shared_ptr<bool> uniqueSuffix_ {};
    // The custom data. The data must start with `#!`. The maximum length is 256 characters and the maximum size is 16 KB. Only custom data scripts are supported. InstanceMetaData rendering is not supported.
    // 
    // 
    // You can pass in custom data that is Base64-encoded. When you call the API to initiate a request, the custom data you specify is not encrypted. Do not pass in confidential information such as passwords and private keys in plaintext. If you need to pass in passwords or private keys, encrypt the content first and then Base64-encode it before passing it in. Decrypt the content in the same way inside the instance.
    // 
    // For more information, see [Data format](https://cloudinit.readthedocs.io/en/latest/topics/format.html).
    shared_ptr<string> userData_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
