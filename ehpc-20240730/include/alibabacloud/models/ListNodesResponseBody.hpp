// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
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
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TotalResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalResources& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Gpu, gpu_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, TotalResources& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        TotalResources() = default ;
        TotalResources(const TotalResources &) = default ;
        TotalResources(TotalResources &&) = default ;
        TotalResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalResources() = default ;
        TotalResources& operator=(const TotalResources &) = default ;
        TotalResources& operator=(TotalResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpu_ == nullptr && this->memory_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline TotalResources& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // gpu Field Functions 
        bool hasGpu() const { return this->gpu_ != nullptr;};
        void deleteGpu() { this->gpu_ = nullptr;};
        inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
        inline TotalResources& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline TotalResources& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The number of vCPUs.
        shared_ptr<int32_t> cpu_ {};
        // The number of GPUs.
        shared_ptr<int32_t> gpu_ {};
        // The amount of memory. Unit: GiB.
        shared_ptr<int32_t> memory_ {};
      };

      virtual bool empty() const override { return this->addTime_ == nullptr
        && this->deploymentSetId_ == nullptr && this->expiredTime_ == nullptr && this->hostname_ == nullptr && this->htEnabled_ == nullptr && this->id_ == nullptr
        && this->imageId_ == nullptr && this->instanceType_ == nullptr && this->ipAddress_ == nullptr && this->keepAlive_ == nullptr && this->publicIpAddress_ == nullptr
        && this->queueName_ == nullptr && this->spotStrategy_ == nullptr && this->stateInSched_ == nullptr && this->status_ == nullptr && this->totalResources_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // addTime Field Functions 
      bool hasAddTime() const { return this->addTime_ != nullptr;};
      void deleteAddTime() { this->addTime_ = nullptr;};
      inline string getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, "") };
      inline Nodes& setAddTime(string addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


      // deploymentSetId Field Functions 
      bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
      void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
      inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
      inline Nodes& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Nodes& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Nodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // htEnabled Field Functions 
      bool hasHtEnabled() const { return this->htEnabled_ != nullptr;};
      void deleteHtEnabled() { this->htEnabled_ = nullptr;};
      inline bool getHtEnabled() const { DARABONBA_PTR_GET_DEFAULT(htEnabled_, false) };
      inline Nodes& setHtEnabled(bool htEnabled) { DARABONBA_PTR_SET_VALUE(htEnabled_, htEnabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Nodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Nodes& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Nodes& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline Nodes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // keepAlive Field Functions 
      bool hasKeepAlive() const { return this->keepAlive_ != nullptr;};
      void deleteKeepAlive() { this->keepAlive_ = nullptr;};
      inline bool getKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(keepAlive_, false) };
      inline Nodes& setKeepAlive(bool keepAlive) { DARABONBA_PTR_SET_VALUE(keepAlive_, keepAlive) };


      // publicIpAddress Field Functions 
      bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
      void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
      inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
      inline Nodes& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Nodes& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline Nodes& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // stateInSched Field Functions 
      bool hasStateInSched() const { return this->stateInSched_ != nullptr;};
      void deleteStateInSched() { this->stateInSched_ = nullptr;};
      inline string getStateInSched() const { DARABONBA_PTR_GET_DEFAULT(stateInSched_, "") };
      inline Nodes& setStateInSched(string stateInSched) { DARABONBA_PTR_SET_VALUE(stateInSched_, stateInSched) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Nodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalResources Field Functions 
      bool hasTotalResources() const { return this->totalResources_ != nullptr;};
      void deleteTotalResources() { this->totalResources_ = nullptr;};
      inline const Nodes::TotalResources & getTotalResources() const { DARABONBA_PTR_GET_CONST(totalResources_, Nodes::TotalResources) };
      inline Nodes::TotalResources getTotalResources() { DARABONBA_PTR_GET(totalResources_, Nodes::TotalResources) };
      inline Nodes& setTotalResources(const Nodes::TotalResources & totalResources) { DARABONBA_PTR_SET_VALUE(totalResources_, totalResources) };
      inline Nodes& setTotalResources(Nodes::TotalResources && totalResources) { DARABONBA_PTR_SET_RVALUE(totalResources_, totalResources) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Nodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Nodes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Nodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The time when the node was created.
      shared_ptr<string> addTime_ {};
      // The deployment set ID.
      shared_ptr<string> deploymentSetId_ {};
      // The time when the node expires.
      shared_ptr<string> expiredTime_ {};
      // The hostname of the node.
      shared_ptr<string> hostname_ {};
      // Indicates whether hyper-threading is enabled.
      shared_ptr<bool> htEnabled_ {};
      // The instance ID of the node.
      shared_ptr<string> id_ {};
      // The image ID of the node.
      shared_ptr<string> imageId_ {};
      // The instance type of the node.
      shared_ptr<string> instanceType_ {};
      // The VPC IP address of the node.
      shared_ptr<string> ipAddress_ {};
      // Indicates whether deletion protection is enabled for the node. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> keepAlive_ {};
      // The public IP address of the node.
      shared_ptr<string> publicIpAddress_ {};
      // The name of the queue to which the node belongs.
      shared_ptr<string> queueName_ {};
      // The bidding policy of the node. Valid values:
      // 
      // *   NoSpot: The instances of the compute node are pay-as-you-go instances.
      // *   SpotWithPriceLimit: The instances are created as preemptible instances with a user-defined maximum hourly price.
      // *   SpotAsPriceGo: The node is a preemptible instance for which the market price at the time of purchase is automatically used as the bidding price.
      shared_ptr<string> spotStrategy_ {};
      // The node state in the scheduler.
      shared_ptr<string> stateInSched_ {};
      // The node state. Valid values:
      // 
      // *   uninit: The node is being installed.
      // *   initing: The node is being initialized.
      // *   running: The node is running.
      // *   releasing: The node is being released.
      // *   stopped: The node is stopped.
      // *   exception: The node has run into an exception.
      // *   untracking: The node is not added to the cluster.
      shared_ptr<string> status_ {};
      // The hardware configurations of the node.
      shared_ptr<Nodes::TotalResources> totalResources_ {};
      // The vSwitch ID of the node.
      shared_ptr<string> vSwitchId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The zone ID of the node.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->nodes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<ListNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ListNodesResponseBody::Nodes>) };
    inline vector<ListNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<ListNodesResponseBody::Nodes>) };
    inline ListNodesResponseBody& setNodes(const vector<ListNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListNodesResponseBody& setNodes(vector<ListNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNodesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the nodes.
    shared_ptr<vector<ListNodesResponseBody::Nodes>> nodes_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
