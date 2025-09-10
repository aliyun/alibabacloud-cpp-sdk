// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayDomainsResponseBodyCustomDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGatewayDomainsResponseBody() = default ;
    ListGatewayDomainsResponseBody(const ListGatewayDomainsResponseBody &) = default ;
    ListGatewayDomainsResponseBody(ListGatewayDomainsResponseBody &&) = default ;
    ListGatewayDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayDomainsResponseBody() = default ;
    ListGatewayDomainsResponseBody& operator=(const ListGatewayDomainsResponseBody &) = default ;
    ListGatewayDomainsResponseBody& operator=(ListGatewayDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customDomains_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<ListGatewayDomainsResponseBodyCustomDomains> & customDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<ListGatewayDomainsResponseBodyCustomDomains>) };
    inline vector<ListGatewayDomainsResponseBodyCustomDomains> customDomains() { DARABONBA_PTR_GET(customDomains_, vector<ListGatewayDomainsResponseBodyCustomDomains>) };
    inline ListGatewayDomainsResponseBody& setCustomDomains(const vector<ListGatewayDomainsResponseBodyCustomDomains> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline ListGatewayDomainsResponseBody& setCustomDomains(vector<ListGatewayDomainsResponseBodyCustomDomains> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayDomainsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The custom domain names.
    std::shared_ptr<vector<ListGatewayDomainsResponseBodyCustomDomains>> customDomains_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
