// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEHTTPREWRITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEHTTPREWRITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteHTTPRewriteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteHTTPRewriteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(HttpRewriteJSON, httpRewriteJSON_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteHTTPRewriteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(HttpRewriteJSON, httpRewriteJSON_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateGatewayRouteHTTPRewriteRequest() = default ;
    UpdateGatewayRouteHTTPRewriteRequest(const UpdateGatewayRouteHTTPRewriteRequest &) = default ;
    UpdateGatewayRouteHTTPRewriteRequest(UpdateGatewayRouteHTTPRewriteRequest &&) = default ;
    UpdateGatewayRouteHTTPRewriteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteHTTPRewriteRequest() = default ;
    UpdateGatewayRouteHTTPRewriteRequest& operator=(const UpdateGatewayRouteHTTPRewriteRequest &) = default ;
    UpdateGatewayRouteHTTPRewriteRequest& operator=(UpdateGatewayRouteHTTPRewriteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->httpRewriteJSON_ != nullptr && this->id_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteHTTPRewriteRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteHTTPRewriteRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteHTTPRewriteRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // httpRewriteJSON Field Functions 
    bool hasHttpRewriteJSON() const { return this->httpRewriteJSON_ != nullptr;};
    void deleteHttpRewriteJSON() { this->httpRewriteJSON_ = nullptr;};
    inline string httpRewriteJSON() const { DARABONBA_PTR_GET_DEFAULT(httpRewriteJSON_, "") };
    inline UpdateGatewayRouteHTTPRewriteRequest& setHttpRewriteJSON(string httpRewriteJSON) { DARABONBA_PTR_SET_VALUE(httpRewriteJSON_, httpRewriteJSON) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteHTTPRewriteRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The information about the rewrite policy. The JSON format is supported.
    std::shared_ptr<string> httpRewriteJSON_ = nullptr;
    // The ID of the route.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
