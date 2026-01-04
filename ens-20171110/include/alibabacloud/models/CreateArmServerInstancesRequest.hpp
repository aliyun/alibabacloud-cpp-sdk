// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARMSERVERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARMSERVERINSTANCESREQUEST_HPP_
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
  class CreateARMServerInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateARMServerInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnvironmentVar, environmentVar_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateARMServerInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVar, environmentVar_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateARMServerInstancesRequest() = default ;
    CreateARMServerInstancesRequest(const CreateARMServerInstancesRequest &) = default ;
    CreateARMServerInstancesRequest(CreateARMServerInstancesRequest &&) = default ;
    CreateARMServerInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateARMServerInstancesRequest() = default ;
    CreateARMServerInstancesRequest& operator=(const CreateARMServerInstancesRequest &) = default ;
    CreateARMServerInstancesRequest& operator=(CreateARMServerInstancesRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->cidr_ == nullptr && this->ensRegionId_ == nullptr && this->environmentVar_ == nullptr
        && this->frequency_ == nullptr && this->imageId_ == nullptr && this->instanceBillingCycle_ == nullptr && this->instanceType_ == nullptr && this->keyPairName_ == nullptr
        && this->nameSpace_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->resolution_ == nullptr
        && this->serverName_ == nullptr && this->serverType_ == nullptr && this->tag_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateARMServerInstancesRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateARMServerInstancesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateARMServerInstancesRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateARMServerInstancesRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateARMServerInstancesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // environmentVar Field Functions 
    bool hasEnvironmentVar() const { return this->environmentVar_ != nullptr;};
    void deleteEnvironmentVar() { this->environmentVar_ = nullptr;};
    inline string getEnvironmentVar() const { DARABONBA_PTR_GET_DEFAULT(environmentVar_, "") };
    inline CreateARMServerInstancesRequest& setEnvironmentVar(string environmentVar) { DARABONBA_PTR_SET_VALUE(environmentVar_, environmentVar) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int32_t getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
    inline CreateARMServerInstancesRequest& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateARMServerInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string getInstanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateARMServerInstancesRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateARMServerInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateARMServerInstancesRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string getNameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline CreateARMServerInstancesRequest& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateARMServerInstancesRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateARMServerInstancesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateARMServerInstancesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline CreateARMServerInstancesRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline CreateARMServerInstancesRequest& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline CreateARMServerInstancesRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateARMServerInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateARMServerInstancesRequest::Tag>) };
    inline vector<CreateARMServerInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateARMServerInstancesRequest::Tag>) };
    inline CreateARMServerInstancesRequest& setTag(const vector<CreateARMServerInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateARMServerInstancesRequest& setTag(vector<CreateARMServerInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The number of instances to create. Valid values: **1** to **100**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> amount_ {};
    // Specifies whether to enable auto-renewal for the subscription. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> autoRenew_ {};
    // Specifies whether to use coupons. Valid values:
    // 
    // *   true
    // *   false (default)
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> cidr_ {};
    // The ID of the Edge Node Service (ENS) node.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // Set one or more environment variables during EAIS instance initialization.
    shared_ptr<string> environmentVar_ {};
    // The refresh rate. Unit: Hz. Valid values: 30 and 60.
    shared_ptr<int32_t> frequency_ {};
    // The ID of the image.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    shared_ptr<string> instanceBillingCycle_ {};
    // The specification of the Android in Container (AIC) instance. Examples:
    // 
    // *   aic.cf52r.c1.np
    // *   aic.cf52r.c2.np
    // *   aic.cf53r.c2.np
    // *   aic.cf52r.c4.np
    // *   aic.cf53r.c3.np
    // *   aic.cf52r.c3.np
    // *   aic.cf53r.c1.np
    // *   aic.cf53r.c5.np
    // *   aic.cf53r.c6
    // *   aic.cf53r.c4.np
    // *   aic.cf53r.c6.np
    // *   aic.cf53r.c7.np
    // *   aic.cf52m1r.c5.np
    // *   aic.cf53r.c8.np
    // *   aic.cf53r.c7
    // *   aic.cf52m1r.c2.np
    // *   aic.cf52m1r.c1.np
    // *   aic.cf52m1r.c3.np
    // *   aic.cf52m1r.c4.np
    // *   aic.cf52m1r.c6
    // *   ens.a6c2
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // The namespace.
    shared_ptr<string> nameSpace_ {};
    // The billing method. Set the value to **PrePaid**. PrePaid specifies the subscription billing method.
    // 
    // >  Only PrePaid is supported.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription duration of the instance.
    // 
    // *   If you leave PeriodUnit empty, the instance is purchased on a monthly basis. Valid values: Day and Month.
    // *   If you set PeriodUnit to Day, you can set Period only to 3.
    // *   If you set PeriodUnit to Month, you can set Period to a value within the range of [1,9], or set the value to 12.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    // 
    // *   If you leave PeriodUnit empty, the instance is purchased on a monthly basis. Valid values: Day and Month.
    // *   If you set PeriodUnit to Day, you can set Period only to 3.
    // *   If you set PeriodUnit to Month, you can set Period to a value within the range of [1,9], or set the value to 12.
    shared_ptr<string> periodUnit_ {};
    // The resolution. Examples:
    // 
    // *   1920\\*864
    // *   1080\\*1920
    // *   1920\\*1080
    // *   720\\*1280
    // *   2400\\*1080
    // *   1080\\*2400
    // *   1280\\*720
    // *   864\\*1920
    // 
    // This parameter is required.
    shared_ptr<string> resolution_ {};
    // The name of the service.
    shared_ptr<string> serverName_ {};
    // The specification of the ARM server. Examples:
    // 
    // *   cas.cf53r
    // *   cas.cf52r
    // *   cas.cf52m1r
    // *   cas.tg52g2
    // *   ens.afq-c2m3i.medium
    // 
    // This parameter is required.
    shared_ptr<string> serverType_ {};
    shared_ptr<vector<CreateARMServerInstancesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
