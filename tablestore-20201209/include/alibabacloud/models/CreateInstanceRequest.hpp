// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
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
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DisableReplication, disableReplication_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_TO_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DisableReplication, disableReplication_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_FROM_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
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
      // The tag key. The tag key can be up to 64 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 64 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->disableReplication_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr && this->network_ == nullptr && this->networkSourceACL_ == nullptr
        && this->networkTypeACL_ == nullptr && this->policy_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateInstanceRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // disableReplication Field Functions 
    bool hasDisableReplication() const { return this->disableReplication_ != nullptr;};
    void deleteDisableReplication() { this->disableReplication_ = nullptr;};
    inline bool getDisableReplication() const { DARABONBA_PTR_GET_DEFAULT(disableReplication_, false) };
    inline CreateInstanceRequest& setDisableReplication(bool disableReplication) { DARABONBA_PTR_SET_VALUE(disableReplication_, disableReplication) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateInstanceRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline CreateInstanceRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkSourceACL Field Functions 
    bool hasNetworkSourceACL() const { return this->networkSourceACL_ != nullptr;};
    void deleteNetworkSourceACL() { this->networkSourceACL_ = nullptr;};
    inline const vector<string> & getNetworkSourceACL() const { DARABONBA_PTR_GET_CONST(networkSourceACL_, vector<string>) };
    inline vector<string> getNetworkSourceACL() { DARABONBA_PTR_GET(networkSourceACL_, vector<string>) };
    inline CreateInstanceRequest& setNetworkSourceACL(const vector<string> & networkSourceACL) { DARABONBA_PTR_SET_VALUE(networkSourceACL_, networkSourceACL) };
    inline CreateInstanceRequest& setNetworkSourceACL(vector<string> && networkSourceACL) { DARABONBA_PTR_SET_RVALUE(networkSourceACL_, networkSourceACL) };


    // networkTypeACL Field Functions 
    bool hasNetworkTypeACL() const { return this->networkTypeACL_ != nullptr;};
    void deleteNetworkTypeACL() { this->networkTypeACL_ = nullptr;};
    inline const vector<string> & getNetworkTypeACL() const { DARABONBA_PTR_GET_CONST(networkTypeACL_, vector<string>) };
    inline vector<string> getNetworkTypeACL() { DARABONBA_PTR_GET(networkTypeACL_, vector<string>) };
    inline CreateInstanceRequest& setNetworkTypeACL(const vector<string> & networkTypeACL) { DARABONBA_PTR_SET_VALUE(networkTypeACL_, networkTypeACL) };
    inline CreateInstanceRequest& setNetworkTypeACL(vector<string> && networkTypeACL) { DARABONBA_PTR_SET_RVALUE(networkTypeACL_, networkTypeACL) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateInstanceRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequest::Tags>) };
    inline vector<CreateInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequest::Tags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The type of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // (Deprecated) Specifies whether to enable disaster recovery for the instance.
    // 
    // Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> disableReplication_ {};
    // The description of the instance. The instance description must be 3 to 256 characters in length.
    shared_ptr<string> instanceDescription_ {};
    // The name of the instance. Instance naming conventions:
    // 
    // *   The name can contain only letters, digits, and hyphens (-).
    // *   The name must start with a letter.
    // *   The name cannot end with a hyphen (-).
    // *   The name is case-insensitive.
    // *   The name must be 3 to 16 characters in length.
    // *   The name cannot contain the following words: ali, ay, ots, taobao, and admin.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // (Deprecated) The network type of the instance. Valid values: NORMAL and VPC_CONSOLE. Default value: NORMAL.
    shared_ptr<string> network_ {};
    // The types of the source from which access is allowed. By default, the following source type is allowed:
    // 
    // TRUST_PROXY: console
    shared_ptr<vector<string>> networkSourceACL_ {};
    // The types of the network from which access is allowed. By default, the following network types are allowed:
    // 
    // *   INTERNET: Internet
    // *   VPC: virtual private cloud (VPC)
    // *   CLASSIC: classic network
    shared_ptr<vector<string>> networkTypeACL_ {};
    // The instance policy in the JSON format.
    shared_ptr<string> policy_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateInstanceRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
