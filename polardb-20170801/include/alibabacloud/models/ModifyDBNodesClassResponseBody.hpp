// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODESCLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODESCLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBNodesClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodesClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBNodesClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBNodesClassResponseBody() = default ;
    ModifyDBNodesClassResponseBody(const ModifyDBNodesClassResponseBody &) = default ;
    ModifyDBNodesClassResponseBody(ModifyDBNodesClassResponseBody &&) = default ;
    ModifyDBNodesClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodesClassResponseBody() = default ;
    ModifyDBNodesClassResponseBody& operator=(const ModifyDBNodesClassResponseBody &) = default ;
    ModifyDBNodesClassResponseBody& operator=(ModifyDBNodesClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBNodesClassResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyDBNodesClassResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBNodesClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
