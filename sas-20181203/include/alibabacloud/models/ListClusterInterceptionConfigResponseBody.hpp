// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterInterceptionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInterceptionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterConfigList, clusterConfigList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInterceptionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterConfigList, clusterConfigList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterInterceptionConfigResponseBody() = default ;
    ListClusterInterceptionConfigResponseBody(const ListClusterInterceptionConfigResponseBody &) = default ;
    ListClusterInterceptionConfigResponseBody(ListClusterInterceptionConfigResponseBody &&) = default ;
    ListClusterInterceptionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInterceptionConfigResponseBody() = default ;
    ListClusterInterceptionConfigResponseBody& operator=(const ListClusterInterceptionConfigResponseBody &) = default ;
    ListClusterInterceptionConfigResponseBody& operator=(ListClusterInterceptionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrrentPage, currrentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrrentPage, currrentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currrentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currrentPage Field Functions 
      bool hasCurrrentPage() const { return this->currrentPage_ != nullptr;};
      void deleteCurrrentPage() { this->currrentPage_ = nullptr;};
      inline int32_t getCurrrentPage() const { DARABONBA_PTR_GET_DEFAULT(currrentPage_, 0) };
      inline PageInfo& setCurrrentPage(int32_t currrentPage) { DARABONBA_PTR_SET_VALUE(currrentPage_, currrentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currrentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class ClusterConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterCNNFStatus, clusterCNNFStatus_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(InterceptionSwitch, interceptionSwitch_);
        DARABONBA_PTR_TO_JSON(OpenRuleCount, openRuleCount_);
        DARABONBA_PTR_TO_JSON(SupportCNNF, supportCNNF_);
        DARABONBA_PTR_TO_JSON(TotalRuleCount, totalRuleCount_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterCNNFStatus, clusterCNNFStatus_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(InterceptionSwitch, interceptionSwitch_);
        DARABONBA_PTR_FROM_JSON(OpenRuleCount, openRuleCount_);
        DARABONBA_PTR_FROM_JSON(SupportCNNF, supportCNNF_);
        DARABONBA_PTR_FROM_JSON(TotalRuleCount, totalRuleCount_);
      };
      ClusterConfigList() = default ;
      ClusterConfigList(const ClusterConfigList &) = default ;
      ClusterConfigList(ClusterConfigList &&) = default ;
      ClusterConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterConfigList() = default ;
      ClusterConfigList& operator=(const ClusterConfigList &) = default ;
      ClusterConfigList& operator=(ClusterConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterCNNFStatus_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->interceptionSwitch_ == nullptr && this->openRuleCount_ == nullptr
        && this->supportCNNF_ == nullptr && this->totalRuleCount_ == nullptr; };
      // clusterCNNFStatus Field Functions 
      bool hasClusterCNNFStatus() const { return this->clusterCNNFStatus_ != nullptr;};
      void deleteClusterCNNFStatus() { this->clusterCNNFStatus_ = nullptr;};
      inline int32_t getClusterCNNFStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterCNNFStatus_, 0) };
      inline ClusterConfigList& setClusterCNNFStatus(int32_t clusterCNNFStatus) { DARABONBA_PTR_SET_VALUE(clusterCNNFStatus_, clusterCNNFStatus) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ClusterConfigList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline ClusterConfigList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline ClusterConfigList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // interceptionSwitch Field Functions 
      bool hasInterceptionSwitch() const { return this->interceptionSwitch_ != nullptr;};
      void deleteInterceptionSwitch() { this->interceptionSwitch_ = nullptr;};
      inline int32_t getInterceptionSwitch() const { DARABONBA_PTR_GET_DEFAULT(interceptionSwitch_, 0) };
      inline ClusterConfigList& setInterceptionSwitch(int32_t interceptionSwitch) { DARABONBA_PTR_SET_VALUE(interceptionSwitch_, interceptionSwitch) };


      // openRuleCount Field Functions 
      bool hasOpenRuleCount() const { return this->openRuleCount_ != nullptr;};
      void deleteOpenRuleCount() { this->openRuleCount_ = nullptr;};
      inline int64_t getOpenRuleCount() const { DARABONBA_PTR_GET_DEFAULT(openRuleCount_, 0L) };
      inline ClusterConfigList& setOpenRuleCount(int64_t openRuleCount) { DARABONBA_PTR_SET_VALUE(openRuleCount_, openRuleCount) };


      // supportCNNF Field Functions 
      bool hasSupportCNNF() const { return this->supportCNNF_ != nullptr;};
      void deleteSupportCNNF() { this->supportCNNF_ = nullptr;};
      inline bool getSupportCNNF() const { DARABONBA_PTR_GET_DEFAULT(supportCNNF_, false) };
      inline ClusterConfigList& setSupportCNNF(bool supportCNNF) { DARABONBA_PTR_SET_VALUE(supportCNNF_, supportCNNF) };


      // totalRuleCount Field Functions 
      bool hasTotalRuleCount() const { return this->totalRuleCount_ != nullptr;};
      void deleteTotalRuleCount() { this->totalRuleCount_ = nullptr;};
      inline int64_t getTotalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCount_, 0L) };
      inline ClusterConfigList& setTotalRuleCount(int64_t totalRuleCount) { DARABONBA_PTR_SET_VALUE(totalRuleCount_, totalRuleCount) };


    protected:
      // The status of the container firewall feature. Valid values:
      // 
      // *   **-1**: unknown
      // *   **0**: abnormal
      // *   **1**: normal
      // *   **2**: normal to be confirmed
      shared_ptr<int32_t> clusterCNNFStatus_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The type of the cluster. Valid values:
      // 
      // *   **ManagedKubernetes**: managed Kubernetes cluster
      // *   **NotManagedKubernetes**: non-managed Kubernetes cluster
      // *   **PrivateKubernetes**: private cluster
      // *   **kubernetes**: dedicated Kubernetes cluster
      // *   **ask**: dedicated serverless Kubernetes (ASK) cluster
      shared_ptr<string> clusterType_ {};
      // The status of the defense rule. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<int32_t> interceptionSwitch_ {};
      // The number of defense rules that are in effect.
      shared_ptr<int64_t> openRuleCount_ {};
      // Indicates whether the container firewall feature is supported.
      shared_ptr<bool> supportCNNF_ {};
      // The total number of defense rules.
      shared_ptr<int64_t> totalRuleCount_ {};
    };

    virtual bool empty() const override { return this->clusterConfigList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // clusterConfigList Field Functions 
    bool hasClusterConfigList() const { return this->clusterConfigList_ != nullptr;};
    void deleteClusterConfigList() { this->clusterConfigList_ = nullptr;};
    inline const vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList> & getClusterConfigList() const { DARABONBA_PTR_GET_CONST(clusterConfigList_, vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList>) };
    inline vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList> getClusterConfigList() { DARABONBA_PTR_GET(clusterConfigList_, vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList>) };
    inline ListClusterInterceptionConfigResponseBody& setClusterConfigList(const vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList> & clusterConfigList) { DARABONBA_PTR_SET_VALUE(clusterConfigList_, clusterConfigList) };
    inline ListClusterInterceptionConfigResponseBody& setClusterConfigList(vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList> && clusterConfigList) { DARABONBA_PTR_SET_RVALUE(clusterConfigList_, clusterConfigList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListClusterInterceptionConfigResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListClusterInterceptionConfigResponseBody::PageInfo) };
    inline ListClusterInterceptionConfigResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListClusterInterceptionConfigResponseBody::PageInfo) };
    inline ListClusterInterceptionConfigResponseBody& setPageInfo(const ListClusterInterceptionConfigResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListClusterInterceptionConfigResponseBody& setPageInfo(ListClusterInterceptionConfigResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterInterceptionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the configurations of the cluster.
    shared_ptr<vector<ListClusterInterceptionConfigResponseBody::ClusterConfigList>> clusterConfigList_ {};
    // The pagination information.
    shared_ptr<ListClusterInterceptionConfigResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
