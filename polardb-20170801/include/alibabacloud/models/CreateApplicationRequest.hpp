// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
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
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(AutoCreatePolarFs, autoCreatePolarFs_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(AutoCreatePolarFs, autoCreatePolarFs_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->endpointType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Endpoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> endpointType_ {};
    };

    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentClass, componentClass_);
        DARABONBA_PTR_TO_JSON(ComponentMaxReplica, componentMaxReplica_);
        DARABONBA_PTR_TO_JSON(ComponentReplica, componentReplica_);
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
        DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
        DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
        DARABONBA_PTR_TO_JSON(SecurityIPArrayName, securityIPArrayName_);
        DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_TO_JSON(SecurityIPType, securityIPType_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentClass, componentClass_);
        DARABONBA_PTR_FROM_JSON(ComponentMaxReplica, componentMaxReplica_);
        DARABONBA_PTR_FROM_JSON(ComponentReplica, componentReplica_);
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
        DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
        DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
        DARABONBA_PTR_FROM_JSON(SecurityIPArrayName, securityIPArrayName_);
        DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
        DARABONBA_PTR_FROM_JSON(SecurityIPType, securityIPType_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentClass_ == nullptr
        && this->componentMaxReplica_ == nullptr && this->componentReplica_ == nullptr && this->componentType_ == nullptr && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr
        && this->securityGroups_ == nullptr && this->securityIPArrayName_ == nullptr && this->securityIPList_ == nullptr && this->securityIPType_ == nullptr; };
      // componentClass Field Functions 
      bool hasComponentClass() const { return this->componentClass_ != nullptr;};
      void deleteComponentClass() { this->componentClass_ = nullptr;};
      inline string getComponentClass() const { DARABONBA_PTR_GET_DEFAULT(componentClass_, "") };
      inline Components& setComponentClass(string componentClass) { DARABONBA_PTR_SET_VALUE(componentClass_, componentClass) };


      // componentMaxReplica Field Functions 
      bool hasComponentMaxReplica() const { return this->componentMaxReplica_ != nullptr;};
      void deleteComponentMaxReplica() { this->componentMaxReplica_ = nullptr;};
      inline int64_t getComponentMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(componentMaxReplica_, 0L) };
      inline Components& setComponentMaxReplica(int64_t componentMaxReplica) { DARABONBA_PTR_SET_VALUE(componentMaxReplica_, componentMaxReplica) };


      // componentReplica Field Functions 
      bool hasComponentReplica() const { return this->componentReplica_ != nullptr;};
      void deleteComponentReplica() { this->componentReplica_ = nullptr;};
      inline int64_t getComponentReplica() const { DARABONBA_PTR_GET_DEFAULT(componentReplica_, 0L) };
      inline Components& setComponentReplica(int64_t componentReplica) { DARABONBA_PTR_SET_VALUE(componentReplica_, componentReplica) };


      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline Components& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline string getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
      inline Components& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline string getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
      inline Components& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


      // securityGroups Field Functions 
      bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
      void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
      inline string getSecurityGroups() const { DARABONBA_PTR_GET_DEFAULT(securityGroups_, "") };
      inline Components& setSecurityGroups(string securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };


      // securityIPArrayName Field Functions 
      bool hasSecurityIPArrayName() const { return this->securityIPArrayName_ != nullptr;};
      void deleteSecurityIPArrayName() { this->securityIPArrayName_ = nullptr;};
      inline string getSecurityIPArrayName() const { DARABONBA_PTR_GET_DEFAULT(securityIPArrayName_, "") };
      inline Components& setSecurityIPArrayName(string securityIPArrayName) { DARABONBA_PTR_SET_VALUE(securityIPArrayName_, securityIPArrayName) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline Components& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // securityIPType Field Functions 
      bool hasSecurityIPType() const { return this->securityIPType_ != nullptr;};
      void deleteSecurityIPType() { this->securityIPType_ = nullptr;};
      inline string getSecurityIPType() const { DARABONBA_PTR_GET_DEFAULT(securityIPType_, "") };
      inline Components& setSecurityIPType(string securityIPType) { DARABONBA_PTR_SET_VALUE(securityIPType_, securityIPType) };


    protected:
      shared_ptr<string> componentClass_ {};
      shared_ptr<int64_t> componentMaxReplica_ {};
      shared_ptr<int64_t> componentReplica_ {};
      shared_ptr<string> componentType_ {};
      shared_ptr<string> scaleMax_ {};
      shared_ptr<string> scaleMin_ {};
      shared_ptr<string> securityGroups_ {};
      shared_ptr<string> securityIPArrayName_ {};
      shared_ptr<string> securityIPList_ {};
      shared_ptr<string> securityIPType_ {};
    };

    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->architecture_ == nullptr && this->autoCreatePolarFs_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->components_ == nullptr
        && this->DBClusterId_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->endpoints_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->polarFSInstanceId_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->usedTime_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreateApplicationRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline CreateApplicationRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // autoCreatePolarFs Field Functions 
    bool hasAutoCreatePolarFs() const { return this->autoCreatePolarFs_ != nullptr;};
    void deleteAutoCreatePolarFs() { this->autoCreatePolarFs_ = nullptr;};
    inline bool getAutoCreatePolarFs() const { DARABONBA_PTR_GET_DEFAULT(autoCreatePolarFs_, false) };
    inline CreateApplicationRequest& setAutoCreatePolarFs(bool autoCreatePolarFs) { DARABONBA_PTR_SET_VALUE(autoCreatePolarFs_, autoCreatePolarFs) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateApplicationRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateApplicationRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateApplicationRequest::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateApplicationRequest::Components>) };
    inline vector<CreateApplicationRequest::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<CreateApplicationRequest::Components>) };
    inline CreateApplicationRequest& setComponents(const vector<CreateApplicationRequest::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateApplicationRequest& setComponents(vector<CreateApplicationRequest::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApplicationRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateApplicationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<CreateApplicationRequest::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<CreateApplicationRequest::Endpoints>) };
    inline vector<CreateApplicationRequest::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<CreateApplicationRequest::Endpoints>) };
    inline CreateApplicationRequest& setEndpoints(const vector<CreateApplicationRequest::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline CreateApplicationRequest& setEndpoints(vector<CreateApplicationRequest::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateApplicationRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateApplicationRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string getPolarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline CreateApplicationRequest& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateApplicationRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateApplicationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateApplicationRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateApplicationRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateApplicationRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateApplicationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationType_ {};
    // This parameter is required.
    shared_ptr<string> architecture_ {};
    shared_ptr<bool> autoCreatePolarFs_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<vector<CreateApplicationRequest::Components>> components_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<vector<CreateApplicationRequest::Endpoints>> endpoints_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> polarFSInstanceId_ {};
    shared_ptr<string> promotionCode_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> usedTime_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
