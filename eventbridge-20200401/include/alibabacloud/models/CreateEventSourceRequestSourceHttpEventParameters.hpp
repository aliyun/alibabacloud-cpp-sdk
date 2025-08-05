// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUESTSOURCEHTTPEVENTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSOURCEREQUESTSOURCEHTTPEVENTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventSourceRequestSourceHttpEventParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSourceRequestSourceHttpEventParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
      DARABONBA_PTR_TO_JSON(SecurityConfig, securityConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSourceRequestSourceHttpEventParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
      DARABONBA_PTR_FROM_JSON(SecurityConfig, securityConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateEventSourceRequestSourceHttpEventParameters() = default ;
    CreateEventSourceRequestSourceHttpEventParameters(const CreateEventSourceRequestSourceHttpEventParameters &) = default ;
    CreateEventSourceRequestSourceHttpEventParameters(CreateEventSourceRequestSourceHttpEventParameters &&) = default ;
    CreateEventSourceRequestSourceHttpEventParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSourceRequestSourceHttpEventParameters() = default ;
    CreateEventSourceRequestSourceHttpEventParameters& operator=(const CreateEventSourceRequestSourceHttpEventParameters &) = default ;
    CreateEventSourceRequestSourceHttpEventParameters& operator=(CreateEventSourceRequestSourceHttpEventParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr
        && this->method_ != nullptr && this->referer_ != nullptr && this->securityConfig_ != nullptr && this->type_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline const vector<string> & ip() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
    inline vector<string> ip() { DARABONBA_PTR_GET(ip_, vector<string>) };
    inline CreateEventSourceRequestSourceHttpEventParameters& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
    inline CreateEventSourceRequestSourceHttpEventParameters& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline const vector<string> & method() const { DARABONBA_PTR_GET_CONST(method_, vector<string>) };
    inline vector<string> method() { DARABONBA_PTR_GET(method_, vector<string>) };
    inline CreateEventSourceRequestSourceHttpEventParameters& setMethod(const vector<string> & method) { DARABONBA_PTR_SET_VALUE(method_, method) };
    inline CreateEventSourceRequestSourceHttpEventParameters& setMethod(vector<string> && method) { DARABONBA_PTR_SET_RVALUE(method_, method) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline const vector<string> & referer() const { DARABONBA_PTR_GET_CONST(referer_, vector<string>) };
    inline vector<string> referer() { DARABONBA_PTR_GET(referer_, vector<string>) };
    inline CreateEventSourceRequestSourceHttpEventParameters& setReferer(const vector<string> & referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };
    inline CreateEventSourceRequestSourceHttpEventParameters& setReferer(vector<string> && referer) { DARABONBA_PTR_SET_RVALUE(referer_, referer) };


    // securityConfig Field Functions 
    bool hasSecurityConfig() const { return this->securityConfig_ != nullptr;};
    void deleteSecurityConfig() { this->securityConfig_ = nullptr;};
    inline string securityConfig() const { DARABONBA_PTR_GET_DEFAULT(securityConfig_, "") };
    inline CreateEventSourceRequestSourceHttpEventParameters& setSecurityConfig(string securityConfig) { DARABONBA_PTR_SET_VALUE(securityConfig_, securityConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateEventSourceRequestSourceHttpEventParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The CIDR block that is used for security settings. This parameter is required only if you set SecurityConfig to ip. You can enter a CIDR block or an IP address.
    std::shared_ptr<vector<string>> ip_ = nullptr;
    // The HTTP request method supported by the generated webhook URL. You can select multiple values. Valid values:
    // 
    // *   GET
    // *   POST
    // *   PUT
    // *   PATCH
    // *   DELETE
    // *   HEAD
    // *   OPTIONS
    // *   TRACE
    // *   CONNECT
    std::shared_ptr<vector<string>> method_ = nullptr;
    // The security domain name. This parameter is required only if you set SecurityConfig to referer. You can enter a domain name.
    std::shared_ptr<vector<string>> referer_ = nullptr;
    // The type of security settings. Valid values:
    // 
    // *   none: No configuration is required.
    // *   ip: CIDR block.
    // *   referer: security domain name.
    std::shared_ptr<string> securityConfig_ = nullptr;
    // The protocol type that is supported by the generated webhook URL. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // *   HTTP\\&HTTPS
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
