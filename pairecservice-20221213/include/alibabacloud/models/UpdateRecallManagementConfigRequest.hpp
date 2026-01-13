// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECALLMANAGEMENTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECALLMANAGEMENTCONFIGREQUEST_HPP_
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
  class UpdateRecallManagementConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecallManagementConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkConfigs, networkConfigs_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecallManagementConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkConfigs, networkConfigs_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    UpdateRecallManagementConfigRequest() = default ;
    UpdateRecallManagementConfigRequest(const UpdateRecallManagementConfigRequest &) = default ;
    UpdateRecallManagementConfigRequest(UpdateRecallManagementConfigRequest &&) = default ;
    UpdateRecallManagementConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecallManagementConfigRequest() = default ;
    UpdateRecallManagementConfigRequest& operator=(const UpdateRecallManagementConfigRequest &) = default ;
    UpdateRecallManagementConfigRequest& operator=(UpdateRecallManagementConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
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
      virtual bool empty() const override { return this->vpcId_ == nullptr
        && this->vswitchIds_ == nullptr; };
      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkConfigs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const map<string, string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, map<string, string>) };
      inline map<string, string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, map<string, string>) };
      inline NetworkConfigs& setVswitchIds(const map<string, string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline NetworkConfigs& setVswitchIds(map<string, string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    protected:
      shared_ptr<string> vpcId_ {};
      shared_ptr<map<string, string>> vswitchIds_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->networkConfigs_ == nullptr && this->password_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRecallManagementConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkConfigs Field Functions 
    bool hasNetworkConfigs() const { return this->networkConfigs_ != nullptr;};
    void deleteNetworkConfigs() { this->networkConfigs_ = nullptr;};
    inline const vector<UpdateRecallManagementConfigRequest::NetworkConfigs> & getNetworkConfigs() const { DARABONBA_PTR_GET_CONST(networkConfigs_, vector<UpdateRecallManagementConfigRequest::NetworkConfigs>) };
    inline vector<UpdateRecallManagementConfigRequest::NetworkConfigs> getNetworkConfigs() { DARABONBA_PTR_GET(networkConfigs_, vector<UpdateRecallManagementConfigRequest::NetworkConfigs>) };
    inline UpdateRecallManagementConfigRequest& setNetworkConfigs(const vector<UpdateRecallManagementConfigRequest::NetworkConfigs> & networkConfigs) { DARABONBA_PTR_SET_VALUE(networkConfigs_, networkConfigs) };
    inline UpdateRecallManagementConfigRequest& setNetworkConfigs(vector<UpdateRecallManagementConfigRequest::NetworkConfigs> && networkConfigs) { DARABONBA_PTR_SET_RVALUE(networkConfigs_, networkConfigs) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateRecallManagementConfigRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<UpdateRecallManagementConfigRequest::NetworkConfigs>> networkConfigs_ {};
    shared_ptr<string> password_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
