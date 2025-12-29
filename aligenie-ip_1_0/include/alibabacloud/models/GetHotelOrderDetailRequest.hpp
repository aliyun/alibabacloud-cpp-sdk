// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELORDERDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELORDERDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelOrderDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelOrderDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelOrderDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
    };
    GetHotelOrderDetailRequest() = default ;
    GetHotelOrderDetailRequest(const GetHotelOrderDetailRequest &) = default ;
    GetHotelOrderDetailRequest(GetHotelOrderDetailRequest &&) = default ;
    GetHotelOrderDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelOrderDetailRequest() = default ;
    GetHotelOrderDetailRequest& operator=(const GetHotelOrderDetailRequest &) = default ;
    GetHotelOrderDetailRequest& operator=(GetHotelOrderDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderNo_ == nullptr; };
      // orderNo Field Functions 
      bool hasOrderNo() const { return this->orderNo_ != nullptr;};
      void deleteOrderNo() { this->orderNo_ = nullptr;};
      inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
      inline Payload& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    protected:
      // This parameter is required.
      shared_ptr<string> orderNo_ {};
    };

    virtual bool empty() const override { return this->payload_ == nullptr; };
    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetHotelOrderDetailRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, GetHotelOrderDetailRequest::Payload) };
    inline GetHotelOrderDetailRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, GetHotelOrderDetailRequest::Payload) };
    inline GetHotelOrderDetailRequest& setPayload(const GetHotelOrderDetailRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetHotelOrderDetailRequest& setPayload(GetHotelOrderDetailRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    // This parameter is required.
    shared_ptr<GetHotelOrderDetailRequest::Payload> payload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
