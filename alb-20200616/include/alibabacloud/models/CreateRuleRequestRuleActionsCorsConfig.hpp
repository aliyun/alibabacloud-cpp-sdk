// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSCORSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSCORSCONFIG_HPP_
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
  class CreateRuleRequestRuleActionsCorsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleActionsCorsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_TO_JSON(AllowOrigin, allowOrigin_);
      DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_TO_JSON(MaxAge, maxAge_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleActionsCorsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_FROM_JSON(AllowOrigin, allowOrigin_);
      DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_FROM_JSON(MaxAge, maxAge_);
    };
    CreateRuleRequestRuleActionsCorsConfig() = default ;
    CreateRuleRequestRuleActionsCorsConfig(const CreateRuleRequestRuleActionsCorsConfig &) = default ;
    CreateRuleRequestRuleActionsCorsConfig(CreateRuleRequestRuleActionsCorsConfig &&) = default ;
    CreateRuleRequestRuleActionsCorsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleActionsCorsConfig() = default ;
    CreateRuleRequestRuleActionsCorsConfig& operator=(const CreateRuleRequestRuleActionsCorsConfig &) = default ;
    CreateRuleRequestRuleActionsCorsConfig& operator=(CreateRuleRequestRuleActionsCorsConfig &&) = default ;
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
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowCredentials(string allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


    // allowHeaders Field Functions 
    bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
    void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
    inline const vector<string> & allowHeaders() const { DARABONBA_PTR_GET_CONST(allowHeaders_, vector<string>) };
    inline vector<string> allowHeaders() { DARABONBA_PTR_GET(allowHeaders_, vector<string>) };
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowHeaders(const vector<string> & allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowHeaders(vector<string> && allowHeaders) { DARABONBA_PTR_SET_RVALUE(allowHeaders_, allowHeaders) };


    // allowMethods Field Functions 
    bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
    void deleteAllowMethods() { this->allowMethods_ = nullptr;};
    inline const vector<string> & allowMethods() const { DARABONBA_PTR_GET_CONST(allowMethods_, vector<string>) };
    inline vector<string> allowMethods() { DARABONBA_PTR_GET(allowMethods_, vector<string>) };
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowMethods(const vector<string> & allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowMethods(vector<string> && allowMethods) { DARABONBA_PTR_SET_RVALUE(allowMethods_, allowMethods) };


    // allowOrigin Field Functions 
    bool hasAllowOrigin() const { return this->allowOrigin_ != nullptr;};
    void deleteAllowOrigin() { this->allowOrigin_ = nullptr;};
    inline const vector<string> & allowOrigin() const { DARABONBA_PTR_GET_CONST(allowOrigin_, vector<string>) };
    inline vector<string> allowOrigin() { DARABONBA_PTR_GET(allowOrigin_, vector<string>) };
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowOrigin(const vector<string> & allowOrigin) { DARABONBA_PTR_SET_VALUE(allowOrigin_, allowOrigin) };
    inline CreateRuleRequestRuleActionsCorsConfig& setAllowOrigin(vector<string> && allowOrigin) { DARABONBA_PTR_SET_RVALUE(allowOrigin_, allowOrigin) };


    // exposeHeaders Field Functions 
    bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
    void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
    inline const vector<string> & exposeHeaders() const { DARABONBA_PTR_GET_CONST(exposeHeaders_, vector<string>) };
    inline vector<string> exposeHeaders() { DARABONBA_PTR_GET(exposeHeaders_, vector<string>) };
    inline CreateRuleRequestRuleActionsCorsConfig& setExposeHeaders(const vector<string> & exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };
    inline CreateRuleRequestRuleActionsCorsConfig& setExposeHeaders(vector<string> && exposeHeaders) { DARABONBA_PTR_SET_RVALUE(exposeHeaders_, exposeHeaders) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline int64_t maxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0L) };
    inline CreateRuleRequestRuleActionsCorsConfig& setMaxAge(int64_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


  protected:
    // Specifies whether credentials can be carried in CORS requests. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> allowCredentials_ = nullptr;
    // The trusted headers of CORS requests.
    std::shared_ptr<vector<string>> allowHeaders_ = nullptr;
    // The allowed HTTP methods of CORS requests.
    std::shared_ptr<vector<string>> allowMethods_ = nullptr;
    // The trusted origins of CORS requests. You can specify one or more values, or only the wildcard character (`*`).
    // 
    // *   Each value must start with `http://` or `https://`, which must be followed by a valid domain name, including top-level domain names. Example: `http://*.test.abc.example.com`.
    // *   You can specify a port in each value or leave the port empty. Valid values: **1** to **65535**.
    std::shared_ptr<vector<string>> allowOrigin_ = nullptr;
    // The headers that can be exposed.
    std::shared_ptr<vector<string>> exposeHeaders_ = nullptr;
    // The maximum cache time of dry run requests in the browser. Unit: seconds.
    // 
    // Valid values: **-1** to **172800**.
    std::shared_ptr<int64_t> maxAge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
