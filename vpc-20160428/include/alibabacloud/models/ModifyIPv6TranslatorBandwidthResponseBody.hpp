// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPV6TRANSLATORBANDWIDTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPV6TRANSLATORBANDWIDTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyIPv6TranslatorBandwidthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIPv6TranslatorBandwidthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIPv6TranslatorBandwidthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyIPv6TranslatorBandwidthResponseBody() = default ;
    ModifyIPv6TranslatorBandwidthResponseBody(const ModifyIPv6TranslatorBandwidthResponseBody &) = default ;
    ModifyIPv6TranslatorBandwidthResponseBody(ModifyIPv6TranslatorBandwidthResponseBody &&) = default ;
    ModifyIPv6TranslatorBandwidthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIPv6TranslatorBandwidthResponseBody() = default ;
    ModifyIPv6TranslatorBandwidthResponseBody& operator=(const ModifyIPv6TranslatorBandwidthResponseBody &) = default ;
    ModifyIPv6TranslatorBandwidthResponseBody& operator=(ModifyIPv6TranslatorBandwidthResponseBody &&) = default ;
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
    inline ModifyIPv6TranslatorBandwidthResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyIPv6TranslatorBandwidthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
