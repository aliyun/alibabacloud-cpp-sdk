// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYRESOURCEGROUPITEMSRESOURCEGROUPITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYRESOURCEGROUPITEMSRESOURCEGROUPITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupConfig, resourceGroupConfig_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupConfig, resourceGroupConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
    };
    DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem() = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem(const DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem &) = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem(DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem &&) = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem() = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& operator=(const DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem &) = default ;
    DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& operator=(DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupConfig_ != nullptr
        && this->resourceGroupName_ != nullptr && this->roleList_ != nullptr; };
    // resourceGroupConfig Field Functions 
    bool hasResourceGroupConfig() const { return this->resourceGroupConfig_ != nullptr;};
    void deleteResourceGroupConfig() { this->resourceGroupConfig_ = nullptr;};
    inline string resourceGroupConfig() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupConfig_, "") };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& setResourceGroupConfig(string resourceGroupConfig) { DARABONBA_PTR_SET_VALUE(resourceGroupConfig_, resourceGroupConfig) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList) };
    inline Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList roleList() { DARABONBA_PTR_GET(roleList_, Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList) };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& setRoleList(const Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItem& setRoleList(Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


  protected:
    // The configurations of the resource group.
    // 
    // > 
    // 
    // *   CpuRateLimit: the percentage of CPU resources that are available for the resource group. Unit: %.
    // 
    // *   MemoryLimit: the percentage of memory resources that are available for the resource group. Unit: %.
    // 
    // *   MemorySharedQuota: the percentage of memory resources shared among transactions that are submitted to the resource group. Unit: %. Default value: 80.
    // 
    // *   MemorySpillRatio: the memory spill ratio for memory-intensive transactions. When the memory that is used by memory-intensive transactions reaches this value, data is spilled to disks. Unit: %. Default value: 0.
    // 
    // *   Concurrency: the maximum number of concurrent transactions or parallel queries that are allowed for a resource group. Default value: 20.
    std::shared_ptr<string> resourceGroupConfig_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The roles.
    std::shared_ptr<Models::DescribeDBResourceGroupResponseBodyResourceGroupItemsResourceGroupItemRoleList> roleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
