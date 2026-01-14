// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEPROXYPROTOCOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEPROXYPROTOCOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class EnableProxyProtocolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableProxyProtocolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(EnableProxyProtocol, enableProxyProtocol_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableProxyProtocolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(EnableProxyProtocol, enableProxyProtocol_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    EnableProxyProtocolRequest() = default ;
    EnableProxyProtocolRequest(const EnableProxyProtocolRequest &) = default ;
    EnableProxyProtocolRequest(EnableProxyProtocolRequest &&) = default ;
    EnableProxyProtocolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableProxyProtocolRequest() = default ;
    EnableProxyProtocolRequest& operator=(const EnableProxyProtocolRequest &) = default ;
    EnableProxyProtocolRequest& operator=(EnableProxyProtocolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->enableProxyProtocol_ == nullptr && this->gatewayUniqueId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline EnableProxyProtocolRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // enableProxyProtocol Field Functions 
    bool hasEnableProxyProtocol() const { return this->enableProxyProtocol_ != nullptr;};
    void deleteEnableProxyProtocol() { this->enableProxyProtocol_ = nullptr;};
    inline bool getEnableProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(enableProxyProtocol_, false) };
    inline EnableProxyProtocolRequest& setEnableProxyProtocol(bool enableProxyProtocol) { DARABONBA_PTR_SET_VALUE(enableProxyProtocol_, enableProxyProtocol) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline EnableProxyProtocolRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to use the proxy protocol to preserve client IP addresses. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // This parameter is required.
    shared_ptr<bool> enableProxyProtocol_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
