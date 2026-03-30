// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIDBClusterId, AIDBClusterId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(AuthProvider, authProvider_);
      DARABONBA_PTR_TO_JSON(AuthProviderConfig, authProviderConfig_);
      DARABONBA_PTR_TO_JSON(AutoAllocatePublicEip, autoAllocatePublicEip_);
      DARABONBA_PTR_TO_JSON(AutoCreatePolarFs, autoCreatePolarFs_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(Components, componentsShrink_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpointsShrink_);
      DARABONBA_PTR_TO_JSON(MemApplicationSpec, memApplicationSpecShrink_);
      DARABONBA_PTR_TO_JSON(ModelApi, modelApi_);
      DARABONBA_PTR_TO_JSON(ModelApiKey, modelApiKey_);
      DARABONBA_PTR_TO_JSON(ModelBaseUrl, modelBaseUrl_);
      DARABONBA_PTR_TO_JSON(ModelFrom, modelFrom_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetVersion, targetVersion_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIDBClusterId, AIDBClusterId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(AuthProvider, authProvider_);
      DARABONBA_PTR_FROM_JSON(AuthProviderConfig, authProviderConfig_);
      DARABONBA_PTR_FROM_JSON(AutoAllocatePublicEip, autoAllocatePublicEip_);
      DARABONBA_PTR_FROM_JSON(AutoCreatePolarFs, autoCreatePolarFs_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(Components, componentsShrink_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpointsShrink_);
      DARABONBA_PTR_FROM_JSON(MemApplicationSpec, memApplicationSpecShrink_);
      DARABONBA_PTR_FROM_JSON(ModelApi, modelApi_);
      DARABONBA_PTR_FROM_JSON(ModelApiKey, modelApiKey_);
      DARABONBA_PTR_FROM_JSON(ModelBaseUrl, modelBaseUrl_);
      DARABONBA_PTR_FROM_JSON(ModelFrom, modelFrom_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetVersion, targetVersion_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest(CreateApplicationShrinkRequest &&) = default ;
    CreateApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationShrinkRequest() = default ;
    CreateApplicationShrinkRequest& operator=(const CreateApplicationShrinkRequest &) = default ;
    CreateApplicationShrinkRequest& operator=(CreateApplicationShrinkRequest &&) = default ;
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

    virtual bool empty() const override { return this->AIDBClusterId_ == nullptr
        && this->applicationType_ == nullptr && this->architecture_ == nullptr && this->authProvider_ == nullptr && this->authProviderConfig_ == nullptr && this->autoAllocatePublicEip_ == nullptr
        && this->autoCreatePolarFs_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->componentsShrink_ == nullptr && this->DBClusterId_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->endpointsShrink_ == nullptr && this->memApplicationSpecShrink_ == nullptr && this->modelApi_ == nullptr
        && this->modelApiKey_ == nullptr && this->modelBaseUrl_ == nullptr && this->modelFrom_ == nullptr && this->modelName_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->polarFSInstanceId_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityIPArrayName_ == nullptr && this->securityIPList_ == nullptr && this->securityIPType_ == nullptr && this->tag_ == nullptr
        && this->targetVersion_ == nullptr && this->usedTime_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // AIDBClusterId Field Functions 
    bool hasAIDBClusterId() const { return this->AIDBClusterId_ != nullptr;};
    void deleteAIDBClusterId() { this->AIDBClusterId_ = nullptr;};
    inline string getAIDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(AIDBClusterId_, "") };
    inline CreateApplicationShrinkRequest& setAIDBClusterId(string AIDBClusterId) { DARABONBA_PTR_SET_VALUE(AIDBClusterId_, AIDBClusterId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreateApplicationShrinkRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline CreateApplicationShrinkRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // authProvider Field Functions 
    bool hasAuthProvider() const { return this->authProvider_ != nullptr;};
    void deleteAuthProvider() { this->authProvider_ = nullptr;};
    inline string getAuthProvider() const { DARABONBA_PTR_GET_DEFAULT(authProvider_, "") };
    inline CreateApplicationShrinkRequest& setAuthProvider(string authProvider) { DARABONBA_PTR_SET_VALUE(authProvider_, authProvider) };


    // authProviderConfig Field Functions 
    bool hasAuthProviderConfig() const { return this->authProviderConfig_ != nullptr;};
    void deleteAuthProviderConfig() { this->authProviderConfig_ = nullptr;};
    inline string getAuthProviderConfig() const { DARABONBA_PTR_GET_DEFAULT(authProviderConfig_, "") };
    inline CreateApplicationShrinkRequest& setAuthProviderConfig(string authProviderConfig) { DARABONBA_PTR_SET_VALUE(authProviderConfig_, authProviderConfig) };


    // autoAllocatePublicEip Field Functions 
    bool hasAutoAllocatePublicEip() const { return this->autoAllocatePublicEip_ != nullptr;};
    void deleteAutoAllocatePublicEip() { this->autoAllocatePublicEip_ = nullptr;};
    inline bool getAutoAllocatePublicEip() const { DARABONBA_PTR_GET_DEFAULT(autoAllocatePublicEip_, false) };
    inline CreateApplicationShrinkRequest& setAutoAllocatePublicEip(bool autoAllocatePublicEip) { DARABONBA_PTR_SET_VALUE(autoAllocatePublicEip_, autoAllocatePublicEip) };


    // autoCreatePolarFs Field Functions 
    bool hasAutoCreatePolarFs() const { return this->autoCreatePolarFs_ != nullptr;};
    void deleteAutoCreatePolarFs() { this->autoCreatePolarFs_ = nullptr;};
    inline bool getAutoCreatePolarFs() const { DARABONBA_PTR_GET_DEFAULT(autoCreatePolarFs_, false) };
    inline CreateApplicationShrinkRequest& setAutoCreatePolarFs(bool autoCreatePolarFs) { DARABONBA_PTR_SET_VALUE(autoCreatePolarFs_, autoCreatePolarFs) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateApplicationShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateApplicationShrinkRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // componentsShrink Field Functions 
    bool hasComponentsShrink() const { return this->componentsShrink_ != nullptr;};
    void deleteComponentsShrink() { this->componentsShrink_ = nullptr;};
    inline string getComponentsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentsShrink_, "") };
    inline CreateApplicationShrinkRequest& setComponentsShrink(string componentsShrink) { DARABONBA_PTR_SET_VALUE(componentsShrink_, componentsShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApplicationShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateApplicationShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointsShrink Field Functions 
    bool hasEndpointsShrink() const { return this->endpointsShrink_ != nullptr;};
    void deleteEndpointsShrink() { this->endpointsShrink_ = nullptr;};
    inline string getEndpointsShrink() const { DARABONBA_PTR_GET_DEFAULT(endpointsShrink_, "") };
    inline CreateApplicationShrinkRequest& setEndpointsShrink(string endpointsShrink) { DARABONBA_PTR_SET_VALUE(endpointsShrink_, endpointsShrink) };


    // memApplicationSpecShrink Field Functions 
    bool hasMemApplicationSpecShrink() const { return this->memApplicationSpecShrink_ != nullptr;};
    void deleteMemApplicationSpecShrink() { this->memApplicationSpecShrink_ = nullptr;};
    inline string getMemApplicationSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(memApplicationSpecShrink_, "") };
    inline CreateApplicationShrinkRequest& setMemApplicationSpecShrink(string memApplicationSpecShrink) { DARABONBA_PTR_SET_VALUE(memApplicationSpecShrink_, memApplicationSpecShrink) };


    // modelApi Field Functions 
    bool hasModelApi() const { return this->modelApi_ != nullptr;};
    void deleteModelApi() { this->modelApi_ = nullptr;};
    inline string getModelApi() const { DARABONBA_PTR_GET_DEFAULT(modelApi_, "") };
    inline CreateApplicationShrinkRequest& setModelApi(string modelApi) { DARABONBA_PTR_SET_VALUE(modelApi_, modelApi) };


    // modelApiKey Field Functions 
    bool hasModelApiKey() const { return this->modelApiKey_ != nullptr;};
    void deleteModelApiKey() { this->modelApiKey_ = nullptr;};
    inline string getModelApiKey() const { DARABONBA_PTR_GET_DEFAULT(modelApiKey_, "") };
    inline CreateApplicationShrinkRequest& setModelApiKey(string modelApiKey) { DARABONBA_PTR_SET_VALUE(modelApiKey_, modelApiKey) };


    // modelBaseUrl Field Functions 
    bool hasModelBaseUrl() const { return this->modelBaseUrl_ != nullptr;};
    void deleteModelBaseUrl() { this->modelBaseUrl_ = nullptr;};
    inline string getModelBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(modelBaseUrl_, "") };
    inline CreateApplicationShrinkRequest& setModelBaseUrl(string modelBaseUrl) { DARABONBA_PTR_SET_VALUE(modelBaseUrl_, modelBaseUrl) };


    // modelFrom Field Functions 
    bool hasModelFrom() const { return this->modelFrom_ != nullptr;};
    void deleteModelFrom() { this->modelFrom_ = nullptr;};
    inline string getModelFrom() const { DARABONBA_PTR_GET_DEFAULT(modelFrom_, "") };
    inline CreateApplicationShrinkRequest& setModelFrom(string modelFrom) { DARABONBA_PTR_SET_VALUE(modelFrom_, modelFrom) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateApplicationShrinkRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateApplicationShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateApplicationShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string getPolarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline CreateApplicationShrinkRequest& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateApplicationShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateApplicationShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityIPArrayName Field Functions 
    bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
    void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
    inline string getSecurityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
    inline CreateApplicationShrinkRequest& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateApplicationShrinkRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // securityIPType Field Functions 
    bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
    void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
    inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
    inline CreateApplicationShrinkRequest& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateApplicationShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateApplicationShrinkRequest::Tag>) };
    inline vector<CreateApplicationShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateApplicationShrinkRequest::Tag>) };
    inline CreateApplicationShrinkRequest& setTag(const vector<CreateApplicationShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateApplicationShrinkRequest& setTag(vector<CreateApplicationShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetVersion Field Functions 
    bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
    void deleteTargetVersion() { this->targetVersion_ = nullptr;};
    inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
    inline CreateApplicationShrinkRequest& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateApplicationShrinkRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateApplicationShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateApplicationShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateApplicationShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> AIDBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> applicationType_ {};
    // This parameter is required.
    shared_ptr<string> architecture_ {};
    shared_ptr<string> authProvider_ {};
    shared_ptr<string> authProviderConfig_ {};
    shared_ptr<bool> autoAllocatePublicEip_ {};
    shared_ptr<bool> autoCreatePolarFs_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> componentsShrink_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> endpointsShrink_ {};
    shared_ptr<string> memApplicationSpecShrink_ {};
    shared_ptr<string> modelApi_ {};
    shared_ptr<string> modelApiKey_ {};
    shared_ptr<string> modelBaseUrl_ {};
    shared_ptr<string> modelFrom_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> polarFSInstanceId_ {};
    shared_ptr<string> promotionCode_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> securityIPArrayName_ {};
    shared_ptr<string> securityIPList_ {};
    shared_ptr<string> securityIPType_ {};
    shared_ptr<vector<CreateApplicationShrinkRequest::Tag>> tag_ {};
    shared_ptr<string> targetVersion_ {};
    shared_ptr<string> usedTime_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
