// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODYLOGICTABLEROUTECONFIGLISTLOGICTABLEROUTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODYLOGICTABLEROUTECONFIGLISTLOGICTABLEROUTECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(RouteExpr, routeExpr_);
      DARABONBA_PTR_TO_JSON(RouteKey, routeKey_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteExpr, routeExpr_);
      DARABONBA_PTR_FROM_JSON(RouteKey, routeKey_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
    };
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig() = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig(const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig &) = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig(ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig &&) = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig() = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& operator=(const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig &) = default ;
    ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& operator=(ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeExpr_ == nullptr
        && return this->routeKey_ == nullptr && return this->tableId_ == nullptr; };
    // routeExpr Field Functions 
    bool hasRouteExpr() const { return this->routeExpr_ != nullptr;};
    void deleteRouteExpr() { this->routeExpr_ = nullptr;};
    inline string routeExpr() const { DARABONBA_PTR_GET_DEFAULT(routeExpr_, "") };
    inline ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& setRouteExpr(string routeExpr) { DARABONBA_PTR_SET_VALUE(routeExpr_, routeExpr) };


    // routeKey Field Functions 
    bool hasRouteKey() const { return this->routeKey_ != nullptr;};
    void deleteRouteKey() { this->routeKey_ = nullptr;};
    inline string routeKey() const { DARABONBA_PTR_GET_DEFAULT(routeKey_, "") };
    inline ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& setRouteKey(string routeKey) { DARABONBA_PTR_SET_VALUE(routeKey_, routeKey) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigListLogicTableRouteConfig& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


  protected:
    // The routing algorithm expression.
    std::shared_ptr<string> routeExpr_ = nullptr;
    // The unique key of the routing algorithm.
    std::shared_ptr<string> routeKey_ = nullptr;
    // The ID of the logical table.
    std::shared_ptr<int64_t> tableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
