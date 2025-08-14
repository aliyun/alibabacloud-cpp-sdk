// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSRESPONSEBODYROUTEMAPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenRouteMapsResponseBodyRouteMapsRouteMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRouteMapsResponseBodyRouteMaps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsResponseBodyRouteMaps& obj) { 
      DARABONBA_PTR_TO_JSON(RouteMap, routeMap_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsResponseBodyRouteMaps& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteMap, routeMap_);
    };
    DescribeCenRouteMapsResponseBodyRouteMaps() = default ;
    DescribeCenRouteMapsResponseBodyRouteMaps(const DescribeCenRouteMapsResponseBodyRouteMaps &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMaps(DescribeCenRouteMapsResponseBodyRouteMaps &&) = default ;
    DescribeCenRouteMapsResponseBodyRouteMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsResponseBodyRouteMaps() = default ;
    DescribeCenRouteMapsResponseBodyRouteMaps& operator=(const DescribeCenRouteMapsResponseBodyRouteMaps &) = default ;
    DescribeCenRouteMapsResponseBodyRouteMaps& operator=(DescribeCenRouteMapsResponseBodyRouteMaps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeMap_ != nullptr; };
    // routeMap Field Functions 
    bool hasRouteMap() const { return this->routeMap_ != nullptr;};
    void deleteRouteMap() { this->routeMap_ = nullptr;};
    inline const vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap> & routeMap() const { DARABONBA_PTR_GET_CONST(routeMap_, vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap>) };
    inline vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap> routeMap() { DARABONBA_PTR_GET(routeMap_, vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap>) };
    inline DescribeCenRouteMapsResponseBodyRouteMaps& setRouteMap(const vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap> & routeMap) { DARABONBA_PTR_SET_VALUE(routeMap_, routeMap) };
    inline DescribeCenRouteMapsResponseBodyRouteMaps& setRouteMap(vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap> && routeMap) { DARABONBA_PTR_SET_RVALUE(routeMap_, routeMap) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenRouteMapsResponseBodyRouteMapsRouteMap>> routeMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
