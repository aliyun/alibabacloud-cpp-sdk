// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTEREQUESTFILTERPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTEREQUESTFILTERPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteRequestFilterParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteRequestFilterParams& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteRequestFilterParams& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListGatewayRouteRequestFilterParams() = default ;
    ListGatewayRouteRequestFilterParams(const ListGatewayRouteRequestFilterParams &) = default ;
    ListGatewayRouteRequestFilterParams(ListGatewayRouteRequestFilterParams &&) = default ;
    ListGatewayRouteRequestFilterParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteRequestFilterParams() = default ;
    ListGatewayRouteRequestFilterParams& operator=(const ListGatewayRouteRequestFilterParams &) = default ;
    ListGatewayRouteRequestFilterParams& operator=(ListGatewayRouteRequestFilterParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultServiceId_ == nullptr
        && return this->domainId_ == nullptr && return this->domainName_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->name_ == nullptr
        && return this->path_ == nullptr && return this->routeOrder_ == nullptr && return this->status_ == nullptr; };
    // defaultServiceId Field Functions 
    bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
    void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
    inline int64_t defaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
    inline ListGatewayRouteRequestFilterParams& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline ListGatewayRouteRequestFilterParams& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListGatewayRouteRequestFilterParams& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListGatewayRouteRequestFilterParams& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayRouteRequestFilterParams& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayRouteRequestFilterParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGatewayRouteRequestFilterParams& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline ListGatewayRouteRequestFilterParams& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListGatewayRouteRequestFilterParams& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The default service ID.
    std::shared_ptr<int64_t> defaultServiceId_ = nullptr;
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The associated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The name of the gateway.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    // The order.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
