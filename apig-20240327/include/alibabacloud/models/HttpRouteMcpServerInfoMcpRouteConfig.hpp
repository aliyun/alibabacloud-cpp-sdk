// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTEMCPSERVERINFOMCPROUTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTEMCPSERVERINFOMCPROUTECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRouteMcpServerInfoMcpRouteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRouteMcpServerInfoMcpRouteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRouteMcpServerInfoMcpRouteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    HttpRouteMcpServerInfoMcpRouteConfig() = default ;
    HttpRouteMcpServerInfoMcpRouteConfig(const HttpRouteMcpServerInfoMcpRouteConfig &) = default ;
    HttpRouteMcpServerInfoMcpRouteConfig(HttpRouteMcpServerInfoMcpRouteConfig &&) = default ;
    HttpRouteMcpServerInfoMcpRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRouteMcpServerInfoMcpRouteConfig() = default ;
    HttpRouteMcpServerInfoMcpRouteConfig& operator=(const HttpRouteMcpServerInfoMcpRouteConfig &) = default ;
    HttpRouteMcpServerInfoMcpRouteConfig& operator=(HttpRouteMcpServerInfoMcpRouteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exposedUriPath_ == nullptr
        && return this->protocol_ == nullptr; };
    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline HttpRouteMcpServerInfoMcpRouteConfig& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline HttpRouteMcpServerInfoMcpRouteConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
