// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsCookieConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsHeaderConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsHostConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsMethodConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsPathConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsQueryStringConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsResponseHeaderConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsResponseStatusCodeConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsSourceIpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleConditions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleConditions& obj) { 
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
    CreateRuleRequestRuleConditions() = default ;
    CreateRuleRequestRuleConditions(const CreateRuleRequestRuleConditions &) = default ;
    CreateRuleRequestRuleConditions(CreateRuleRequestRuleConditions &&) = default ;
    CreateRuleRequestRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleConditions() = default ;
    CreateRuleRequestRuleConditions& operator=(const CreateRuleRequestRuleConditions &) = default ;
    CreateRuleRequestRuleConditions& operator=(CreateRuleRequestRuleConditions &&) = default ;
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
    inline const Models::CreateRuleRequestRuleConditionsCookieConfig & cookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, Models::CreateRuleRequestRuleConditionsCookieConfig) };
    inline Models::CreateRuleRequestRuleConditionsCookieConfig cookieConfig() { DARABONBA_PTR_GET(cookieConfig_, Models::CreateRuleRequestRuleConditionsCookieConfig) };
    inline CreateRuleRequestRuleConditions& setCookieConfig(const Models::CreateRuleRequestRuleConditionsCookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
    inline CreateRuleRequestRuleConditions& setCookieConfig(Models::CreateRuleRequestRuleConditionsCookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


    // headerConfig Field Functions 
    bool hasHeaderConfig() const { return this->headerConfig_ != nullptr;};
    void deleteHeaderConfig() { this->headerConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsHeaderConfig & headerConfig() const { DARABONBA_PTR_GET_CONST(headerConfig_, Models::CreateRuleRequestRuleConditionsHeaderConfig) };
    inline Models::CreateRuleRequestRuleConditionsHeaderConfig headerConfig() { DARABONBA_PTR_GET(headerConfig_, Models::CreateRuleRequestRuleConditionsHeaderConfig) };
    inline CreateRuleRequestRuleConditions& setHeaderConfig(const Models::CreateRuleRequestRuleConditionsHeaderConfig & headerConfig) { DARABONBA_PTR_SET_VALUE(headerConfig_, headerConfig) };
    inline CreateRuleRequestRuleConditions& setHeaderConfig(Models::CreateRuleRequestRuleConditionsHeaderConfig && headerConfig) { DARABONBA_PTR_SET_RVALUE(headerConfig_, headerConfig) };


    // hostConfig Field Functions 
    bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
    void deleteHostConfig() { this->hostConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsHostConfig & hostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, Models::CreateRuleRequestRuleConditionsHostConfig) };
    inline Models::CreateRuleRequestRuleConditionsHostConfig hostConfig() { DARABONBA_PTR_GET(hostConfig_, Models::CreateRuleRequestRuleConditionsHostConfig) };
    inline CreateRuleRequestRuleConditions& setHostConfig(const Models::CreateRuleRequestRuleConditionsHostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
    inline CreateRuleRequestRuleConditions& setHostConfig(Models::CreateRuleRequestRuleConditionsHostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


    // methodConfig Field Functions 
    bool hasMethodConfig() const { return this->methodConfig_ != nullptr;};
    void deleteMethodConfig() { this->methodConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsMethodConfig & methodConfig() const { DARABONBA_PTR_GET_CONST(methodConfig_, Models::CreateRuleRequestRuleConditionsMethodConfig) };
    inline Models::CreateRuleRequestRuleConditionsMethodConfig methodConfig() { DARABONBA_PTR_GET(methodConfig_, Models::CreateRuleRequestRuleConditionsMethodConfig) };
    inline CreateRuleRequestRuleConditions& setMethodConfig(const Models::CreateRuleRequestRuleConditionsMethodConfig & methodConfig) { DARABONBA_PTR_SET_VALUE(methodConfig_, methodConfig) };
    inline CreateRuleRequestRuleConditions& setMethodConfig(Models::CreateRuleRequestRuleConditionsMethodConfig && methodConfig) { DARABONBA_PTR_SET_RVALUE(methodConfig_, methodConfig) };


    // pathConfig Field Functions 
    bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
    void deletePathConfig() { this->pathConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsPathConfig & pathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, Models::CreateRuleRequestRuleConditionsPathConfig) };
    inline Models::CreateRuleRequestRuleConditionsPathConfig pathConfig() { DARABONBA_PTR_GET(pathConfig_, Models::CreateRuleRequestRuleConditionsPathConfig) };
    inline CreateRuleRequestRuleConditions& setPathConfig(const Models::CreateRuleRequestRuleConditionsPathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
    inline CreateRuleRequestRuleConditions& setPathConfig(Models::CreateRuleRequestRuleConditionsPathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


    // queryStringConfig Field Functions 
    bool hasQueryStringConfig() const { return this->queryStringConfig_ != nullptr;};
    void deleteQueryStringConfig() { this->queryStringConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsQueryStringConfig & queryStringConfig() const { DARABONBA_PTR_GET_CONST(queryStringConfig_, Models::CreateRuleRequestRuleConditionsQueryStringConfig) };
    inline Models::CreateRuleRequestRuleConditionsQueryStringConfig queryStringConfig() { DARABONBA_PTR_GET(queryStringConfig_, Models::CreateRuleRequestRuleConditionsQueryStringConfig) };
    inline CreateRuleRequestRuleConditions& setQueryStringConfig(const Models::CreateRuleRequestRuleConditionsQueryStringConfig & queryStringConfig) { DARABONBA_PTR_SET_VALUE(queryStringConfig_, queryStringConfig) };
    inline CreateRuleRequestRuleConditions& setQueryStringConfig(Models::CreateRuleRequestRuleConditionsQueryStringConfig && queryStringConfig) { DARABONBA_PTR_SET_RVALUE(queryStringConfig_, queryStringConfig) };


    // responseHeaderConfig Field Functions 
    bool hasResponseHeaderConfig() const { return this->responseHeaderConfig_ != nullptr;};
    void deleteResponseHeaderConfig() { this->responseHeaderConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsResponseHeaderConfig & responseHeaderConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderConfig_, Models::CreateRuleRequestRuleConditionsResponseHeaderConfig) };
    inline Models::CreateRuleRequestRuleConditionsResponseHeaderConfig responseHeaderConfig() { DARABONBA_PTR_GET(responseHeaderConfig_, Models::CreateRuleRequestRuleConditionsResponseHeaderConfig) };
    inline CreateRuleRequestRuleConditions& setResponseHeaderConfig(const Models::CreateRuleRequestRuleConditionsResponseHeaderConfig & responseHeaderConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderConfig_, responseHeaderConfig) };
    inline CreateRuleRequestRuleConditions& setResponseHeaderConfig(Models::CreateRuleRequestRuleConditionsResponseHeaderConfig && responseHeaderConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderConfig_, responseHeaderConfig) };


    // responseStatusCodeConfig Field Functions 
    bool hasResponseStatusCodeConfig() const { return this->responseStatusCodeConfig_ != nullptr;};
    void deleteResponseStatusCodeConfig() { this->responseStatusCodeConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig() const { DARABONBA_PTR_GET_CONST(responseStatusCodeConfig_, Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig) };
    inline Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig responseStatusCodeConfig() { DARABONBA_PTR_GET(responseStatusCodeConfig_, Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig) };
    inline CreateRuleRequestRuleConditions& setResponseStatusCodeConfig(const Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig) { DARABONBA_PTR_SET_VALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };
    inline CreateRuleRequestRuleConditions& setResponseStatusCodeConfig(Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig && responseStatusCodeConfig) { DARABONBA_PTR_SET_RVALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };


    // sourceIpConfig Field Functions 
    bool hasSourceIpConfig() const { return this->sourceIpConfig_ != nullptr;};
    void deleteSourceIpConfig() { this->sourceIpConfig_ = nullptr;};
    inline const Models::CreateRuleRequestRuleConditionsSourceIpConfig & sourceIpConfig() const { DARABONBA_PTR_GET_CONST(sourceIpConfig_, Models::CreateRuleRequestRuleConditionsSourceIpConfig) };
    inline Models::CreateRuleRequestRuleConditionsSourceIpConfig sourceIpConfig() { DARABONBA_PTR_GET(sourceIpConfig_, Models::CreateRuleRequestRuleConditionsSourceIpConfig) };
    inline CreateRuleRequestRuleConditions& setSourceIpConfig(const Models::CreateRuleRequestRuleConditionsSourceIpConfig & sourceIpConfig) { DARABONBA_PTR_SET_VALUE(sourceIpConfig_, sourceIpConfig) };
    inline CreateRuleRequestRuleConditions& setSourceIpConfig(Models::CreateRuleRequestRuleConditionsSourceIpConfig && sourceIpConfig) { DARABONBA_PTR_SET_RVALUE(sourceIpConfig_, sourceIpConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRuleRequestRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The key-value pairs of the cookie.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsCookieConfig> cookieConfig_ = nullptr;
    // The configuration of the header.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsHeaderConfig> headerConfig_ = nullptr;
    // The configuration of the host.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsHostConfig> hostConfig_ = nullptr;
    // The configurations of the request method.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsMethodConfig> methodConfig_ = nullptr;
    // The configurations of the URL to which requests are forwarded.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsPathConfig> pathConfig_ = nullptr;
    // The configuration of the query strings.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsQueryStringConfig> queryStringConfig_ = nullptr;
    // The configuration of headers.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsResponseHeaderConfig> responseHeaderConfig_ = nullptr;
    // The configuration of the response status codes.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsResponseStatusCodeConfig> responseStatusCodeConfig_ = nullptr;
    // Configuration of traffic matching based on source IP addresses. This parameter is required and valid when **Type** is set to **SourceIP**.
    std::shared_ptr<Models::CreateRuleRequestRuleConditionsSourceIpConfig> sourceIpConfig_ = nullptr;
    // The type of forwarding rule. Valid values:
    // 
    // *   **Host**: Requests are distributed based on hosts.
    // *   **Path**: Requests are distributed based on paths.
    // *   **Header**: Requests are distributed based on HTTP headers.
    // *   **QueryString**: Requests are distributed based on query strings.
    // *   **Method**: Requests are distributed based on request methods.
    // *   **Cookie**: Requests are distributed based on cookies.
    // *   **SourceIp**: Requests are forwarded based on source IP addresses.
    // *   **ResponseHeader**: Requests are forwarded based on HTTP response headers.
    // *   **ResponseStatusCode**: Requests are forwarded based on response status codes.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
