// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERREQUEST_HPP_
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
  class CreateAIDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AckAdmin, ackAdmin_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_TO_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_TO_JSON(KubeConfig, kubeConfig_);
      DARABONBA_PTR_TO_JSON(KubeManagement, kubeManagement_);
      DARABONBA_PTR_TO_JSON(KubeType, kubeType_);
      DARABONBA_PTR_TO_JSON(KubernetesConfig, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(ManagementMode, managementMode_);
      DARABONBA_PTR_TO_JSON(ModeName, modeName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TimeSlices, timeSlices_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AckAdmin, ackAdmin_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_FROM_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_FROM_JSON(KubeConfig, kubeConfig_);
      DARABONBA_PTR_FROM_JSON(KubeManagement, kubeManagement_);
      DARABONBA_PTR_FROM_JSON(KubeType, kubeType_);
      DARABONBA_PTR_FROM_JSON(KubernetesConfig, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(ManagementMode, managementMode_);
      DARABONBA_PTR_FROM_JSON(ModeName, modeName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TimeSlices, timeSlices_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateAIDBClusterRequest() = default ;
    CreateAIDBClusterRequest(const CreateAIDBClusterRequest &) = default ;
    CreateAIDBClusterRequest(CreateAIDBClusterRequest &&) = default ;
    CreateAIDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIDBClusterRequest() = default ;
    CreateAIDBClusterRequest& operator=(const CreateAIDBClusterRequest &) = default ;
    CreateAIDBClusterRequest& operator=(CreateAIDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeSlices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSlices& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSlices& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      };
      TimeSlices() = default ;
      TimeSlices(const TimeSlices &) = default ;
      TimeSlices(TimeSlices &&) = default ;
      TimeSlices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSlices() = default ;
      TimeSlices& operator=(const TimeSlices &) = default ;
      TimeSlices& operator=(TimeSlices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline TimeSlices& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline TimeSlices& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    protected:
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<int64_t> endTime_ {};
    };

    virtual bool empty() const override { return this->ackAdmin_ == nullptr
        && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBNodeClass_ == nullptr
        && this->extension_ == nullptr && this->inferenceEngine_ == nullptr && this->kubeClusterId_ == nullptr && this->kubeConfig_ == nullptr && this->kubeManagement_ == nullptr
        && this->kubeType_ == nullptr && this->kubernetesConfig_ == nullptr && this->managementMode_ == nullptr && this->modeName_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->promotionCode_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityGroupId_ == nullptr && this->storageSpace_ == nullptr
        && this->storageType_ == nullptr && this->timeSlices_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
    // ackAdmin Field Functions 
    bool hasAckAdmin() const { return this->ackAdmin_ != nullptr;};
    void deleteAckAdmin() { this->ackAdmin_ = nullptr;};
    inline string getAckAdmin() const { DARABONBA_PTR_GET_DEFAULT(ackAdmin_, "") };
    inline CreateAIDBClusterRequest& setAckAdmin(string ackAdmin) { DARABONBA_PTR_SET_VALUE(ackAdmin_, ackAdmin) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateAIDBClusterRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateAIDBClusterRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateAIDBClusterRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAIDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateAIDBClusterRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline CreateAIDBClusterRequest& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // inferenceEngine Field Functions 
    bool hasInferenceEngine() const { return this->inferenceEngine_ != nullptr;};
    void deleteInferenceEngine() { this->inferenceEngine_ = nullptr;};
    inline string getInferenceEngine() const { DARABONBA_PTR_GET_DEFAULT(inferenceEngine_, "") };
    inline CreateAIDBClusterRequest& setInferenceEngine(string inferenceEngine) { DARABONBA_PTR_SET_VALUE(inferenceEngine_, inferenceEngine) };


    // kubeClusterId Field Functions 
    bool hasKubeClusterId() const { return this->kubeClusterId_ != nullptr;};
    void deleteKubeClusterId() { this->kubeClusterId_ = nullptr;};
    inline string getKubeClusterId() const { DARABONBA_PTR_GET_DEFAULT(kubeClusterId_, "") };
    inline CreateAIDBClusterRequest& setKubeClusterId(string kubeClusterId) { DARABONBA_PTR_SET_VALUE(kubeClusterId_, kubeClusterId) };


    // kubeConfig Field Functions 
    bool hasKubeConfig() const { return this->kubeConfig_ != nullptr;};
    void deleteKubeConfig() { this->kubeConfig_ = nullptr;};
    inline string getKubeConfig() const { DARABONBA_PTR_GET_DEFAULT(kubeConfig_, "") };
    inline CreateAIDBClusterRequest& setKubeConfig(string kubeConfig) { DARABONBA_PTR_SET_VALUE(kubeConfig_, kubeConfig) };


    // kubeManagement Field Functions 
    bool hasKubeManagement() const { return this->kubeManagement_ != nullptr;};
    void deleteKubeManagement() { this->kubeManagement_ = nullptr;};
    inline string getKubeManagement() const { DARABONBA_PTR_GET_DEFAULT(kubeManagement_, "") };
    inline CreateAIDBClusterRequest& setKubeManagement(string kubeManagement) { DARABONBA_PTR_SET_VALUE(kubeManagement_, kubeManagement) };


    // kubeType Field Functions 
    bool hasKubeType() const { return this->kubeType_ != nullptr;};
    void deleteKubeType() { this->kubeType_ = nullptr;};
    inline string getKubeType() const { DARABONBA_PTR_GET_DEFAULT(kubeType_, "") };
    inline CreateAIDBClusterRequest& setKubeType(string kubeType) { DARABONBA_PTR_SET_VALUE(kubeType_, kubeType) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline string getKubernetesConfig() const { DARABONBA_PTR_GET_DEFAULT(kubernetesConfig_, "") };
    inline CreateAIDBClusterRequest& setKubernetesConfig(string kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };


    // managementMode Field Functions 
    bool hasManagementMode() const { return this->managementMode_ != nullptr;};
    void deleteManagementMode() { this->managementMode_ = nullptr;};
    inline string getManagementMode() const { DARABONBA_PTR_GET_DEFAULT(managementMode_, "") };
    inline CreateAIDBClusterRequest& setManagementMode(string managementMode) { DARABONBA_PTR_SET_VALUE(managementMode_, managementMode) };


    // modeName Field Functions 
    bool hasModeName() const { return this->modeName_ != nullptr;};
    void deleteModeName() { this->modeName_ = nullptr;};
    inline string getModeName() const { DARABONBA_PTR_GET_DEFAULT(modeName_, "") };
    inline CreateAIDBClusterRequest& setModeName(string modeName) { DARABONBA_PTR_SET_VALUE(modeName_, modeName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAIDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAIDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateAIDBClusterRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateAIDBClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateAIDBClusterRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateAIDBClusterRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAIDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAIDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAIDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateAIDBClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int32_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0) };
    inline CreateAIDBClusterRequest& setStorageSpace(int32_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateAIDBClusterRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // timeSlices Field Functions 
    bool hasTimeSlices() const { return this->timeSlices_ != nullptr;};
    void deleteTimeSlices() { this->timeSlices_ = nullptr;};
    inline const vector<CreateAIDBClusterRequest::TimeSlices> & getTimeSlices() const { DARABONBA_PTR_GET_CONST(timeSlices_, vector<CreateAIDBClusterRequest::TimeSlices>) };
    inline vector<CreateAIDBClusterRequest::TimeSlices> getTimeSlices() { DARABONBA_PTR_GET(timeSlices_, vector<CreateAIDBClusterRequest::TimeSlices>) };
    inline CreateAIDBClusterRequest& setTimeSlices(const vector<CreateAIDBClusterRequest::TimeSlices> & timeSlices) { DARABONBA_PTR_SET_VALUE(timeSlices_, timeSlices) };
    inline CreateAIDBClusterRequest& setTimeSlices(vector<CreateAIDBClusterRequest::TimeSlices> && timeSlices) { DARABONBA_PTR_SET_RVALUE(timeSlices_, timeSlices) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateAIDBClusterRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateAIDBClusterRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAIDBClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateAIDBClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> ackAdmin_ {};
    shared_ptr<string> autoRenew_ {};
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> DBClusterDescription_ {};
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> DBNodeClass_ {};
    shared_ptr<string> extension_ {};
    shared_ptr<string> inferenceEngine_ {};
    shared_ptr<string> kubeClusterId_ {};
    shared_ptr<string> kubeConfig_ {};
    shared_ptr<string> kubeManagement_ {};
    // aideploy
    shared_ptr<string> kubeType_ {};
    shared_ptr<string> kubernetesConfig_ {};
    shared_ptr<string> managementMode_ {};
    shared_ptr<string> modeName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> payType_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> promotionCode_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<int32_t> storageSpace_ {};
    // This parameter is required.
    shared_ptr<string> storageType_ {};
    shared_ptr<vector<CreateAIDBClusterRequest::TimeSlices>> timeSlices_ {};
    shared_ptr<string> usedTime_ {};
    // This parameter is required.
    shared_ptr<string> VPCId_ {};
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
