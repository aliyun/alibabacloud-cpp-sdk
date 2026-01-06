// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterResourceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterResourceDetailResponseBody() = default ;
    DescribeClusterResourceDetailResponseBody(const DescribeClusterResourceDetailResponseBody &) = default ;
    DescribeClusterResourceDetailResponseBody(DescribeClusterResourceDetailResponseBody &&) = default ;
    DescribeClusterResourceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourceDetailResponseBody() = default ;
    DescribeClusterResourceDetailResponseBody& operator=(const DescribeClusterResourceDetailResponseBody &) = default ;
    DescribeClusterResourceDetailResponseBody& operator=(DescribeClusterResourceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(FreeComputeResource, freeComputeResource_);
        DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
        DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(FreeComputeResource, freeComputeResource_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
        DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
          DARABONBA_PTR_TO_JSON(ClusterSizeResource, clusterSizeResource_);
          DARABONBA_PTR_TO_JSON(EnableSpot, enableSpot_);
          DARABONBA_PTR_TO_JSON(MaxClusterCount, maxClusterCount_);
          DARABONBA_PTR_TO_JSON(MaxComputeResource, maxComputeResource_);
          DARABONBA_PTR_TO_JSON(MinClusterCount, minClusterCount_);
          DARABONBA_PTR_TO_JSON(MinComputeResource, minComputeResource_);
          DARABONBA_PTR_TO_JSON(PoolId, poolId_);
          DARABONBA_PTR_TO_JSON(PoolName, poolName_);
          DARABONBA_PTR_TO_JSON(PoolType, poolType_);
          DARABONBA_PTR_TO_JSON(PoolUsers, poolUsers_);
          DARABONBA_PTR_TO_JSON(RunningClusterCount, runningClusterCount_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
          DARABONBA_PTR_FROM_JSON(ClusterSizeResource, clusterSizeResource_);
          DARABONBA_PTR_FROM_JSON(EnableSpot, enableSpot_);
          DARABONBA_PTR_FROM_JSON(MaxClusterCount, maxClusterCount_);
          DARABONBA_PTR_FROM_JSON(MaxComputeResource, maxComputeResource_);
          DARABONBA_PTR_FROM_JSON(MinClusterCount, minClusterCount_);
          DARABONBA_PTR_FROM_JSON(MinComputeResource, minComputeResource_);
          DARABONBA_PTR_FROM_JSON(PoolId, poolId_);
          DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
          DARABONBA_PTR_FROM_JSON(PoolType, poolType_);
          DARABONBA_PTR_FROM_JSON(PoolUsers, poolUsers_);
          DARABONBA_PTR_FROM_JSON(RunningClusterCount, runningClusterCount_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ResourceGroupList() = default ;
        ResourceGroupList(const ResourceGroupList &) = default ;
        ResourceGroupList(ResourceGroupList &&) = default ;
        ResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroupList() = default ;
        ResourceGroupList& operator=(const ResourceGroupList &) = default ;
        ResourceGroupList& operator=(ResourceGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterMode_ == nullptr
        && this->clusterSizeResource_ == nullptr && this->enableSpot_ == nullptr && this->maxClusterCount_ == nullptr && this->maxComputeResource_ == nullptr && this->minClusterCount_ == nullptr
        && this->minComputeResource_ == nullptr && this->poolId_ == nullptr && this->poolName_ == nullptr && this->poolType_ == nullptr && this->poolUsers_ == nullptr
        && this->runningClusterCount_ == nullptr && this->status_ == nullptr; };
        // clusterMode Field Functions 
        bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
        void deleteClusterMode() { this->clusterMode_ = nullptr;};
        inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
        inline ResourceGroupList& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


        // clusterSizeResource Field Functions 
        bool hasClusterSizeResource() const { return this->clusterSizeResource_ != nullptr;};
        void deleteClusterSizeResource() { this->clusterSizeResource_ = nullptr;};
        inline string getClusterSizeResource() const { DARABONBA_PTR_GET_DEFAULT(clusterSizeResource_, "") };
        inline ResourceGroupList& setClusterSizeResource(string clusterSizeResource) { DARABONBA_PTR_SET_VALUE(clusterSizeResource_, clusterSizeResource) };


        // enableSpot Field Functions 
        bool hasEnableSpot() const { return this->enableSpot_ != nullptr;};
        void deleteEnableSpot() { this->enableSpot_ = nullptr;};
        inline bool getEnableSpot() const { DARABONBA_PTR_GET_DEFAULT(enableSpot_, false) };
        inline ResourceGroupList& setEnableSpot(bool enableSpot) { DARABONBA_PTR_SET_VALUE(enableSpot_, enableSpot) };


        // maxClusterCount Field Functions 
        bool hasMaxClusterCount() const { return this->maxClusterCount_ != nullptr;};
        void deleteMaxClusterCount() { this->maxClusterCount_ = nullptr;};
        inline int32_t getMaxClusterCount() const { DARABONBA_PTR_GET_DEFAULT(maxClusterCount_, 0) };
        inline ResourceGroupList& setMaxClusterCount(int32_t maxClusterCount) { DARABONBA_PTR_SET_VALUE(maxClusterCount_, maxClusterCount) };


        // maxComputeResource Field Functions 
        bool hasMaxComputeResource() const { return this->maxComputeResource_ != nullptr;};
        void deleteMaxComputeResource() { this->maxComputeResource_ = nullptr;};
        inline string getMaxComputeResource() const { DARABONBA_PTR_GET_DEFAULT(maxComputeResource_, "") };
        inline ResourceGroupList& setMaxComputeResource(string maxComputeResource) { DARABONBA_PTR_SET_VALUE(maxComputeResource_, maxComputeResource) };


        // minClusterCount Field Functions 
        bool hasMinClusterCount() const { return this->minClusterCount_ != nullptr;};
        void deleteMinClusterCount() { this->minClusterCount_ = nullptr;};
        inline int32_t getMinClusterCount() const { DARABONBA_PTR_GET_DEFAULT(minClusterCount_, 0) };
        inline ResourceGroupList& setMinClusterCount(int32_t minClusterCount) { DARABONBA_PTR_SET_VALUE(minClusterCount_, minClusterCount) };


        // minComputeResource Field Functions 
        bool hasMinComputeResource() const { return this->minComputeResource_ != nullptr;};
        void deleteMinComputeResource() { this->minComputeResource_ = nullptr;};
        inline string getMinComputeResource() const { DARABONBA_PTR_GET_DEFAULT(minComputeResource_, "") };
        inline ResourceGroupList& setMinComputeResource(string minComputeResource) { DARABONBA_PTR_SET_VALUE(minComputeResource_, minComputeResource) };


        // poolId Field Functions 
        bool hasPoolId() const { return this->poolId_ != nullptr;};
        void deletePoolId() { this->poolId_ = nullptr;};
        inline int64_t getPoolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, 0L) };
        inline ResourceGroupList& setPoolId(int64_t poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


        // poolName Field Functions 
        bool hasPoolName() const { return this->poolName_ != nullptr;};
        void deletePoolName() { this->poolName_ = nullptr;};
        inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
        inline ResourceGroupList& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


        // poolType Field Functions 
        bool hasPoolType() const { return this->poolType_ != nullptr;};
        void deletePoolType() { this->poolType_ = nullptr;};
        inline string getPoolType() const { DARABONBA_PTR_GET_DEFAULT(poolType_, "") };
        inline ResourceGroupList& setPoolType(string poolType) { DARABONBA_PTR_SET_VALUE(poolType_, poolType) };


        // poolUsers Field Functions 
        bool hasPoolUsers() const { return this->poolUsers_ != nullptr;};
        void deletePoolUsers() { this->poolUsers_ = nullptr;};
        inline string getPoolUsers() const { DARABONBA_PTR_GET_DEFAULT(poolUsers_, "") };
        inline ResourceGroupList& setPoolUsers(string poolUsers) { DARABONBA_PTR_SET_VALUE(poolUsers_, poolUsers) };


        // runningClusterCount Field Functions 
        bool hasRunningClusterCount() const { return this->runningClusterCount_ != nullptr;};
        void deleteRunningClusterCount() { this->runningClusterCount_ = nullptr;};
        inline int32_t getRunningClusterCount() const { DARABONBA_PTR_GET_DEFAULT(runningClusterCount_, 0) };
        inline ResourceGroupList& setRunningClusterCount(int32_t runningClusterCount) { DARABONBA_PTR_SET_VALUE(runningClusterCount_, runningClusterCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResourceGroupList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // A reserved parameter.
        // 
        // This parameter is required.
        shared_ptr<string> clusterMode_ {};
        // A reserved parameter.
        shared_ptr<string> clusterSizeResource_ {};
        // Indicates whether the preemptible instance feature is enabled for the resource group. After the preemptible instance feature is enabled, you are charged for resources at a lower unit price but the resources are probably released. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // The True value is returned only for job resource groups.
        shared_ptr<bool> enableSpot_ {};
        // A reserved parameter.
        shared_ptr<int32_t> maxClusterCount_ {};
        // The maximum amount of reserved computing resources.
        shared_ptr<string> maxComputeResource_ {};
        // A reserved parameter.
        shared_ptr<int32_t> minClusterCount_ {};
        // The minimum amount of reserved computing resources.
        shared_ptr<string> minComputeResource_ {};
        // The resource group ID.
        shared_ptr<int64_t> poolId_ {};
        // The name of the resource group.
        shared_ptr<string> poolName_ {};
        // The type of the resource group.
        shared_ptr<string> poolType_ {};
        // The user of the resource group.
        shared_ptr<string> poolUsers_ {};
        // A reserved parameter.
        shared_ptr<int32_t> runningClusterCount_ {};
        // The status of the resource group. Valid values:
        // 
        // *   **running**
        // *   **deleting**
        // *   **scaling**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->DBClusterId_ == nullptr && this->freeComputeResource_ == nullptr && this->resourceGroupList_ == nullptr && this->storageResource_ == nullptr; };
      // computeResource Field Functions 
      bool hasComputeResource() const { return this->computeResource_ != nullptr;};
      void deleteComputeResource() { this->computeResource_ = nullptr;};
      inline string getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
      inline Data& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // freeComputeResource Field Functions 
      bool hasFreeComputeResource() const { return this->freeComputeResource_ != nullptr;};
      void deleteFreeComputeResource() { this->freeComputeResource_ = nullptr;};
      inline string getFreeComputeResource() const { DARABONBA_PTR_GET_DEFAULT(freeComputeResource_, "") };
      inline Data& setFreeComputeResource(string freeComputeResource) { DARABONBA_PTR_SET_VALUE(freeComputeResource_, freeComputeResource) };


      // resourceGroupList Field Functions 
      bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
      void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
      inline const vector<Data::ResourceGroupList> & getResourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<Data::ResourceGroupList>) };
      inline vector<Data::ResourceGroupList> getResourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<Data::ResourceGroupList>) };
      inline Data& setResourceGroupList(const vector<Data::ResourceGroupList> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
      inline Data& setResourceGroupList(vector<Data::ResourceGroupList> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


      // storageResource Field Functions 
      bool hasStorageResource() const { return this->storageResource_ != nullptr;};
      void deleteStorageResource() { this->storageResource_ = nullptr;};
      inline string getStorageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
      inline Data& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    protected:
      // The amount of reserved computing resources. Unit: AnalyticDB compute units (ACUs). Valid values: 0 to 4096. The value must be in increments of 16 ACUs. Each ACU is equivalent to 1 core and 4 GB memory.
      shared_ptr<string> computeResource_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The amount of idle reserved computing resources. Unit: ACUs. Valid values: 0 to 4096. The value must be in increments of 16 ACUs. Each ACU is equivalent to 1 core and 4 GB memory.
      shared_ptr<string> freeComputeResource_ {};
      // The resource groups.
      shared_ptr<vector<Data::ResourceGroupList>> resourceGroupList_ {};
      // The amount of reserved storage resources. Unit: ACUs. Valid values: 0 to 2064. The value must be in increments of 24 ACUs. Each ACU is equivalent to 1 core and 4 GB memory.
      shared_ptr<string> storageResource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeClusterResourceDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeClusterResourceDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeClusterResourceDetailResponseBody::Data) };
    inline DescribeClusterResourceDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeClusterResourceDetailResponseBody::Data) };
    inline DescribeClusterResourceDetailResponseBody& setData(const DescribeClusterResourceDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeClusterResourceDetailResponseBody& setData(DescribeClusterResourceDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterResourceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The queried resource usage.
    shared_ptr<DescribeClusterResourceDetailResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
