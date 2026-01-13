// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateRecallManagementConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecallManagementConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkConfigs, networkConfigs_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecallManagementConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkConfigs, networkConfigs_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateRecallManagementConfigRequest() = default ;
    CreateRecallManagementConfigRequest(const CreateRecallManagementConfigRequest &) = default ;
    CreateRecallManagementConfigRequest(CreateRecallManagementConfigRequest &&) = default ;
    CreateRecallManagementConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecallManagementConfigRequest() = default ;
    CreateRecallManagementConfigRequest& operator=(const CreateRecallManagementConfigRequest &) = default ;
    CreateRecallManagementConfigRequest& operator=(CreateRecallManagementConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      NetworkConfigs() = default ;
      NetworkConfigs(const NetworkConfigs &) = default ;
      NetworkConfigs(NetworkConfigs &&) = default ;
      NetworkConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfigs() = default ;
      NetworkConfigs& operator=(const NetworkConfigs &) = default ;
      NetworkConfigs& operator=(NetworkConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr; };
      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const map<string, string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, map<string, string>) };
      inline map<string, string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, map<string, string>) };
      inline NetworkConfigs& setVSwitchIds(const map<string, string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline NetworkConfigs& setVSwitchIds(map<string, string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkConfigs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<map<string, string>> vSwitchIds_ {};
      // Vpc id
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->networkConfigs_ == nullptr && this->password_ == nullptr && this->userName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRecallManagementConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkConfigs Field Functions 
    bool hasNetworkConfigs() const { return this->networkConfigs_ != nullptr;};
    void deleteNetworkConfigs() { this->networkConfigs_ = nullptr;};
    inline const vector<CreateRecallManagementConfigRequest::NetworkConfigs> & getNetworkConfigs() const { DARABONBA_PTR_GET_CONST(networkConfigs_, vector<CreateRecallManagementConfigRequest::NetworkConfigs>) };
    inline vector<CreateRecallManagementConfigRequest::NetworkConfigs> getNetworkConfigs() { DARABONBA_PTR_GET(networkConfigs_, vector<CreateRecallManagementConfigRequest::NetworkConfigs>) };
    inline CreateRecallManagementConfigRequest& setNetworkConfigs(const vector<CreateRecallManagementConfigRequest::NetworkConfigs> & networkConfigs) { DARABONBA_PTR_SET_VALUE(networkConfigs_, networkConfigs) };
    inline CreateRecallManagementConfigRequest& setNetworkConfigs(vector<CreateRecallManagementConfigRequest::NetworkConfigs> && networkConfigs) { DARABONBA_PTR_SET_RVALUE(networkConfigs_, networkConfigs) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateRecallManagementConfigRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateRecallManagementConfigRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<CreateRecallManagementConfigRequest::NetworkConfigs>> networkConfigs_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
