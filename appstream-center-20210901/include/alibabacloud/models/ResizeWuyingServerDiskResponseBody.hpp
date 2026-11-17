// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEWUYINGSERVERDISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESIZEWUYINGSERVERDISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ResizeWuyingServerDiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeWuyingServerDiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeWuyingServerDiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResizeWuyingServerDiskResponseBody() = default ;
    ResizeWuyingServerDiskResponseBody(const ResizeWuyingServerDiskResponseBody &) = default ;
    ResizeWuyingServerDiskResponseBody(ResizeWuyingServerDiskResponseBody &&) = default ;
    ResizeWuyingServerDiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeWuyingServerDiskResponseBody() = default ;
    ResizeWuyingServerDiskResponseBody& operator=(const ResizeWuyingServerDiskResponseBody &) = default ;
    ResizeWuyingServerDiskResponseBody& operator=(ResizeWuyingServerDiskResponseBody &&) = default ;
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
      // The ID of the order.
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResizeWuyingServerDiskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResizeWuyingServerDiskResponseBody::Data) };
    inline ResizeWuyingServerDiskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ResizeWuyingServerDiskResponseBody::Data) };
    inline ResizeWuyingServerDiskResponseBody& setData(const ResizeWuyingServerDiskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResizeWuyingServerDiskResponseBody& setData(ResizeWuyingServerDiskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResizeWuyingServerDiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data object.
    shared_ptr<ResizeWuyingServerDiskResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
