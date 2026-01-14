// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRetryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRetryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RetryJSON, retryJSON_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRetryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RetryJSON, retryJSON_);
    };
    UpdateGatewayRouteRetryRequest() = default ;
    UpdateGatewayRouteRetryRequest(const UpdateGatewayRouteRetryRequest &) = default ;
    UpdateGatewayRouteRetryRequest(UpdateGatewayRouteRetryRequest &&) = default ;
    UpdateGatewayRouteRetryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRetryRequest() = default ;
    UpdateGatewayRouteRetryRequest& operator=(const UpdateGatewayRouteRetryRequest &) = default ;
    UpdateGatewayRouteRetryRequest& operator=(UpdateGatewayRouteRetryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetryJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetryJSON& obj) { 
        DARABONBA_PTR_TO_JSON(Attempts, attempts_);
        DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
        DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RetryJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
        DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
        DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RetryJSON() = default ;
      RetryJSON(const RetryJSON &) = default ;
      RetryJSON(RetryJSON &&) = default ;
      RetryJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetryJSON() = default ;
      RetryJSON& operator=(const RetryJSON &) = default ;
      RetryJSON& operator=(RetryJSON &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attempts_ == nullptr
        && this->httpCodes_ == nullptr && this->retryOn_ == nullptr && this->status_ == nullptr; };
      // attempts Field Functions 
      bool hasAttempts() const { return this->attempts_ != nullptr;};
      void deleteAttempts() { this->attempts_ = nullptr;};
      inline int32_t getAttempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0) };
      inline RetryJSON& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


      // httpCodes Field Functions 
      bool hasHttpCodes() const { return this->httpCodes_ != nullptr;};
      void deleteHttpCodes() { this->httpCodes_ = nullptr;};
      inline const vector<string> & getHttpCodes() const { DARABONBA_PTR_GET_CONST(httpCodes_, vector<string>) };
      inline vector<string> getHttpCodes() { DARABONBA_PTR_GET(httpCodes_, vector<string>) };
      inline RetryJSON& setHttpCodes(const vector<string> & httpCodes) { DARABONBA_PTR_SET_VALUE(httpCodes_, httpCodes) };
      inline RetryJSON& setHttpCodes(vector<string> && httpCodes) { DARABONBA_PTR_SET_RVALUE(httpCodes_, httpCodes) };


      // retryOn Field Functions 
      bool hasRetryOn() const { return this->retryOn_ != nullptr;};
      void deleteRetryOn() { this->retryOn_ = nullptr;};
      inline const vector<string> & getRetryOn() const { DARABONBA_PTR_GET_CONST(retryOn_, vector<string>) };
      inline vector<string> getRetryOn() { DARABONBA_PTR_GET(retryOn_, vector<string>) };
      inline RetryJSON& setRetryOn(const vector<string> & retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };
      inline RetryJSON& setRetryOn(vector<string> && retryOn) { DARABONBA_PTR_SET_RVALUE(retryOn_, retryOn) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RetryJSON& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The number of retries.
      shared_ptr<int32_t> attempts_ {};
      // The HTTP status codes.
      shared_ptr<vector<string>> httpCodes_ {};
      // The retry conditions.
      shared_ptr<vector<string>> retryOn_ {};
      // The status of the policy.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr && this->retryJSON_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteRetryRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteRetryRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteRetryRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteRetryRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // retryJSON Field Functions 
    bool hasRetryJSON() const { return this->retryJSON_ != nullptr;};
    void deleteRetryJSON() { this->retryJSON_ = nullptr;};
    inline const UpdateGatewayRouteRetryRequest::RetryJSON & getRetryJSON() const { DARABONBA_PTR_GET_CONST(retryJSON_, UpdateGatewayRouteRetryRequest::RetryJSON) };
    inline UpdateGatewayRouteRetryRequest::RetryJSON getRetryJSON() { DARABONBA_PTR_GET(retryJSON_, UpdateGatewayRouteRetryRequest::RetryJSON) };
    inline UpdateGatewayRouteRetryRequest& setRetryJSON(const UpdateGatewayRouteRetryRequest::RetryJSON & retryJSON) { DARABONBA_PTR_SET_VALUE(retryJSON_, retryJSON) };
    inline UpdateGatewayRouteRetryRequest& setRetryJSON(UpdateGatewayRouteRetryRequest::RetryJSON && retryJSON) { DARABONBA_PTR_SET_RVALUE(retryJSON_, retryJSON) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the associated record.
    shared_ptr<int64_t> id_ {};
    // The information about the retry policy.
    shared_ptr<UpdateGatewayRouteRetryRequest::RetryJSON> retryJSON_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
