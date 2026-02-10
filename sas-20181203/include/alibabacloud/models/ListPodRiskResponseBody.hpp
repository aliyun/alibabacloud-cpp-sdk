// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPODRISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPODRISKRESPONSEBODY_HPP_
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
  class ListPodRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPodRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(PodRiskList, podRiskList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPodRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(PodRiskList, podRiskList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPodRiskResponseBody() = default ;
    ListPodRiskResponseBody(const ListPodRiskResponseBody &) = default ;
    ListPodRiskResponseBody(ListPodRiskResponseBody &&) = default ;
    ListPodRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPodRiskResponseBody() = default ;
    ListPodRiskResponseBody& operator=(const ListPodRiskResponseBody &) = default ;
    ListPodRiskResponseBody& operator=(ListPodRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PodRiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PodRiskList& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(HcCount, hcCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(Pod, pod_);
        DARABONBA_PTR_TO_JSON(PodIp, podIp_);
        DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      };
      friend void from_json(const Darabonba::Json& j, PodRiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(HcCount, hcCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(Pod, pod_);
        DARABONBA_PTR_FROM_JSON(PodIp, podIp_);
        DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      };
      PodRiskList() = default ;
      PodRiskList(const PodRiskList &) = default ;
      PodRiskList(PodRiskList &&) = default ;
      PodRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PodRiskList() = default ;
      PodRiskList& operator=(const PodRiskList &) = default ;
      PodRiskList& operator=(PodRiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->createTime_ == nullptr && this->hcCount_ == nullptr && this->instanceId_ == nullptr
        && this->namespace_ == nullptr && this->nodeName_ == nullptr && this->pod_ == nullptr && this->podIp_ == nullptr && this->vulCount_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline PodRiskList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline PodRiskList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline PodRiskList& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline PodRiskList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // hcCount Field Functions 
      bool hasHcCount() const { return this->hcCount_ != nullptr;};
      void deleteHcCount() { this->hcCount_ = nullptr;};
      inline int32_t getHcCount() const { DARABONBA_PTR_GET_DEFAULT(hcCount_, 0) };
      inline PodRiskList& setHcCount(int32_t hcCount) { DARABONBA_PTR_SET_VALUE(hcCount_, hcCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PodRiskList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline PodRiskList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline PodRiskList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline PodRiskList& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // podIp Field Functions 
      bool hasPodIp() const { return this->podIp_ != nullptr;};
      void deletePodIp() { this->podIp_ = nullptr;};
      inline string getPodIp() const { DARABONBA_PTR_GET_DEFAULT(podIp_, "") };
      inline PodRiskList& setPodIp(string podIp) { DARABONBA_PTR_SET_VALUE(podIp_, podIp) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline PodRiskList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    protected:
      // The number of alerts that are generated for the pod.
      shared_ptr<int32_t> alarmCount_ {};
      // The ID of the container cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The timestamp that indicates the time when the pod was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The number of baseline risk items that are detected in the pod.
      shared_ptr<int32_t> hcCount_ {};
      // The instance ID of the node.
      shared_ptr<string> instanceId_ {};
      // The namespace of the Kubernetes cluster.
      shared_ptr<string> namespace_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The name of the pod.
      shared_ptr<string> pod_ {};
      // The IP address of the pod.
      shared_ptr<string> podIp_ {};
      // The number of vulnerabilities that are detected in the pod.
      shared_ptr<int32_t> vulCount_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
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
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


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
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->podRiskList_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListPodRiskResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListPodRiskResponseBody::PageInfo) };
    inline ListPodRiskResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListPodRiskResponseBody::PageInfo) };
    inline ListPodRiskResponseBody& setPageInfo(const ListPodRiskResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListPodRiskResponseBody& setPageInfo(ListPodRiskResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // podRiskList Field Functions 
    bool hasPodRiskList() const { return this->podRiskList_ != nullptr;};
    void deletePodRiskList() { this->podRiskList_ = nullptr;};
    inline const vector<ListPodRiskResponseBody::PodRiskList> & getPodRiskList() const { DARABONBA_PTR_GET_CONST(podRiskList_, vector<ListPodRiskResponseBody::PodRiskList>) };
    inline vector<ListPodRiskResponseBody::PodRiskList> getPodRiskList() { DARABONBA_PTR_GET(podRiskList_, vector<ListPodRiskResponseBody::PodRiskList>) };
    inline ListPodRiskResponseBody& setPodRiskList(const vector<ListPodRiskResponseBody::PodRiskList> & podRiskList) { DARABONBA_PTR_SET_VALUE(podRiskList_, podRiskList) };
    inline ListPodRiskResponseBody& setPodRiskList(vector<ListPodRiskResponseBody::PodRiskList> && podRiskList) { DARABONBA_PTR_SET_RVALUE(podRiskList_, podRiskList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPodRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListPodRiskResponseBody::PageInfo> pageInfo_ {};
    // An array that consists of the risks.
    shared_ptr<vector<ListPodRiskResponseBody::PodRiskList>> podRiskList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
