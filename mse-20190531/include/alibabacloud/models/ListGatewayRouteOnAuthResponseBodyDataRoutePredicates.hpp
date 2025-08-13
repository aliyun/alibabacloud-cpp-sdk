// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODYDATAROUTEPREDICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODYDATAROUTEPREDICATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteOnAuthResponseBodyDataRoutePredicates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteOnAuthResponseBodyDataRoutePredicates& obj) { 
      DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteOnAuthResponseBodyDataRoutePredicates& obj) { 
      DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
    };
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicates() = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicates(const ListGatewayRouteOnAuthResponseBodyDataRoutePredicates &) = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicates(ListGatewayRouteOnAuthResponseBodyDataRoutePredicates &&) = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteOnAuthResponseBodyDataRoutePredicates() = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicates& operator=(const ListGatewayRouteOnAuthResponseBodyDataRoutePredicates &) = default ;
    ListGatewayRouteOnAuthResponseBodyDataRoutePredicates& operator=(ListGatewayRouteOnAuthResponseBodyDataRoutePredicates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pathPredicates_ != nullptr; };
    // pathPredicates Field Functions 
    bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
    void deletePathPredicates() { this->pathPredicates_ = nullptr;};
    inline const Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates & pathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates) };
    inline Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates pathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates) };
    inline ListGatewayRouteOnAuthResponseBodyDataRoutePredicates& setPathPredicates(const Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
    inline ListGatewayRouteOnAuthResponseBodyDataRoutePredicates& setPathPredicates(Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


  protected:
    // The information about route matching.
    std::shared_ptr<Models::ListGatewayRouteOnAuthResponseBodyDataRoutePredicatesPathPredicates> pathPredicates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
