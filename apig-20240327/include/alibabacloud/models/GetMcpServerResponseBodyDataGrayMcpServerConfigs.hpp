// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATAGRAYMCPSERVERCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATAGRAYMCPSERVERCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetMcpServerResponseBodyDataGrayMcpServerConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServerResponseBodyDataGrayMcpServerConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpServerResponseBodyDataGrayMcpServerConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    GetMcpServerResponseBodyDataGrayMcpServerConfigs() = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigs(const GetMcpServerResponseBodyDataGrayMcpServerConfigs &) = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigs(GetMcpServerResponseBodyDataGrayMcpServerConfigs &&) = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServerResponseBodyDataGrayMcpServerConfigs() = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigs& operator=(const GetMcpServerResponseBodyDataGrayMcpServerConfigs &) = default ;
    GetMcpServerResponseBodyDataGrayMcpServerConfigs& operator=(GetMcpServerResponseBodyDataGrayMcpServerConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendConfig_ == nullptr
        && return this->match_ == nullptr && return this->routeId_ == nullptr; };
    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig) };
    inline Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig) };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigs& setBackendConfig(const Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigs& setBackendConfig(Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpRouteMatch) };
    inline Models::HttpRouteMatch match() { DARABONBA_PTR_GET(match_, Models::HttpRouteMatch) };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigs& setMatch(const Models::HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigs& setMatch(Models::HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline GetMcpServerResponseBodyDataGrayMcpServerConfigs& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    std::shared_ptr<Models::GetMcpServerResponseBodyDataGrayMcpServerConfigsBackendConfig> backendConfig_ = nullptr;
    std::shared_ptr<Models::HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<string> routeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
