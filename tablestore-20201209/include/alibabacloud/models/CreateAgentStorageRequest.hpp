// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSTORAGEREQUEST_HPP_
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
  class CreateAgentStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageDescription, agentStorageDescription_);
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_TO_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageDescription, agentStorageDescription_);
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_FROM_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateAgentStorageRequest() = default ;
    CreateAgentStorageRequest(const CreateAgentStorageRequest &) = default ;
    CreateAgentStorageRequest(CreateAgentStorageRequest &&) = default ;
    CreateAgentStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentStorageRequest() = default ;
    CreateAgentStorageRequest& operator=(const CreateAgentStorageRequest &) = default ;
    CreateAgentStorageRequest& operator=(CreateAgentStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      // The key can be up to 64 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // The value can be up to 64 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->agentStorageDescription_ == nullptr
        && this->agentStorageName_ == nullptr && this->network_ == nullptr && this->networkSourceACL_ == nullptr && this->networkTypeACL_ == nullptr && this->policy_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // agentStorageDescription Field Functions 
    bool hasAgentStorageDescription() const { return this->agentStorageDescription_ != nullptr;};
    void deleteAgentStorageDescription() { this->agentStorageDescription_ = nullptr;};
    inline string getAgentStorageDescription() const { DARABONBA_PTR_GET_DEFAULT(agentStorageDescription_, "") };
    inline CreateAgentStorageRequest& setAgentStorageDescription(string agentStorageDescription) { DARABONBA_PTR_SET_VALUE(agentStorageDescription_, agentStorageDescription) };


    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline CreateAgentStorageRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline CreateAgentStorageRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkSourceACL Field Functions 
    bool hasNetworkSourceACL() const { return this->networkSourceACL_ != nullptr;};
    void deleteNetworkSourceACL() { this->networkSourceACL_ = nullptr;};
    inline const vector<string> & getNetworkSourceACL() const { DARABONBA_PTR_GET_CONST(networkSourceACL_, vector<string>) };
    inline vector<string> getNetworkSourceACL() { DARABONBA_PTR_GET(networkSourceACL_, vector<string>) };
    inline CreateAgentStorageRequest& setNetworkSourceACL(const vector<string> & networkSourceACL) { DARABONBA_PTR_SET_VALUE(networkSourceACL_, networkSourceACL) };
    inline CreateAgentStorageRequest& setNetworkSourceACL(vector<string> && networkSourceACL) { DARABONBA_PTR_SET_RVALUE(networkSourceACL_, networkSourceACL) };


    // networkTypeACL Field Functions 
    bool hasNetworkTypeACL() const { return this->networkTypeACL_ != nullptr;};
    void deleteNetworkTypeACL() { this->networkTypeACL_ = nullptr;};
    inline const vector<string> & getNetworkTypeACL() const { DARABONBA_PTR_GET_CONST(networkTypeACL_, vector<string>) };
    inline vector<string> getNetworkTypeACL() { DARABONBA_PTR_GET(networkTypeACL_, vector<string>) };
    inline CreateAgentStorageRequest& setNetworkTypeACL(const vector<string> & networkTypeACL) { DARABONBA_PTR_SET_VALUE(networkTypeACL_, networkTypeACL) };
    inline CreateAgentStorageRequest& setNetworkTypeACL(vector<string> && networkTypeACL) { DARABONBA_PTR_SET_RVALUE(networkTypeACL_, networkTypeACL) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateAgentStorageRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAgentStorageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAgentStorageRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAgentStorageRequest::Tags>) };
    inline vector<CreateAgentStorageRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateAgentStorageRequest::Tags>) };
    inline CreateAgentStorageRequest& setTags(const vector<CreateAgentStorageRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAgentStorageRequest& setTags(vector<CreateAgentStorageRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // agent storage description
    shared_ptr<string> agentStorageDescription_ {};
    // agent storage name
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
    // （已弃用）智能体存储网络类型。NORMAL, VPC_CONSOLE。默认为NORMAL。
    shared_ptr<string> network_ {};
    // The list of network sources allowed for the agent storage instance. By default, all network sources are allowed. Valid values: TRUST_PROXY: console.
    shared_ptr<vector<string>> networkSourceACL_ {};
    // The list of network types allowed for the agent storage instance. By default, all network types are allowed. Valid values: CLASSIC: classic network. INTERNET: Internet. VPC: VPC.
    shared_ptr<vector<string>> networkTypeACL_ {};
    // The access control policy of the agent storage instance in JSON format. For the policy syntax, see https://www.alibabacloud.com/help/en/ram/user-guide/policy-structure-and-syntax.
    shared_ptr<string> policy_ {};
    // resource group id
    shared_ptr<string> resourceGroupId_ {};
    // tag
    shared_ptr<vector<CreateAgentStorageRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
