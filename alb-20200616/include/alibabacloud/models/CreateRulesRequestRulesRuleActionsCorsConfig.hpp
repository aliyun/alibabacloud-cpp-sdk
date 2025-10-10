// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSCORSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSCORSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleActionsCorsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleActionsCorsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_TO_JSON(AllowOrigin, allowOrigin_);
      DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_TO_JSON(MaxAge, maxAge_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleActionsCorsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_FROM_JSON(AllowOrigin, allowOrigin_);
      DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_FROM_JSON(MaxAge, maxAge_);
    };
    CreateRulesRequestRulesRuleActionsCorsConfig() = default ;
    CreateRulesRequestRulesRuleActionsCorsConfig(const CreateRulesRequestRulesRuleActionsCorsConfig &) = default ;
    CreateRulesRequestRulesRuleActionsCorsConfig(CreateRulesRequestRulesRuleActionsCorsConfig &&) = default ;
    CreateRulesRequestRulesRuleActionsCorsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleActionsCorsConfig() = default ;
    CreateRulesRequestRulesRuleActionsCorsConfig& operator=(const CreateRulesRequestRulesRuleActionsCorsConfig &) = default ;
    CreateRulesRequestRulesRuleActionsCorsConfig& operator=(CreateRulesRequestRulesRuleActionsCorsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCredentials_ != nullptr
        && this->allowHeaders_ != nullptr && this->allowMethods_ != nullptr && this->allowOrigin_ != nullptr && this->exposeHeaders_ != nullptr && this->maxAge_ != nullptr; };
    // allowCredentials Field Functions 
    bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
    void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
    inline string allowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, "") };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowCredentials(string allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


    // allowHeaders Field Functions 
    bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
    void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
    inline const vector<string> & allowHeaders() const { DARABONBA_PTR_GET_CONST(allowHeaders_, vector<string>) };
    inline vector<string> allowHeaders() { DARABONBA_PTR_GET(allowHeaders_, vector<string>) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowHeaders(const vector<string> & allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowHeaders(vector<string> && allowHeaders) { DARABONBA_PTR_SET_RVALUE(allowHeaders_, allowHeaders) };


    // allowMethods Field Functions 
    bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
    void deleteAllowMethods() { this->allowMethods_ = nullptr;};
    inline const vector<string> & allowMethods() const { DARABONBA_PTR_GET_CONST(allowMethods_, vector<string>) };
    inline vector<string> allowMethods() { DARABONBA_PTR_GET(allowMethods_, vector<string>) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowMethods(const vector<string> & allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowMethods(vector<string> && allowMethods) { DARABONBA_PTR_SET_RVALUE(allowMethods_, allowMethods) };


    // allowOrigin Field Functions 
    bool hasAllowOrigin() const { return this->allowOrigin_ != nullptr;};
    void deleteAllowOrigin() { this->allowOrigin_ = nullptr;};
    inline const vector<string> & allowOrigin() const { DARABONBA_PTR_GET_CONST(allowOrigin_, vector<string>) };
    inline vector<string> allowOrigin() { DARABONBA_PTR_GET(allowOrigin_, vector<string>) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowOrigin(const vector<string> & allowOrigin) { DARABONBA_PTR_SET_VALUE(allowOrigin_, allowOrigin) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setAllowOrigin(vector<string> && allowOrigin) { DARABONBA_PTR_SET_RVALUE(allowOrigin_, allowOrigin) };


    // exposeHeaders Field Functions 
    bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
    void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
    inline const vector<string> & exposeHeaders() const { DARABONBA_PTR_GET_CONST(exposeHeaders_, vector<string>) };
    inline vector<string> exposeHeaders() { DARABONBA_PTR_GET(exposeHeaders_, vector<string>) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setExposeHeaders(const vector<string> & exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setExposeHeaders(vector<string> && exposeHeaders) { DARABONBA_PTR_SET_RVALUE(exposeHeaders_, exposeHeaders) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline int64_t maxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0L) };
    inline CreateRulesRequestRulesRuleActionsCorsConfig& setMaxAge(int64_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


  protected:
    std::shared_ptr<string> allowCredentials_ = nullptr;
    std::shared_ptr<vector<string>> allowHeaders_ = nullptr;
    std::shared_ptr<vector<string>> allowMethods_ = nullptr;
    std::shared_ptr<vector<string>> allowOrigin_ = nullptr;
    std::shared_ptr<vector<string>> exposeHeaders_ = nullptr;
    std::shared_ptr<int64_t> maxAge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
