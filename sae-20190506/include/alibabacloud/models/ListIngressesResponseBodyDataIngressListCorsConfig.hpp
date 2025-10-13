// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLISTCORSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLISTCORSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListIngressesResponseBodyDataIngressListCorsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIngressesResponseBodyDataIngressListCorsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_TO_JSON(AllowOrigin, allowOrigin_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_TO_JSON(MaxAge, maxAge_);
    };
    friend void from_json(const Darabonba::Json& j, ListIngressesResponseBodyDataIngressListCorsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_FROM_JSON(AllowOrigin, allowOrigin_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_FROM_JSON(MaxAge, maxAge_);
    };
    ListIngressesResponseBodyDataIngressListCorsConfig() = default ;
    ListIngressesResponseBodyDataIngressListCorsConfig(const ListIngressesResponseBodyDataIngressListCorsConfig &) = default ;
    ListIngressesResponseBodyDataIngressListCorsConfig(ListIngressesResponseBodyDataIngressListCorsConfig &&) = default ;
    ListIngressesResponseBodyDataIngressListCorsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIngressesResponseBodyDataIngressListCorsConfig() = default ;
    ListIngressesResponseBodyDataIngressListCorsConfig& operator=(const ListIngressesResponseBodyDataIngressListCorsConfig &) = default ;
    ListIngressesResponseBodyDataIngressListCorsConfig& operator=(ListIngressesResponseBodyDataIngressListCorsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowCredentials_ == nullptr
        && return this->allowHeaders_ == nullptr && return this->allowMethods_ == nullptr && return this->allowOrigin_ == nullptr && return this->enable_ == nullptr && return this->exposeHeaders_ == nullptr
        && return this->maxAge_ == nullptr; };
    // allowCredentials Field Functions 
    bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
    void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
    inline string allowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setAllowCredentials(string allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


    // allowHeaders Field Functions 
    bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
    void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
    inline string allowHeaders() const { DARABONBA_PTR_GET_DEFAULT(allowHeaders_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setAllowHeaders(string allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };


    // allowMethods Field Functions 
    bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
    void deleteAllowMethods() { this->allowMethods_ = nullptr;};
    inline string allowMethods() const { DARABONBA_PTR_GET_DEFAULT(allowMethods_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setAllowMethods(string allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };


    // allowOrigin Field Functions 
    bool hasAllowOrigin() const { return this->allowOrigin_ != nullptr;};
    void deleteAllowOrigin() { this->allowOrigin_ = nullptr;};
    inline string allowOrigin() const { DARABONBA_PTR_GET_DEFAULT(allowOrigin_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setAllowOrigin(string allowOrigin) { DARABONBA_PTR_SET_VALUE(allowOrigin_, allowOrigin) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // exposeHeaders Field Functions 
    bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
    void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
    inline string exposeHeaders() const { DARABONBA_PTR_GET_DEFAULT(exposeHeaders_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setExposeHeaders(string exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline string maxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, "") };
    inline ListIngressesResponseBodyDataIngressListCorsConfig& setMaxAge(string maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


  protected:
    std::shared_ptr<string> allowCredentials_ = nullptr;
    std::shared_ptr<string> allowHeaders_ = nullptr;
    std::shared_ptr<string> allowMethods_ = nullptr;
    std::shared_ptr<string> allowOrigin_ = nullptr;
    std::shared_ptr<string> enable_ = nullptr;
    std::shared_ptr<string> exposeHeaders_ = nullptr;
    std::shared_ptr<string> maxAge_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
