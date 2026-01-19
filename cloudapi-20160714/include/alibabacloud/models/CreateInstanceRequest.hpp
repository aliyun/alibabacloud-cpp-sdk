// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(InstanceCidr, instanceCidr_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserVpcId, userVpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneVSwitchSecurityGroup, zoneVSwitchSecurityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(InstanceCidr, instanceCidr_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserVpcId, userVpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneVSwitchSecurityGroup, zoneVSwitchSecurityGroup_);
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
    class ZoneVSwitchSecurityGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneVSwitchSecurityGroup& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneVSwitchSecurityGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneVSwitchSecurityGroup() = default ;
      ZoneVSwitchSecurityGroup(const ZoneVSwitchSecurityGroup &) = default ;
      ZoneVSwitchSecurityGroup(ZoneVSwitchSecurityGroup &&) = default ;
      ZoneVSwitchSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneVSwitchSecurityGroup() = default ;
      ZoneVSwitchSecurityGroup& operator=(const ZoneVSwitchSecurityGroup &) = default ;
      ZoneVSwitchSecurityGroup& operator=(ZoneVSwitchSecurityGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline ZoneVSwitchSecurityGroup& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline ZoneVSwitchSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneVSwitchSecurityGroup& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneVSwitchSecurityGroup& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The IPv4 CIDR block for the vSwitch.
      shared_ptr<string> cidrBlock_ {};
      // The ID of the security group. Services in the same security group can access each other.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->chargeType_ == nullptr && this->duration_ == nullptr && this->httpsPolicy_ == nullptr && this->instanceCidr_ == nullptr && this->instanceName_ == nullptr
        && this->instanceSpec_ == nullptr && this->instanceType_ == nullptr && this->pricingCycle_ == nullptr && this->tag_ == nullptr && this->token_ == nullptr
        && this->userVpcId_ == nullptr && this->zoneId_ == nullptr && this->zoneVSwitchSecurityGroup_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string getHttpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline CreateInstanceRequest& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // instanceCidr Field Functions 
    bool hasInstanceCidr() const { return this->instanceCidr_ != nullptr;};
    void deleteInstanceCidr() { this->instanceCidr_ = nullptr;};
    inline string getInstanceCidr() const { DARABONBA_PTR_GET_DEFAULT(instanceCidr_, "") };
    inline CreateInstanceRequest& setInstanceCidr(string instanceCidr) { DARABONBA_PTR_SET_VALUE(instanceCidr_, instanceCidr) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline CreateInstanceRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateInstanceRequest::Tag>) };
    inline vector<CreateInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateInstanceRequest::Tag>) };
    inline CreateInstanceRequest& setTag(const vector<CreateInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateInstanceRequest& setTag(vector<CreateInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateInstanceRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userVpcId Field Functions 
    bool hasUserVpcId() const { return this->userVpcId_ != nullptr;};
    void deleteUserVpcId() { this->userVpcId_ = nullptr;};
    inline string getUserVpcId() const { DARABONBA_PTR_GET_DEFAULT(userVpcId_, "") };
    inline CreateInstanceRequest& setUserVpcId(string userVpcId) { DARABONBA_PTR_SET_VALUE(userVpcId_, userVpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneVSwitchSecurityGroup Field Functions 
    bool hasZoneVSwitchSecurityGroup() const { return this->zoneVSwitchSecurityGroup_ != nullptr;};
    void deleteZoneVSwitchSecurityGroup() { this->zoneVSwitchSecurityGroup_ = nullptr;};
    inline const vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup> & getZoneVSwitchSecurityGroup() const { DARABONBA_PTR_GET_CONST(zoneVSwitchSecurityGroup_, vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup>) };
    inline vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup> getZoneVSwitchSecurityGroup() { DARABONBA_PTR_GET(zoneVSwitchSecurityGroup_, vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup>) };
    inline CreateInstanceRequest& setZoneVSwitchSecurityGroup(const vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup> & zoneVSwitchSecurityGroup) { DARABONBA_PTR_SET_VALUE(zoneVSwitchSecurityGroup_, zoneVSwitchSecurityGroup) };
    inline CreateInstanceRequest& setZoneVSwitchSecurityGroup(vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup> && zoneVSwitchSecurityGroup) { DARABONBA_PTR_SET_RVALUE(zoneVSwitchSecurityGroup_, zoneVSwitchSecurityGroup) };


  protected:
    // Whether to automatically pay when renewing. Value:
    // 
    // - True: Automatic payment. Please ensure that your account has sufficient balance.
    // - False: Console manual payment. The specific operation is to log in to the console, select Expenses in the upper right corner, enter the Expense Center, and find the target order in Order Management to make payment.
    // 
    // Default value: False.
    shared_ptr<bool> autoPay_ {};
    // The billing method of the instance. Valid values: PostPaid (pay-as-you-go) and PrePaid (subscription).
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The subscription duration of the instance.
    // 
    // *   If PricingCycle is set to **Month**, set this parameter to an integer ranges from **1** to **9**.
    // *   If PricingCycle is set to **Year**, set this parameter to an integer ranges from **1** to **3**.
    // 
    // >  This parameter is valid and required only if the ChargeType parameter is set to **PrePaid**.
    shared_ptr<int32_t> duration_ {};
    // The HTTPS policy.
    shared_ptr<string> httpsPolicy_ {};
    // The CIDR block of the VPC integration instance.
    // 
    // *   192.168.0.0/16
    // *   172.16.0.0/12
    // 
    // **
    // 
    // **Warning** The VPC integration instance is connected to the specified CIDR block. Plan your CIDR block carefully to prevent overlaps with the private IP addresses of cloud services.
    // 
    // >  This parameter is in invitational preview and not available for public use.
    shared_ptr<string> instanceCidr_ {};
    // Instance Name
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // Instance specifications
    // 
    // This parameter is required.
    shared_ptr<string> instanceSpec_ {};
    // The type of the dedicated instance. Valid values:
    // 
    // *   vpc_connect: a VPC integration instance
    // *   normal: a conventional dedicated instance
    // 
    // >  This parameter is in invitational preview and not available for public use.
    shared_ptr<string> instanceType_ {};
    // The unit of the subscription duration of the subscription instance. Valid values:
    // 
    // *   **year**
    // *   **month**
    // 
    // >  This parameter is required if the ChargeType parameter is set to Prepaid.
    shared_ptr<string> pricingCycle_ {};
    // The tags that you want to add to the instance.
    shared_ptr<vector<CreateInstanceRequest::Tag>> tag_ {};
    // Passwords are used to prevent duplicate requests from being submitted, please do not reuse them.
    // 
    // This parameter is required.
    shared_ptr<string> token_ {};
    // The ID of the user\\"s VPC to be connected by the VPC integration instance.
    // 
    // >  This parameter is in invitational preview and not available for public use.
    shared_ptr<string> userVpcId_ {};
    // The zone in which you want to create the instance. This parameter is required for a conventional dedicated instance and optional for a virtual private cloud (VPC) integration instance.
    shared_ptr<string> zoneId_ {};
    // The network information when the instance is a VPC integration instance, such as the zone, vSwitch, and security group.
    // 
    // >  This parameter is in invitational preview and not available for public use.
    shared_ptr<vector<CreateInstanceRequest::ZoneVSwitchSecurityGroup>> zoneVSwitchSecurityGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
