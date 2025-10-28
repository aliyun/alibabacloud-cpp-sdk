// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListClusterRequest() = default ;
    ListClusterRequest(const ListClusterRequest &) = default ;
    ListClusterRequest(ListClusterRequest &&) = default ;
    ListClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterRequest() = default ;
    ListClusterRequest& operator=(const ListClusterRequest &) = default ;
    ListClusterRequest& operator=(ListClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logicalRegionId_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline ListClusterRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the namespace. You can call the ListUserDefineRegion operation to query the namespace ID. For more information, see [ListUserDefineRegion](https://help.aliyun.com/document_detail/149377.html).
    // 
    // *   If this parameter is left empty, the clusters in the default namespace are queried.
    // *   If this parameter is specified, the clusters in the specified namespace are queried.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // The ID of the resource group. You can call the ListResourceGroup operation to query the resource group ID. For more information, see [ListResourceGroup](https://help.aliyun.com/document_detail/62055.html).
    // 
    // *   If this parameter is left empty, the clusters in the default resource group are queried.
    // *   If this parameter is specified, the clusters in the specified resource group are queried.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
