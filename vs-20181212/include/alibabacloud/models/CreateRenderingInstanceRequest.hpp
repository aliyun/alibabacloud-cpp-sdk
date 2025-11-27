// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRenderingInstanceRequestAttributes.hpp>
#include <alibabacloud/models/CreateRenderingInstanceRequestClientInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidth, internetMaxBandwidth_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidth, internetMaxBandwidth_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    CreateRenderingInstanceRequest() = default ;
    CreateRenderingInstanceRequest(const CreateRenderingInstanceRequest &) = default ;
    CreateRenderingInstanceRequest(CreateRenderingInstanceRequest &&) = default ;
    CreateRenderingInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingInstanceRequest() = default ;
    CreateRenderingInstanceRequest& operator=(const CreateRenderingInstanceRequest &) = default ;
    CreateRenderingInstanceRequest& operator=(CreateRenderingInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->autoRenew_ == nullptr && return this->clientInfo_ == nullptr && return this->instanceBillingCycle_ == nullptr && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr
        && return this->internetMaxBandwidth_ == nullptr && return this->period_ == nullptr && return this->renderingSpec_ == nullptr && return this->storageSize_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const CreateRenderingInstanceRequestAttributes & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, CreateRenderingInstanceRequestAttributes) };
    inline CreateRenderingInstanceRequestAttributes attributes() { DARABONBA_PTR_GET(attributes_, CreateRenderingInstanceRequestAttributes) };
    inline CreateRenderingInstanceRequest& setAttributes(const CreateRenderingInstanceRequestAttributes & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline CreateRenderingInstanceRequest& setAttributes(CreateRenderingInstanceRequestAttributes && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateRenderingInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientInfo Field Functions 
    bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
    void deleteClientInfo() { this->clientInfo_ = nullptr;};
    inline const CreateRenderingInstanceRequestClientInfo & clientInfo() const { DARABONBA_PTR_GET_CONST(clientInfo_, CreateRenderingInstanceRequestClientInfo) };
    inline CreateRenderingInstanceRequestClientInfo clientInfo() { DARABONBA_PTR_GET(clientInfo_, CreateRenderingInstanceRequestClientInfo) };
    inline CreateRenderingInstanceRequest& setClientInfo(const CreateRenderingInstanceRequestClientInfo & clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };
    inline CreateRenderingInstanceRequest& setClientInfo(CreateRenderingInstanceRequestClientInfo && clientInfo) { DARABONBA_PTR_SET_RVALUE(clientInfo_, clientInfo) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string instanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateRenderingInstanceRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateRenderingInstanceRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateRenderingInstanceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidth Field Functions 
    bool hasInternetMaxBandwidth() const { return this->internetMaxBandwidth_ != nullptr;};
    void deleteInternetMaxBandwidth() { this->internetMaxBandwidth_ = nullptr;};
    inline int64_t internetMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidth_, 0L) };
    inline CreateRenderingInstanceRequest& setInternetMaxBandwidth(int64_t internetMaxBandwidth) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidth_, internetMaxBandwidth) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateRenderingInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string renderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline CreateRenderingInstanceRequest& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline string storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
    inline CreateRenderingInstanceRequest& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    std::shared_ptr<CreateRenderingInstanceRequestAttributes> attributes_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<CreateRenderingInstanceRequestClientInfo> clientInfo_ = nullptr;
    std::shared_ptr<string> instanceBillingCycle_ = nullptr;
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<int64_t> internetMaxBandwidth_ = nullptr;
    std::shared_ptr<string> period_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingSpec_ = nullptr;
    std::shared_ptr<string> storageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
