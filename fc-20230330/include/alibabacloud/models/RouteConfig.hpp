// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROUTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_ROUTECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PathConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RouteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RouteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, RouteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(routes, routes_);
    };
    RouteConfig() = default ;
    RouteConfig(const RouteConfig &) = default ;
    RouteConfig(RouteConfig &&) = default ;
    RouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RouteConfig() = default ;
    RouteConfig& operator=(const RouteConfig &) = default ;
    RouteConfig& operator=(RouteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routes_ != nullptr; };
    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<PathConfig> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<PathConfig>) };
    inline vector<PathConfig> routes() { DARABONBA_PTR_GET(routes_, vector<PathConfig>) };
    inline RouteConfig& setRoutes(const vector<PathConfig> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline RouteConfig& setRoutes(vector<PathConfig> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    std::shared_ptr<vector<PathConfig>> routes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
