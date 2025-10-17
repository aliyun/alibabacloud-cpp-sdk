// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUESTENHANCEDNETWORK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUESTENHANCEDNETWORK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyNetworkInterfaceAttributeRequestEnhancedNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(EnableRss, enableRss_);
      DARABONBA_PTR_TO_JSON(EnableSriov, enableSriov_);
      DARABONBA_PTR_TO_JSON(VirtualFunctionQuantity, virtualFunctionQuantity_);
      DARABONBA_PTR_TO_JSON(VirtualFunctionTotalQueueNumber, virtualFunctionTotalQueueNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableRss, enableRss_);
      DARABONBA_PTR_FROM_JSON(EnableSriov, enableSriov_);
      DARABONBA_PTR_FROM_JSON(VirtualFunctionQuantity, virtualFunctionQuantity_);
      DARABONBA_PTR_FROM_JSON(VirtualFunctionTotalQueueNumber, virtualFunctionTotalQueueNumber_);
    };
    ModifyNetworkInterfaceAttributeRequestEnhancedNetwork() = default ;
    ModifyNetworkInterfaceAttributeRequestEnhancedNetwork(const ModifyNetworkInterfaceAttributeRequestEnhancedNetwork &) = default ;
    ModifyNetworkInterfaceAttributeRequestEnhancedNetwork(ModifyNetworkInterfaceAttributeRequestEnhancedNetwork &&) = default ;
    ModifyNetworkInterfaceAttributeRequestEnhancedNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkInterfaceAttributeRequestEnhancedNetwork() = default ;
    ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& operator=(const ModifyNetworkInterfaceAttributeRequestEnhancedNetwork &) = default ;
    ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& operator=(ModifyNetworkInterfaceAttributeRequestEnhancedNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableRss_ == nullptr
        && return this->enableSriov_ == nullptr && return this->virtualFunctionQuantity_ == nullptr && return this->virtualFunctionTotalQueueNumber_ == nullptr; };
    // enableRss Field Functions 
    bool hasEnableRss() const { return this->enableRss_ != nullptr;};
    void deleteEnableRss() { this->enableRss_ = nullptr;};
    inline bool enableRss() const { DARABONBA_PTR_GET_DEFAULT(enableRss_, false) };
    inline ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& setEnableRss(bool enableRss) { DARABONBA_PTR_SET_VALUE(enableRss_, enableRss) };


    // enableSriov Field Functions 
    bool hasEnableSriov() const { return this->enableSriov_ != nullptr;};
    void deleteEnableSriov() { this->enableSriov_ = nullptr;};
    inline bool enableSriov() const { DARABONBA_PTR_GET_DEFAULT(enableSriov_, false) };
    inline ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& setEnableSriov(bool enableSriov) { DARABONBA_PTR_SET_VALUE(enableSriov_, enableSriov) };


    // virtualFunctionQuantity Field Functions 
    bool hasVirtualFunctionQuantity() const { return this->virtualFunctionQuantity_ != nullptr;};
    void deleteVirtualFunctionQuantity() { this->virtualFunctionQuantity_ = nullptr;};
    inline int32_t virtualFunctionQuantity() const { DARABONBA_PTR_GET_DEFAULT(virtualFunctionQuantity_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& setVirtualFunctionQuantity(int32_t virtualFunctionQuantity) { DARABONBA_PTR_SET_VALUE(virtualFunctionQuantity_, virtualFunctionQuantity) };


    // virtualFunctionTotalQueueNumber Field Functions 
    bool hasVirtualFunctionTotalQueueNumber() const { return this->virtualFunctionTotalQueueNumber_ != nullptr;};
    void deleteVirtualFunctionTotalQueueNumber() { this->virtualFunctionTotalQueueNumber_ = nullptr;};
    inline int32_t virtualFunctionTotalQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualFunctionTotalQueueNumber_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestEnhancedNetwork& setVirtualFunctionTotalQueueNumber(int32_t virtualFunctionTotalQueueNumber) { DARABONBA_PTR_SET_VALUE(virtualFunctionTotalQueueNumber_, virtualFunctionTotalQueueNumber) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<bool> enableRss_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<bool> enableSriov_ = nullptr;
    std::shared_ptr<int32_t> virtualFunctionQuantity_ = nullptr;
    std::shared_ptr<int32_t> virtualFunctionTotalQueueNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
