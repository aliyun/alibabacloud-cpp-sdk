// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPODRISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPODRISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPodRiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPodRiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPodRiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
    };
    ListPodRiskRequest() = default ;
    ListPodRiskRequest(const ListPodRiskRequest &) = default ;
    ListPodRiskRequest(ListPodRiskRequest &&) = default ;
    ListPodRiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPodRiskRequest() = default ;
    ListPodRiskRequest& operator=(const ListPodRiskRequest &) = default ;
    ListPodRiskRequest& operator=(ListPodRiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->currentPage_ == nullptr && this->namespace_ == nullptr && this->pageSize_ == nullptr && this->podName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPodRiskRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListPodRiskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListPodRiskRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListPodRiskRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPodRiskRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline ListPodRiskRequest& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


  protected:
    // The name of the application.
    shared_ptr<string> appName_ {};
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of container clusters.
    shared_ptr<string> clusterId_ {};
    // The number of the page to return.
    shared_ptr<int64_t> currentPage_ {};
    // The namespace of the Kubernetes cluster.
    shared_ptr<string> namespace_ {};
    // The number of entries to return on each page. Default value: 20.
    shared_ptr<int64_t> pageSize_ {};
    // The name of the pod.
    shared_ptr<string> podName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
