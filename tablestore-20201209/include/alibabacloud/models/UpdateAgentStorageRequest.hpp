// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTSTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTSTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UpdateAgentStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageDescription, agentStorageDescription_);
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_TO_JSON(NetworkTypeACL, networkTypeACL_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageDescription, agentStorageDescription_);
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_FROM_JSON(NetworkTypeACL, networkTypeACL_);
    };
    UpdateAgentStorageRequest() = default ;
    UpdateAgentStorageRequest(const UpdateAgentStorageRequest &) = default ;
    UpdateAgentStorageRequest(UpdateAgentStorageRequest &&) = default ;
    UpdateAgentStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentStorageRequest() = default ;
    UpdateAgentStorageRequest& operator=(const UpdateAgentStorageRequest &) = default ;
    UpdateAgentStorageRequest& operator=(UpdateAgentStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageDescription_ == nullptr
        && this->agentStorageName_ == nullptr && this->aliasName_ == nullptr && this->network_ == nullptr && this->networkSourceACL_ == nullptr && this->networkTypeACL_ == nullptr; };
    // agentStorageDescription Field Functions 
    bool hasAgentStorageDescription() const { return this->agentStorageDescription_ != nullptr;};
    void deleteAgentStorageDescription() { this->agentStorageDescription_ = nullptr;};
    inline string getAgentStorageDescription() const { DARABONBA_PTR_GET_DEFAULT(agentStorageDescription_, "") };
    inline UpdateAgentStorageRequest& setAgentStorageDescription(string agentStorageDescription) { DARABONBA_PTR_SET_VALUE(agentStorageDescription_, agentStorageDescription) };


    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline UpdateAgentStorageRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline UpdateAgentStorageRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline UpdateAgentStorageRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkSourceACL Field Functions 
    bool hasNetworkSourceACL() const { return this->networkSourceACL_ != nullptr;};
    void deleteNetworkSourceACL() { this->networkSourceACL_ = nullptr;};
    inline const vector<string> & getNetworkSourceACL() const { DARABONBA_PTR_GET_CONST(networkSourceACL_, vector<string>) };
    inline vector<string> getNetworkSourceACL() { DARABONBA_PTR_GET(networkSourceACL_, vector<string>) };
    inline UpdateAgentStorageRequest& setNetworkSourceACL(const vector<string> & networkSourceACL) { DARABONBA_PTR_SET_VALUE(networkSourceACL_, networkSourceACL) };
    inline UpdateAgentStorageRequest& setNetworkSourceACL(vector<string> && networkSourceACL) { DARABONBA_PTR_SET_RVALUE(networkSourceACL_, networkSourceACL) };


    // networkTypeACL Field Functions 
    bool hasNetworkTypeACL() const { return this->networkTypeACL_ != nullptr;};
    void deleteNetworkTypeACL() { this->networkTypeACL_ = nullptr;};
    inline const vector<string> & getNetworkTypeACL() const { DARABONBA_PTR_GET_CONST(networkTypeACL_, vector<string>) };
    inline vector<string> getNetworkTypeACL() { DARABONBA_PTR_GET(networkTypeACL_, vector<string>) };
    inline UpdateAgentStorageRequest& setNetworkTypeACL(const vector<string> & networkTypeACL) { DARABONBA_PTR_SET_VALUE(networkTypeACL_, networkTypeACL) };
    inline UpdateAgentStorageRequest& setNetworkTypeACL(vector<string> && networkTypeACL) { DARABONBA_PTR_SET_RVALUE(networkTypeACL_, networkTypeACL) };


  protected:
    // The description of the agent storage.
    shared_ptr<string> agentStorageDescription_ {};
    // The name of the agent storage.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // The alias of the agent storage.
    shared_ptr<string> aliasName_ {};
    // (Deprecated) The network type of the agent storage. Valid values: NORMAL and VPC_CONSOLE. Default value: NORMAL.
    shared_ptr<string> network_ {};
    // The list of allowed network sources for the agent storage. All sources are allowed by default. Must be used with TRUST_PROXY (console).
    shared_ptr<vector<string>> networkSourceACL_ {};
    // The list of allowed network types for the agent storage. All types are allowed by default. Valid values:
    // - CLASSIC: classic network.
    // - INTERNET: public network.
    // - VPC: VPC network.
    shared_ptr<vector<string>> networkTypeACL_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
