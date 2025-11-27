// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class StartInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CrossZone, crossZone_);
      DARABONBA_PTR_TO_JSON(DeployModule, deployModule_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsEipInner, isEipInner_);
      DARABONBA_PTR_TO_JSON(IsForceSelectedZones, isForceSelectedZones_);
      DARABONBA_PTR_TO_JSON(IsSetUserAndPassword, isSetUserAndPassword_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notifier, notifier_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(SelectedZones, selectedZones_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(UserPhoneNum, userPhoneNum_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CrossZone, crossZone_);
      DARABONBA_PTR_FROM_JSON(DeployModule, deployModule_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsEipInner, isEipInner_);
      DARABONBA_PTR_FROM_JSON(IsForceSelectedZones, isForceSelectedZones_);
      DARABONBA_PTR_FROM_JSON(IsSetUserAndPassword, isSetUserAndPassword_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notifier, notifier_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(SelectedZones, selectedZones_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(UserPhoneNum, userPhoneNum_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    StartInstanceRequest() = default ;
    StartInstanceRequest(const StartInstanceRequest &) = default ;
    StartInstanceRequest(StartInstanceRequest &&) = default ;
    StartInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRequest() = default ;
    StartInstanceRequest& operator=(const StartInstanceRequest &) = default ;
    StartInstanceRequest& operator=(StartInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->crossZone_ == nullptr && return this->deployModule_ == nullptr && return this->instanceId_ == nullptr && return this->isEipInner_ == nullptr && return this->isForceSelectedZones_ == nullptr
        && return this->isSetUserAndPassword_ == nullptr && return this->KMSKeyId_ == nullptr && return this->name_ == nullptr && return this->notifier_ == nullptr && return this->password_ == nullptr
        && return this->regionId_ == nullptr && return this->securityGroup_ == nullptr && return this->selectedZones_ == nullptr && return this->serviceVersion_ == nullptr && return this->userPhoneNum_ == nullptr
        && return this->username_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline StartInstanceRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // crossZone Field Functions 
    bool hasCrossZone() const { return this->crossZone_ != nullptr;};
    void deleteCrossZone() { this->crossZone_ = nullptr;};
    inline bool crossZone() const { DARABONBA_PTR_GET_DEFAULT(crossZone_, false) };
    inline StartInstanceRequest& setCrossZone(bool crossZone) { DARABONBA_PTR_SET_VALUE(crossZone_, crossZone) };


    // deployModule Field Functions 
    bool hasDeployModule() const { return this->deployModule_ != nullptr;};
    void deleteDeployModule() { this->deployModule_ = nullptr;};
    inline string deployModule() const { DARABONBA_PTR_GET_DEFAULT(deployModule_, "") };
    inline StartInstanceRequest& setDeployModule(string deployModule) { DARABONBA_PTR_SET_VALUE(deployModule_, deployModule) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isEipInner Field Functions 
    bool hasIsEipInner() const { return this->isEipInner_ != nullptr;};
    void deleteIsEipInner() { this->isEipInner_ = nullptr;};
    inline bool isEipInner() const { DARABONBA_PTR_GET_DEFAULT(isEipInner_, false) };
    inline StartInstanceRequest& setIsEipInner(bool isEipInner) { DARABONBA_PTR_SET_VALUE(isEipInner_, isEipInner) };


    // isForceSelectedZones Field Functions 
    bool hasIsForceSelectedZones() const { return this->isForceSelectedZones_ != nullptr;};
    void deleteIsForceSelectedZones() { this->isForceSelectedZones_ = nullptr;};
    inline bool isForceSelectedZones() const { DARABONBA_PTR_GET_DEFAULT(isForceSelectedZones_, false) };
    inline StartInstanceRequest& setIsForceSelectedZones(bool isForceSelectedZones) { DARABONBA_PTR_SET_VALUE(isForceSelectedZones_, isForceSelectedZones) };


    // isSetUserAndPassword Field Functions 
    bool hasIsSetUserAndPassword() const { return this->isSetUserAndPassword_ != nullptr;};
    void deleteIsSetUserAndPassword() { this->isSetUserAndPassword_ = nullptr;};
    inline bool isSetUserAndPassword() const { DARABONBA_PTR_GET_DEFAULT(isSetUserAndPassword_, false) };
    inline StartInstanceRequest& setIsSetUserAndPassword(bool isSetUserAndPassword) { DARABONBA_PTR_SET_VALUE(isSetUserAndPassword_, isSetUserAndPassword) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline StartInstanceRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifier Field Functions 
    bool hasNotifier() const { return this->notifier_ != nullptr;};
    void deleteNotifier() { this->notifier_ = nullptr;};
    inline string notifier() const { DARABONBA_PTR_GET_DEFAULT(notifier_, "") };
    inline StartInstanceRequest& setNotifier(string notifier) { DARABONBA_PTR_SET_VALUE(notifier_, notifier) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline StartInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline StartInstanceRequest& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // selectedZones Field Functions 
    bool hasSelectedZones() const { return this->selectedZones_ != nullptr;};
    void deleteSelectedZones() { this->selectedZones_ = nullptr;};
    inline string selectedZones() const { DARABONBA_PTR_GET_DEFAULT(selectedZones_, "") };
    inline StartInstanceRequest& setSelectedZones(string selectedZones) { DARABONBA_PTR_SET_VALUE(selectedZones_, selectedZones) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline StartInstanceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // userPhoneNum Field Functions 
    bool hasUserPhoneNum() const { return this->userPhoneNum_ != nullptr;};
    void deleteUserPhoneNum() { this->userPhoneNum_ = nullptr;};
    inline string userPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(userPhoneNum_, "") };
    inline StartInstanceRequest& setUserPhoneNum(string userPhoneNum) { DARABONBA_PTR_SET_VALUE(userPhoneNum_, userPhoneNum) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline StartInstanceRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline StartInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline StartInstanceRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline StartInstanceRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline StartInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline StartInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The initial configurations of the ApsaraMQ for Kafka instance. The values must be valid JSON strings. If you do not specify this parameter, it is left empty.
    // 
    // > - You cannot configure this parameter when you deploy an ApsaraMQ for Confluent instance.
    // > - You cannot configure enable.acl for instances whose versions are earlier than 2.2.0.
    // 
    // The **Config** parameter supports the following parameters:
    // 
    // *   **enable.vpc_sasl_ssl**: specifies whether to enable VPC transmission encryption. Valid values:
    // 
    //     *   **true**: enables VPC transmission encryption. If you enable VPC transmission encryption, you must also enable access control list (ACL).
    //     *   **false**: disables VPC transmission encryption. This is the default value.
    // 
    // *   **enable.acl**: specifies whether to enable ACL. Valid values:
    // 
    //     *   **true**: enables ACL.
    //     *   **false**: disables the ACL feature. This is the default value.
    // 
    // *   **kafka.log.retention.hours**: the maximum message retention period when the disk capacity is sufficient. Unit: hours. Valid values: 24 to 480. Default value: **72**. When the disk usage reaches 85%, the disk capacity is insufficient. In this case, the system deletes the earliest stored messages to ensure service availability.
    // 
    // *   **kafka.message.max.bytes**: the maximum size of a message that can be sent and received by ApsaraMQ for Kafka. Unit: bytes. Valid values: 1048576 to 10485760. Default value: **1048576**. Before you change the maximum message size to a new value, make sure that the new value matches the configurations of the producers and consumers.
    std::shared_ptr<string> config_ = nullptr;
    // Specifies whether cross-zone deployment is required. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    std::shared_ptr<bool> crossZone_ = nullptr;
    // The deployment mode. If the instance is an ApsaraMQ for Kafka V2 instance, this parameter is required. If the instance is an ApsaraMQ for Kafka V3 instance or an ApsaraMQ for Confluent instance, this parameter is optional. Valid values:
    // 
    // *   **vpc**: deploys the instance in a virtual private cloud (VPC).
    // *   **eip**: deploys the instance over the Internet and in the VPC.
    // 
    // The deployment mode of the ApsaraMQ for Kafka instance must be consistent with the instance type. If the instance is a VPC-connected instance, set this parameter to **vpc**. If the instance is an Internet- and VPC-connected instance, set this parameter to **eip**.
    std::shared_ptr<string> deployModule_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether the instance supports elastic IP addresses (EIPs). Valid values:
    // 
    // *   **true**: supports EIPs and allows access from the Internet and a VPC.
    // *   **false**: does not support EIPs and allows access only from a VPC.
    // 
    // The value of this parameter must match the type of the instance. For example, if the instance allows access only from a VPC, set this parameter to **false**.
    std::shared_ptr<bool> isEipInner_ = nullptr;
    // Specifies whether to forcibly deploy the instance in the selected zones.
    std::shared_ptr<bool> isForceSelectedZones_ = nullptr;
    // Specifies whether to set a new username and password. Valid values:
    // 
    // *   **true**: sets a new username and password.
    // *   **false**: does not set a new username or password.
    // 
    // This parameter is available only if you deploy an instance that allows access from the Internet and a VPC.
    std::shared_ptr<bool> isSetUserAndPassword_ = nullptr;
    // The ID of the key that is used for disk encryption in the region where the instance is deployed. You can obtain the ID of the key in the [Key Management Service (KMS) console](https://kms.console.aliyun.com/?spm=a2c4g.11186623.2.5.336745b8hfiU21) or create a key. For more information, see [Manage CMKs](https://help.aliyun.com/document_detail/181610.html).
    // 
    // If this parameter is configured, disk encryption is enabled for the instance. You cannot disable disk encryption after disk encryption is enabled. When you call this operation, the system checks whether the AliyunServiceRoleForAlikafkaInstanceEncryption service-linked role is created. If the role is not created, the system automatically creates the role. For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/190460.html).
    // 
    // > When you deploy a serverless ApsaraMQ for Kafka V3 instance, you cannot configure this parameter.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The name of the instance.
    // 
    // >  If you specify a value for this parameter, make sure that the specified value is unique in the region of the instance.
    std::shared_ptr<string> name_ = nullptr;
    // The alert contact.
    std::shared_ptr<string> notifier_ = nullptr;
    // The instance password.
    // 
    // *   This parameter is available only for Internet- and VPC- connected ApsaraMQ for Kafka V2 and V3 instances.
    // *   If the instance is an ApsaraMQ for Confluent instance, this parameter is required. The value of this parameter must be 8 to 32 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported: ! @ # $ % ^ & \\* () _ + - =
    std::shared_ptr<string> password_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The security group of the instance.
    // 
    // If you do not specify this parameter, ApsaraMQ for Kafka automatically configures a security group for your instance. If you specify this parameter, you must create a security group in advance. For more information, see [Create a security group](https://help.aliyun.com/document_detail/25468.html).
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The two-dimensional arrays that consist of the candidate set for primary zones and the candidate set for secondary zones. Custom code in the `zone {zone}` format and standard code in the `cn-RegionID-{zone}` format are supported.
    // 
    // *   If you set CrossZone to true and specify Zone H and Zone F as the candidate set for primary zones and Zone K as the candidate set for secondary zones, set this parameter to `[["zoneh","zonef"],["zonek"]]`.
    // 
    // > If you specify multiple zones as the primary or secondary zones, the system deploys the instance in one of the zones without prioritizing them. For example, if you set this parameter to `[["zoneh","zonef"],["zonek"]]`, the primary zone in which the instance is deployed can be Zone H or Zone F, and the secondary zone is Zone K.
    // 
    // *   If you set CrossZone to false and want to deploy the instance in Zone K, set this parameter to `[["zonek"],[]]`. In this case, the value of this parameter must still be two-dimensional arrays, but the array that specifies the candidate for secondary zones is left empty.
    std::shared_ptr<string> selectedZones_ = nullptr;
    // The version of the ApsaraMQ for Kafka instance. Valid values:
    // 
    // *   ApsaraMQ for Kafka V2 instances: 2.2.0 and 2.6.2.
    // *   ApsaraMQ for Kafka V3 instances: 3.3.1.
    // *   ApsaraMQ for Confluent instances: 7.4.0.
    // 
    // Default value:
    // 
    // *   ApsaraMQ for Kafka V2 instances: 2.2.0.
    // *   ApsaraMQ for Kafka V3 instances: 3.3.1.
    // *   ApsaraMQ for Confluent instances: 7.4.0.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The mobile phone number of the alert contact.
    std::shared_ptr<string> userPhoneNum_ = nullptr;
    // The instance username.
    // 
    // *   This parameter is available only for Internet- and VPC- connected ApsaraMQ for Kafka V2 and V3 instances.
    // *   If the instance is an ApsaraMQ for Confluent instance, set this parameter to root or leave this parameter empty.
    // 
    // Default value for ApsaraMQ for Kafka V2 and V3 instances: username. Default value for ApsaraMQ for Confluent instances: root.
    std::shared_ptr<string> username_ = nullptr;
    // The ID of the vSwitch to which you want to connect the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The IDs of the vSwitches with which the instance is associated. If the instance is an ApsaraMQ for Kafka V2 or V3 instance, this parameter is required. If the instance is an ApsaraMQ for Confluent instance, you must configure one of VSwitchIds and VSwitchId. If you configure both of the parameters, the value of VSwitchIds takes effect.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which you want to deploy the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone where you want to deploy the ApsaraMQ for Kafka instance.
    // 
    // *   The zone ID of the ApsaraMQ for Kafka instance must be the same as that of the vSwitch.
    // *   The value must be in the zoneX or Region ID-X format. Examples: zonea and cn-hangzhou-k.
    // 
    // >  If resources in the specified zone is insufficient, the instance may be deployed in another zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
