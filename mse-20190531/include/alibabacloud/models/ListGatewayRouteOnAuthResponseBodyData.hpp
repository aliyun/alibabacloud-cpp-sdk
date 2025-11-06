// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayRouteOnAuthResponseBodyDataRoutePredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteOnAuthResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteOnAuthResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoutePredicates, routePredicates_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteOnAuthResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoutePredicates, routePredicates_);
    };
    ListGatewayRouteOnAuthResponseBodyData() = default ;
    ListGatewayRouteOnAuthResponseBodyData(const ListGatewayRouteOnAuthResponseBodyData &) = default ;
    ListGatewayRouteOnAuthResponseBodyData(ListGatewayRouteOnAuthResponseBodyData &&) = default ;
    ListGatewayRouteOnAuthResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteOnAuthResponseBodyData() = default ;
    ListGatewayRouteOnAuthResponseBodyData& operator=(const ListGatewayRouteOnAuthResponseBodyData &) = default ;
    ListGatewayRouteOnAuthResponseBodyData& operator=(ListGatewayRouteOnAuthResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && return this->domainIdList_ == nullptr && return this->domainName_ == nullptr && return this->domainNameList_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->routePredicates_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline ListGatewayRouteOnAuthResponseBodyData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdList Field Functions 
    bool hasDomainIdList() const { return this->domainIdList_ != nullptr;};
    void deleteDomainIdList() { this->domainIdList_ = nullptr;};
    inline const vector<int64_t> & domainIdList() const { DARABONBA_PTR_GET_CONST(domainIdList_, vector<int64_t>) };
    inline vector<int64_t> domainIdList() { DARABONBA_PTR_GET(domainIdList_, vector<int64_t>) };
    inline ListGatewayRouteOnAuthResponseBodyData& setDomainIdList(const vector<int64_t> & domainIdList) { DARABONBA_PTR_SET_VALUE(domainIdList_, domainIdList) };
    inline ListGatewayRouteOnAuthResponseBodyData& setDomainIdList(vector<int64_t> && domainIdList) { DARABONBA_PTR_SET_RVALUE(domainIdList_, domainIdList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListGatewayRouteOnAuthResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline ListGatewayRouteOnAuthResponseBodyData& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline ListGatewayRouteOnAuthResponseBodyData& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayRouteOnAuthResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayRouteOnAuthResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListGatewayRouteOnAuthResponseBodyData& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayRouteOnAuthResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routePredicates Field Functions 
    bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
    void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
    inline const Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates & routePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates) };
    inline Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates routePredicates() { DARABONBA_PTR_GET(routePredicates_, Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates) };
    inline ListGatewayRouteOnAuthResponseBodyData& setRoutePredicates(const Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
    inline ListGatewayRouteOnAuthResponseBodyData& setRoutePredicates(Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


  protected:
    // The domain ID.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The domain IDs.
    std::shared_ptr<vector<int64_t>> domainIdList_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The domain names.
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    // The gateway ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The route ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> name_ = nullptr;
    // The information about route matching.
    std::shared_ptr<Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicates> routePredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
