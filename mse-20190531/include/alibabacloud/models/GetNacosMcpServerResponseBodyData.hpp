// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataAllVersions.hpp>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataBackendEndpoints.hpp>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataRemoteServerConfig.hpp>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataToolSpec.hpp>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataVersionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AllVersions, allVersions_);
      DARABONBA_PTR_TO_JSON(BackendEndpoints, backendEndpoints_);
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(FrontProtocol, frontProtocol_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_ANY_TO_JSON(LocalServerConfig, localServerConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RemoteServerConfig, remoteServerConfig_);
      DARABONBA_PTR_TO_JSON(ToolSpec, toolSpec_);
      DARABONBA_PTR_TO_JSON(VersionDetail, versionDetail_);
      DARABONBA_PTR_TO_JSON(YamlConfig, yamlConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AllVersions, allVersions_);
      DARABONBA_PTR_FROM_JSON(BackendEndpoints, backendEndpoints_);
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(FrontProtocol, frontProtocol_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_ANY_FROM_JSON(LocalServerConfig, localServerConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RemoteServerConfig, remoteServerConfig_);
      DARABONBA_PTR_FROM_JSON(ToolSpec, toolSpec_);
      DARABONBA_PTR_FROM_JSON(VersionDetail, versionDetail_);
      DARABONBA_PTR_FROM_JSON(YamlConfig, yamlConfig_);
    };
    GetNacosMcpServerResponseBodyData() = default ;
    GetNacosMcpServerResponseBodyData(const GetNacosMcpServerResponseBodyData &) = default ;
    GetNacosMcpServerResponseBodyData(GetNacosMcpServerResponseBodyData &&) = default ;
    GetNacosMcpServerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyData() = default ;
    GetNacosMcpServerResponseBodyData& operator=(const GetNacosMcpServerResponseBodyData &) = default ;
    GetNacosMcpServerResponseBodyData& operator=(GetNacosMcpServerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allVersions_ == nullptr
        && return this->backendEndpoints_ == nullptr && return this->capabilities_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->frontProtocol_ == nullptr
        && return this->id_ == nullptr && return this->localServerConfig_ == nullptr && return this->name_ == nullptr && return this->protocol_ == nullptr && return this->remoteServerConfig_ == nullptr
        && return this->toolSpec_ == nullptr && return this->versionDetail_ == nullptr && return this->yamlConfig_ == nullptr; };
    // allVersions Field Functions 
    bool hasAllVersions() const { return this->allVersions_ != nullptr;};
    void deleteAllVersions() { this->allVersions_ = nullptr;};
    inline const vector<Models::GetNacosMcpServerResponseBodyDataAllVersions> & allVersions() const { DARABONBA_PTR_GET_CONST(allVersions_, vector<Models::GetNacosMcpServerResponseBodyDataAllVersions>) };
    inline vector<Models::GetNacosMcpServerResponseBodyDataAllVersions> allVersions() { DARABONBA_PTR_GET(allVersions_, vector<Models::GetNacosMcpServerResponseBodyDataAllVersions>) };
    inline GetNacosMcpServerResponseBodyData& setAllVersions(const vector<Models::GetNacosMcpServerResponseBodyDataAllVersions> & allVersions) { DARABONBA_PTR_SET_VALUE(allVersions_, allVersions) };
    inline GetNacosMcpServerResponseBodyData& setAllVersions(vector<Models::GetNacosMcpServerResponseBodyDataAllVersions> && allVersions) { DARABONBA_PTR_SET_RVALUE(allVersions_, allVersions) };


    // backendEndpoints Field Functions 
    bool hasBackendEndpoints() const { return this->backendEndpoints_ != nullptr;};
    void deleteBackendEndpoints() { this->backendEndpoints_ = nullptr;};
    inline const vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints> & backendEndpoints() const { DARABONBA_PTR_GET_CONST(backendEndpoints_, vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints>) };
    inline vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints> backendEndpoints() { DARABONBA_PTR_GET(backendEndpoints_, vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints>) };
    inline GetNacosMcpServerResponseBodyData& setBackendEndpoints(const vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints> & backendEndpoints) { DARABONBA_PTR_SET_VALUE(backendEndpoints_, backendEndpoints) };
    inline GetNacosMcpServerResponseBodyData& setBackendEndpoints(vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints> && backendEndpoints) { DARABONBA_PTR_SET_RVALUE(backendEndpoints_, backendEndpoints) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & capabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> capabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline GetNacosMcpServerResponseBodyData& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline GetNacosMcpServerResponseBodyData& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetNacosMcpServerResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetNacosMcpServerResponseBodyData& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // frontProtocol Field Functions 
    bool hasFrontProtocol() const { return this->frontProtocol_ != nullptr;};
    void deleteFrontProtocol() { this->frontProtocol_ = nullptr;};
    inline string frontProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontProtocol_, "") };
    inline GetNacosMcpServerResponseBodyData& setFrontProtocol(string frontProtocol) { DARABONBA_PTR_SET_VALUE(frontProtocol_, frontProtocol) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetNacosMcpServerResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // localServerConfig Field Functions 
    bool hasLocalServerConfig() const { return this->localServerConfig_ != nullptr;};
    void deleteLocalServerConfig() { this->localServerConfig_ = nullptr;};
    inline     const Darabonba::Json & localServerConfig() const { DARABONBA_GET(localServerConfig_) };
    Darabonba::Json & localServerConfig() { DARABONBA_GET(localServerConfig_) };
    inline GetNacosMcpServerResponseBodyData& setLocalServerConfig(const Darabonba::Json & localServerConfig) { DARABONBA_SET_VALUE(localServerConfig_, localServerConfig) };
    inline GetNacosMcpServerResponseBodyData& setLocalServerConfig(Darabonba::Json & localServerConfig) { DARABONBA_SET_RVALUE(localServerConfig_, localServerConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNacosMcpServerResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetNacosMcpServerResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // remoteServerConfig Field Functions 
    bool hasRemoteServerConfig() const { return this->remoteServerConfig_ != nullptr;};
    void deleteRemoteServerConfig() { this->remoteServerConfig_ = nullptr;};
    inline const Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig & remoteServerConfig() const { DARABONBA_PTR_GET_CONST(remoteServerConfig_, Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig) };
    inline Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig remoteServerConfig() { DARABONBA_PTR_GET(remoteServerConfig_, Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig) };
    inline GetNacosMcpServerResponseBodyData& setRemoteServerConfig(const Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig & remoteServerConfig) { DARABONBA_PTR_SET_VALUE(remoteServerConfig_, remoteServerConfig) };
    inline GetNacosMcpServerResponseBodyData& setRemoteServerConfig(Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig && remoteServerConfig) { DARABONBA_PTR_SET_RVALUE(remoteServerConfig_, remoteServerConfig) };


    // toolSpec Field Functions 
    bool hasToolSpec() const { return this->toolSpec_ != nullptr;};
    void deleteToolSpec() { this->toolSpec_ = nullptr;};
    inline const Models::GetNacosMcpServerResponseBodyDataToolSpec & toolSpec() const { DARABONBA_PTR_GET_CONST(toolSpec_, Models::GetNacosMcpServerResponseBodyDataToolSpec) };
    inline Models::GetNacosMcpServerResponseBodyDataToolSpec toolSpec() { DARABONBA_PTR_GET(toolSpec_, Models::GetNacosMcpServerResponseBodyDataToolSpec) };
    inline GetNacosMcpServerResponseBodyData& setToolSpec(const Models::GetNacosMcpServerResponseBodyDataToolSpec & toolSpec) { DARABONBA_PTR_SET_VALUE(toolSpec_, toolSpec) };
    inline GetNacosMcpServerResponseBodyData& setToolSpec(Models::GetNacosMcpServerResponseBodyDataToolSpec && toolSpec) { DARABONBA_PTR_SET_RVALUE(toolSpec_, toolSpec) };


    // versionDetail Field Functions 
    bool hasVersionDetail() const { return this->versionDetail_ != nullptr;};
    void deleteVersionDetail() { this->versionDetail_ = nullptr;};
    inline const Models::GetNacosMcpServerResponseBodyDataVersionDetail & versionDetail() const { DARABONBA_PTR_GET_CONST(versionDetail_, Models::GetNacosMcpServerResponseBodyDataVersionDetail) };
    inline Models::GetNacosMcpServerResponseBodyDataVersionDetail versionDetail() { DARABONBA_PTR_GET(versionDetail_, Models::GetNacosMcpServerResponseBodyDataVersionDetail) };
    inline GetNacosMcpServerResponseBodyData& setVersionDetail(const Models::GetNacosMcpServerResponseBodyDataVersionDetail & versionDetail) { DARABONBA_PTR_SET_VALUE(versionDetail_, versionDetail) };
    inline GetNacosMcpServerResponseBodyData& setVersionDetail(Models::GetNacosMcpServerResponseBodyDataVersionDetail && versionDetail) { DARABONBA_PTR_SET_RVALUE(versionDetail_, versionDetail) };


    // yamlConfig Field Functions 
    bool hasYamlConfig() const { return this->yamlConfig_ != nullptr;};
    void deleteYamlConfig() { this->yamlConfig_ = nullptr;};
    inline string yamlConfig() const { DARABONBA_PTR_GET_DEFAULT(yamlConfig_, "") };
    inline GetNacosMcpServerResponseBodyData& setYamlConfig(string yamlConfig) { DARABONBA_PTR_SET_VALUE(yamlConfig_, yamlConfig) };


  protected:
    std::shared_ptr<vector<Models::GetNacosMcpServerResponseBodyDataAllVersions>> allVersions_ = nullptr;
    std::shared_ptr<vector<Models::GetNacosMcpServerResponseBodyDataBackendEndpoints>> backendEndpoints_ = nullptr;
    std::shared_ptr<vector<string>> capabilities_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> frontProtocol_ = nullptr;
    // ID。
    std::shared_ptr<string> id_ = nullptr;
    Darabonba::Json localServerConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<Models::GetNacosMcpServerResponseBodyDataRemoteServerConfig> remoteServerConfig_ = nullptr;
    std::shared_ptr<Models::GetNacosMcpServerResponseBodyDataToolSpec> toolSpec_ = nullptr;
    std::shared_ptr<Models::GetNacosMcpServerResponseBodyDataVersionDetail> versionDetail_ = nullptr;
    std::shared_ptr<string> yamlConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
