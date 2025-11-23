// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGICTABLEROUTECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGICTABLEROUTECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteLogicTableRouteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogicTableRouteConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RouteKey, routeKey_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogicTableRouteConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteKey, routeKey_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteLogicTableRouteConfigRequest() = default ;
    DeleteLogicTableRouteConfigRequest(const DeleteLogicTableRouteConfigRequest &) = default ;
    DeleteLogicTableRouteConfigRequest(DeleteLogicTableRouteConfigRequest &&) = default ;
    DeleteLogicTableRouteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogicTableRouteConfigRequest() = default ;
    DeleteLogicTableRouteConfigRequest& operator=(const DeleteLogicTableRouteConfigRequest &) = default ;
    DeleteLogicTableRouteConfigRequest& operator=(DeleteLogicTableRouteConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeKey_ == nullptr
        && return this->tableId_ == nullptr && return this->tid_ == nullptr; };
    // routeKey Field Functions 
    bool hasRouteKey() const { return this->routeKey_ != nullptr;};
    void deleteRouteKey() { this->routeKey_ = nullptr;};
    inline string routeKey() const { DARABONBA_PTR_GET_DEFAULT(routeKey_, "") };
    inline DeleteLogicTableRouteConfigRequest& setRouteKey(string routeKey) { DARABONBA_PTR_SET_VALUE(routeKey_, routeKey) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline DeleteLogicTableRouteConfigRequest& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteLogicTableRouteConfigRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The unique key of the routing algorithm. You can call the [ListLogicTableRouteConfig](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogictablerouteconfig) operation to query the unique key.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeKey_ = nullptr;
    // The ID of the logical table. You can call the [ListLogicTables](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogictables) operation to query the ID of the logical table.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> tableId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://www.alibabacloud.com/help/en/data-management-service/latest/getuseractivetenant) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
