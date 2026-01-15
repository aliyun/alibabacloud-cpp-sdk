// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DBNodeIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodeIds& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodeIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      };
      DBNodeIds() = default ;
      DBNodeIds(const DBNodeIds &) = default ;
      DBNodeIds(DBNodeIds &&) = default ;
      DBNodeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodeIds() = default ;
      DBNodeIds& operator=(const DBNodeIds &) = default ;
      DBNodeIds& operator=(DBNodeIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBNodeId_ == nullptr; };
      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline const vector<string> & getDBNodeId() const { DARABONBA_PTR_GET_CONST(DBNodeId_, vector<string>) };
      inline vector<string> getDBNodeId() { DARABONBA_PTR_GET(DBNodeId_, vector<string>) };
      inline DBNodeIds& setDBNodeId(const vector<string> & DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };
      inline DBNodeIds& setDBNodeId(vector<string> && DBNodeId) { DARABONBA_PTR_SET_RVALUE(DBNodeId_, DBNodeId) };


    protected:
      shared_ptr<vector<string>> DBNodeId_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBNodeIds_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBNodesResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const CreateDBNodesResponseBody::DBNodeIds & getDBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, CreateDBNodesResponseBody::DBNodeIds) };
    inline CreateDBNodesResponseBody::DBNodeIds getDBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, CreateDBNodesResponseBody::DBNodeIds) };
    inline CreateDBNodesResponseBody& setDBNodeIds(const CreateDBNodesResponseBody::DBNodeIds & dBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, dBNodeIds) };
    inline CreateDBNodesResponseBody& setDBNodeIds(CreateDBNodesResponseBody::DBNodeIds && dBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, dBNodeIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateDBNodesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDBNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> DBClusterId_ {};
    // Details about the nodes.
    shared_ptr<CreateDBNodesResponseBody::DBNodeIds> DBNodeIds_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
