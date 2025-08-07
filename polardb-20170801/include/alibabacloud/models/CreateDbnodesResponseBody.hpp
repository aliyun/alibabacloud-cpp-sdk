// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDBNodesResponseBodyDBNodeIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDBNodesResponseBody() = default ;
    CreateDBNodesResponseBody(const CreateDBNodesResponseBody &) = default ;
    CreateDBNodesResponseBody(CreateDBNodesResponseBody &&) = default ;
    CreateDBNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBNodesResponseBody() = default ;
    CreateDBNodesResponseBody& operator=(const CreateDBNodesResponseBody &) = default ;
    CreateDBNodesResponseBody& operator=(CreateDBNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->DBNodeIds_ != nullptr && this->orderId_ != nullptr && this->requestId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBNodesResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const CreateDBNodesResponseBodyDBNodeIds & DBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, CreateDBNodesResponseBodyDBNodeIds) };
    inline CreateDBNodesResponseBodyDBNodeIds DBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, CreateDBNodesResponseBodyDBNodeIds) };
    inline CreateDBNodesResponseBody& setDBNodeIds(const CreateDBNodesResponseBodyDBNodeIds & DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };
    inline CreateDBNodesResponseBody& setDBNodeIds(CreateDBNodesResponseBodyDBNodeIds && DBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, DBNodeIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateDBNodesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDBNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Details about the nodes.
    std::shared_ptr<CreateDBNodesResponseBodyDBNodeIds> DBNodeIds_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
