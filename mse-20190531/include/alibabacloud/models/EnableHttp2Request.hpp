// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEHTTP2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEHTTP2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class EnableHttp2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableHttp2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(EnableHttp2, enableHttp2_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableHttp2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(EnableHttp2, enableHttp2_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    EnableHttp2Request() = default ;
    EnableHttp2Request(const EnableHttp2Request &) = default ;
    EnableHttp2Request(EnableHttp2Request &&) = default ;
    EnableHttp2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableHttp2Request() = default ;
    EnableHttp2Request& operator=(const EnableHttp2Request &) = default ;
    EnableHttp2Request& operator=(EnableHttp2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->enableHttp2_ == nullptr && this->gatewayUniqueId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline EnableHttp2Request& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // enableHttp2 Field Functions 
    bool hasEnableHttp2() const { return this->enableHttp2_ != nullptr;};
    void deleteEnableHttp2() { this->enableHttp2_ = nullptr;};
    inline bool getEnableHttp2() const { DARABONBA_PTR_GET_DEFAULT(enableHttp2_, false) };
    inline EnableHttp2Request& setEnableHttp2(bool enableHttp2) { DARABONBA_PTR_SET_VALUE(enableHttp2_, enableHttp2) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline EnableHttp2Request& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to enable HTTP/2 for negotiation between the server and client. This parameter applies to requests. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    shared_ptr<bool> enableHttp2_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
