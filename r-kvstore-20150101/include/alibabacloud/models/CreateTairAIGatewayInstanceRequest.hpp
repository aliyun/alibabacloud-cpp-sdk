// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAIRAIGATEWAYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETAIRAIGATEWAYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class CreateTairAIGatewayInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTairAIGatewayInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PluginParams, pluginParams_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTairAIGatewayInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PluginParams, pluginParams_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateTairAIGatewayInstanceRequest() = default ;
    CreateTairAIGatewayInstanceRequest(const CreateTairAIGatewayInstanceRequest &) = default ;
    CreateTairAIGatewayInstanceRequest(CreateTairAIGatewayInstanceRequest &&) = default ;
    CreateTairAIGatewayInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTairAIGatewayInstanceRequest() = default ;
    CreateTairAIGatewayInstanceRequest& operator=(const CreateTairAIGatewayInstanceRequest &) = default ;
    CreateTairAIGatewayInstanceRequest& operator=(CreateTairAIGatewayInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // 
      // > * **N** specifies the sequence number of the tag key. You can attach up to 20 tags to an instance. For example, Tag.1.Key specifies the key of the first tag, and Tag.2.Key specifies the key of the second tag.
      // > * If the tag key does not exist, it is automatically created.
      shared_ptr<string> key_ {};
      // The tag value.
      // > **N** specifies the sequence number of the tag value. For example, **Tag.1.Value** specifies the value of the first tag, and **Tag.2.Value** specifies the value of the second tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->autoUseCoupon_ == nullptr && this->businessInfo_ == nullptr && this->chargeType_ == nullptr
        && this->clientToken_ == nullptr && this->couponNo_ == nullptr && this->dryRun_ == nullptr && this->gatewayName_ == nullptr && this->gatewayType_ == nullptr
        && this->period_ == nullptr && this->pluginParams_ == nullptr && this->pluginType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityToken_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateTairAIGatewayInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateTairAIGatewayInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline string getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
    inline CreateTairAIGatewayInstanceRequest& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateTairAIGatewayInstanceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateTairAIGatewayInstanceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateTairAIGatewayInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTairAIGatewayInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateTairAIGatewayInstanceRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTairAIGatewayInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline CreateTairAIGatewayInstanceRequest& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateTairAIGatewayInstanceRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateTairAIGatewayInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pluginParams Field Functions 
    bool hasPluginParams() const { return this->pluginParams_ != nullptr;};
    void deletePluginParams() { this->pluginParams_ = nullptr;};
    inline string getPluginParams() const { DARABONBA_PTR_GET_DEFAULT(pluginParams_, "") };
    inline CreateTairAIGatewayInstanceRequest& setPluginParams(string pluginParams) { DARABONBA_PTR_SET_VALUE(pluginParams_, pluginParams) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreateTairAIGatewayInstanceRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTairAIGatewayInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTairAIGatewayInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateTairAIGatewayInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTairAIGatewayInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTairAIGatewayInstanceRequest::Tag>) };
    inline vector<CreateTairAIGatewayInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTairAIGatewayInstanceRequest::Tag>) };
    inline CreateTairAIGatewayInstanceRequest& setTag(const vector<CreateTairAIGatewayInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTairAIGatewayInstanceRequest& setTag(vector<CreateTairAIGatewayInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateTairAIGatewayInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateTairAIGatewayInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateTairAIGatewayInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Only pay-as-you-go is supported. Ignore this parameter. Specifies whether to enable automatic payment. The value is fixed to **true**.
    shared_ptr<bool> autoPay_ {};
    // Only pay-as-you-go is supported. Ignore this parameter. Specifies whether to enable auto-renewal. Valid values:
    // * **true**: Enable auto-renewal.
    // * **false** (default): Disable auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // Only pay-as-you-go is supported. Ignore this parameter. The auto-renewal epoch. Unit: months. Valid values: **1**, **2**, **3**, **6**, and **12**.
    // > This parameter is required when **AutoRenew** is set to **true**.
    shared_ptr<string> autoRenewPeriod_ {};
    // Only pay-as-you-go is supported. Ignore this parameter.
    // Specifies whether to use a voucher. Valid values:
    // * **true**: Use a voucher.
    // * **false** (default): Do not use a voucher.
    shared_ptr<bool> autoUseCoupon_ {};
    // The activity ID and business information.
    shared_ptr<string> businessInfo_ {};
    // The billing method. Only pay-as-you-go is supported. Valid values:
    // - **PostPaid**: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token is case-sensitive and can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The coupon code. Default value: `default`.
    shared_ptr<string> couponNo_ {};
    // Specifies whether to perform a dry run before you create the instance. Valid values:
    // * **true**: performs a dry run and does not create the instance. The system checks the request parameters, request format, service limits, and available resources. If the request fails the dry run, the corresponding error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // * **false** (default): sends a normal request and creates the instance after the request passes the check.
    shared_ptr<bool> dryRun_ {};
    // The name of the gateway.
    shared_ptr<string> gatewayName_ {};
    // The specifications of the gateway.
    shared_ptr<string> gatewayType_ {};
    // Only pay-as-you-go is supported. Ignore this parameter.
    // The renewal period. Unit: months. Valid values: **1** to **9**, **12**, **24**, and **36**.
    // > For example, if an instance expires in three months and you renew it for three months, the instance will expire in six months after the renewal.
    shared_ptr<int32_t> period_ {};
    // **[Deprecated]** This parameter is deprecated. Do not specify this parameter.
    shared_ptr<string> pluginParams_ {};
    // **[Deprecated]** This parameter is deprecated. Do not specify this parameter.
    shared_ptr<string> pluginType_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> securityToken_ {};
    // The tags of the instance.
    shared_ptr<vector<CreateTairAIGatewayInstanceRequest::Tag>> tag_ {};
    // The ID of the vSwitch in the VPC. You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html) operation to query the vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
