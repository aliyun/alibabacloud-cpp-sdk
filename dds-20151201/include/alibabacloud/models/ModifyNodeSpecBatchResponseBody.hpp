// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODESPECBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODESPECBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyNodeSpecBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeSpecBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeSpecBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyNodeSpecBatchResponseBody() = default ;
    ModifyNodeSpecBatchResponseBody(const ModifyNodeSpecBatchResponseBody &) = default ;
    ModifyNodeSpecBatchResponseBody(ModifyNodeSpecBatchResponseBody &&) = default ;
    ModifyNodeSpecBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeSpecBatchResponseBody() = default ;
    ModifyNodeSpecBatchResponseBody& operator=(const ModifyNodeSpecBatchResponseBody &) = default ;
    ModifyNodeSpecBatchResponseBody& operator=(ModifyNodeSpecBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyNodeSpecBatchResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyNodeSpecBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
