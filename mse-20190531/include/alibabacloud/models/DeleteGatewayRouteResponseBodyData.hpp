// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYROUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYROUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewayRouteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayRouteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayRouteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DeleteGatewayRouteResponseBodyData() = default ;
    DeleteGatewayRouteResponseBodyData(const DeleteGatewayRouteResponseBodyData &) = default ;
    DeleteGatewayRouteResponseBodyData(DeleteGatewayRouteResponseBodyData &&) = default ;
    DeleteGatewayRouteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayRouteResponseBodyData() = default ;
    DeleteGatewayRouteResponseBodyData& operator=(const DeleteGatewayRouteResponseBodyData &) = default ;
    DeleteGatewayRouteResponseBodyData& operator=(DeleteGatewayRouteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultServiceId_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->name_ == nullptr && return this->predicates_ == nullptr && return this->routeOrder_ == nullptr && return this->status_ == nullptr; };
    // defaultServiceId Field Functions 
    bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
    void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
    inline int64_t defaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
    inline DeleteGatewayRouteResponseBodyData& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline DeleteGatewayRouteResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteGatewayRouteResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DeleteGatewayRouteResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DeleteGatewayRouteResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteGatewayRouteResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteGatewayRouteResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline string predicates() const { DARABONBA_PTR_GET_DEFAULT(predicates_, "") };
    inline DeleteGatewayRouteResponseBodyData& setPredicates(string predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t routeOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline DeleteGatewayRouteResponseBodyData& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DeleteGatewayRouteResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The default service ID.
    std::shared_ptr<int64_t> defaultServiceId_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The matching rules.
    std::shared_ptr<string> predicates_ = nullptr;
    // The sequence number of the route.
    std::shared_ptr<int32_t> routeOrder_ = nullptr;
    // The status of the route. Valid values:
    // 
    // *   0: unpublished
    // *   2: publishing
    // *   3: published
    // *   4: editing (updated but not published)
    // *   5: unpublishing
    // *   6: unavailable
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
