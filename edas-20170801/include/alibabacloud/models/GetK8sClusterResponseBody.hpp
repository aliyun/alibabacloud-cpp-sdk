// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterPage, clusterPage_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterPage, clusterPage_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetK8sClusterResponseBody() = default ;
    GetK8sClusterResponseBody(const GetK8sClusterResponseBody &) = default ;
    GetK8sClusterResponseBody(GetK8sClusterResponseBody &&) = default ;
    GetK8sClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sClusterResponseBody() = default ;
    GetK8sClusterResponseBody& operator=(const GetK8sClusterResponseBody &) = default ;
    GetK8sClusterResponseBody& operator=(GetK8sClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterPage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterPage& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterPage& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      ClusterPage() = default ;
      ClusterPage(const ClusterPage &) = default ;
      ClusterPage(ClusterPage &&) = default ;
      ClusterPage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterPage() = default ;
      ClusterPage& operator=(const ClusterPage &) = default ;
      ClusterPage& operator=(ClusterPage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClusterList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
          DARABONBA_PTR_TO_JSON(Cluster, cluster_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
          DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
        };
        ClusterList() = default ;
        ClusterList(const ClusterList &) = default ;
        ClusterList(ClusterList &&) = default ;
        ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterList() = default ;
        ClusterList& operator=(const ClusterList &) = default ;
        ClusterList& operator=(ClusterList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Cluster : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(ClusterImportStatus, clusterImportStatus_);
            DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
            DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
            DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
            DARABONBA_PTR_TO_JSON(Cpu, cpu_);
            DARABONBA_PTR_TO_JSON(CsClusterId, csClusterId_);
            DARABONBA_PTR_TO_JSON(CsClusterStatus, csClusterStatus_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Mem, mem_);
            DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
            DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(SubClusterType, subClusterType_);
            DARABONBA_PTR_TO_JSON(SubNetCidr, subNetCidr_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
          };
          friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(ClusterImportStatus, clusterImportStatus_);
            DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
            DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
            DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
            DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
            DARABONBA_PTR_FROM_JSON(CsClusterId, csClusterId_);
            DARABONBA_PTR_FROM_JSON(CsClusterStatus, csClusterStatus_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Mem, mem_);
            DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
            DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(SubClusterType, subClusterType_);
            DARABONBA_PTR_FROM_JSON(SubNetCidr, subNetCidr_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
          };
          Cluster() = default ;
          Cluster(const Cluster &) = default ;
          Cluster(Cluster &&) = default ;
          Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cluster() = default ;
          Cluster& operator=(const Cluster &) = default ;
          Cluster& operator=(Cluster &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterImportStatus_ == nullptr && this->clusterName_ == nullptr && this->clusterStatus_ == nullptr && this->clusterType_ == nullptr && this->cpu_ == nullptr
        && this->csClusterId_ == nullptr && this->csClusterStatus_ == nullptr && this->description_ == nullptr && this->mem_ == nullptr && this->networkMode_ == nullptr
        && this->nodeNum_ == nullptr && this->regionId_ == nullptr && this->subClusterType_ == nullptr && this->subNetCidr_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchId_ == nullptr; };
          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline Cluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // clusterImportStatus Field Functions 
          bool hasClusterImportStatus() const { return this->clusterImportStatus_ != nullptr;};
          void deleteClusterImportStatus() { this->clusterImportStatus_ = nullptr;};
          inline int32_t getClusterImportStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterImportStatus_, 0) };
          inline Cluster& setClusterImportStatus(int32_t clusterImportStatus) { DARABONBA_PTR_SET_VALUE(clusterImportStatus_, clusterImportStatus) };


          // clusterName Field Functions 
          bool hasClusterName() const { return this->clusterName_ != nullptr;};
          void deleteClusterName() { this->clusterName_ = nullptr;};
          inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
          inline Cluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


          // clusterStatus Field Functions 
          bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
          void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
          inline int32_t getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, 0) };
          inline Cluster& setClusterStatus(int32_t clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


          // clusterType Field Functions 
          bool hasClusterType() const { return this->clusterType_ != nullptr;};
          void deleteClusterType() { this->clusterType_ = nullptr;};
          inline int32_t getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
          inline Cluster& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


          // cpu Field Functions 
          bool hasCpu() const { return this->cpu_ != nullptr;};
          void deleteCpu() { this->cpu_ = nullptr;};
          inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
          inline Cluster& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


          // csClusterId Field Functions 
          bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
          void deleteCsClusterId() { this->csClusterId_ = nullptr;};
          inline string getCsClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
          inline Cluster& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


          // csClusterStatus Field Functions 
          bool hasCsClusterStatus() const { return this->csClusterStatus_ != nullptr;};
          void deleteCsClusterStatus() { this->csClusterStatus_ = nullptr;};
          inline string getCsClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(csClusterStatus_, "") };
          inline Cluster& setCsClusterStatus(string csClusterStatus) { DARABONBA_PTR_SET_VALUE(csClusterStatus_, csClusterStatus) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Cluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // mem Field Functions 
          bool hasMem() const { return this->mem_ != nullptr;};
          void deleteMem() { this->mem_ = nullptr;};
          inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
          inline Cluster& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


          // networkMode Field Functions 
          bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
          void deleteNetworkMode() { this->networkMode_ = nullptr;};
          inline int32_t getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, 0) };
          inline Cluster& setNetworkMode(int32_t networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


          // nodeNum Field Functions 
          bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
          void deleteNodeNum() { this->nodeNum_ = nullptr;};
          inline int32_t getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, 0) };
          inline Cluster& setNodeNum(int32_t nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Cluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // subClusterType Field Functions 
          bool hasSubClusterType() const { return this->subClusterType_ != nullptr;};
          void deleteSubClusterType() { this->subClusterType_ = nullptr;};
          inline string getSubClusterType() const { DARABONBA_PTR_GET_DEFAULT(subClusterType_, "") };
          inline Cluster& setSubClusterType(string subClusterType) { DARABONBA_PTR_SET_VALUE(subClusterType_, subClusterType) };


          // subNetCidr Field Functions 
          bool hasSubNetCidr() const { return this->subNetCidr_ != nullptr;};
          void deleteSubNetCidr() { this->subNetCidr_ = nullptr;};
          inline string getSubNetCidr() const { DARABONBA_PTR_GET_DEFAULT(subNetCidr_, "") };
          inline Cluster& setSubNetCidr(string subNetCidr) { DARABONBA_PTR_SET_VALUE(subNetCidr_, subNetCidr) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Cluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // vswitchId Field Functions 
          bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
          void deleteVswitchId() { this->vswitchId_ = nullptr;};
          inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
          inline Cluster& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        protected:
          shared_ptr<string> clusterId_ {};
          shared_ptr<int32_t> clusterImportStatus_ {};
          shared_ptr<string> clusterName_ {};
          shared_ptr<int32_t> clusterStatus_ {};
          shared_ptr<int32_t> clusterType_ {};
          shared_ptr<int32_t> cpu_ {};
          shared_ptr<string> csClusterId_ {};
          shared_ptr<string> csClusterStatus_ {};
          shared_ptr<string> description_ {};
          shared_ptr<int32_t> mem_ {};
          shared_ptr<int32_t> networkMode_ {};
          shared_ptr<int32_t> nodeNum_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<string> subClusterType_ {};
          shared_ptr<string> subNetCidr_ {};
          shared_ptr<string> vpcId_ {};
          shared_ptr<string> vswitchId_ {};
        };

        virtual bool empty() const override { return this->cluster_ == nullptr; };
        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline const vector<ClusterList::Cluster> & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<ClusterList::Cluster>) };
        inline vector<ClusterList::Cluster> getCluster() { DARABONBA_PTR_GET(cluster_, vector<ClusterList::Cluster>) };
        inline ClusterList& setCluster(const vector<ClusterList::Cluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
        inline ClusterList& setCluster(vector<ClusterList::Cluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


      protected:
        shared_ptr<vector<ClusterList::Cluster>> cluster_ {};
      };

      virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // clusterList Field Functions 
      bool hasClusterList() const { return this->clusterList_ != nullptr;};
      void deleteClusterList() { this->clusterList_ = nullptr;};
      inline const ClusterPage::ClusterList & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, ClusterPage::ClusterList) };
      inline ClusterPage::ClusterList getClusterList() { DARABONBA_PTR_GET(clusterList_, ClusterPage::ClusterList) };
      inline ClusterPage& setClusterList(const ClusterPage::ClusterList & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
      inline ClusterPage& setClusterList(ClusterPage::ClusterList && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ClusterPage& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ClusterPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline ClusterPage& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<ClusterPage::ClusterList> clusterList_ {};
      // The number of the returned page. The default value is 1.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. The default value is 1000.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->clusterPage_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // clusterPage Field Functions 
    bool hasClusterPage() const { return this->clusterPage_ != nullptr;};
    void deleteClusterPage() { this->clusterPage_ = nullptr;};
    inline const GetK8sClusterResponseBody::ClusterPage & getClusterPage() const { DARABONBA_PTR_GET_CONST(clusterPage_, GetK8sClusterResponseBody::ClusterPage) };
    inline GetK8sClusterResponseBody::ClusterPage getClusterPage() { DARABONBA_PTR_GET(clusterPage_, GetK8sClusterResponseBody::ClusterPage) };
    inline GetK8sClusterResponseBody& setClusterPage(const GetK8sClusterResponseBody::ClusterPage & clusterPage) { DARABONBA_PTR_SET_VALUE(clusterPage_, clusterPage) };
    inline GetK8sClusterResponseBody& setClusterPage(GetK8sClusterResponseBody::ClusterPage && clusterPage) { DARABONBA_PTR_SET_RVALUE(clusterPage_, clusterPage) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetK8sClusterResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetK8sClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetK8sClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The paginated list of clusters.
    shared_ptr<GetK8sClusterResponseBody::ClusterPage> clusterPage_ {};
    // The status of the call or a POP error code.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
