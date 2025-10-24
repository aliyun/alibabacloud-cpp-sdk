// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateResourceRequestSelfManagedResourceOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EcsInstanceCount, ecsInstanceCount_);
      DARABONBA_PTR_TO_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceCount, ecsInstanceCount_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceType, ecsInstanceType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    CreateResourceRequest() = default ;
    CreateResourceRequest(const CreateResourceRequest &) = default ;
    CreateResourceRequest(CreateResourceRequest &&) = default ;
    CreateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequest() = default ;
    CreateResourceRequest& operator=(const CreateResourceRequest &) = default ;
    CreateResourceRequest& operator=(CreateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && return this->chargeType_ == nullptr && return this->ecsInstanceCount_ == nullptr && return this->ecsInstanceType_ == nullptr && return this->labels_ == nullptr && return this->resourceName_ == nullptr
        && return this->resourceType_ == nullptr && return this->selfManagedResourceOptions_ == nullptr && return this->systemDiskSize_ == nullptr && return this->zone_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateResourceRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateResourceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // ecsInstanceCount Field Functions 
    bool hasEcsInstanceCount() const { return this->ecsInstanceCount_ != nullptr;};
    void deleteEcsInstanceCount() { this->ecsInstanceCount_ = nullptr;};
    inline int32_t ecsInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceCount_, 0) };
    inline CreateResourceRequest& setEcsInstanceCount(int32_t ecsInstanceCount) { DARABONBA_PTR_SET_VALUE(ecsInstanceCount_, ecsInstanceCount) };


    // ecsInstanceType Field Functions 
    bool hasEcsInstanceType() const { return this->ecsInstanceType_ != nullptr;};
    void deleteEcsInstanceType() { this->ecsInstanceType_ = nullptr;};
    inline string ecsInstanceType() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceType_, "") };
    inline CreateResourceRequest& setEcsInstanceType(string ecsInstanceType) { DARABONBA_PTR_SET_VALUE(ecsInstanceType_, ecsInstanceType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline CreateResourceRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateResourceRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // selfManagedResourceOptions Field Functions 
    bool hasSelfManagedResourceOptions() const { return this->selfManagedResourceOptions_ != nullptr;};
    void deleteSelfManagedResourceOptions() { this->selfManagedResourceOptions_ = nullptr;};
    inline const CreateResourceRequestSelfManagedResourceOptions & selfManagedResourceOptions() const { DARABONBA_PTR_GET_CONST(selfManagedResourceOptions_, CreateResourceRequestSelfManagedResourceOptions) };
    inline CreateResourceRequestSelfManagedResourceOptions selfManagedResourceOptions() { DARABONBA_PTR_GET(selfManagedResourceOptions_, CreateResourceRequestSelfManagedResourceOptions) };
    inline CreateResourceRequest& setSelfManagedResourceOptions(const CreateResourceRequestSelfManagedResourceOptions & selfManagedResourceOptions) { DARABONBA_PTR_SET_VALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };
    inline CreateResourceRequest& setSelfManagedResourceOptions(CreateResourceRequestSelfManagedResourceOptions && selfManagedResourceOptions) { DARABONBA_PTR_SET_RVALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateResourceRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline CreateResourceRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PrePaid: the subscription billing method.
    // *   PostPaid: the pay-as-you-go billing method.
    // 
    // >  This parameter is required when the ResourceType parameter is set to Dedicated.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of ECS instances.
    // 
    // >  This parameter is required when the ResourceType parameter is set to Dedicated.
    std::shared_ptr<int32_t> ecsInstanceCount_ = nullptr;
    // The type of the Elastic Compute Service (ECS) instance.
    // 
    // >  This parameter is required when the ResourceType parameter is set to Dedicated.
    std::shared_ptr<string> ecsInstanceType_ = nullptr;
    // The labels.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   Dedicated: the dedicated resource group.
    // *   SelfManaged: the self-managed resource group.
    // 
    // >  If you use a self-managed resource group, you must configure a whitelist.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The configurations of the self-managed resource group.
    std::shared_ptr<CreateResourceRequestSelfManagedResourceOptions> selfManagedResourceOptions_ = nullptr;
    // The size of the system disk. Unit: GiB. Valid values: 200 to 2000. Default value: 200.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The ID of the zone in which the instance resides.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
