// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodesResponseBodyNodesTotalResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListNodesResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(HtEnabled, htEnabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StateInSched, stateInSched_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalResources, totalResources_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(HtEnabled, htEnabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(KeepAlive, keepAlive_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StateInSched, stateInSched_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalResources, totalResources_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListNodesResponseBodyNodes() = default ;
    ListNodesResponseBodyNodes(const ListNodesResponseBodyNodes &) = default ;
    ListNodesResponseBodyNodes(ListNodesResponseBodyNodes &&) = default ;
    ListNodesResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyNodes() = default ;
    ListNodesResponseBodyNodes& operator=(const ListNodesResponseBodyNodes &) = default ;
    ListNodesResponseBodyNodes& operator=(ListNodesResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addTime_ == nullptr
        && return this->deploymentSetId_ == nullptr && return this->expiredTime_ == nullptr && return this->hostname_ == nullptr && return this->htEnabled_ == nullptr && return this->id_ == nullptr
        && return this->imageId_ == nullptr && return this->instanceType_ == nullptr && return this->ipAddress_ == nullptr && return this->keepAlive_ == nullptr && return this->publicIpAddress_ == nullptr
        && return this->queueName_ == nullptr && return this->spotStrategy_ == nullptr && return this->stateInSched_ == nullptr && return this->status_ == nullptr && return this->totalResources_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline string addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, "") };
    inline ListNodesResponseBodyNodes& setAddTime(string addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline ListNodesResponseBodyNodes& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListNodesResponseBodyNodes& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListNodesResponseBodyNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // htEnabled Field Functions 
    bool hasHtEnabled() const { return this->htEnabled_ != nullptr;};
    void deleteHtEnabled() { this->htEnabled_ = nullptr;};
    inline bool htEnabled() const { DARABONBA_PTR_GET_DEFAULT(htEnabled_, false) };
    inline ListNodesResponseBodyNodes& setHtEnabled(bool htEnabled) { DARABONBA_PTR_SET_VALUE(htEnabled_, htEnabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListNodesResponseBodyNodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListNodesResponseBodyNodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListNodesResponseBodyNodes& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline ListNodesResponseBodyNodes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // keepAlive Field Functions 
    bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
    void deleteKeepAlive() { this->keepAlive_ = nullptr;};
    inline bool keepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
    inline ListNodesResponseBodyNodes& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline string publicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
    inline ListNodesResponseBodyNodes& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListNodesResponseBodyNodes& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ListNodesResponseBodyNodes& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // stateInSched Field Functions 
    bool hasStateInSched() const { return this->stateInSched_ != nullptr;};
    void deleteStateInSched() { this->stateInSched_ = nullptr;};
    inline string stateInSched() const { DARABONBA_PTR_GET_DEFAULT(stateInSched_, "") };
    inline ListNodesResponseBodyNodes& setStateInSched(string stateInSched) { DARABONBA_PTR_SET_VALUE(stateInSched_, stateInSched) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNodesResponseBodyNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalResources Field Functions 
    bool hasTotalResources() const { return this->totalResources_ != nullptr;};
    void deleteTotalResources() { this->totalResources_ = nullptr;};
    inline const Models::ListNodesResponseBodyNodesTotalResources & totalResources() const { DARABONBA_PTR_GET_CONST(totalResources_, Models::ListNodesResponseBodyNodesTotalResources) };
    inline Models::ListNodesResponseBodyNodesTotalResources totalResources() { DARABONBA_PTR_GET(totalResources_, Models::ListNodesResponseBodyNodesTotalResources) };
    inline ListNodesResponseBodyNodes& setTotalResources(const Models::ListNodesResponseBodyNodesTotalResources & totalResources) { DARABONBA_PTR_SET_VALUE(totalResources_, totalResources) };
    inline ListNodesResponseBodyNodes& setTotalResources(Models::ListNodesResponseBodyNodesTotalResources && totalResources) { DARABONBA_PTR_SET_RVALUE(totalResources_, totalResources) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListNodesResponseBodyNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNodesResponseBodyNodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListNodesResponseBodyNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the node was created.
    std::shared_ptr<string> addTime_ = nullptr;
    // The deployment set ID.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The time when the node expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The hostname of the node.
    std::shared_ptr<string> hostname_ = nullptr;
    // Indicates whether hyper-threading is enabled.
    std::shared_ptr<bool> htEnabled_ = nullptr;
    // The instance ID of the node.
    std::shared_ptr<string> id_ = nullptr;
    // The image ID of the node.
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance type of the node.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The VPC IP address of the node.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // Indicates whether deletion protection is enabled for the node. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> keepAlive_ = nullptr;
    // The public IP address of the node.
    std::shared_ptr<string> publicIpAddress_ = nullptr;
    // The name of the queue to which the node belongs.
    std::shared_ptr<string> queueName_ = nullptr;
    // The bidding policy of the node. Valid values:
    // 
    // *   NoSpot: The instances of the compute node are pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as preemptible instances with a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The node is a preemptible instance for which the market price at the time of purchase is automatically used as the bidding price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The node state in the scheduler.
    std::shared_ptr<string> stateInSched_ = nullptr;
    // The node state. Valid values:
    // 
    // *   uninit: The node is being installed.
    // *   initing: The node is being initialized.
    // *   running: The node is running.
    // *   releasing: The node is being released.
    // *   stopped: The node is stopped.
    // *   exception: The node has run into an exception.
    // *   untracking: The node is not added to the cluster.
    std::shared_ptr<string> status_ = nullptr;
    // The hardware configurations of the node.
    std::shared_ptr<Models::ListNodesResponseBodyNodesTotalResources> totalResources_ = nullptr;
    // The vSwitch ID of the node.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID of the node.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
