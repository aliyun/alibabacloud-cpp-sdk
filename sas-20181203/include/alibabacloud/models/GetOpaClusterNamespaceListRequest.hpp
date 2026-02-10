// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERNAMESPACELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERNAMESPACELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterNamespaceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterNamespaceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(NameSpaceName, nameSpaceName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterNamespaceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(NameSpaceName, nameSpaceName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetOpaClusterNamespaceListRequest() = default ;
    GetOpaClusterNamespaceListRequest(const GetOpaClusterNamespaceListRequest &) = default ;
    GetOpaClusterNamespaceListRequest(GetOpaClusterNamespaceListRequest &&) = default ;
    GetOpaClusterNamespaceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterNamespaceListRequest() = default ;
    GetOpaClusterNamespaceListRequest& operator=(const GetOpaClusterNamespaceListRequest &) = default ;
    GetOpaClusterNamespaceListRequest& operator=(GetOpaClusterNamespaceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->currentPage_ == nullptr && this->nameSpaceName_ == nullptr && this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetOpaClusterNamespaceListRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOpaClusterNamespaceListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // nameSpaceName Field Functions 
    bool hasNameSpaceName() const { return this->nameSpaceName_ != nullptr;};
    void deleteNameSpaceName() { this->nameSpaceName_ = nullptr;};
    inline string getNameSpaceName() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceName_, "") };
    inline GetOpaClusterNamespaceListRequest& setNameSpaceName(string nameSpaceName) { DARABONBA_PTR_SET_VALUE(nameSpaceName_, nameSpaceName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpaClusterNamespaceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the cluster that you want to query.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    shared_ptr<string> clusterId_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the namespace.
    shared_ptr<string> nameSpaceName_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
