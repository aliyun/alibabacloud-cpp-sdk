// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMcpServerRequestAssembledSources.hpp>
#include <alibabacloud/models/UpdateMcpServerRequestBackendConfig.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assembledSources, assembledSources_);
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assembledSources, assembledSources_);
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateMcpServerRequest() = default ;
    UpdateMcpServerRequest(const UpdateMcpServerRequest &) = default ;
    UpdateMcpServerRequest(UpdateMcpServerRequest &&) = default ;
    UpdateMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServerRequest() = default ;
    UpdateMcpServerRequest& operator=(const UpdateMcpServerRequest &) = default ;
    UpdateMcpServerRequest& operator=(UpdateMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assembledSources_ == nullptr
        && return this->backendConfig_ == nullptr && return this->description_ == nullptr && return this->domainIds_ == nullptr && return this->exposedUriPath_ == nullptr && return this->match_ == nullptr
        && return this->mcpStatisticsEnable_ == nullptr && return this->protocol_ == nullptr && return this->type_ == nullptr; };
    // assembledSources Field Functions 
    bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
    void deleteAssembledSources() { this->assembledSources_ = nullptr;};
    inline const vector<UpdateMcpServerRequestAssembledSources> & assembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<UpdateMcpServerRequestAssembledSources>) };
    inline vector<UpdateMcpServerRequestAssembledSources> assembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<UpdateMcpServerRequestAssembledSources>) };
    inline UpdateMcpServerRequest& setAssembledSources(const vector<UpdateMcpServerRequestAssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
    inline UpdateMcpServerRequest& setAssembledSources(vector<UpdateMcpServerRequestAssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const UpdateMcpServerRequestBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, UpdateMcpServerRequestBackendConfig) };
    inline UpdateMcpServerRequestBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, UpdateMcpServerRequestBackendConfig) };
    inline UpdateMcpServerRequest& setBackendConfig(const UpdateMcpServerRequestBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline UpdateMcpServerRequest& setBackendConfig(UpdateMcpServerRequestBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMcpServerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline UpdateMcpServerRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline UpdateMcpServerRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline UpdateMcpServerRequest& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch match() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline UpdateMcpServerRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline UpdateMcpServerRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool mcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline UpdateMcpServerRequest& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateMcpServerRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateMcpServerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<UpdateMcpServerRequestAssembledSources>> assembledSources_ = nullptr;
    std::shared_ptr<UpdateMcpServerRequestBackendConfig> backendConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<bool> mcpStatisticsEnable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
