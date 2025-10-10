// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsCookieConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsHeaderConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsHostConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsMethodConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsPathConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsQueryStringConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsResponseHeaderConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleConditionsSourceIpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleConditions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleConditions& obj) { 
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
    CreateRulesRequestRulesRuleConditions() = default ;
    CreateRulesRequestRulesRuleConditions(const CreateRulesRequestRulesRuleConditions &) = default ;
    CreateRulesRequestRulesRuleConditions(CreateRulesRequestRulesRuleConditions &&) = default ;
    CreateRulesRequestRulesRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleConditions() = default ;
    CreateRulesRequestRulesRuleConditions& operator=(const CreateRulesRequestRulesRuleConditions &) = default ;
    CreateRulesRequestRulesRuleConditions& operator=(CreateRulesRequestRulesRuleConditions &&) = default ;
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
    inline const Models::CreateRulesRequestRulesRuleConditionsCookieConfig & cookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, Models::CreateRulesRequestRulesRuleConditionsCookieConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsCookieConfig cookieConfig() { DARABONBA_PTR_GET(cookieConfig_, Models::CreateRulesRequestRulesRuleConditionsCookieConfig) };
    inline CreateRulesRequestRulesRuleConditions& setCookieConfig(const Models::CreateRulesRequestRulesRuleConditionsCookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
    inline CreateRulesRequestRulesRuleConditions& setCookieConfig(Models::CreateRulesRequestRulesRuleConditionsCookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


    // headerConfig Field Functions 
    bool hasHeaderConfig() const { return this->headerConfig_ != nullptr;};
    void deleteHeaderConfig() { this->headerConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsHeaderConfig & headerConfig() const { DARABONBA_PTR_GET_CONST(headerConfig_, Models::CreateRulesRequestRulesRuleConditionsHeaderConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsHeaderConfig headerConfig() { DARABONBA_PTR_GET(headerConfig_, Models::CreateRulesRequestRulesRuleConditionsHeaderConfig) };
    inline CreateRulesRequestRulesRuleConditions& setHeaderConfig(const Models::CreateRulesRequestRulesRuleConditionsHeaderConfig & headerConfig) { DARABONBA_PTR_SET_VALUE(headerConfig_, headerConfig) };
    inline CreateRulesRequestRulesRuleConditions& setHeaderConfig(Models::CreateRulesRequestRulesRuleConditionsHeaderConfig && headerConfig) { DARABONBA_PTR_SET_RVALUE(headerConfig_, headerConfig) };


    // hostConfig Field Functions 
    bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
    void deleteHostConfig() { this->hostConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsHostConfig & hostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, Models::CreateRulesRequestRulesRuleConditionsHostConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsHostConfig hostConfig() { DARABONBA_PTR_GET(hostConfig_, Models::CreateRulesRequestRulesRuleConditionsHostConfig) };
    inline CreateRulesRequestRulesRuleConditions& setHostConfig(const Models::CreateRulesRequestRulesRuleConditionsHostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
    inline CreateRulesRequestRulesRuleConditions& setHostConfig(Models::CreateRulesRequestRulesRuleConditionsHostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


    // methodConfig Field Functions 
    bool hasMethodConfig() const { return this->methodConfig_ != nullptr;};
    void deleteMethodConfig() { this->methodConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsMethodConfig & methodConfig() const { DARABONBA_PTR_GET_CONST(methodConfig_, Models::CreateRulesRequestRulesRuleConditionsMethodConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsMethodConfig methodConfig() { DARABONBA_PTR_GET(methodConfig_, Models::CreateRulesRequestRulesRuleConditionsMethodConfig) };
    inline CreateRulesRequestRulesRuleConditions& setMethodConfig(const Models::CreateRulesRequestRulesRuleConditionsMethodConfig & methodConfig) { DARABONBA_PTR_SET_VALUE(methodConfig_, methodConfig) };
    inline CreateRulesRequestRulesRuleConditions& setMethodConfig(Models::CreateRulesRequestRulesRuleConditionsMethodConfig && methodConfig) { DARABONBA_PTR_SET_RVALUE(methodConfig_, methodConfig) };


    // pathConfig Field Functions 
    bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
    void deletePathConfig() { this->pathConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsPathConfig & pathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, Models::CreateRulesRequestRulesRuleConditionsPathConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsPathConfig pathConfig() { DARABONBA_PTR_GET(pathConfig_, Models::CreateRulesRequestRulesRuleConditionsPathConfig) };
    inline CreateRulesRequestRulesRuleConditions& setPathConfig(const Models::CreateRulesRequestRulesRuleConditionsPathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
    inline CreateRulesRequestRulesRuleConditions& setPathConfig(Models::CreateRulesRequestRulesRuleConditionsPathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


    // queryStringConfig Field Functions 
    bool hasQueryStringConfig() const { return this->queryStringConfig_ != nullptr;};
    void deleteQueryStringConfig() { this->queryStringConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig & queryStringConfig() const { DARABONBA_PTR_GET_CONST(queryStringConfig_, Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig queryStringConfig() { DARABONBA_PTR_GET(queryStringConfig_, Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig) };
    inline CreateRulesRequestRulesRuleConditions& setQueryStringConfig(const Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig & queryStringConfig) { DARABONBA_PTR_SET_VALUE(queryStringConfig_, queryStringConfig) };
    inline CreateRulesRequestRulesRuleConditions& setQueryStringConfig(Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig && queryStringConfig) { DARABONBA_PTR_SET_RVALUE(queryStringConfig_, queryStringConfig) };


    // responseHeaderConfig Field Functions 
    bool hasResponseHeaderConfig() const { return this->responseHeaderConfig_ != nullptr;};
    void deleteResponseHeaderConfig() { this->responseHeaderConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig & responseHeaderConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderConfig_, Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig responseHeaderConfig() { DARABONBA_PTR_GET(responseHeaderConfig_, Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig) };
    inline CreateRulesRequestRulesRuleConditions& setResponseHeaderConfig(const Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig & responseHeaderConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderConfig_, responseHeaderConfig) };
    inline CreateRulesRequestRulesRuleConditions& setResponseHeaderConfig(Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig && responseHeaderConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderConfig_, responseHeaderConfig) };


    // responseStatusCodeConfig Field Functions 
    bool hasResponseStatusCodeConfig() const { return this->responseStatusCodeConfig_ != nullptr;};
    void deleteResponseStatusCodeConfig() { this->responseStatusCodeConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig() const { DARABONBA_PTR_GET_CONST(responseStatusCodeConfig_, Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig responseStatusCodeConfig() { DARABONBA_PTR_GET(responseStatusCodeConfig_, Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig) };
    inline CreateRulesRequestRulesRuleConditions& setResponseStatusCodeConfig(const Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig) { DARABONBA_PTR_SET_VALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };
    inline CreateRulesRequestRulesRuleConditions& setResponseStatusCodeConfig(Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig && responseStatusCodeConfig) { DARABONBA_PTR_SET_RVALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };


    // sourceIpConfig Field Functions 
    bool hasSourceIpConfig() const { return this->sourceIpConfig_ != nullptr;};
    void deleteSourceIpConfig() { this->sourceIpConfig_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig & sourceIpConfig() const { DARABONBA_PTR_GET_CONST(sourceIpConfig_, Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig) };
    inline Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig sourceIpConfig() { DARABONBA_PTR_GET(sourceIpConfig_, Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig) };
    inline CreateRulesRequestRulesRuleConditions& setSourceIpConfig(const Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig & sourceIpConfig) { DARABONBA_PTR_SET_VALUE(sourceIpConfig_, sourceIpConfig) };
    inline CreateRulesRequestRulesRuleConditions& setSourceIpConfig(Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig && sourceIpConfig) { DARABONBA_PTR_SET_RVALUE(sourceIpConfig_, sourceIpConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRulesRequestRulesRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsCookieConfig> cookieConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsHeaderConfig> headerConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsHostConfig> hostConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsMethodConfig> methodConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsPathConfig> pathConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsQueryStringConfig> queryStringConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsResponseHeaderConfig> responseHeaderConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsResponseStatusCodeConfig> responseStatusCodeConfig_ = nullptr;
    std::shared_ptr<Models::CreateRulesRequestRulesRuleConditionsSourceIpConfig> sourceIpConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
