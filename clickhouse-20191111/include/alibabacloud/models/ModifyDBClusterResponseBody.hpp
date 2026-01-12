// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyDBClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBClusterResponseBody() = default ;
    ModifyDBClusterResponseBody(const ModifyDBClusterResponseBody &) = default ;
    ModifyDBClusterResponseBody(ModifyDBClusterResponseBody &&) = default ;
    ModifyDBClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterResponseBody() = default ;
    ModifyDBClusterResponseBody& operator=(const ModifyDBClusterResponseBody &) = default ;
    ModifyDBClusterResponseBody& operator=(ModifyDBClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBCluster& obj) { 
        DARABONBA_PTR_TO_JSON(dbClusterId, dbClusterId_);
        DARABONBA_PTR_TO_JSON(orderId, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(dbClusterId, dbClusterId_);
        DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      };
      DBCluster() = default ;
      DBCluster(const DBCluster &) = default ;
      DBCluster(DBCluster &&) = default ;
      DBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBCluster() = default ;
      DBCluster& operator=(const DBCluster &) = default ;
      DBCluster& operator=(DBCluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && this->orderId_ == nullptr; };
      // dbClusterId Field Functions 
      bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
      void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
      inline string getDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
      inline DBCluster& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline DBCluster& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      // The cluster ID.
      shared_ptr<string> dbClusterId_ {};
      // The order ID.
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->DBCluster_ == nullptr
        && this->requestId_ == nullptr; };
    // DBCluster Field Functions 
    bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
    void deleteDBCluster() { this->DBCluster_ = nullptr;};
    inline const ModifyDBClusterResponseBody::DBCluster & getDBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, ModifyDBClusterResponseBody::DBCluster) };
    inline ModifyDBClusterResponseBody::DBCluster getDBCluster() { DARABONBA_PTR_GET(DBCluster_, ModifyDBClusterResponseBody::DBCluster) };
    inline ModifyDBClusterResponseBody& setDBCluster(const ModifyDBClusterResponseBody::DBCluster & dBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, dBCluster) };
    inline ModifyDBClusterResponseBody& setDBCluster(ModifyDBClusterResponseBody::DBCluster && dBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, dBCluster) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The clusters.
    shared_ptr<ModifyDBClusterResponseBody::DBCluster> DBCluster_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
