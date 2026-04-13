// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoBackup, autoBackup_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(OpenPublicNet, openPublicNet_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_TO_JSON(SgId, sgId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswId, vswId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoBackup, autoBackup_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(OpenPublicNet, openPublicNet_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_FROM_JSON(SgId, sgId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswId, vswId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class ClusterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AttuPort, attuPort_);
          DARABONBA_PTR_TO_JSON(InternetUrl, internetUrl_);
          DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
          DARABONBA_PTR_TO_JSON(MilvusResourceInfoList, milvusResourceInfoList_);
          DARABONBA_PTR_TO_JSON(ProxyPort, proxyPort_);
          DARABONBA_PTR_TO_JSON(TotalCuNum, totalCuNum_);
          DARABONBA_PTR_TO_JSON(TotalDiskSize, totalDiskSize_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AttuPort, attuPort_);
          DARABONBA_PTR_FROM_JSON(InternetUrl, internetUrl_);
          DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
          DARABONBA_PTR_FROM_JSON(MilvusResourceInfoList, milvusResourceInfoList_);
          DARABONBA_PTR_FROM_JSON(ProxyPort, proxyPort_);
          DARABONBA_PTR_FROM_JSON(TotalCuNum, totalCuNum_);
          DARABONBA_PTR_FROM_JSON(TotalDiskSize, totalDiskSize_);
        };
        ClusterInfo() = default ;
        ClusterInfo(const ClusterInfo &) = default ;
        ClusterInfo(ClusterInfo &&) = default ;
        ClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterInfo() = default ;
        ClusterInfo& operator=(const ClusterInfo &) = default ;
        ClusterInfo& operator=(ClusterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MilvusResourceInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MilvusResourceInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
            DARABONBA_PTR_TO_JSON(CuNum, cuNum_);
            DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
            DARABONBA_PTR_TO_JSON(DiskType, diskType_);
            DARABONBA_PTR_TO_JSON(Replica, replica_);
          };
          friend void from_json(const Darabonba::Json& j, MilvusResourceInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
            DARABONBA_PTR_FROM_JSON(CuNum, cuNum_);
            DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
            DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
            DARABONBA_PTR_FROM_JSON(Replica, replica_);
          };
          MilvusResourceInfoList() = default ;
          MilvusResourceInfoList(const MilvusResourceInfoList &) = default ;
          MilvusResourceInfoList(MilvusResourceInfoList &&) = default ;
          MilvusResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MilvusResourceInfoList() = default ;
          MilvusResourceInfoList& operator=(const MilvusResourceInfoList &) = default ;
          MilvusResourceInfoList& operator=(MilvusResourceInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentType_ == nullptr
        && this->cuNum_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->replica_ == nullptr; };
          // componentType Field Functions 
          bool hasComponentType() const { return this->componentType_ != nullptr;};
          void deleteComponentType() { this->componentType_ = nullptr;};
          inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
          inline MilvusResourceInfoList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


          // cuNum Field Functions 
          bool hasCuNum() const { return this->cuNum_ != nullptr;};
          void deleteCuNum() { this->cuNum_ = nullptr;};
          inline int32_t getCuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
          inline MilvusResourceInfoList& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


          // diskSize Field Functions 
          bool hasDiskSize() const { return this->diskSize_ != nullptr;};
          void deleteDiskSize() { this->diskSize_ = nullptr;};
          inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
          inline MilvusResourceInfoList& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


          // diskType Field Functions 
          bool hasDiskType() const { return this->diskType_ != nullptr;};
          void deleteDiskType() { this->diskType_ = nullptr;};
          inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
          inline MilvusResourceInfoList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


          // replica Field Functions 
          bool hasReplica() const { return this->replica_ != nullptr;};
          void deleteReplica() { this->replica_ = nullptr;};
          inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
          inline MilvusResourceInfoList& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


        protected:
          // The type of the component. Valid values:
          // 
          // *   standalone
          // *   proxy
          // *   mix_coordinator
          // *   query
          // *   index
          // *   data
          shared_ptr<string> componentType_ {};
          // The number of CUs.
          shared_ptr<int32_t> cuNum_ {};
          // The disk size.
          shared_ptr<int32_t> diskSize_ {};
          // The disk type.
          shared_ptr<string> diskType_ {};
          // The number of replicas.
          shared_ptr<int32_t> replica_ {};
        };

        virtual bool empty() const override { return this->attuPort_ == nullptr
        && this->internetUrl_ == nullptr && this->intranetUrl_ == nullptr && this->milvusResourceInfoList_ == nullptr && this->proxyPort_ == nullptr && this->totalCuNum_ == nullptr
        && this->totalDiskSize_ == nullptr; };
        // attuPort Field Functions 
        bool hasAttuPort() const { return this->attuPort_ != nullptr;};
        void deleteAttuPort() { this->attuPort_ = nullptr;};
        inline int32_t getAttuPort() const { DARABONBA_PTR_GET_DEFAULT(attuPort_, 0) };
        inline ClusterInfo& setAttuPort(int32_t attuPort) { DARABONBA_PTR_SET_VALUE(attuPort_, attuPort) };


        // internetUrl Field Functions 
        bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
        void deleteInternetUrl() { this->internetUrl_ = nullptr;};
        inline string getInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
        inline ClusterInfo& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


        // intranetUrl Field Functions 
        bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
        void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
        inline string getIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
        inline ClusterInfo& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


        // milvusResourceInfoList Field Functions 
        bool hasMilvusResourceInfoList() const { return this->milvusResourceInfoList_ != nullptr;};
        void deleteMilvusResourceInfoList() { this->milvusResourceInfoList_ = nullptr;};
        inline const vector<ClusterInfo::MilvusResourceInfoList> & getMilvusResourceInfoList() const { DARABONBA_PTR_GET_CONST(milvusResourceInfoList_, vector<ClusterInfo::MilvusResourceInfoList>) };
        inline vector<ClusterInfo::MilvusResourceInfoList> getMilvusResourceInfoList() { DARABONBA_PTR_GET(milvusResourceInfoList_, vector<ClusterInfo::MilvusResourceInfoList>) };
        inline ClusterInfo& setMilvusResourceInfoList(const vector<ClusterInfo::MilvusResourceInfoList> & milvusResourceInfoList) { DARABONBA_PTR_SET_VALUE(milvusResourceInfoList_, milvusResourceInfoList) };
        inline ClusterInfo& setMilvusResourceInfoList(vector<ClusterInfo::MilvusResourceInfoList> && milvusResourceInfoList) { DARABONBA_PTR_SET_RVALUE(milvusResourceInfoList_, milvusResourceInfoList) };


        // proxyPort Field Functions 
        bool hasProxyPort() const { return this->proxyPort_ != nullptr;};
        void deleteProxyPort() { this->proxyPort_ = nullptr;};
        inline int32_t getProxyPort() const { DARABONBA_PTR_GET_DEFAULT(proxyPort_, 0) };
        inline ClusterInfo& setProxyPort(int32_t proxyPort) { DARABONBA_PTR_SET_VALUE(proxyPort_, proxyPort) };


        // totalCuNum Field Functions 
        bool hasTotalCuNum() const { return this->totalCuNum_ != nullptr;};
        void deleteTotalCuNum() { this->totalCuNum_ = nullptr;};
        inline int32_t getTotalCuNum() const { DARABONBA_PTR_GET_DEFAULT(totalCuNum_, 0) };
        inline ClusterInfo& setTotalCuNum(int32_t totalCuNum) { DARABONBA_PTR_SET_VALUE(totalCuNum_, totalCuNum) };


        // totalDiskSize Field Functions 
        bool hasTotalDiskSize() const { return this->totalDiskSize_ != nullptr;};
        void deleteTotalDiskSize() { this->totalDiskSize_ = nullptr;};
        inline int32_t getTotalDiskSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskSize_, 0) };
        inline ClusterInfo& setTotalDiskSize(int32_t totalDiskSize) { DARABONBA_PTR_SET_VALUE(totalDiskSize_, totalDiskSize) };


      protected:
        // The port of the Attu component.
        shared_ptr<int32_t> attuPort_ {};
        // The public IP address.
        shared_ptr<string> internetUrl_ {};
        // The internal endpoint.
        shared_ptr<string> intranetUrl_ {};
        // The resource details.
        shared_ptr<vector<ClusterInfo::MilvusResourceInfoList>> milvusResourceInfoList_ {};
        // The proxy port.
        shared_ptr<int32_t> proxyPort_ {};
        // The number of CUs.
        shared_ptr<int32_t> totalCuNum_ {};
        // The total capacity of the disk.
        shared_ptr<int32_t> totalDiskSize_ {};
      };

      virtual bool empty() const override { return this->autoBackup_ == nullptr
        && this->beginTime_ == nullptr && this->clusterInfo_ == nullptr && this->clusterName_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr
        && this->instanceStatus_ == nullptr && this->nodeType_ == nullptr && this->openPublicNet_ == nullptr && this->packageType_ == nullptr && this->payType_ == nullptr
        && this->productCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->runningTime_ == nullptr && this->sgId_ == nullptr
        && this->tags_ == nullptr && this->templateVersion_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr && this->vswId_ == nullptr
        && this->zoneId_ == nullptr; };
      // autoBackup Field Functions 
      bool hasAutoBackup() const { return this->autoBackup_ != nullptr;};
      void deleteAutoBackup() { this->autoBackup_ = nullptr;};
      inline bool getAutoBackup() const { DARABONBA_PTR_GET_DEFAULT(autoBackup_, false) };
      inline Data& setAutoBackup(bool autoBackup) { DARABONBA_PTR_SET_VALUE(autoBackup_, autoBackup) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // clusterInfo Field Functions 
      bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
      void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
      inline const Data::ClusterInfo & getClusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, Data::ClusterInfo) };
      inline Data::ClusterInfo getClusterInfo() { DARABONBA_PTR_GET(clusterInfo_, Data::ClusterInfo) };
      inline Data& setClusterInfo(const Data::ClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
      inline Data& setClusterInfo(Data::ClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Data& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Data& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // openPublicNet Field Functions 
      bool hasOpenPublicNet() const { return this->openPublicNet_ != nullptr;};
      void deleteOpenPublicNet() { this->openPublicNet_ = nullptr;};
      inline bool getOpenPublicNet() const { DARABONBA_PTR_GET_DEFAULT(openPublicNet_, false) };
      inline Data& setOpenPublicNet(bool openPublicNet) { DARABONBA_PTR_SET_VALUE(openPublicNet_, openPublicNet) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
      inline Data& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // runningTime Field Functions 
      bool hasRunningTime() const { return this->runningTime_ != nullptr;};
      void deleteRunningTime() { this->runningTime_ = nullptr;};
      inline int32_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0) };
      inline Data& setRunningTime(int32_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


      // sgId Field Functions 
      bool hasSgId() const { return this->sgId_ != nullptr;};
      void deleteSgId() { this->sgId_ = nullptr;};
      inline string getSgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
      inline Data& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Data& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline Data& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<bool> autoBackup_ {};
      // The start time.
      shared_ptr<int64_t> beginTime_ {};
      // The instance details.
      shared_ptr<Data::ClusterInfo> clusterInfo_ {};
      // The instance name.
      shared_ptr<string> clusterName_ {};
      // The expiration time.
      shared_ptr<int64_t> expireTime_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The status of the bastion host. Valid values:
      // 
      // *   creating.
      // *   running.
      // *   updating. Cluster scaling (up/down), configuration changes, and enabling/disabling public network access.
      // *   disable. The cluster has expired and needs to be renewed for activation.
      // *   deleting.
      // *   deleted.
      shared_ptr<string> instanceStatus_ {};
      shared_ptr<string> nodeType_ {};
      // Indicates whether Internet access is enabled.
      shared_ptr<bool> openPublicNet_ {};
      // The specification details. Valid values:
      // 
      // *   trial.
      // *   standard.
      shared_ptr<string> packageType_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   0: pay-as-you-go
      // *   1: subscription
      shared_ptr<int32_t> payType_ {};
      // The commodity code.
      shared_ptr<string> productCode_ {};
      // The region code.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The runtime.
      shared_ptr<int32_t> runningTime_ {};
      // The security group ID.
      shared_ptr<string> sgId_ {};
      shared_ptr<vector<Data::Tags>> tags_ {};
      shared_ptr<string> templateVersion_ {};
      shared_ptr<string> version_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vswId_ {};
      // The zone.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListInstancesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstancesResponseBody::Data>) };
    inline vector<ListInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInstancesResponseBody::Data>) };
    inline ListInstancesResponseBody& setData(const vector<ListInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesResponseBody& setData(vector<ListInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListInstancesResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListInstancesResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListInstancesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The detailed information about the failed permission verification.
    shared_ptr<string> accessDeniedDetail_ {};
    // The returned result.
    shared_ptr<vector<ListInstancesResponseBody::Data>> data_ {};
    // The error code returned.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
