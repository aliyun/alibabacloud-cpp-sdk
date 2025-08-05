// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEAPACHEROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSOURCESOURCEAPACHEROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
      DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
      DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters() = default ;
    CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters(const CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters &) = default ;
    CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters(CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters &&) = default ;
    CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters() = default ;
    CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& operator=(const CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters &) = default ;
    CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& operator=(CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceEndpoint_ != nullptr
        && this->instancePassword_ != nullptr && this->instanceUsername_ != nullptr && this->networkType_ != nullptr && this->regionId_ != nullptr && this->securityGroupId_ != nullptr
        && this->topics_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // instanceEndpoint Field Functions 
    bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
    void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
    inline string instanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


    // instancePassword Field Functions 
    bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
    void deleteInstancePassword() { this->instancePassword_ = nullptr;};
    inline string instancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


    // instanceUsername Field Functions 
    bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
    void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
    inline string instanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateEventStreamingRequestSourceSourceApacheRocketMQCheckpointParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> instanceEndpoint_ = nullptr;
    std::shared_ptr<string> instancePassword_ = nullptr;
    std::shared_ptr<string> instanceUsername_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<string>> topics_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
