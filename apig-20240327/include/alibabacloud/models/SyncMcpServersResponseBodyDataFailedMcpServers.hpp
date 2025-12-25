// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMCPSERVERSRESPONSEBODYDATAFAILEDMCPSERVERS_HPP_
#define ALIBABACLOUD_MODELS_SYNCMCPSERVERSRESPONSEBODYDATAFAILEDMCPSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SyncMCPServersResponseBodyDataFailedMcpServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMCPServersResponseBodyDataFailedMcpServers& obj) { 
      DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMCPServersResponseBodyDataFailedMcpServers& obj) { 
      DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
    };
    SyncMCPServersResponseBodyDataFailedMcpServers() = default ;
    SyncMCPServersResponseBodyDataFailedMcpServers(const SyncMCPServersResponseBodyDataFailedMcpServers &) = default ;
    SyncMCPServersResponseBodyDataFailedMcpServers(SyncMCPServersResponseBodyDataFailedMcpServers &&) = default ;
    SyncMCPServersResponseBodyDataFailedMcpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMCPServersResponseBodyDataFailedMcpServers() = default ;
    SyncMCPServersResponseBodyDataFailedMcpServers& operator=(const SyncMCPServersResponseBodyDataFailedMcpServers &) = default ;
    SyncMCPServersResponseBodyDataFailedMcpServers& operator=(SyncMCPServersResponseBodyDataFailedMcpServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcpServerName_ == nullptr
        && return this->protocols_ == nullptr; };
    // mcpServerName Field Functions 
    bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
    void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
    inline string mcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
    inline SyncMCPServersResponseBodyDataFailedMcpServers& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline SyncMCPServersResponseBodyDataFailedMcpServers& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline SyncMCPServersResponseBodyDataFailedMcpServers& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


  protected:
    std::shared_ptr<string> mcpServerName_ = nullptr;
    std::shared_ptr<vector<string>> protocols_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
