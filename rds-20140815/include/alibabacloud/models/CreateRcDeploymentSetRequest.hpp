// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCDEPLOYMENTSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCDEPLOYMENTSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRCDeploymentSetRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCDeploymentSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCDeploymentSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(OnUnableToRedeployFailedInstance, onUnableToRedeployFailedInstance_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCDeploymentSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetName, deploymentSetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(OnUnableToRedeployFailedInstance, onUnableToRedeployFailedInstance_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRCDeploymentSetRequest() = default ;
    CreateRCDeploymentSetRequest(const CreateRCDeploymentSetRequest &) = default ;
    CreateRCDeploymentSetRequest(CreateRCDeploymentSetRequest &&) = default ;
    CreateRCDeploymentSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCDeploymentSetRequest() = default ;
    CreateRCDeploymentSetRequest& operator=(const CreateRCDeploymentSetRequest &) = default ;
    CreateRCDeploymentSetRequest& operator=(CreateRCDeploymentSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->deploymentSetName_ == nullptr && return this->description_ == nullptr && return this->groupCount_ == nullptr && return this->onUnableToRedeployFailedInstance_ == nullptr && return this->regionId_ == nullptr
        && return this->strategy_ == nullptr && return this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRCDeploymentSetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentSetName Field Functions 
    bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
    void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
    inline string deploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
    inline CreateRCDeploymentSetRequest& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRCDeploymentSetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int64_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0L) };
    inline CreateRCDeploymentSetRequest& setGroupCount(int64_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // onUnableToRedeployFailedInstance Field Functions 
    bool hasOnUnableToRedeployFailedInstance() const { return this->onUnableToRedeployFailedInstance_ != nullptr;};
    void deleteOnUnableToRedeployFailedInstance() { this->onUnableToRedeployFailedInstance_ = nullptr;};
    inline string onUnableToRedeployFailedInstance() const { DARABONBA_PTR_GET_DEFAULT(onUnableToRedeployFailedInstance_, "") };
    inline CreateRCDeploymentSetRequest& setOnUnableToRedeployFailedInstance(string onUnableToRedeployFailedInstance) { DARABONBA_PTR_SET_VALUE(onUnableToRedeployFailedInstance_, onUnableToRedeployFailedInstance) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRCDeploymentSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline CreateRCDeploymentSetRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRCDeploymentSetRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRCDeploymentSetRequestTag>) };
    inline vector<CreateRCDeploymentSetRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateRCDeploymentSetRequestTag>) };
    inline CreateRCDeploymentSetRequest& setTag(const vector<CreateRCDeploymentSetRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRCDeploymentSetRequest& setTag(vector<CreateRCDeploymentSetRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The deployment set name. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> deploymentSetName_ = nullptr;
    // The description of the deployment set. The value must be 2 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The number of groups in the deployment set. Valid values: 1 to 7.
    // 
    // Default value: 3.
    // 
    // >  This parameter takes effect only when `Strategy is set to AvailabilityGroup`.
    std::shared_ptr<int64_t> groupCount_ = nullptr;
    // The emergency solution to use in the scenario in which instances in the deployment set cannot be evenly distributed to different zones due to resource insufficiency after the instances failover. Valid values:
    // 
    // *   **CancelMembershipAndStart**: removes the instances from the deployment set and restarts the instances immediately after the failover is complete.
    // *   **KeepStopped**: does not remove the instances from the deployment set and keeps the instances in the Stopped state.
    // 
    // Default value: CancelMembershipAndStart.
    std::shared_ptr<string> onUnableToRedeployFailedInstance_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The deployment strategy. Valid values:
    // 
    // *   **Availability**: high-availability strategy
    // *   **AvailabilityGroup**: high-availability group strategy
    // *   **LowLatency**: low latency strategy
    // 
    // Default value: Availability.
    std::shared_ptr<string> strategy_ = nullptr;
    std::shared_ptr<vector<CreateRCDeploymentSetRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
