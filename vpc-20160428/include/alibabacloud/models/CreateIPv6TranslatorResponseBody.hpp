// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPV6TRANSLATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPV6TRANSLATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIPv6TranslatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIPv6TranslatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIPv6TranslatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    CreateIPv6TranslatorResponseBody() = default ;
    CreateIPv6TranslatorResponseBody(const CreateIPv6TranslatorResponseBody &) = default ;
    CreateIPv6TranslatorResponseBody(CreateIPv6TranslatorResponseBody &&) = default ;
    CreateIPv6TranslatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIPv6TranslatorResponseBody() = default ;
    CreateIPv6TranslatorResponseBody& operator=(const CreateIPv6TranslatorResponseBody &) = default ;
    CreateIPv6TranslatorResponseBody& operator=(CreateIPv6TranslatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6TranslatorId_ == nullptr
        && this->name_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr && this->spec_ == nullptr; };
    // ipv6TranslatorId Field Functions 
    bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
    void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
    inline string getIpv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
    inline CreateIPv6TranslatorResponseBody& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIPv6TranslatorResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateIPv6TranslatorResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIPv6TranslatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateIPv6TranslatorResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The ID of the IPv6 Translation Service instance.
    shared_ptr<string> ipv6TranslatorId_ {};
    // The name of the IPv6 Translation Service instance.
    shared_ptr<string> name_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The specification of the IPv6 Translation Service instance.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
