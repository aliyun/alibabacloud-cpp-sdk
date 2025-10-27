// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERIMAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERIMAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterImageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterImageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterImageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetOpaClusterImageListRequest() = default ;
    GetOpaClusterImageListRequest(const GetOpaClusterImageListRequest &) = default ;
    GetOpaClusterImageListRequest(GetOpaClusterImageListRequest &&) = default ;
    GetOpaClusterImageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterImageListRequest() = default ;
    GetOpaClusterImageListRequest& operator=(const GetOpaClusterImageListRequest &) = default ;
    GetOpaClusterImageListRequest& operator=(GetOpaClusterImageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->currentPage_ == nullptr && return this->imageName_ == nullptr && return this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetOpaClusterImageListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOpaClusterImageListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetOpaClusterImageListRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpaClusterImageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the cluster to which the container belongs.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The number of entries per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
