// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NETWORKCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_NETWORKCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class NetworkConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NetworkConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(networkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(securityGroupID, securityGroupID_);
      DARABONBA_PTR_TO_JSON(vpcID, vpcID_);
      DARABONBA_PTR_TO_JSON(vswitchIDs, vswitchIDs_);
    };
    friend void from_json(const Darabonba::Json& j, NetworkConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(networkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(securityGroupID, securityGroupID_);
      DARABONBA_PTR_FROM_JSON(vpcID, vpcID_);
      DARABONBA_PTR_FROM_JSON(vswitchIDs, vswitchIDs_);
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
        && this->securityGroupID_ == nullptr && this->vpcID_ == nullptr && this->vswitchIDs_ == nullptr; };
    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline NetworkConfiguration& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // securityGroupID Field Functions 
    bool hasSecurityGroupID() const { return this->securityGroupID_ != nullptr;};
    void deleteSecurityGroupID() { this->securityGroupID_ = nullptr;};
    inline string getSecurityGroupID() const { DARABONBA_PTR_GET_DEFAULT(securityGroupID_, "") };
    inline NetworkConfiguration& setSecurityGroupID(string securityGroupID) { DARABONBA_PTR_SET_VALUE(securityGroupID_, securityGroupID) };


    // vpcID Field Functions 
    bool hasVpcID() const { return this->vpcID_ != nullptr;};
    void deleteVpcID() { this->vpcID_ = nullptr;};
    inline string getVpcID() const { DARABONBA_PTR_GET_DEFAULT(vpcID_, "") };
    inline NetworkConfiguration& setVpcID(string vpcID) { DARABONBA_PTR_SET_VALUE(vpcID_, vpcID) };


    // vswitchIDs Field Functions 
    bool hasVswitchIDs() const { return this->vswitchIDs_ != nullptr;};
    void deleteVswitchIDs() { this->vswitchIDs_ = nullptr;};
    inline const vector<string> & getVswitchIDs() const { DARABONBA_PTR_GET_CONST(vswitchIDs_, vector<string>) };
    inline vector<string> getVswitchIDs() { DARABONBA_PTR_GET(vswitchIDs_, vector<string>) };
    inline NetworkConfiguration& setVswitchIDs(const vector<string> & vswitchIDs) { DARABONBA_PTR_SET_VALUE(vswitchIDs_, vswitchIDs) };
    inline NetworkConfiguration& setVswitchIDs(vector<string> && vswitchIDs) { DARABONBA_PTR_SET_RVALUE(vswitchIDs_, vswitchIDs) };


  protected:
    shared_ptr<string> networkMode_ {};
    shared_ptr<string> securityGroupID_ {};
    shared_ptr<string> vpcID_ {};
    shared_ptr<vector<string>> vswitchIDs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
