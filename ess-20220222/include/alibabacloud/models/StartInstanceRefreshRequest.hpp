// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartInstanceRefreshRequestCheckpoints.hpp>
#include <alibabacloud/models/StartInstanceRefreshRequestDesiredConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckpointPauseTime, checkpointPauseTime_);
      DARABONBA_PTR_TO_JSON(Checkpoints, checkpoints_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DesiredConfiguration, desiredConfiguration_);
      DARABONBA_PTR_TO_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
      DARABONBA_PTR_TO_JSON(MinHealthyPercentage, minHealthyPercentage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SkipMatching, skipMatching_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckpointPauseTime, checkpointPauseTime_);
      DARABONBA_PTR_FROM_JSON(Checkpoints, checkpoints_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DesiredConfiguration, desiredConfiguration_);
      DARABONBA_PTR_FROM_JSON(MaxHealthyPercentage, maxHealthyPercentage_);
      DARABONBA_PTR_FROM_JSON(MinHealthyPercentage, minHealthyPercentage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SkipMatching, skipMatching_);
    };
    StartInstanceRefreshRequest() = default ;
    StartInstanceRefreshRequest(const StartInstanceRefreshRequest &) = default ;
    StartInstanceRefreshRequest(StartInstanceRefreshRequest &&) = default ;
    StartInstanceRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshRequest() = default ;
    StartInstanceRefreshRequest& operator=(const StartInstanceRefreshRequest &) = default ;
    StartInstanceRefreshRequest& operator=(StartInstanceRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpointPauseTime_ == nullptr
        && return this->checkpoints_ == nullptr && return this->clientToken_ == nullptr && return this->desiredConfiguration_ == nullptr && return this->maxHealthyPercentage_ == nullptr && return this->minHealthyPercentage_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->scalingGroupId_ == nullptr && return this->skipMatching_ == nullptr; };
    // checkpointPauseTime Field Functions 
    bool hasCheckpointPauseTime() const { return this->checkpointPauseTime_ != nullptr;};
    void deleteCheckpointPauseTime() { this->checkpointPauseTime_ = nullptr;};
    inline int32_t checkpointPauseTime() const { DARABONBA_PTR_GET_DEFAULT(checkpointPauseTime_, 0) };
    inline StartInstanceRefreshRequest& setCheckpointPauseTime(int32_t checkpointPauseTime) { DARABONBA_PTR_SET_VALUE(checkpointPauseTime_, checkpointPauseTime) };


    // checkpoints Field Functions 
    bool hasCheckpoints() const { return this->checkpoints_ != nullptr;};
    void deleteCheckpoints() { this->checkpoints_ = nullptr;};
    inline const vector<StartInstanceRefreshRequestCheckpoints> & checkpoints() const { DARABONBA_PTR_GET_CONST(checkpoints_, vector<StartInstanceRefreshRequestCheckpoints>) };
    inline vector<StartInstanceRefreshRequestCheckpoints> checkpoints() { DARABONBA_PTR_GET(checkpoints_, vector<StartInstanceRefreshRequestCheckpoints>) };
    inline StartInstanceRefreshRequest& setCheckpoints(const vector<StartInstanceRefreshRequestCheckpoints> & checkpoints) { DARABONBA_PTR_SET_VALUE(checkpoints_, checkpoints) };
    inline StartInstanceRefreshRequest& setCheckpoints(vector<StartInstanceRefreshRequestCheckpoints> && checkpoints) { DARABONBA_PTR_SET_RVALUE(checkpoints_, checkpoints) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartInstanceRefreshRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // desiredConfiguration Field Functions 
    bool hasDesiredConfiguration() const { return this->desiredConfiguration_ != nullptr;};
    void deleteDesiredConfiguration() { this->desiredConfiguration_ = nullptr;};
    inline const StartInstanceRefreshRequestDesiredConfiguration & desiredConfiguration() const { DARABONBA_PTR_GET_CONST(desiredConfiguration_, StartInstanceRefreshRequestDesiredConfiguration) };
    inline StartInstanceRefreshRequestDesiredConfiguration desiredConfiguration() { DARABONBA_PTR_GET(desiredConfiguration_, StartInstanceRefreshRequestDesiredConfiguration) };
    inline StartInstanceRefreshRequest& setDesiredConfiguration(const StartInstanceRefreshRequestDesiredConfiguration & desiredConfiguration) { DARABONBA_PTR_SET_VALUE(desiredConfiguration_, desiredConfiguration) };
    inline StartInstanceRefreshRequest& setDesiredConfiguration(StartInstanceRefreshRequestDesiredConfiguration && desiredConfiguration) { DARABONBA_PTR_SET_RVALUE(desiredConfiguration_, desiredConfiguration) };


    // maxHealthyPercentage Field Functions 
    bool hasMaxHealthyPercentage() const { return this->maxHealthyPercentage_ != nullptr;};
    void deleteMaxHealthyPercentage() { this->maxHealthyPercentage_ = nullptr;};
    inline int32_t maxHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(maxHealthyPercentage_, 0) };
    inline StartInstanceRefreshRequest& setMaxHealthyPercentage(int32_t maxHealthyPercentage) { DARABONBA_PTR_SET_VALUE(maxHealthyPercentage_, maxHealthyPercentage) };


    // minHealthyPercentage Field Functions 
    bool hasMinHealthyPercentage() const { return this->minHealthyPercentage_ != nullptr;};
    void deleteMinHealthyPercentage() { this->minHealthyPercentage_ = nullptr;};
    inline int32_t minHealthyPercentage() const { DARABONBA_PTR_GET_DEFAULT(minHealthyPercentage_, 0) };
    inline StartInstanceRefreshRequest& setMinHealthyPercentage(int32_t minHealthyPercentage) { DARABONBA_PTR_SET_VALUE(minHealthyPercentage_, minHealthyPercentage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartInstanceRefreshRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartInstanceRefreshRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StartInstanceRefreshRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline StartInstanceRefreshRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // skipMatching Field Functions 
    bool hasSkipMatching() const { return this->skipMatching_ != nullptr;};
    void deleteSkipMatching() { this->skipMatching_ = nullptr;};
    inline bool skipMatching() const { DARABONBA_PTR_GET_DEFAULT(skipMatching_, false) };
    inline StartInstanceRefreshRequest& setSkipMatching(bool skipMatching) { DARABONBA_PTR_SET_VALUE(skipMatching_, skipMatching) };


  protected:
    std::shared_ptr<int32_t> checkpointPauseTime_ = nullptr;
    std::shared_ptr<vector<StartInstanceRefreshRequestCheckpoints>> checkpoints_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The desired configurations of the instance refresh task.
    // 
    // > 
    // 
    // *   When you call this operation, you must specify one of the following parameters: ScalingConfigurationId and ImageId.
    // 
    // *   Instances whose configurations match the desired configurations of the task are ignored during instance refresh.
    std::shared_ptr<StartInstanceRefreshRequestDesiredConfiguration> desiredConfiguration_ = nullptr;
    // The ratio of instances that can exceed the upper limit of the scaling group capacity to all instances in the scaling group during instance refresh. Valid values: 100 to 200. Default value: 120.
    // 
    // >  If you set MinHealthyPercentage and MaxHealthyPercentage to 100, Auto Scaling refreshes the configurations of one instance each time the instance refresh task starts.
    std::shared_ptr<int32_t> maxHealthyPercentage_ = nullptr;
    // The ratio of instances that are in the In Service state to all instances in the scaling group during instance refresh. Valid values: 0 to 100. Default value: 80.
    std::shared_ptr<int32_t> minHealthyPercentage_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // Specifies whether to skip instances that match the desired scaling configuration.
    // 
    // >  The system determines the match based on the ID of the desired scaling configuration rather than individual configuration items.
    // 
    // Valid values:
    // 
    // *   true: skips instances that match the desired scaling configuration. When you initiate an instance refresh task, the system checks the configurations of all instances. The refresh operation is skipped for instances created based on the desired scaling configuration.
    // *   false: does not skip instances that match the desired scaling configuration. When an instance refresh task is initiated, all instances in the scaling group at the time of initiation are refreshed.
    // 
    // Default value: true.
    std::shared_ptr<bool> skipMatching_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
