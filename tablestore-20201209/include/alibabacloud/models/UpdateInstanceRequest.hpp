// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
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
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_TO_JSON(NetworkTypeACL, networkTypeACL_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_FROM_JSON(NetworkTypeACL, networkTypeACL_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr && this->network_ == nullptr && this->networkSourceACL_ == nullptr && this->networkTypeACL_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline UpdateInstanceRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline UpdateInstanceRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline UpdateInstanceRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkSourceACL Field Functions 
    bool hasNetworkSourceACL() const { return this->networkSourceACL_ != nullptr;};
    void deleteNetworkSourceACL() { this->networkSourceACL_ = nullptr;};
    inline const vector<string> & getNetworkSourceACL() const { DARABONBA_PTR_GET_CONST(networkSourceACL_, vector<string>) };
    inline vector<string> getNetworkSourceACL() { DARABONBA_PTR_GET(networkSourceACL_, vector<string>) };
    inline UpdateInstanceRequest& setNetworkSourceACL(const vector<string> & networkSourceACL) { DARABONBA_PTR_SET_VALUE(networkSourceACL_, networkSourceACL) };
    inline UpdateInstanceRequest& setNetworkSourceACL(vector<string> && networkSourceACL) { DARABONBA_PTR_SET_RVALUE(networkSourceACL_, networkSourceACL) };


    // networkTypeACL Field Functions 
    bool hasNetworkTypeACL() const { return this->networkTypeACL_ != nullptr;};
    void deleteNetworkTypeACL() { this->networkTypeACL_ = nullptr;};
    inline const vector<string> & getNetworkTypeACL() const { DARABONBA_PTR_GET_CONST(networkTypeACL_, vector<string>) };
    inline vector<string> getNetworkTypeACL() { DARABONBA_PTR_GET(networkTypeACL_, vector<string>) };
    inline UpdateInstanceRequest& setNetworkTypeACL(const vector<string> & networkTypeACL) { DARABONBA_PTR_SET_VALUE(networkTypeACL_, networkTypeACL) };
    inline UpdateInstanceRequest& setNetworkTypeACL(vector<string> && networkTypeACL) { DARABONBA_PTR_SET_RVALUE(networkTypeACL_, networkTypeACL) };


  protected:
    // The alias of the instance.
    shared_ptr<string> aliasName_ {};
    // The description of the instance.
    shared_ptr<string> instanceDescription_ {};
    // The name of the instance whose information you want to update.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // (Deprecated) The network type of the instance. Valid values: NORMAL and VPC_CONSOLE. Default value: NORMAL.
    shared_ptr<string> network_ {};
    // The new sources of the network from which access is allowed. By default, all sources of networks are allowed. Valid value:
    // 
    // TRUST_PROXY: the console
    shared_ptr<vector<string>> networkSourceACL_ {};
    // The new types of the network from which access is allowed. By default, all types of networks are allowed. Valid values:
    // 
    // *   INTERNET: the Internet
    // *   VPC: VPCs
    // *   CLASSIC: the classic network
    shared_ptr<vector<string>> networkTypeACL_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
