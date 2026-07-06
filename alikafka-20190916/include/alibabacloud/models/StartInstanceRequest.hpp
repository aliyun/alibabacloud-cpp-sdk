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
        && this->crossZone_ == nullptr && this->deployModule_ == nullptr && this->instanceId_ == nullptr && this->isEipInner_ == nullptr && this->isForceSelectedZones_ == nullptr
        && this->isSetUserAndPassword_ == nullptr && this->KMSKeyId_ == nullptr && this->name_ == nullptr && this->notifier_ == nullptr && this->password_ == nullptr
        && this->regionId_ == nullptr && this->securityGroup_ == nullptr && this->selectedZones_ == nullptr && this->serviceVersion_ == nullptr && this->userPhoneNum_ == nullptr
        && this->username_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline StartInstanceRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // crossZone Field Functions 
    bool hasCrossZone() const { return this->crossZone_ != nullptr;};
    void deleteCrossZone() { this->crossZone_ = nullptr;};
    inline bool getCrossZone() const { DARABONBA_PTR_GET_DEFAULT(crossZone_, false) };
    inline StartInstanceRequest& setCrossZone(bool crossZone) { DARABONBA_PTR_SET_VALUE(crossZone_, crossZone) };


    // deployModule Field Functions 
    bool hasDeployModule() const { return this->deployModule_ != nullptr;};
    void deleteDeployModule() { this->deployModule_ = nullptr;};
    inline string getDeployModule() const { DARABONBA_PTR_GET_DEFAULT(deployModule_, "") };
    inline StartInstanceRequest& setDeployModule(string deployModule) { DARABONBA_PTR_SET_VALUE(deployModule_, deployModule) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isEipInner Field Functions 
    bool hasIsEipInner() const { return this->isEipInner_ != nullptr;};
    void deleteIsEipInner() { this->isEipInner_ = nullptr;};
    inline bool getIsEipInner() const { DARABONBA_PTR_GET_DEFAULT(isEipInner_, false) };
    inline StartInstanceRequest& setIsEipInner(bool isEipInner) { DARABONBA_PTR_SET_VALUE(isEipInner_, isEipInner) };


    // isForceSelectedZones Field Functions 
    bool hasIsForceSelectedZones() const { return this->isForceSelectedZones_ != nullptr;};
    void deleteIsForceSelectedZones() { this->isForceSelectedZones_ = nullptr;};
    inline bool getIsForceSelectedZones() const { DARABONBA_PTR_GET_DEFAULT(isForceSelectedZones_, false) };
    inline StartInstanceRequest& setIsForceSelectedZones(bool isForceSelectedZones) { DARABONBA_PTR_SET_VALUE(isForceSelectedZones_, isForceSelectedZones) };


    // isSetUserAndPassword Field Functions 
    bool hasIsSetUserAndPassword() const { return this->isSetUserAndPassword_ != nullptr;};
    void deleteIsSetUserAndPassword() { this->isSetUserAndPassword_ = nullptr;};
    inline bool getIsSetUserAndPassword() const { DARABONBA_PTR_GET_DEFAULT(isSetUserAndPassword_, false) };
    inline StartInstanceRequest& setIsSetUserAndPassword(bool isSetUserAndPassword) { DARABONBA_PTR_SET_VALUE(isSetUserAndPassword_, isSetUserAndPassword) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline StartInstanceRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifier Field Functions 
    bool hasNotifier() const { return this->notifier_ != nullptr;};
    void deleteNotifier() { this->notifier_ = nullptr;};
    inline string getNotifier() const { DARABONBA_PTR_GET_DEFAULT(notifier_, "") };
    inline StartInstanceRequest& setNotifier(string notifier) { DARABONBA_PTR_SET_VALUE(notifier_, notifier) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline StartInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline StartInstanceRequest& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // selectedZones Field Functions 
    bool hasSelectedZones() const { return this->selectedZones_ != nullptr;};
    void deleteSelectedZones() { this->selectedZones_ = nullptr;};
    inline string getSelectedZones() const { DARABONBA_PTR_GET_DEFAULT(selectedZones_, "") };
    inline StartInstanceRequest& setSelectedZones(string selectedZones) { DARABONBA_PTR_SET_VALUE(selectedZones_, selectedZones) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline StartInstanceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // userPhoneNum Field Functions 
    bool hasUserPhoneNum() const { return this->userPhoneNum_ != nullptr;};
    void deleteUserPhoneNum() { this->userPhoneNum_ = nullptr;};
    inline string getUserPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(userPhoneNum_, "") };
    inline StartInstanceRequest& setUserPhoneNum(string userPhoneNum) { DARABONBA_PTR_SET_VALUE(userPhoneNum_, userPhoneNum) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline StartInstanceRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline StartInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline StartInstanceRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline StartInstanceRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline StartInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline StartInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The initial configurations of the ApsaraMQ for Kafka instance. The value must be a valid JSON string. If you do not specify this parameter, the default value is empty.
    // 
    // > - You cannot specify the Config parameter when you deploy a Confluent instance.
    // >
    // > - The enable.acl configuration is not supported for instances of versions earlier than 2.2.0. Only Professional Edition and Serverless instances support access control lists (ACLs).
    // 
    // The following parameters of **Config** are supported for reserved instances:
    // 
    // - **enable.vpc_sasl_ssl**
    // 
    // - **enable.acl**
    // 
    // - **kafka.log.retention.hours**
    // 
    // - **kafka.message.max.bytes**
    // 
    // The following parameters of **Config** are supported for Serverless instances:
    // 
    // - **enable.vpc_sasl_ssl**
    // 
    // - **enable.acl**
    // 
    // - **log.retention.hours**
    // 
    // - **offsets.retention.minutes**
    // 
    // - **message.max.bytes**
    // 
    // - **auto.create.topics.enable**
    // 
    // - **num.partitions**
    // 
    // <props="china">
    // 
    // For more information, see [UpdateInstanceConfig](https://help.aliyun.com/zh/apsaramq-for-kafka/cloud-message-queue-for-kafka/developer-reference/api-alikafka-2019-09-16-updateinstanceconfig?spm=a2c4g.11186623.0.0.3e9e2a04vLr5nF).
    // 
    // 
    // 
    // <props="intl">
    // 
    // For more information, see [UpdateInstanceConfig](https://www.alibabacloud.com/help/zh/apsaramq-for-kafka/cloud-message-queue-for-kafka/developer-reference/api-alikafka-2019-09-16-updateinstanceconfig?spm=a2c63.p38356.0.i1).
    shared_ptr<string> config_ {};
    // Specifies whether to deploy the instance across zones.
    // 
    // - true: Deploy the instance across zones.
    // 
    // - false: Do not deploy the instance across zones.
    // 
    // Default value: true.
    shared_ptr<bool> crossZone_ {};
    // The deployment mode of the instance. This parameter is required for provisioned instances. This parameter is not required for Serverless and Confluent instances. Valid values:
    // 
    // - **vpc**: VPC instance
    // 
    // - **eip**: Internet/VPC instance
    // 
    // The deployment mode of the instance must be consistent with the instance type. If the instance is a VPC instance, set this parameter to **vpc**. If the instance is an Internet/VPC instance, set this parameter to **eip**.
    shared_ptr<string> deployModule_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to enable elastic IP addresses (EIPs). Valid values:
    // 
    // - **true**: The instance is an Internet/VPC instance.
    // 
    // - **false**: The instance is a VPC instance.
    // 
    // The value of this parameter must be consistent with the instance type. For example, if the instance is a VPC instance, you must set this parameter to **false**.
    shared_ptr<bool> isEipInner_ {};
    // Specifies whether to forcibly deploy the instance in the selected zones.
    shared_ptr<bool> isForceSelectedZones_ {};
    // Specifies whether to set a new username and password. Valid values:
    // 
    // - **true**: Set a new username and password.
    // 
    // - **false**: Do not set a new username and password.
    // 
    // This parameter is supported only for Internet/VPC instances.
    shared_ptr<bool> isSetUserAndPassword_ {};
    // The ID of the key that is used for disk encryption in the same region. You can view the key ID in the [Key Management Service (KMS) console](https://kms.console.aliyun.com/?spm=a2c4g.11186623.2.5.336745b8hfiU21) or create a key. For more information, see [Manage keys](https://help.aliyun.com/document_detail/181610.html).
    // 
    // If you specify this parameter, disk encryption is enabled. You cannot disable disk encryption after it is enabled. When you call this operation, the system checks whether the AliyunServiceRoleForAlikafkaInstanceEncryption service-linked role is created. If the role is not created, the system automatically creates the role. For more information, see [Service-linked Role](https://help.aliyun.com/document_detail/190460.html).
    // 
    // > - You cannot specify the KMSKeyId parameter when you deploy a Serverless instance.
    shared_ptr<string> KMSKeyId_ {};
    // The name of the instance.
    // 
    // This parameter is not supported for Serverless and Confluent instances.
    // 
    // > If you specify this parameter, make sure that the value is unique in the same region.
    shared_ptr<string> name_ {};
    // The alert contact.
    shared_ptr<string> notifier_ {};
    // The password.
    // 
    // - For provisioned and Serverless instances, this parameter is supported only for Internet/VPC instances.
    // 
    // - This parameter is required for Confluent instances. The password must be 8 to 32 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters are !@#$%^&\\*()_+-=.
    shared_ptr<string> password_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The security group of the instance.
    // 
    // If you do not specify this parameter, ApsaraMQ for Kafka automatically configures a security group for your instance. If you want to specify this parameter, you must create a security group for the instance in advance. For more information, see [Create a security group](https://help.aliyun.com/document_detail/25468.html).
    shared_ptr<string> securityGroup_ {};
    // A two-dimensional array that consists of the candidate set of the primary zone and the candidate set of the secondary zone. The values can be custom codes (`zone{zone}`) or standard codes (`cn-RegionID-{zone}`).
    // 
    // - If you want to deploy the instance across zones (isCrossZone=true), the candidate set of the primary zone is Zone H or Zone F, and the candidate set of the secondary zone is Zone K, set this parameter to `[[\\"zoneh\\",\\"zonef\\"],[\\"zonek\\"]]`. This example uses custom codes.
    // 
    //   > If you specify multiple zones for the primary or secondary zone, the system selects one of the zones for deployment without a priority. For example, if you set the parameter to `[[\\"zoneh\\",\\"zonef\\"],[\\"zonek\\"]]`, the primary zone of the deployed instance is Zone H or Zone F, and the secondary zone is Zone K.
    // 
    // - If you do not want to deploy the instance across zones (isCrossZone=false) and want to deploy the instance in Zone K, set this parameter to `[[\\"zonek\\"],[]]`. This example uses a custom code. Note that you must still specify two arrays. The second array, which represents the candidate set of the secondary zone, can be empty [].
    // 
    // > Relationship between the SelectedZones and VSwitchIds parameters for provisioned instances
    // >
    // > - If you specify only VSwitchIds and do not specify SelectedZones, the system preferentially selects the zones that correspond to the vSwitches in VSwitchIds.
    shared_ptr<string> selectedZones_ {};
    // The version of the ApsaraMQ for Kafka instance that you want to deploy.
    // 
    // - For provisioned instances, valid values are 2.2.0 and 2.6.2.
    // 
    // - For Serverless instances, the valid value is 3.3.1.
    // 
    // - For Confluent instances, the valid value is 7.4.0.
    // 
    // Default value:
    // 
    // - Provisioned instances: 2.2.0
    // 
    // - Serverless instances: 3.3.1
    // 
    // - Confluent instances: 7.4.0
    shared_ptr<string> serviceVersion_ {};
    // The mobile phone number of the alert contact.
    shared_ptr<string> userPhoneNum_ {};
    // The username.
    // 
    // - For provisioned and Serverless instances, this parameter is supported only for Internet/VPC instances.
    // 
    // - For Confluent instances, you can set this parameter only to root or leave it empty.
    // 
    // Default value: For provisioned and Serverless instances, the default value is username. For Confluent instances, the default value is root.
    shared_ptr<string> username_ {};
    // The ID of the vSwitch to which the instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The list of vSwitch IDs. This parameter is required for provisioned and Serverless instances. This parameter is supported for Confluent instances. You must specify at least one of VSwitchIds and VSwitchId. If you specify both, VSwitchIds takes precedence.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // The ID of the VPC in which the instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the zone in which the instance is deployed.
    // 
    // - The value must be the zone ID of the vSwitch.
    // 
    // - The value can be in the zoneX or RegionId-X format. For example, you can set the value to zonea or cn-hangzhou-k.
    // 
    // > If resources in the specified zone are insufficient, the instance may be deployed in another zone.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
