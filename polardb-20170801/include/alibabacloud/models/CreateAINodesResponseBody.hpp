// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAINODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAINODESRESPONSEBODY_HPP_
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
  class CreateAINodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAINodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAINodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAINodesResponseBody() = default ;
    CreateAINodesResponseBody(const CreateAINodesResponseBody &) = default ;
    CreateAINodesResponseBody(CreateAINodesResponseBody &&) = default ;
    CreateAINodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAINodesResponseBody() = default ;
    CreateAINodesResponseBody& operator=(const CreateAINodesResponseBody &) = default ;
    CreateAINodesResponseBody& operator=(CreateAINodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBNodeIds_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAINodesResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline const vector<string> & getDBNodeIds() const { DARABONBA_PTR_GET_CONST(DBNodeIds_, vector<string>) };
    inline vector<string> getDBNodeIds() { DARABONBA_PTR_GET(DBNodeIds_, vector<string>) };
    inline CreateAINodesResponseBody& setDBNodeIds(const vector<string> & DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };
    inline CreateAINodesResponseBody& setDBNodeIds(vector<string> && DBNodeIds) { DARABONBA_PTR_SET_RVALUE(DBNodeIds_, DBNodeIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateAINodesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAINodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<string>> DBNodeIds_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
