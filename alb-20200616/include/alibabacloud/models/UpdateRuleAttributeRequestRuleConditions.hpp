// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsCookieConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsHostConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsMethodConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsPathConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsQueryStringConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsSourceIpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleConditions& obj) { 
      DARABONBA_PTR_TO_JSON(CookieConfig, cookieConfig_);
      DARABONBA_PTR_TO_JSON(HeaderConfig, headerConfig_);
      DARABONBA_PTR_TO_JSON(HostConfig, hostConfig_);
      DARABONBA_PTR_TO_JSON(MethodConfig, methodConfig_);
      DARABONBA_PTR_TO_JSON(PathConfig, pathConfig_);
      DARABONBA_PTR_TO_JSON(QueryStringConfig, queryStringConfig_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderConfig, responseHeaderConfig_);
      DARABONBA_PTR_TO_JSON(ResponseStatusCodeConfig, responseStatusCodeConfig_);
      DARABONBA_PTR_TO_JSON(SourceIpConfig, sourceIpConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(CookieConfig, cookieConfig_);
      DARABONBA_PTR_FROM_JSON(HeaderConfig, headerConfig_);
      DARABONBA_PTR_FROM_JSON(HostConfig, hostConfig_);
      DARABONBA_PTR_FROM_JSON(MethodConfig, methodConfig_);
      DARABONBA_PTR_FROM_JSON(PathConfig, pathConfig_);
      DARABONBA_PTR_FROM_JSON(QueryStringConfig, queryStringConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderConfig, responseHeaderConfig_);
      DARABONBA_PTR_FROM_JSON(ResponseStatusCodeConfig, responseStatusCodeConfig_);
      DARABONBA_PTR_FROM_JSON(SourceIpConfig, sourceIpConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateRuleAttributeRequestRuleConditions() = default ;
    UpdateRuleAttributeRequestRuleConditions(const UpdateRuleAttributeRequestRuleConditions &) = default ;
    UpdateRuleAttributeRequestRuleConditions(UpdateRuleAttributeRequestRuleConditions &&) = default ;
    UpdateRuleAttributeRequestRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleConditions() = default ;
    UpdateRuleAttributeRequestRuleConditions& operator=(const UpdateRuleAttributeRequestRuleConditions &) = default ;
    UpdateRuleAttributeRequestRuleConditions& operator=(UpdateRuleAttributeRequestRuleConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cookieConfig_ != nullptr
        && this->headerConfig_ != nullptr && this->hostConfig_ != nullptr && this->methodConfig_ != nullptr && this->pathConfig_ != nullptr && this->queryStringConfig_ != nullptr
        && this->responseHeaderConfig_ != nullptr && this->responseStatusCodeConfig_ != nullptr && this->sourceIpConfig_ != nullptr && this->type_ != nullptr; };
    // cookieConfig Field Functions 
    bool hasCookieConfig() const { return this->cookieConfig_ != nullptr;};
    void deleteCookieConfig() { this->cookieConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig & cookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig cookieConfig() { DARABONBA_PTR_GET(cookieConfig_, Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setCookieConfig(const Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setCookieConfig(Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


    // headerConfig Field Functions 
    bool hasHeaderConfig() const { return this->headerConfig_ != nullptr;};
    void deleteHeaderConfig() { this->headerConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig & headerConfig() const { DARABONBA_PTR_GET_CONST(headerConfig_, Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig headerConfig() { DARABONBA_PTR_GET(headerConfig_, Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setHeaderConfig(const Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig & headerConfig) { DARABONBA_PTR_SET_VALUE(headerConfig_, headerConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setHeaderConfig(Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig && headerConfig) { DARABONBA_PTR_SET_RVALUE(headerConfig_, headerConfig) };


    // hostConfig Field Functions 
    bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
    void deleteHostConfig() { this->hostConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsHostConfig & hostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, Models::UpdateRuleAttributeRequestRuleConditionsHostConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsHostConfig hostConfig() { DARABONBA_PTR_GET(hostConfig_, Models::UpdateRuleAttributeRequestRuleConditionsHostConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setHostConfig(const Models::UpdateRuleAttributeRequestRuleConditionsHostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setHostConfig(Models::UpdateRuleAttributeRequestRuleConditionsHostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


    // methodConfig Field Functions 
    bool hasMethodConfig() const { return this->methodConfig_ != nullptr;};
    void deleteMethodConfig() { this->methodConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig & methodConfig() const { DARABONBA_PTR_GET_CONST(methodConfig_, Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig methodConfig() { DARABONBA_PTR_GET(methodConfig_, Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setMethodConfig(const Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig & methodConfig) { DARABONBA_PTR_SET_VALUE(methodConfig_, methodConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setMethodConfig(Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig && methodConfig) { DARABONBA_PTR_SET_RVALUE(methodConfig_, methodConfig) };


    // pathConfig Field Functions 
    bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
    void deletePathConfig() { this->pathConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsPathConfig & pathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, Models::UpdateRuleAttributeRequestRuleConditionsPathConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsPathConfig pathConfig() { DARABONBA_PTR_GET(pathConfig_, Models::UpdateRuleAttributeRequestRuleConditionsPathConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setPathConfig(const Models::UpdateRuleAttributeRequestRuleConditionsPathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setPathConfig(Models::UpdateRuleAttributeRequestRuleConditionsPathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


    // queryStringConfig Field Functions 
    bool hasQueryStringConfig() const { return this->queryStringConfig_ != nullptr;};
    void deleteQueryStringConfig() { this->queryStringConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig & queryStringConfig() const { DARABONBA_PTR_GET_CONST(queryStringConfig_, Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig queryStringConfig() { DARABONBA_PTR_GET(queryStringConfig_, Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setQueryStringConfig(const Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig & queryStringConfig) { DARABONBA_PTR_SET_VALUE(queryStringConfig_, queryStringConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setQueryStringConfig(Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig && queryStringConfig) { DARABONBA_PTR_SET_RVALUE(queryStringConfig_, queryStringConfig) };


    // responseHeaderConfig Field Functions 
    bool hasResponseHeaderConfig() const { return this->responseHeaderConfig_ != nullptr;};
    void deleteResponseHeaderConfig() { this->responseHeaderConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig & responseHeaderConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderConfig_, Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig responseHeaderConfig() { DARABONBA_PTR_GET(responseHeaderConfig_, Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setResponseHeaderConfig(const Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig & responseHeaderConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderConfig_, responseHeaderConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setResponseHeaderConfig(Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig && responseHeaderConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderConfig_, responseHeaderConfig) };


    // responseStatusCodeConfig Field Functions 
    bool hasResponseStatusCodeConfig() const { return this->responseStatusCodeConfig_ != nullptr;};
    void deleteResponseStatusCodeConfig() { this->responseStatusCodeConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig() const { DARABONBA_PTR_GET_CONST(responseStatusCodeConfig_, Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig responseStatusCodeConfig() { DARABONBA_PTR_GET(responseStatusCodeConfig_, Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setResponseStatusCodeConfig(const Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig) { DARABONBA_PTR_SET_VALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setResponseStatusCodeConfig(Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig && responseStatusCodeConfig) { DARABONBA_PTR_SET_RVALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };


    // sourceIpConfig Field Functions 
    bool hasSourceIpConfig() const { return this->sourceIpConfig_ != nullptr;};
    void deleteSourceIpConfig() { this->sourceIpConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig & sourceIpConfig() const { DARABONBA_PTR_GET_CONST(sourceIpConfig_, Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig) };
    inline Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig sourceIpConfig() { DARABONBA_PTR_GET(sourceIpConfig_, Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setSourceIpConfig(const Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig & sourceIpConfig) { DARABONBA_PTR_SET_VALUE(sourceIpConfig_, sourceIpConfig) };
    inline UpdateRuleAttributeRequestRuleConditions& setSourceIpConfig(Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig && sourceIpConfig) { DARABONBA_PTR_SET_RVALUE(sourceIpConfig_, sourceIpConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRuleAttributeRequestRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The key-value pairs of the cookie.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfig> cookieConfig_ = nullptr;
    // The configuration of the header.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsHeaderConfig> headerConfig_ = nullptr;
    // The configuration of the hosts.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsHostConfig> hostConfig_ = nullptr;
    // The configuration of the request method.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsMethodConfig> methodConfig_ = nullptr;
    // The configuration of the forwarding URL.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsPathConfig> pathConfig_ = nullptr;
    // The configuration of the query strings.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfig> queryStringConfig_ = nullptr;
    // The configuration of headers.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig> responseHeaderConfig_ = nullptr;
    // The configuration of the response status codes.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsResponseStatusCodeConfig> responseStatusCodeConfig_ = nullptr;
    // Traffic matching based on source IP addresses. You can specify up to five IP addresses, including CIDR blocks.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleConditionsSourceIpConfig> sourceIpConfig_ = nullptr;
    // The type of forwarding rule. You can specify up to seven types of forwarding rule. Valid values:
    // 
    // *   **Host**: Requests are forwarded based on hosts.
    // *   **Path**: Requests are forwarded based on URLs.
    // *   **Header**: Requests are forwarded based on HTTP headers.
    // *   **QueryString**: Requests are forwarded based on query strings.
    // *   **Method**: Requests are forwarded based on request methods.
    // *   **Cookie**: Requests are forwarded based on cookies.
    // *   **SourceIp**: Requests are forwarded based on source IP addresses.
    // *   **ResponseHeader**: Requests are forwarded based on HTTP response headers.
    // *   **ResponseStatusCode**: Requests are forwarded based on response status codes.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
