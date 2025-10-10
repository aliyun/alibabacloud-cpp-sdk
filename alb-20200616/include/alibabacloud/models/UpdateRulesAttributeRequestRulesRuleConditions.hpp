// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsHostConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsPathConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleConditions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleConditions& obj) { 
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
    UpdateRulesAttributeRequestRulesRuleConditions() = default ;
    UpdateRulesAttributeRequestRulesRuleConditions(const UpdateRulesAttributeRequestRulesRuleConditions &) = default ;
    UpdateRulesAttributeRequestRulesRuleConditions(UpdateRulesAttributeRequestRulesRuleConditions &&) = default ;
    UpdateRulesAttributeRequestRulesRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleConditions() = default ;
    UpdateRulesAttributeRequestRulesRuleConditions& operator=(const UpdateRulesAttributeRequestRulesRuleConditions &) = default ;
    UpdateRulesAttributeRequestRulesRuleConditions& operator=(UpdateRulesAttributeRequestRulesRuleConditions &&) = default ;
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
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig & cookieConfig() const { DARABONBA_PTR_GET_CONST(cookieConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig cookieConfig() { DARABONBA_PTR_GET(cookieConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setCookieConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig & cookieConfig) { DARABONBA_PTR_SET_VALUE(cookieConfig_, cookieConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setCookieConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig && cookieConfig) { DARABONBA_PTR_SET_RVALUE(cookieConfig_, cookieConfig) };


    // headerConfig Field Functions 
    bool hasHeaderConfig() const { return this->headerConfig_ != nullptr;};
    void deleteHeaderConfig() { this->headerConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig & headerConfig() const { DARABONBA_PTR_GET_CONST(headerConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig headerConfig() { DARABONBA_PTR_GET(headerConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setHeaderConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig & headerConfig) { DARABONBA_PTR_SET_VALUE(headerConfig_, headerConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setHeaderConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig && headerConfig) { DARABONBA_PTR_SET_RVALUE(headerConfig_, headerConfig) };


    // hostConfig Field Functions 
    bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
    void deleteHostConfig() { this->hostConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig & hostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig hostConfig() { DARABONBA_PTR_GET(hostConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setHostConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setHostConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


    // methodConfig Field Functions 
    bool hasMethodConfig() const { return this->methodConfig_ != nullptr;};
    void deleteMethodConfig() { this->methodConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig & methodConfig() const { DARABONBA_PTR_GET_CONST(methodConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig methodConfig() { DARABONBA_PTR_GET(methodConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setMethodConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig & methodConfig) { DARABONBA_PTR_SET_VALUE(methodConfig_, methodConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setMethodConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig && methodConfig) { DARABONBA_PTR_SET_RVALUE(methodConfig_, methodConfig) };


    // pathConfig Field Functions 
    bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
    void deletePathConfig() { this->pathConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig & pathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig pathConfig() { DARABONBA_PTR_GET(pathConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setPathConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setPathConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


    // queryStringConfig Field Functions 
    bool hasQueryStringConfig() const { return this->queryStringConfig_ != nullptr;};
    void deleteQueryStringConfig() { this->queryStringConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig & queryStringConfig() const { DARABONBA_PTR_GET_CONST(queryStringConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig queryStringConfig() { DARABONBA_PTR_GET(queryStringConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setQueryStringConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig & queryStringConfig) { DARABONBA_PTR_SET_VALUE(queryStringConfig_, queryStringConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setQueryStringConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig && queryStringConfig) { DARABONBA_PTR_SET_RVALUE(queryStringConfig_, queryStringConfig) };


    // responseHeaderConfig Field Functions 
    bool hasResponseHeaderConfig() const { return this->responseHeaderConfig_ != nullptr;};
    void deleteResponseHeaderConfig() { this->responseHeaderConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig & responseHeaderConfig() const { DARABONBA_PTR_GET_CONST(responseHeaderConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig responseHeaderConfig() { DARABONBA_PTR_GET(responseHeaderConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setResponseHeaderConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig & responseHeaderConfig) { DARABONBA_PTR_SET_VALUE(responseHeaderConfig_, responseHeaderConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setResponseHeaderConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig && responseHeaderConfig) { DARABONBA_PTR_SET_RVALUE(responseHeaderConfig_, responseHeaderConfig) };


    // responseStatusCodeConfig Field Functions 
    bool hasResponseStatusCodeConfig() const { return this->responseStatusCodeConfig_ != nullptr;};
    void deleteResponseStatusCodeConfig() { this->responseStatusCodeConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig() const { DARABONBA_PTR_GET_CONST(responseStatusCodeConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig responseStatusCodeConfig() { DARABONBA_PTR_GET(responseStatusCodeConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setResponseStatusCodeConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig & responseStatusCodeConfig) { DARABONBA_PTR_SET_VALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setResponseStatusCodeConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig && responseStatusCodeConfig) { DARABONBA_PTR_SET_RVALUE(responseStatusCodeConfig_, responseStatusCodeConfig) };


    // sourceIpConfig Field Functions 
    bool hasSourceIpConfig() const { return this->sourceIpConfig_ != nullptr;};
    void deleteSourceIpConfig() { this->sourceIpConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig & sourceIpConfig() const { DARABONBA_PTR_GET_CONST(sourceIpConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig sourceIpConfig() { DARABONBA_PTR_GET(sourceIpConfig_, Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setSourceIpConfig(const Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig & sourceIpConfig) { DARABONBA_PTR_SET_VALUE(sourceIpConfig_, sourceIpConfig) };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setSourceIpConfig(Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig && sourceIpConfig) { DARABONBA_PTR_SET_RVALUE(sourceIpConfig_, sourceIpConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRulesAttributeRequestRulesRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsCookieConfig> cookieConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsHeaderConfig> headerConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsHostConfig> hostConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsMethodConfig> methodConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsPathConfig> pathConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsQueryStringConfig> queryStringConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseHeaderConfig> responseHeaderConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsResponseStatusCodeConfig> responseStatusCodeConfig_ = nullptr;
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleConditionsSourceIpConfig> sourceIpConfig_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
