// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWDESKTOPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWDESKTOPGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RenewDesktopGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewDesktopGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewDesktopGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RenewDesktopGroupResponseBody() = default ;
    RenewDesktopGroupResponseBody(const RenewDesktopGroupResponseBody &) = default ;
    RenewDesktopGroupResponseBody(RenewDesktopGroupResponseBody &&) = default ;
    RenewDesktopGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewDesktopGroupResponseBody() = default ;
    RenewDesktopGroupResponseBody& operator=(const RenewDesktopGroupResponseBody &) = default ;
    RenewDesktopGroupResponseBody& operator=(RenewDesktopGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline const vector<string> & getOrderId() const { DARABONBA_PTR_GET_CONST(orderId_, vector<string>) };
    inline vector<string> getOrderId() { DARABONBA_PTR_GET(orderId_, vector<string>) };
    inline RenewDesktopGroupResponseBody& setOrderId(const vector<string> & orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };
    inline RenewDesktopGroupResponseBody& setOrderId(vector<string> && orderId) { DARABONBA_PTR_SET_RVALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewDesktopGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order IDs.
    shared_ptr<vector<string>> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
