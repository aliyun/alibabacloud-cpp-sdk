// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLOGICTABLEROUTECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLOGICTABLEROUTECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddLogicTableRouteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLogicTableRouteConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RouteExpr, routeExpr_);
      DARABONBA_PTR_TO_JSON(RouteKey, routeKey_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, AddLogicTableRouteConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteExpr, routeExpr_);
      DARABONBA_PTR_FROM_JSON(RouteKey, routeKey_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    AddLogicTableRouteConfigRequest() = default ;
    AddLogicTableRouteConfigRequest(const AddLogicTableRouteConfigRequest &) = default ;
    AddLogicTableRouteConfigRequest(AddLogicTableRouteConfigRequest &&) = default ;
    AddLogicTableRouteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLogicTableRouteConfigRequest() = default ;
    AddLogicTableRouteConfigRequest& operator=(const AddLogicTableRouteConfigRequest &) = default ;
    AddLogicTableRouteConfigRequest& operator=(AddLogicTableRouteConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeExpr_ == nullptr
        && this->routeKey_ == nullptr && this->tableId_ == nullptr && this->tid_ == nullptr; };
    // routeExpr Field Functions 
    bool hasRouteExpr() const { return this->routeExpr_ != nullptr;};
    void deleteRouteExpr() { this->routeExpr_ = nullptr;};
    inline string getRouteExpr() const { DARABONBA_PTR_GET_DEFAULT(routeExpr_, "") };
    inline AddLogicTableRouteConfigRequest& setRouteExpr(string routeExpr) { DARABONBA_PTR_SET_VALUE(routeExpr_, routeExpr) };


    // routeKey Field Functions 
    bool hasRouteKey() const { return this->routeKey_ != nullptr;};
    void deleteRouteKey() { this->routeKey_ = nullptr;};
    inline string getRouteKey() const { DARABONBA_PTR_GET_DEFAULT(routeKey_, "") };
    inline AddLogicTableRouteConfigRequest& setRouteKey(string routeKey) { DARABONBA_PTR_SET_VALUE(routeKey_, routeKey) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline AddLogicTableRouteConfigRequest& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddLogicTableRouteConfigRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The routing algorithm expression. For more information about how to configure a routing algorithm expression, see [Configure a routing algorithm](https://www.alibabacloud.com/help/en/data-management-service/latest/configure-a-routing-algorithm).
    // 
    // This parameter is required.
    shared_ptr<string> routeExpr_ {};
    // The unique key of the routing algorithm. 
    // 
    // > - You can create a custom unique key for the routing algorithm. No requirements are imposed on custom unique keys.
    // > - The unique key of the routing algorithm in the same logical table must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> routeKey_ {};
    // The ID of the logical table. You can call the [ListLogicTables](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogictables) operation to query the ID of the logical table.
    // 
    // This parameter is required.
    shared_ptr<int64_t> tableId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://www.alibabacloud.com/help/en/data-management-service/latest/getuseractivetenant) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
