// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTHYBRIDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONVERTHYBRIDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ConvertHybridInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertHybridInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertHybridInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ConvertHybridInstanceResponseBody() = default ;
    ConvertHybridInstanceResponseBody(const ConvertHybridInstanceResponseBody &) = default ;
    ConvertHybridInstanceResponseBody(ConvertHybridInstanceResponseBody &&) = default ;
    ConvertHybridInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertHybridInstanceResponseBody() = default ;
    ConvertHybridInstanceResponseBody& operator=(const ConvertHybridInstanceResponseBody &) = default ;
    ConvertHybridInstanceResponseBody& operator=(ConvertHybridInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticInstanceId, elasticInstanceId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, OrderInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticInstanceId, elasticInstanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      };
      OrderInfo() = default ;
      OrderInfo(const OrderInfo &) = default ;
      OrderInfo(OrderInfo &&) = default ;
      OrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderInfo() = default ;
      OrderInfo& operator=(const OrderInfo &) = default ;
      OrderInfo& operator=(OrderInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->elasticInstanceId_ == nullptr
        && this->instanceId_ == nullptr && this->orderId_ == nullptr; };
      // elasticInstanceId Field Functions 
      bool hasElasticInstanceId() const { return this->elasticInstanceId_ != nullptr;};
      void deleteElasticInstanceId() { this->elasticInstanceId_ = nullptr;};
      inline string getElasticInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticInstanceId_, "") };
      inline OrderInfo& setElasticInstanceId(string elasticInstanceId) { DARABONBA_PTR_SET_VALUE(elasticInstanceId_, elasticInstanceId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OrderInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline OrderInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      shared_ptr<string> elasticInstanceId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> orderId_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->orderInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ConvertHybridInstanceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // orderInfo Field Functions 
    bool hasOrderInfo() const { return this->orderInfo_ != nullptr;};
    void deleteOrderInfo() { this->orderInfo_ = nullptr;};
    inline const ConvertHybridInstanceResponseBody::OrderInfo & getOrderInfo() const { DARABONBA_PTR_GET_CONST(orderInfo_, ConvertHybridInstanceResponseBody::OrderInfo) };
    inline ConvertHybridInstanceResponseBody::OrderInfo getOrderInfo() { DARABONBA_PTR_GET(orderInfo_, ConvertHybridInstanceResponseBody::OrderInfo) };
    inline ConvertHybridInstanceResponseBody& setOrderInfo(const ConvertHybridInstanceResponseBody::OrderInfo & orderInfo) { DARABONBA_PTR_SET_VALUE(orderInfo_, orderInfo) };
    inline ConvertHybridInstanceResponseBody& setOrderInfo(ConvertHybridInstanceResponseBody::OrderInfo && orderInfo) { DARABONBA_PTR_SET_RVALUE(orderInfo_, orderInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConvertHybridInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ConvertHybridInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errCode_ {};
    shared_ptr<ConvertHybridInstanceResponseBody::OrderInfo> orderInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
