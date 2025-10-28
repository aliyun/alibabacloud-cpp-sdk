// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODYCLUSTERPAGE_HPP_
#define ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODYCLUSTERPAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetK8sClusterResponseBodyClusterPageClusterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sClusterResponseBodyClusterPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sClusterResponseBodyClusterPage& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sClusterResponseBodyClusterPage& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    GetK8sClusterResponseBodyClusterPage() = default ;
    GetK8sClusterResponseBodyClusterPage(const GetK8sClusterResponseBodyClusterPage &) = default ;
    GetK8sClusterResponseBodyClusterPage(GetK8sClusterResponseBodyClusterPage &&) = default ;
    GetK8sClusterResponseBodyClusterPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sClusterResponseBodyClusterPage() = default ;
    GetK8sClusterResponseBodyClusterPage& operator=(const GetK8sClusterResponseBodyClusterPage &) = default ;
    GetK8sClusterResponseBodyClusterPage& operator=(GetK8sClusterResponseBodyClusterPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterList_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const Models::GetK8sClusterResponseBodyClusterPageClusterList & clusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, Models::GetK8sClusterResponseBodyClusterPageClusterList) };
    inline Models::GetK8sClusterResponseBodyClusterPageClusterList clusterList() { DARABONBA_PTR_GET(clusterList_, Models::GetK8sClusterResponseBodyClusterPageClusterList) };
    inline GetK8sClusterResponseBodyClusterPage& setClusterList(const Models::GetK8sClusterResponseBodyClusterPageClusterList & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline GetK8sClusterResponseBodyClusterPage& setClusterList(Models::GetK8sClusterResponseBodyClusterPageClusterList && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetK8sClusterResponseBodyClusterPage& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetK8sClusterResponseBodyClusterPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline GetK8sClusterResponseBodyClusterPage& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The list of clusters.
    std::shared_ptr<Models::GetK8sClusterResponseBodyClusterPageClusterList> clusterList_ = nullptr;
    // The number of the returned page. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page. Default value: 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of pages that are returned.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
