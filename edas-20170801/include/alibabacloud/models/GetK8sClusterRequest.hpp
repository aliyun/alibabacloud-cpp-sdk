// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETK8SCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionTag, regionTag_);
      DARABONBA_PTR_TO_JSON(SubClusterType, subClusterType_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionTag, regionTag_);
      DARABONBA_PTR_FROM_JSON(SubClusterType, subClusterType_);
    };
    GetK8sClusterRequest() = default ;
    GetK8sClusterRequest(const GetK8sClusterRequest &) = default ;
    GetK8sClusterRequest(GetK8sClusterRequest &&) = default ;
    GetK8sClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sClusterRequest() = default ;
    GetK8sClusterRequest& operator=(const GetK8sClusterRequest &) = default ;
    GetK8sClusterRequest& operator=(GetK8sClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->regionTag_ == nullptr && return this->subClusterType_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline GetK8sClusterRequest& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetK8sClusterRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetK8sClusterRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionTag Field Functions 
    bool hasRegionTag() const { return this->regionTag_ != nullptr;};
    void deleteRegionTag() { this->regionTag_ = nullptr;};
    inline string regionTag() const { DARABONBA_PTR_GET_DEFAULT(regionTag_, "") };
    inline GetK8sClusterRequest& setRegionTag(string regionTag) { DARABONBA_PTR_SET_VALUE(regionTag_, regionTag) };


    // subClusterType Field Functions 
    bool hasSubClusterType() const { return this->subClusterType_ != nullptr;};
    void deleteSubClusterType() { this->subClusterType_ = nullptr;};
    inline string subClusterType() const { DARABONBA_PTR_GET_DEFAULT(subClusterType_, "") };
    inline GetK8sClusterRequest& setSubClusterType(string subClusterType) { DARABONBA_PTR_SET_VALUE(subClusterType_, subClusterType) };


  protected:
    // The type of the Kubernetes cluster. Valid values:
    // 
    // *   5: ACK cluster
    // *   7: self-managed Kubernetes cluster
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page. Default value: 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionTag_ = nullptr;
    // The subtype of the cluster. Valid values:
    // 
    // *   Ask: Serverless Kubernetes cluster
    // *   ManagedKubernetes: ACK cluster
    std::shared_ptr<string> subClusterType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
