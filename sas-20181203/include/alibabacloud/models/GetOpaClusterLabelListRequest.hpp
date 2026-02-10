// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERLABELLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERLABELLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterLabelListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterLabelListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterLabelListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
    };
    GetOpaClusterLabelListRequest() = default ;
    GetOpaClusterLabelListRequest(const GetOpaClusterLabelListRequest &) = default ;
    GetOpaClusterLabelListRequest(GetOpaClusterLabelListRequest &&) = default ;
    GetOpaClusterLabelListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterLabelListRequest() = default ;
    GetOpaClusterLabelListRequest& operator=(const GetOpaClusterLabelListRequest &) = default ;
    GetOpaClusterLabelListRequest& operator=(GetOpaClusterLabelListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->tagName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetOpaClusterLabelListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOpaClusterLabelListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpaClusterLabelListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline GetOpaClusterLabelListRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    // The ID of the cluster to which the container belongs.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of clusters.
    shared_ptr<string> clusterId_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page. Default value: 200. If you leave the PageSize parameter empty, 200 entries are returned by default. Maximum value: 200.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the tag.
    shared_ptr<string> tagName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
