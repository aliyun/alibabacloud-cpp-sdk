// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyNodePoolAmountResponseBody() = default ;
    ModifyNodePoolAmountResponseBody(const ModifyNodePoolAmountResponseBody &) = default ;
    ModifyNodePoolAmountResponseBody(ModifyNodePoolAmountResponseBody &&) = default ;
    ModifyNodePoolAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAmountResponseBody() = default ;
    ModifyNodePoolAmountResponseBody& operator=(const ModifyNodePoolAmountResponseBody &) = default ;
    ModifyNodePoolAmountResponseBody& operator=(ModifyNodePoolAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderId_ == nullptr; };
      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Data& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      // The order ID.
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyNodePoolAmountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyNodePoolAmountResponseBody::Data) };
    inline ModifyNodePoolAmountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyNodePoolAmountResponseBody::Data) };
    inline ModifyNodePoolAmountResponseBody& setData(const ModifyNodePoolAmountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyNodePoolAmountResponseBody& setData(ModifyNodePoolAmountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyNodePoolAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ModifyNodePoolAmountResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
