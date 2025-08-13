// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTECORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTECORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateGatewayRouteCORSRequestCorsJSON.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteCORSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteCORSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(CorsJSON, corsJSON_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteCORSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(CorsJSON, corsJSON_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateGatewayRouteCORSRequest() = default ;
    UpdateGatewayRouteCORSRequest(const UpdateGatewayRouteCORSRequest &) = default ;
    UpdateGatewayRouteCORSRequest(UpdateGatewayRouteCORSRequest &&) = default ;
    UpdateGatewayRouteCORSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteCORSRequest() = default ;
    UpdateGatewayRouteCORSRequest& operator=(const UpdateGatewayRouteCORSRequest &) = default ;
    UpdateGatewayRouteCORSRequest& operator=(UpdateGatewayRouteCORSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->corsJSON_ != nullptr && this->gatewayId_ != nullptr && this->gatewayUniqueId_ != nullptr && this->id_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteCORSRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // corsJSON Field Functions 
    bool hasCorsJSON() const { return this->corsJSON_ != nullptr;};
    void deleteCorsJSON() { this->corsJSON_ = nullptr;};
    inline const UpdateGatewayRouteCORSRequestCorsJSON & corsJSON() const { DARABONBA_PTR_GET_CONST(corsJSON_, UpdateGatewayRouteCORSRequestCorsJSON) };
    inline UpdateGatewayRouteCORSRequestCorsJSON corsJSON() { DARABONBA_PTR_GET(corsJSON_, UpdateGatewayRouteCORSRequestCorsJSON) };
    inline UpdateGatewayRouteCORSRequest& setCorsJSON(const UpdateGatewayRouteCORSRequestCorsJSON & corsJSON) { DARABONBA_PTR_SET_VALUE(corsJSON_, corsJSON) };
    inline UpdateGatewayRouteCORSRequest& setCorsJSON(UpdateGatewayRouteCORSRequestCorsJSON && corsJSON) { DARABONBA_PTR_SET_RVALUE(corsJSON_, corsJSON) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteCORSRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteCORSRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteCORSRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The language of the response. In compliance with [RFC 7231](https://tools.ietf.org/html/rfc7231), the backend service must return a response based on the language used by the user.
    // 
    // *   No default value.
    // *   zh-CN: Chinese
    // *   en-US: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The information about the CORS policy.
    std::shared_ptr<UpdateGatewayRouteCORSRequestCorsJSON> corsJSON_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the associated record.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
