// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUESTMCPROUTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUESTMCPROUTECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRouteRequestMcpRouteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRouteRequestMcpRouteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRouteRequestMcpRouteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    CreateHttpApiRouteRequestMcpRouteConfig() = default ;
    CreateHttpApiRouteRequestMcpRouteConfig(const CreateHttpApiRouteRequestMcpRouteConfig &) = default ;
    CreateHttpApiRouteRequestMcpRouteConfig(CreateHttpApiRouteRequestMcpRouteConfig &&) = default ;
    CreateHttpApiRouteRequestMcpRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRouteRequestMcpRouteConfig() = default ;
    CreateHttpApiRouteRequestMcpRouteConfig& operator=(const CreateHttpApiRouteRequestMcpRouteConfig &) = default ;
    CreateHttpApiRouteRequestMcpRouteConfig& operator=(CreateHttpApiRouteRequestMcpRouteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exposedUriPath_ != nullptr
        && this->mcpStatisticsEnable_ != nullptr && this->protocol_ != nullptr; };
    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline CreateHttpApiRouteRequestMcpRouteConfig& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool mcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline CreateHttpApiRouteRequestMcpRouteConfig& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateHttpApiRouteRequestMcpRouteConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<bool> mcpStatisticsEnable_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
