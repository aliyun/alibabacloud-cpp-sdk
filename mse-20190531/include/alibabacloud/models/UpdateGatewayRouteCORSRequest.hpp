// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTECORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTECORSREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class CorsJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CorsJSON& obj) { 
        DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
        DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
        DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
        DARABONBA_PTR_TO_JSON(AllowOrigins, allowOrigins_);
        DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
        DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
      };
      friend void from_json(const Darabonba::Json& j, CorsJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
        DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
        DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
        DARABONBA_PTR_FROM_JSON(AllowOrigins, allowOrigins_);
        DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
      };
      CorsJSON() = default ;
      CorsJSON(const CorsJSON &) = default ;
      CorsJSON(CorsJSON &&) = default ;
      CorsJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CorsJSON() = default ;
      CorsJSON& operator=(const CorsJSON &) = default ;
      CorsJSON& operator=(CorsJSON &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowCredentials_ == nullptr
        && this->allowHeaders_ == nullptr && this->allowMethods_ == nullptr && this->allowOrigins_ == nullptr && this->exposeHeaders_ == nullptr && this->status_ == nullptr
        && this->timeUnit_ == nullptr && this->unitNum_ == nullptr; };
      // allowCredentials Field Functions 
      bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
      void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
      inline bool getAllowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, false) };
      inline CorsJSON& setAllowCredentials(bool allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


      // allowHeaders Field Functions 
      bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
      void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
      inline string getAllowHeaders() const { DARABONBA_PTR_GET_DEFAULT(allowHeaders_, "") };
      inline CorsJSON& setAllowHeaders(string allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };


      // allowMethods Field Functions 
      bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
      void deleteAllowMethods() { this->allowMethods_ = nullptr;};
      inline string getAllowMethods() const { DARABONBA_PTR_GET_DEFAULT(allowMethods_, "") };
      inline CorsJSON& setAllowMethods(string allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };


      // allowOrigins Field Functions 
      bool hasAllowOrigins() const { return this->allowOrigins_ != nullptr;};
      void deleteAllowOrigins() { this->allowOrigins_ = nullptr;};
      inline string getAllowOrigins() const { DARABONBA_PTR_GET_DEFAULT(allowOrigins_, "") };
      inline CorsJSON& setAllowOrigins(string allowOrigins) { DARABONBA_PTR_SET_VALUE(allowOrigins_, allowOrigins) };


      // exposeHeaders Field Functions 
      bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
      void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
      inline string getExposeHeaders() const { DARABONBA_PTR_GET_DEFAULT(exposeHeaders_, "") };
      inline CorsJSON& setExposeHeaders(string exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CorsJSON& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline CorsJSON& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // unitNum Field Functions 
      bool hasUnitNum() const { return this->unitNum_ != nullptr;};
      void deleteUnitNum() { this->unitNum_ = nullptr;};
      inline int64_t getUnitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0L) };
      inline CorsJSON& setUnitNum(int64_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


    protected:
      // The credentials allowed.
      shared_ptr<bool> allowCredentials_ {};
      // The request headers allowed.
      shared_ptr<string> allowHeaders_ {};
      // The HTTP methods allowed.
      shared_ptr<string> allowMethods_ {};
      // The origins from which access is allowed.
      shared_ptr<string> allowOrigins_ {};
      // The response headers allowed.
      shared_ptr<string> exposeHeaders_ {};
      // The status of the policy.
      shared_ptr<string> status_ {};
      // The unit of time.
      shared_ptr<string> timeUnit_ {};
      // The value of time.
      shared_ptr<int64_t> unitNum_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->corsJSON_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteCORSRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // corsJSON Field Functions 
    bool hasCorsJSON() const { return this->corsJSON_ != nullptr;};
    void deleteCorsJSON() { this->corsJSON_ = nullptr;};
    inline const UpdateGatewayRouteCORSRequest::CorsJSON & getCorsJSON() const { DARABONBA_PTR_GET_CONST(corsJSON_, UpdateGatewayRouteCORSRequest::CorsJSON) };
    inline UpdateGatewayRouteCORSRequest::CorsJSON getCorsJSON() { DARABONBA_PTR_GET(corsJSON_, UpdateGatewayRouteCORSRequest::CorsJSON) };
    inline UpdateGatewayRouteCORSRequest& setCorsJSON(const UpdateGatewayRouteCORSRequest::CorsJSON & corsJSON) { DARABONBA_PTR_SET_VALUE(corsJSON_, corsJSON) };
    inline UpdateGatewayRouteCORSRequest& setCorsJSON(UpdateGatewayRouteCORSRequest::CorsJSON && corsJSON) { DARABONBA_PTR_SET_RVALUE(corsJSON_, corsJSON) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteCORSRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteCORSRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteCORSRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The language of the response. In compliance with [RFC 7231](https://tools.ietf.org/html/rfc7231), the backend service must return a response based on the language used by the user.
    // 
    // *   No default value.
    // *   zh-CN: Chinese
    // *   en-US: English
    shared_ptr<string> acceptLanguage_ {};
    // The information about the CORS policy.
    shared_ptr<UpdateGatewayRouteCORSRequest::CorsJSON> corsJSON_ {};
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
