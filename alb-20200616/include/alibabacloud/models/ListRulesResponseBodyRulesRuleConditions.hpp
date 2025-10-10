// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsCookieConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsHeaderConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsHostConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsMethodConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsPathConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsQueryStringConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditionsSourceIpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleConditions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleConditions& obj) { 
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
    ListRulesResponseBodyRulesRuleConditions() = default ;
    ListRulesResponseBodyRulesRuleConditions(const ListRulesResponseBodyRulesRuleConditions &) = default ;
    ListRulesResponseBodyRulesRuleConditions(ListRulesResponseBodyRulesRuleConditions &&) = default ;
    ListRulesResponseBodyRulesRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleConditions() = default ;
    ListRulesResponseBodyRulesRuleConditions& operator=(const ListRulesResponseBodyRulesRuleConditions &) = default ;
    ListRulesResponseBodyRulesRuleConditions& operator=(ListRulesResponseBodyRulesRuleConditions &&) = default ;
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
    inline const Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig & cookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig cookieConfig() { DARABONBA_PTR_GET(cookieConfig_, Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setCookieConfig(const Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setCookieConfig(Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


    // headerConfig Field Functions 
    bool hasHeaderConfig() const { return this->headerConfig_ != nullptr;};
    void deleteHeaderConfig() { this->headerConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig & headerConfig() const { DARABONBA_PTR_GET_CONST(headerConfig_, Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig headerConfig() { DARABONBA_PTR_GET(headerConfig_, Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setHeaderConfig(const Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig & headerConfig) { DARABONBA_PTR_SET_VALUE(headerConfig_, headerConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setHeaderConfig(Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig && headerConfig) { DARABONBA_PTR_SET_RVALUE(headerConfig_, headerConfig) };


    // hostConfig Field Functions 
    bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
    void deleteHostConfig() { this->hostConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsHostConfig & hostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, Models::ListRulesResponseBodyRulesRuleConditionsHostConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsHostConfig hostConfig() { DARABONBA_PTR_GET(hostConfig_, Models::ListRulesResponseBodyRulesRuleConditionsHostConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setHostConfig(const Models::ListRulesResponseBodyRulesRuleConditionsHostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setHostConfig(Models::ListRulesResponseBodyRulesRuleConditionsHostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


    // methodConfig Field Functions 
    bool hasMethodConfig() const { return this->methodConfig_ != nullptr;};
    void deleteMethodConfig() { this->methodConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig & methodConfig() const { DARABONBA_PTR_GET_CONST(methodConfig_, Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig methodConfig() { DARABONBA_PTR_GET(methodConfig_, Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setMethodConfig(const Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig & methodConfig) { DARABONBA_PTR_SET_VALUE(methodConfig_, methodConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setMethodConfig(Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig && methodConfig) { DARABONBA_PTR_SET_RVALUE(methodConfig_, methodConfig) };


    // pathConfig Field Functions 
    bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
    void deletePathConfig() { this->pathConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsPathConfig & pathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, Models::ListRulesResponseBodyRulesRuleConditionsPathConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsPathConfig pathConfig() { DARABONBA_PTR_GET(pathConfig_, Models::ListRulesResponseBodyRulesRuleConditionsPathConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setPathConfig(const Models::ListRulesResponseBodyRulesRuleConditionsPathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setPathConfig(Models::ListRulesResponseBodyRulesRuleConditionsPathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


    // queryStringConfig Field Functions 
    bool hasQueryStringConfig() const { return this->queryStringConfig_ != nullptr;};
    void deleteQueryStringConfig() { this->queryStringConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig & queryStringConfig() const { DARABONBA_PTR_GET_CONST(queryStringConfig_, Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig queryStringConfig() { DARABONBA_PTR_GET(queryStringConfig_, Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setQueryStringConfig(const Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig & queryStringConfig) { DARABONBA_PTR_SET_VALUE(queryStringConfig_, queryStringConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setQueryStringConfig(Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig && queryStringConfig) { DARABONBA_PTR_SET_RVALUE(queryStringConfig_, queryStringConfig) };


    // responseHeaderConfig Field Functions 
    bool hasResponseHeaderConfig() const { return this->responseHeaderConfig_ != nullptr;};
    void deleteResponseHeaderConfig() { this->responseHeaderConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig & responseHeaderConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderConfig_, Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig responseHeaderConfig() { DARABONBA_PTR_GET(responseHeaderConfig_, Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setResponseHeaderConfig(const Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig & responseHeaderConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderConfig_, responseHeaderConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setResponseHeaderConfig(Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig && responseHeaderConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderConfig_, responseHeaderConfig) };


    // responseStatusCodeConfig Field Functions 
    bool hasResponseStatusCodeConfig() const { return this->responseStatusCodeConfig_ != nullptr;};
    void deleteResponseStatusCodeConfig() { this->responseStatusCodeConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig() const { DARABONBA_PTR_GET_CONST(responseStatusCodeConfig_, Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig responseStatusCodeConfig() { DARABONBA_PTR_GET(responseStatusCodeConfig_, Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setResponseStatusCodeConfig(const Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig) { DARABONBA_PTR_SET_VALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setResponseStatusCodeConfig(Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig && responseStatusCodeConfig) { DARABONBA_PTR_SET_RVALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };


    // sourceIpConfig Field Functions 
    bool hasSourceIpConfig() const { return this->sourceIpConfig_ != nullptr;};
    void deleteSourceIpConfig() { this->sourceIpConfig_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig & sourceIpConfig() const { DARABONBA_PTR_GET_CONST(sourceIpConfig_, Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig) };
    inline Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig sourceIpConfig() { DARABONBA_PTR_GET(sourceIpConfig_, Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setSourceIpConfig(const Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig & sourceIpConfig) { DARABONBA_PTR_SET_VALUE(sourceIpConfig_, sourceIpConfig) };
    inline ListRulesResponseBodyRulesRuleConditions& setSourceIpConfig(Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig && sourceIpConfig) { DARABONBA_PTR_SET_RVALUE(sourceIpConfig_, sourceIpConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRulesResponseBodyRulesRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The key-value pairs of the cookie.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsCookieConfig> cookieConfig_ = nullptr;
    // The configuration of the header.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsHeaderConfig> headerConfig_ = nullptr;
    // The configuration of the hosts.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsHostConfig> hostConfig_ = nullptr;
    // The configurations of the request methods.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsMethodConfig> methodConfig_ = nullptr;
    // The configurations of the forwarding URLs.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsPathConfig> pathConfig_ = nullptr;
    // The configurations of the query strings.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsQueryStringConfig> queryStringConfig_ = nullptr;
    // The HTTP header in responses.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsResponseHeaderConfig> responseHeaderConfig_ = nullptr;
    // The configurations of the response status codes.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsResponseStatusCodeConfig> responseStatusCodeConfig_ = nullptr;
    // Traffic matching based on source IP addresses.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleConditionsSourceIpConfig> sourceIpConfig_ = nullptr;
    // The type of forwarding rule. Valid values:
    // 
    // *   **Host**: Responses are forwarded based on hosts.
    // *   **Path**: Responses are forwarded based on URLs.
    // *   **Header**: Responses are forwarded based on HTTP headers.
    // *   **QueryString**: Responses are forwarded based on query strings.
    // *   **Method**: Responses are forwarded based on request methods.
    // *   **Cookie**: Responses are forwarded based on cookies.
    // *   **SourceIp**: Responses are forwarded based on source IP addresses.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
