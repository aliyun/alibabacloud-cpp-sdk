// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINTERCEPTIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterInterceptionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInterceptionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCNNFStatus, clusterCNNFStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInterceptionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCNNFStatus, clusterCNNFStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListClusterInterceptionConfigRequest() = default ;
    ListClusterInterceptionConfigRequest(const ListClusterInterceptionConfigRequest &) = default ;
    ListClusterInterceptionConfigRequest(ListClusterInterceptionConfigRequest &&) = default ;
    ListClusterInterceptionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInterceptionConfigRequest() = default ;
    ListClusterInterceptionConfigRequest& operator=(const ListClusterInterceptionConfigRequest &) = default ;
    ListClusterInterceptionConfigRequest& operator=(ListClusterInterceptionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterCNNFStatus_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->currentPage_ != nullptr && this->pageSize_ != nullptr; };
    // clusterCNNFStatus Field Functions 
    bool hasClusterCNNFStatus() const { return this->clusterCNNFStatus_ != nullptr;};
    void deleteClusterCNNFStatus() { this->clusterCNNFStatus_ = nullptr;};
    inline int32_t clusterCNNFStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterCNNFStatus_, 0) };
    inline ListClusterInterceptionConfigRequest& setClusterCNNFStatus(int32_t clusterCNNFStatus) { DARABONBA_PTR_SET_VALUE(clusterCNNFStatus_, clusterCNNFStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterInterceptionConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClusterInterceptionConfigRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListClusterInterceptionConfigRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClusterInterceptionConfigRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The status of the container firewall feature. Valid values:
    // 
    // *   **-1**: unknown
    // *   **0**: abnormal
    // *   **1**: normal
    // *   **2**: normal to be confirmed
    std::shared_ptr<int32_t> clusterCNNFStatus_ = nullptr;
    // The ID of the cluster.
    // 
    // > You can call the [DescribeContainerInstances](~~DescribeContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
