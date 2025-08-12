// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYROUTESETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYROUTESETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotificationStrategyRouteSettingRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyRouteSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyRouteSetting& obj) { 
      DARABONBA_PTR_TO_JSON(Routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyRouteSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
    };
    NotificationStrategyRouteSetting() = default ;
    NotificationStrategyRouteSetting(const NotificationStrategyRouteSetting &) = default ;
    NotificationStrategyRouteSetting(NotificationStrategyRouteSetting &&) = default ;
    NotificationStrategyRouteSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyRouteSetting() = default ;
    NotificationStrategyRouteSetting& operator=(const NotificationStrategyRouteSetting &) = default ;
    NotificationStrategyRouteSetting& operator=(NotificationStrategyRouteSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routes_ != nullptr; };
    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<Models::NotificationStrategyRouteSettingRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<Models::NotificationStrategyRouteSettingRoutes>) };
    inline vector<Models::NotificationStrategyRouteSettingRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<Models::NotificationStrategyRouteSettingRoutes>) };
    inline NotificationStrategyRouteSetting& setRoutes(const vector<Models::NotificationStrategyRouteSettingRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotificationStrategyRouteSetting& setRoutes(vector<Models::NotificationStrategyRouteSettingRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    std::shared_ptr<vector<Models::NotificationStrategyRouteSettingRoutes>> routes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
