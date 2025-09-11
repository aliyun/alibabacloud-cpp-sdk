// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributesShrink_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfoShrink_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidth, internetMaxBandwidth_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributesShrink_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfoShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidth, internetMaxBandwidth_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    CreateRenderingInstanceShrinkRequest() = default ;
    CreateRenderingInstanceShrinkRequest(const CreateRenderingInstanceShrinkRequest &) = default ;
    CreateRenderingInstanceShrinkRequest(CreateRenderingInstanceShrinkRequest &&) = default ;
    CreateRenderingInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingInstanceShrinkRequest() = default ;
    CreateRenderingInstanceShrinkRequest& operator=(const CreateRenderingInstanceShrinkRequest &) = default ;
    CreateRenderingInstanceShrinkRequest& operator=(CreateRenderingInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributesShrink_ != nullptr
        && this->autoRenew_ != nullptr && this->clientInfoShrink_ != nullptr && this->instanceBillingCycle_ != nullptr && this->instanceChargeType_ != nullptr && this->internetChargeType_ != nullptr
        && this->internetMaxBandwidth_ != nullptr && this->period_ != nullptr && this->renderingSpec_ != nullptr && this->storageSize_ != nullptr; };
    // attributesShrink Field Functions 
    bool hasAttributesShrink() const { return this->attributesShrink_ != nullptr;};
    void deleteAttributesShrink() { this->attributesShrink_ = nullptr;};
    inline string attributesShrink() const { DARABONBA_PTR_GET_DEFAULT(attributesShrink_, "") };
    inline CreateRenderingInstanceShrinkRequest& setAttributesShrink(string attributesShrink) { DARABONBA_PTR_SET_VALUE(attributesShrink_, attributesShrink) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateRenderingInstanceShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientInfoShrink Field Functions 
    bool hasClientInfoShrink() const { return this->clientInfoShrink_ != nullptr;};
    void deleteClientInfoShrink() { this->clientInfoShrink_ = nullptr;};
    inline string clientInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(clientInfoShrink_, "") };
    inline CreateRenderingInstanceShrinkRequest& setClientInfoShrink(string clientInfoShrink) { DARABONBA_PTR_SET_VALUE(clientInfoShrink_, clientInfoShrink) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string instanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateRenderingInstanceShrinkRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateRenderingInstanceShrinkRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateRenderingInstanceShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidth Field Functions 
    bool hasInternetMaxBandwidth() const { return this->internetMaxBandwidth_ != nullptr;};
    void deleteInternetMaxBandwidth() { this->internetMaxBandwidth_ = nullptr;};
    inline int64_t internetMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidth_, 0L) };
    inline CreateRenderingInstanceShrinkRequest& setInternetMaxBandwidth(int64_t internetMaxBandwidth) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidth_, internetMaxBandwidth) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateRenderingInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string renderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline CreateRenderingInstanceShrinkRequest& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline string storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
    inline CreateRenderingInstanceShrinkRequest& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    std::shared_ptr<string> attributesShrink_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> clientInfoShrink_ = nullptr;
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
