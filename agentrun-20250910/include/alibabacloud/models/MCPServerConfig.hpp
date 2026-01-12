// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPSERVERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPSERVERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MCPServerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPServerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(serverUrl, serverUrl_);
      DARABONBA_PTR_TO_JSON(ssePath, ssePath_);
      DARABONBA_PTR_TO_JSON(transportType, transportType_);
    };
    friend void from_json(const Darabonba::Json& j, MCPServerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(serverUrl, serverUrl_);
      DARABONBA_PTR_FROM_JSON(ssePath, ssePath_);
      DARABONBA_PTR_FROM_JSON(transportType, transportType_);
    };
    MCPServerConfig() = default ;
    MCPServerConfig(const MCPServerConfig &) = default ;
    MCPServerConfig(MCPServerConfig &&) = default ;
    MCPServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPServerConfig() = default ;
    MCPServerConfig& operator=(const MCPServerConfig &) = default ;
    MCPServerConfig& operator=(MCPServerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serverUrl_ == nullptr
        && this->ssePath_ == nullptr && this->transportType_ == nullptr; };
    // serverUrl Field Functions 
    bool hasServerUrl() const { return this->serverUrl_ != nullptr;};
    void deleteServerUrl() { this->serverUrl_ = nullptr;};
    inline string getServerUrl() const { DARABONBA_PTR_GET_DEFAULT(serverUrl_, "") };
    inline MCPServerConfig& setServerUrl(string serverUrl) { DARABONBA_PTR_SET_VALUE(serverUrl_, serverUrl) };


    // ssePath Field Functions 
    bool hasSsePath() const { return this->ssePath_ != nullptr;};
    void deleteSsePath() { this->ssePath_ = nullptr;};
    inline string getSsePath() const { DARABONBA_PTR_GET_DEFAULT(ssePath_, "") };
    inline MCPServerConfig& setSsePath(string ssePath) { DARABONBA_PTR_SET_VALUE(ssePath_, ssePath) };


    // transportType Field Functions 
    bool hasTransportType() const { return this->transportType_ != nullptr;};
    void deleteTransportType() { this->transportType_ = nullptr;};
    inline string getTransportType() const { DARABONBA_PTR_GET_DEFAULT(transportType_, "") };
    inline MCPServerConfig& setTransportType(string transportType) { DARABONBA_PTR_SET_VALUE(transportType_, transportType) };


  protected:
    shared_ptr<string> serverUrl_ {};
    shared_ptr<string> ssePath_ {};
    shared_ptr<string> transportType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
