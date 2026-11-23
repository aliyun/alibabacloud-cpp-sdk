// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BMed20261121
{
namespace Models
{
  class OpenServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(spInstanceId, spInstanceId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(spInstanceId, spInstanceId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    OpenServiceResponseBody() = default ;
    OpenServiceResponseBody(const OpenServiceResponseBody &) = default ;
    OpenServiceResponseBody(OpenServiceResponseBody &&) = default ;
    OpenServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceResponseBody() = default ;
    OpenServiceResponseBody& operator=(const OpenServiceResponseBody &) = default ;
    OpenServiceResponseBody& operator=(OpenServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->spInstanceId_ == nullptr && this->status_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OpenServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // spInstanceId Field Functions 
    bool hasSpInstanceId() const { return this->spInstanceId_ != nullptr;};
    void deleteSpInstanceId() { this->spInstanceId_ = nullptr;};
    inline string getSpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(spInstanceId_, "") };
    inline OpenServiceResponseBody& setSpInstanceId(string spInstanceId) { DARABONBA_PTR_SET_VALUE(spInstanceId_, spInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OpenServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 关联本次开通申请的订单 ID，存在时返回。
    shared_ptr<string> orderId_ {};
    // 服务已开通时返回的实例标识。
    shared_ptr<string> spInstanceId_ {};
    // TEST_OK 表示仅验证调用成功。OPENING 表示开通处理中。ACTIVE 表示已开通。ORDER_UNKNOWN 表示暂时无法确认开通结果。REJECTED 表示开通请求未获通过。
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261121
#endif
