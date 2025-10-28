// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcsList, ecsList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcsList, ecsList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListClusterMembersRequest() = default ;
    ListClusterMembersRequest(const ListClusterMembersRequest &) = default ;
    ListClusterMembersRequest(ListClusterMembersRequest &&) = default ;
    ListClusterMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterMembersRequest() = default ;
    ListClusterMembersRequest& operator=(const ListClusterMembersRequest &) = default ;
    ListClusterMembersRequest& operator=(ListClusterMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->currentPage_ == nullptr && return this->ecsList_ == nullptr && return this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListClusterMembersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListClusterMembersRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecsList Field Functions 
    bool hasEcsList() const { return this->ecsList_ != nullptr;};
    void deleteEcsList() { this->ecsList_ = nullptr;};
    inline string ecsList() const { DARABONBA_PTR_GET_DEFAULT(ecsList_, "") };
    inline ListClusterMembersRequest& setEcsList(string ecsList) { DARABONBA_PTR_SET_VALUE(ecsList_, ecsList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClusterMembersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the cluster. You can call the ListCluster operation to query the cluster ID. For more information, see [ListCluster](https://help.aliyun.com/document_detail/154995.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of the page to return. If you do not specify this parameter, the first page is returned.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of ECS instances.
    std::shared_ptr<string> ecsList_ = nullptr;
    // The number of ECS instances to return on each page. If you do not specify this parameter, all ECS instances in the specified cluster are returned on one page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
