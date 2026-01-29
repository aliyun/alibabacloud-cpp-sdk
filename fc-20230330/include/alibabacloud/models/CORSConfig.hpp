// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CORSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CORSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CORSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(allowCredentials, allowCredentials_);
      DARABONBA_PTR_TO_JSON(allowHeaders, allowHeaders_);
      DARABONBA_PTR_TO_JSON(allowMethods, allowMethods_);
      DARABONBA_PTR_TO_JSON(allowOrigins, allowOrigins_);
      DARABONBA_PTR_TO_JSON(exposeHeaders, exposeHeaders_);
      DARABONBA_PTR_TO_JSON(maxAge, maxAge_);
    };
    friend void from_json(const Darabonba::Json& j, CORSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(allowCredentials, allowCredentials_);
      DARABONBA_PTR_FROM_JSON(allowHeaders, allowHeaders_);
      DARABONBA_PTR_FROM_JSON(allowMethods, allowMethods_);
      DARABONBA_PTR_FROM_JSON(allowOrigins, allowOrigins_);
      DARABONBA_PTR_FROM_JSON(exposeHeaders, exposeHeaders_);
      DARABONBA_PTR_FROM_JSON(maxAge, maxAge_);
    };
    CORSConfig() = default ;
    CORSConfig(const CORSConfig &) = default ;
    CORSConfig(CORSConfig &&) = default ;
    CORSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CORSConfig() = default ;
    CORSConfig& operator=(const CORSConfig &) = default ;
    CORSConfig& operator=(CORSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowCredentials_ == nullptr
        && this->allowHeaders_ == nullptr && this->allowMethods_ == nullptr && this->allowOrigins_ == nullptr && this->exposeHeaders_ == nullptr && this->maxAge_ == nullptr; };
    // allowCredentials Field Functions 
    bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
    void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
    inline bool getAllowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, false) };
    inline CORSConfig& setAllowCredentials(bool allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


    // allowHeaders Field Functions 
    bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
    void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
    inline const vector<string> & getAllowHeaders() const { DARABONBA_PTR_GET_CONST(allowHeaders_, vector<string>) };
    inline vector<string> getAllowHeaders() { DARABONBA_PTR_GET(allowHeaders_, vector<string>) };
    inline CORSConfig& setAllowHeaders(const vector<string> & allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };
    inline CORSConfig& setAllowHeaders(vector<string> && allowHeaders) { DARABONBA_PTR_SET_RVALUE(allowHeaders_, allowHeaders) };


    // allowMethods Field Functions 
    bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
    void deleteAllowMethods() { this->allowMethods_ = nullptr;};
    inline const vector<string> & getAllowMethods() const { DARABONBA_PTR_GET_CONST(allowMethods_, vector<string>) };
    inline vector<string> getAllowMethods() { DARABONBA_PTR_GET(allowMethods_, vector<string>) };
    inline CORSConfig& setAllowMethods(const vector<string> & allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };
    inline CORSConfig& setAllowMethods(vector<string> && allowMethods) { DARABONBA_PTR_SET_RVALUE(allowMethods_, allowMethods) };


    // allowOrigins Field Functions 
    bool hasAllowOrigins() const { return this->allowOrigins_ != nullptr;};
    void deleteAllowOrigins() { this->allowOrigins_ = nullptr;};
    inline const vector<string> & getAllowOrigins() const { DARABONBA_PTR_GET_CONST(allowOrigins_, vector<string>) };
    inline vector<string> getAllowOrigins() { DARABONBA_PTR_GET(allowOrigins_, vector<string>) };
    inline CORSConfig& setAllowOrigins(const vector<string> & allowOrigins) { DARABONBA_PTR_SET_VALUE(allowOrigins_, allowOrigins) };
    inline CORSConfig& setAllowOrigins(vector<string> && allowOrigins) { DARABONBA_PTR_SET_RVALUE(allowOrigins_, allowOrigins) };


    // exposeHeaders Field Functions 
    bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
    void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
    inline const vector<string> & getExposeHeaders() const { DARABONBA_PTR_GET_CONST(exposeHeaders_, vector<string>) };
    inline vector<string> getExposeHeaders() { DARABONBA_PTR_GET(exposeHeaders_, vector<string>) };
    inline CORSConfig& setExposeHeaders(const vector<string> & exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };
    inline CORSConfig& setExposeHeaders(vector<string> && exposeHeaders) { DARABONBA_PTR_SET_RVALUE(exposeHeaders_, exposeHeaders) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline int32_t getMaxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0) };
    inline CORSConfig& setMaxAge(int32_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


  protected:
    shared_ptr<bool> allowCredentials_ {};
    shared_ptr<vector<string>> allowHeaders_ {};
    shared_ptr<vector<string>> allowMethods_ {};
    shared_ptr<vector<string>> allowOrigins_ {};
    shared_ptr<vector<string>> exposeHeaders_ {};
    shared_ptr<int32_t> maxAge_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
