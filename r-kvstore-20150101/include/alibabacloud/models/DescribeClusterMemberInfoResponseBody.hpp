// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERMEMBERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERMEMBERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeClusterMemberInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterMemberInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterChildren, clusterChildren_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterMemberInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterChildren, clusterChildren_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterMemberInfoResponseBody() = default ;
    DescribeClusterMemberInfoResponseBody(const DescribeClusterMemberInfoResponseBody &) = default ;
    DescribeClusterMemberInfoResponseBody(DescribeClusterMemberInfoResponseBody &&) = default ;
    DescribeClusterMemberInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterMemberInfoResponseBody() = default ;
    DescribeClusterMemberInfoResponseBody& operator=(const DescribeClusterMemberInfoResponseBody &) = default ;
    DescribeClusterMemberInfoResponseBody& operator=(DescribeClusterMemberInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterChildren : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterChildren& obj) { 
        DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
        DARABONBA_PTR_TO_JSON(BinlogRetentionDays, binlogRetentionDays_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
        DARABONBA_PTR_TO_JSON(Connections, connections_);
        DARABONBA_PTR_TO_JSON(CurrentBandWidth, currentBandWidth_);
        DARABONBA_PTR_TO_JSON(DiskSizeMB, diskSizeMB_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ReplicaSize, replicaSize_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterChildren& obj) { 
        DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
        DARABONBA_PTR_FROM_JSON(BinlogRetentionDays, binlogRetentionDays_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
        DARABONBA_PTR_FROM_JSON(Connections, connections_);
        DARABONBA_PTR_FROM_JSON(CurrentBandWidth, currentBandWidth_);
        DARABONBA_PTR_FROM_JSON(DiskSizeMB, diskSizeMB_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ReplicaSize, replicaSize_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ClusterChildren() = default ;
      ClusterChildren(const ClusterChildren &) = default ;
      ClusterChildren(ClusterChildren &&) = default ;
      ClusterChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterChildren() = default ;
      ClusterChildren& operator=(const ClusterChildren &) = default ;
      ClusterChildren& operator=(ClusterChildren &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandWidth_ == nullptr
        && this->binlogRetentionDays_ == nullptr && this->bizType_ == nullptr && this->capacity_ == nullptr && this->classCode_ == nullptr && this->connections_ == nullptr
        && this->currentBandWidth_ == nullptr && this->diskSizeMB_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->replicaSize_ == nullptr
        && this->resourceGroupName_ == nullptr && this->service_ == nullptr && this->serviceVersion_ == nullptr && this->userId_ == nullptr; };
      // bandWidth Field Functions 
      bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
      void deleteBandWidth() { this->bandWidth_ = nullptr;};
      inline int64_t getBandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, 0L) };
      inline ClusterChildren& setBandWidth(int64_t bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


      // binlogRetentionDays Field Functions 
      bool hasBinlogRetentionDays() const { return this->binlogRetentionDays_ != nullptr;};
      void deleteBinlogRetentionDays() { this->binlogRetentionDays_ = nullptr;};
      inline int32_t getBinlogRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(binlogRetentionDays_, 0) };
      inline ClusterChildren& setBinlogRetentionDays(int32_t binlogRetentionDays) { DARABONBA_PTR_SET_VALUE(binlogRetentionDays_, binlogRetentionDays) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline ClusterChildren& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline ClusterChildren& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // classCode Field Functions 
      bool hasClassCode() const { return this->classCode_ != nullptr;};
      void deleteClassCode() { this->classCode_ = nullptr;};
      inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
      inline ClusterChildren& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


      // connections Field Functions 
      bool hasConnections() const { return this->connections_ != nullptr;};
      void deleteConnections() { this->connections_ = nullptr;};
      inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
      inline ClusterChildren& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


      // currentBandWidth Field Functions 
      bool hasCurrentBandWidth() const { return this->currentBandWidth_ != nullptr;};
      void deleteCurrentBandWidth() { this->currentBandWidth_ = nullptr;};
      inline int64_t getCurrentBandWidth() const { DARABONBA_PTR_GET_DEFAULT(currentBandWidth_, 0L) };
      inline ClusterChildren& setCurrentBandWidth(int64_t currentBandWidth) { DARABONBA_PTR_SET_VALUE(currentBandWidth_, currentBandWidth) };


      // diskSizeMB Field Functions 
      bool hasDiskSizeMB() const { return this->diskSizeMB_ != nullptr;};
      void deleteDiskSizeMB() { this->diskSizeMB_ = nullptr;};
      inline int32_t getDiskSizeMB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeMB_, 0) };
      inline ClusterChildren& setDiskSizeMB(int32_t diskSizeMB) { DARABONBA_PTR_SET_VALUE(diskSizeMB_, diskSizeMB) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ClusterChildren& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ClusterChildren& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // replicaSize Field Functions 
      bool hasReplicaSize() const { return this->replicaSize_ != nullptr;};
      void deleteReplicaSize() { this->replicaSize_ = nullptr;};
      inline int32_t getReplicaSize() const { DARABONBA_PTR_GET_DEFAULT(replicaSize_, 0) };
      inline ClusterChildren& setReplicaSize(int32_t replicaSize) { DARABONBA_PTR_SET_VALUE(replicaSize_, replicaSize) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline ClusterChildren& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline ClusterChildren& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // serviceVersion Field Functions 
      bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
      void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
      inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
      inline ClusterChildren& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ClusterChildren& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The maximum bandwidth of the node. Unit: MB/s.
      // 
      // > This parameter is returned only if the return value of **Service** is **redis**, which indicates a data node.
      shared_ptr<int64_t> bandWidth_ {};
      // The retention period of binlogs.
      shared_ptr<int32_t> binlogRetentionDays_ {};
      // The type of workload. The return value is **ALIYUN**.
      shared_ptr<string> bizType_ {};
      // The maximum memory capacity per data node. Unit: MB.
      // 
      // > This parameter is returned only if the return value of **Service** is **redis**, which indicates a data node.
      shared_ptr<int64_t> capacity_ {};
      // The specifications of the data node. For more information, see [Community Edition instances that use cloud disks](https://help.aliyun.com/document_detail/164477.html).
      shared_ptr<string> classCode_ {};
      // The maximum number of connections supported by the data node.
      shared_ptr<int64_t> connections_ {};
      // The current bandwidth of the data node, which is the sum of the default bandwidth and any extra bandwidth that is purchased. Unit: Mbit/s.
      shared_ptr<int64_t> currentBandWidth_ {};
      // The storage capacity of the [enhanced SSD (ESSD)](https://help.aliyun.com/document_detail/122389.html) that is used by the data node. Unit: MB.
      // 
      // > The ESSD is used only to store system operating data, such as Persistent Memory (PMEM). It is not used as a medium to write and read data.
      shared_ptr<int32_t> diskSizeMB_ {};
      // The ID of the replica set in the node.
      shared_ptr<int64_t> id_ {};
      // The name of the data node.
      shared_ptr<string> name_ {};
      // The number of replica nodes.
      shared_ptr<int32_t> replicaSize_ {};
      // The name of the resource group to which the node belongs.
      shared_ptr<string> resourceGroupName_ {};
      // The node type. Valid values:
      // 
      // *   **redis**: data node
      // *   **redis_cs**: config server
      shared_ptr<string> service_ {};
      // The major version of the node.
      shared_ptr<string> serviceVersion_ {};
      // The ID of the user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->clusterChildren_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterChildren Field Functions 
    bool hasClusterChildren() const { return this->clusterChildren_ != nullptr;};
    void deleteClusterChildren() { this->clusterChildren_ = nullptr;};
    inline const vector<DescribeClusterMemberInfoResponseBody::ClusterChildren> & getClusterChildren() const { DARABONBA_PTR_GET_CONST(clusterChildren_, vector<DescribeClusterMemberInfoResponseBody::ClusterChildren>) };
    inline vector<DescribeClusterMemberInfoResponseBody::ClusterChildren> getClusterChildren() { DARABONBA_PTR_GET(clusterChildren_, vector<DescribeClusterMemberInfoResponseBody::ClusterChildren>) };
    inline DescribeClusterMemberInfoResponseBody& setClusterChildren(const vector<DescribeClusterMemberInfoResponseBody::ClusterChildren> & clusterChildren) { DARABONBA_PTR_SET_VALUE(clusterChildren_, clusterChildren) };
    inline DescribeClusterMemberInfoResponseBody& setClusterChildren(vector<DescribeClusterMemberInfoResponseBody::ClusterChildren> && clusterChildren) { DARABONBA_PTR_SET_RVALUE(clusterChildren_, clusterChildren) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterMemberInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about data nodes in the cluster instance.
    shared_ptr<vector<DescribeClusterMemberInfoResponseBody::ClusterChildren>> clusterChildren_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
