// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListDedicatedClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDedicatedClusterRequest() = default ;
    ListDedicatedClusterRequest(const ListDedicatedClusterRequest &) = default ;
    ListDedicatedClusterRequest(ListDedicatedClusterRequest &&) = default ;
    ListDedicatedClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDedicatedClusterRequest() = default ;
    ListDedicatedClusterRequest& operator=(const ListDedicatedClusterRequest &) = default ;
    ListDedicatedClusterRequest& operator=(ListDedicatedClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderColumn_ != nullptr
        && this->orderDirection_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->params_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->state_ != nullptr && this->type_ != nullptr; };
    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListDedicatedClusterRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string orderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListDedicatedClusterRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListDedicatedClusterRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDedicatedClusterRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDedicatedClusterRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline ListDedicatedClusterRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDedicatedClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListDedicatedClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListDedicatedClusterRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDedicatedClusterRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The basis on which the retrieved entries are sorted if multiple DTS dedicated clusters are returned. Valid values:
    // 
    // *   **gmtCreated**: the time when a cluster was created.
    // *   **orderCount**: the number of nodes in a cluster.
    std::shared_ptr<string> orderColumn_ = nullptr;
    // The order in which you want to sort the retrieved entries. Valid values:
    // 
    // *   asc: sorts the retrieved entries in ascending order. This is the default value.
    // *   desc: sorts the retrieved entries in descending order.
    std::shared_ptr<string> orderDirection_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The number of the page to return. The value of this parameter must be an integer that is greater than 0. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of clusters to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The content of the query condition.
    // 
    // >  You must set the **Type parameter** to specify the type of the query condition.
    std::shared_ptr<string> params_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **init**: The cluster is being initialized.
    // *   **schedule**: The cluster is pending scheduling.
    // *   **running**: The cluster is running.
    // *   **upgrade**: The cluster is being upgraded.
    // *   **downgrade**: The cluster is being downgraded.
    // *   **locked**: The cluster is locked.
    // *   **releasing**: The cluster is being released.
    // *   **released**: The cluster is released.
    std::shared_ptr<string> state_ = nullptr;
    // The type of the query condition. Valid values:
    // 
    // *   **NAME**: the name of the cluster.
    // *   **INSTANCE**: the ID of a cluster instance.
    // *   **DEDICAETEDCLUSTERID**: the ID of a dedicated cluster.
    // 
    // >  You must specify the query condition by using the **Params** parameter.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
