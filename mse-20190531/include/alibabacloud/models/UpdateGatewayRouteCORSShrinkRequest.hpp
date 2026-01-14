// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTECORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTECORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteCORSShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteCORSShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(CorsJSON, corsJSONShrink_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteCORSShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(CorsJSON, corsJSONShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateGatewayRouteCORSShrinkRequest() = default ;
    UpdateGatewayRouteCORSShrinkRequest(const UpdateGatewayRouteCORSShrinkRequest &) = default ;
    UpdateGatewayRouteCORSShrinkRequest(UpdateGatewayRouteCORSShrinkRequest &&) = default ;
    UpdateGatewayRouteCORSShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteCORSShrinkRequest() = default ;
    UpdateGatewayRouteCORSShrinkRequest& operator=(const UpdateGatewayRouteCORSShrinkRequest &) = default ;
    UpdateGatewayRouteCORSShrinkRequest& operator=(UpdateGatewayRouteCORSShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->corsJSONShrink_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteCORSShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // corsJSONShrink Field Functions 
    bool hasCorsJSONShrink() const { return this->corsJSONShrink_ != nullptr;};
    void deleteCorsJSONShrink() { this->corsJSONShrink_ = nullptr;};
    inline string getCorsJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(corsJSONShrink_, "") };
    inline UpdateGatewayRouteCORSShrinkRequest& setCorsJSONShrink(string corsJSONShrink) { DARABONBA_PTR_SET_VALUE(corsJSONShrink_, corsJSONShrink) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteCORSShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteCORSShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteCORSShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The language of the response. In compliance with [RFC 7231](https://tools.ietf.org/html/rfc7231), the backend service must return a response based on the language used by the user.
    // 
    // *   No default value.
    // *   zh-CN: Chinese
    // *   en-US: English
    shared_ptr<string> acceptLanguage_ {};
    // The information about the CORS policy.
    shared_ptr<string> corsJSONShrink_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the associated record.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
