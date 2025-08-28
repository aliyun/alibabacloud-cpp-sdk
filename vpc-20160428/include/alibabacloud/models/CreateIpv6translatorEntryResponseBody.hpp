// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPV6TRANSLATORENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPV6TRANSLATORENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIPv6TranslatorEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIPv6TranslatorEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIPv6TranslatorEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIPv6TranslatorEntryResponseBody() = default ;
    CreateIPv6TranslatorEntryResponseBody(const CreateIPv6TranslatorEntryResponseBody &) = default ;
    CreateIPv6TranslatorEntryResponseBody(CreateIPv6TranslatorEntryResponseBody &&) = default ;
    CreateIPv6TranslatorEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIPv6TranslatorEntryResponseBody() = default ;
    CreateIPv6TranslatorEntryResponseBody& operator=(const CreateIPv6TranslatorEntryResponseBody &) = default ;
    CreateIPv6TranslatorEntryResponseBody& operator=(CreateIPv6TranslatorEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6TranslatorEntryId_ != nullptr
        && this->requestId_ != nullptr; };
    // ipv6TranslatorEntryId Field Functions 
    bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
    void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
    inline string ipv6TranslatorEntryId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorEntryId_, "") };
    inline CreateIPv6TranslatorEntryResponseBody& setIpv6TranslatorEntryId(string ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIPv6TranslatorEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the IPv6 Translation Service instance.
    std::shared_ptr<string> ipv6TranslatorEntryId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
