// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NETWORKCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_NETWORKCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class NetworkConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NetworkConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(networkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vswitchIds, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, NetworkConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(networkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vswitchIds, vswitchIds_);
    };
    NetworkConfiguration() = default ;
    NetworkConfiguration(const NetworkConfiguration &) = default ;
    NetworkConfiguration(NetworkConfiguration &&) = default ;
    NetworkConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NetworkConfiguration() = default ;
    NetworkConfiguration& operator=(const NetworkConfiguration &) = default ;
    NetworkConfiguration& operator=(NetworkConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkMode_ == nullptr
        && this->securityGroupId_ == nullptr && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline NetworkConfiguration& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline NetworkConfiguration& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline NetworkConfiguration& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline NetworkConfiguration& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline NetworkConfiguration& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    shared_ptr<string> networkMode_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<vector<string>> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
