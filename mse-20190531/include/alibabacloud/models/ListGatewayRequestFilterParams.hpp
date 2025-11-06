// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYREQUESTFILTERPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYREQUESTFILTERPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRequestFilterParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRequestFilterParams& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MseTag, mseTag_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRequestFilterParams& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MseTag, mseTag_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
    };
    ListGatewayRequestFilterParams() = default ;
    ListGatewayRequestFilterParams(const ListGatewayRequestFilterParams &) = default ;
    ListGatewayRequestFilterParams(ListGatewayRequestFilterParams &&) = default ;
    ListGatewayRequestFilterParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRequestFilterParams() = default ;
    ListGatewayRequestFilterParams& operator=(const ListGatewayRequestFilterParams &) = default ;
    ListGatewayRequestFilterParams& operator=(ListGatewayRequestFilterParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayType_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->instanceId_ == nullptr && return this->mseTag_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->vpc_ == nullptr; };
    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListGatewayRequestFilterParams& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayRequestFilterParams& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListGatewayRequestFilterParams& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mseTag Field Functions 
    bool hasMseTag() const { return this->mseTag_ != nullptr;};
    void deleteMseTag() { this->mseTag_ = nullptr;};
    inline string mseTag() const { DARABONBA_PTR_GET_DEFAULT(mseTag_, "") };
    inline ListGatewayRequestFilterParams& setMseTag(string mseTag) { DARABONBA_PTR_SET_VALUE(mseTag_, mseTag) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayRequestFilterParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListGatewayRequestFilterParams& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline string vpc() const { DARABONBA_PTR_GET_DEFAULT(vpc_, "") };
    inline ListGatewayRequestFilterParams& setVpc(string vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };


  protected:
    // The type of the gateway.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The tag of the instance.
    std::shared_ptr<string> mseTag_ = nullptr;
    // The name of the gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
