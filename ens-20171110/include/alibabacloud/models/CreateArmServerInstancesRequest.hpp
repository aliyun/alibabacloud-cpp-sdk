// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARMSERVERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARMSERVERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateARMServerInstancesRequestTag.hpp>
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
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->autoRenew_ == nullptr && return this->autoUseCoupon_ == nullptr && return this->cidr_ == nullptr && return this->ensRegionId_ == nullptr && return this->environmentVar_ == nullptr
        && return this->frequency_ == nullptr && return this->imageId_ == nullptr && return this->instanceBillingCycle_ == nullptr && return this->instanceType_ == nullptr && return this->keyPairName_ == nullptr
        && return this->nameSpace_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->resolution_ == nullptr
        && return this->serverName_ == nullptr && return this->serverType_ == nullptr && return this->tag_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateARMServerInstancesRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateARMServerInstancesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateARMServerInstancesRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateARMServerInstancesRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateARMServerInstancesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // environmentVar Field Functions 
    bool hasEnvironmentVar() const { return this->environmentVar_ != nullptr;};
    void deleteEnvironmentVar() { this->environmentVar_ = nullptr;};
    inline string environmentVar() const { DARABONBA_PTR_GET_DEFAULT(environmentVar_, "") };
    inline CreateARMServerInstancesRequest& setEnvironmentVar(string environmentVar) { DARABONBA_PTR_SET_VALUE(environmentVar_, environmentVar) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int32_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
    inline CreateARMServerInstancesRequest& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateARMServerInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string instanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateARMServerInstancesRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateARMServerInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateARMServerInstancesRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string nameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline CreateARMServerInstancesRequest& setNameSpace(string nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, nameSpace) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateARMServerInstancesRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateARMServerInstancesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateARMServerInstancesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline CreateARMServerInstancesRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline CreateARMServerInstancesRequest& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline CreateARMServerInstancesRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateARMServerInstancesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateARMServerInstancesRequestTag>) };
    inline vector<CreateARMServerInstancesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateARMServerInstancesRequestTag>) };
    inline CreateARMServerInstancesRequest& setTag(const vector<CreateARMServerInstancesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateARMServerInstancesRequest& setTag(vector<CreateARMServerInstancesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The number of instances to create. Valid values: **1** to **100**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable auto-renewal for the subscription. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // Specifies whether to use coupons. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    std::shared_ptr<string> cidr_ = nullptr;
    // The ID of the Edge Node Service (ENS) node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // Set one or more environment variables during EAIS instance initialization.
    std::shared_ptr<string> environmentVar_ = nullptr;
    // The refresh rate. Unit: Hz. Valid values: 30 and 60.
    std::shared_ptr<int32_t> frequency_ = nullptr;
    // The ID of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> instanceBillingCycle_ = nullptr;
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
    std::shared_ptr<string> instanceType_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The namespace.
    std::shared_ptr<string> nameSpace_ = nullptr;
    // The billing method. Set the value to **PrePaid**. PrePaid specifies the subscription billing method.
    // 
    // >  Only PrePaid is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The subscription duration of the instance.
    // 
    // *   If you leave PeriodUnit empty, the instance is purchased on a monthly basis. Valid values: Day and Month.
    // *   If you set PeriodUnit to Day, you can set Period only to 3.
    // *   If you set PeriodUnit to Month, you can set Period to a value within the range of [1,9], or set the value to 12.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    // 
    // *   If you leave PeriodUnit empty, the instance is purchased on a monthly basis. Valid values: Day and Month.
    // *   If you set PeriodUnit to Day, you can set Period only to 3.
    // *   If you set PeriodUnit to Month, you can set Period to a value within the range of [1,9], or set the value to 12.
    std::shared_ptr<string> periodUnit_ = nullptr;
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
    std::shared_ptr<string> resolution_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serverName_ = nullptr;
    // The specification of the ARM server. Examples:
    // 
    // *   cas.cf53r
    // *   cas.cf52r
    // *   cas.cf52m1r
    // *   cas.tg52g2
    // *   ens.afq-c2m3i.medium
    // 
    // This parameter is required.
    std::shared_ptr<string> serverType_ = nullptr;
    std::shared_ptr<vector<CreateARMServerInstancesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
