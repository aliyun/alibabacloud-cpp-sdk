// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPROUTETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPSROUTEMAPROUTETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes& obj) { 
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
    };
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes() = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes& operator=(const DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes& operator=(DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeType_ != nullptr; };
    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline const vector<string> & routeType() const { DARABONBA_PTR_GET_CONST(routeType_, vector<string>) };
    inline vector<string> routeType() { DARABONBA_PTR_GET(routeType_, vector<string>) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes& setRouteType(const vector<string> & routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };
    inline DescribeCenRouteMapsResponseBodyRouteMapsRouteMapRouteTypes& setRouteType(vector<string> && routeType) { DARABONBA_PTR_SET_RVALUE(routeType_, routeType) };


  protected:
    std::shared_ptr<vector<string>> routeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
