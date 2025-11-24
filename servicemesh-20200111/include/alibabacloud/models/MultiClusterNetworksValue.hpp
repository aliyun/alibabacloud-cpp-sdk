// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTICLUSTERNETWORKSVALUE_HPP_
#define ALIBABACLOUD_MODELS_MULTICLUSTERNETWORKSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class MultiClusterNetworksValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiClusterNetworksValue& obj) { 
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(EnableGateway, enableGateway_);
      DARABONBA_PTR_TO_JSON(CustomGatewayAddress, customGatewayAddress_);
      DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
    };
    friend void from_json(const Darabonba::Json& j, MultiClusterNetworksValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(EnableGateway, enableGateway_);
      DARABONBA_PTR_FROM_JSON(CustomGatewayAddress, customGatewayAddress_);
      DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
    };
    MultiClusterNetworksValue() = default ;
    MultiClusterNetworksValue(const MultiClusterNetworksValue &) = default ;
    MultiClusterNetworksValue(MultiClusterNetworksValue &&) = default ;
    MultiClusterNetworksValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiClusterNetworksValue() = default ;
    MultiClusterNetworksValue& operator=(const MultiClusterNetworksValue &) = default ;
    MultiClusterNetworksValue& operator=(MultiClusterNetworksValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->network_ == nullptr
        && return this->enableGateway_ == nullptr && return this->customGatewayAddress_ == nullptr && return this->gatewayName_ == nullptr; };
    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline MultiClusterNetworksValue& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // enableGateway Field Functions 
    bool hasEnableGateway() const { return this->enableGateway_ != nullptr;};
    void deleteEnableGateway() { this->enableGateway_ = nullptr;};
    inline bool enableGateway() const { DARABONBA_PTR_GET_DEFAULT(enableGateway_, false) };
    inline MultiClusterNetworksValue& setEnableGateway(bool enableGateway) { DARABONBA_PTR_SET_VALUE(enableGateway_, enableGateway) };


    // customGatewayAddress Field Functions 
    bool hasCustomGatewayAddress() const { return this->customGatewayAddress_ != nullptr;};
    void deleteCustomGatewayAddress() { this->customGatewayAddress_ = nullptr;};
    inline string customGatewayAddress() const { DARABONBA_PTR_GET_DEFAULT(customGatewayAddress_, "") };
    inline MultiClusterNetworksValue& setCustomGatewayAddress(string customGatewayAddress) { DARABONBA_PTR_SET_VALUE(customGatewayAddress_, customGatewayAddress) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string gatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline MultiClusterNetworksValue& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


  protected:
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<bool> enableGateway_ = nullptr;
    std::shared_ptr<string> customGatewayAddress_ = nullptr;
    std::shared_ptr<string> gatewayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
