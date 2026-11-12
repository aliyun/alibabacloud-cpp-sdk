// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(TrafficMode, trafficMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(TrafficMode, trafficMode_);
    };
    UpdateGroupRequest() = default ;
    UpdateGroupRequest(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest(UpdateGroupRequest &&) = default ;
    UpdateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupRequest() = default ;
    UpdateGroupRequest& operator=(const UpdateGroupRequest &) = default ;
    UpdateGroupRequest& operator=(UpdateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Network : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Network& obj) { 
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Network& obj) { 
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Network() = default ;
      Network(const Network &) = default ;
      Network(Network &&) = default ;
      Network(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Network() = default ;
      Network& operator=(const Network &) = default ;
      Network& operator=(Network &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Network& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Network& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Network& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Network& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The dedicated gateway ID.
      shared_ptr<string> gatewayId_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->labels_ == nullptr
        && this->network_ == nullptr && this->trafficMode_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline UpdateGroupRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateGroupRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const UpdateGroupRequest::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, UpdateGroupRequest::Network) };
    inline UpdateGroupRequest::Network getNetwork() { DARABONBA_PTR_GET(network_, UpdateGroupRequest::Network) };
    inline UpdateGroupRequest& setNetwork(const UpdateGroupRequest::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline UpdateGroupRequest& setNetwork(UpdateGroupRequest::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // trafficMode Field Functions 
    bool hasTrafficMode() const { return this->trafficMode_ != nullptr;};
    void deleteTrafficMode() { this->trafficMode_ = nullptr;};
    inline string getTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(trafficMode_, "") };
    inline UpdateGroupRequest& setTrafficMode(string trafficMode) { DARABONBA_PTR_SET_VALUE(trafficMode_, trafficMode) };


  protected:
    // The user-defined labels.
    shared_ptr<map<string, string>> labels_ {};
    // The VPC configuration.
    shared_ptr<UpdateGroupRequest::Network> network_ {};
    // The traffic mode. Valid values: auto and customized. In auto mode, weights are automatically allocated based on the proportion of instances. In customized mode, traffic is distributed based on custom fixed weights.
    shared_ptr<string> trafficMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
