// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODEPOOLINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODEPOOLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyNodepoolInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(is_default, isDefault_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(is_default, isDefault_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeClusterNodePoolDetailResponseBodyNodepoolInfo() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodepoolInfo(const DescribeClusterNodePoolDetailResponseBodyNodepoolInfo &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodepoolInfo(DescribeClusterNodePoolDetailResponseBodyNodepoolInfo &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodepoolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyNodepoolInfo() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& operator=(const DescribeClusterNodePoolDetailResponseBodyNodepoolInfo &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& operator=(DescribeClusterNodePoolDetailResponseBodyNodepoolInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && return this->isDefault_ == nullptr && return this->name_ == nullptr && return this->nodepoolId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->type_ == nullptr && return this->updated_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyNodepoolInfo& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The time when the node pool was created.
    std::shared_ptr<string> created_ = nullptr;
    // Indicates whether the node pool is a default node pool. A Container Service for Kubernetes (ACK) cluster usually has only one default node pool. Valid values: `true`: The node pool is a default node pool. `false`: The node pool is not a default node pool.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The name of the node pool.
    // 
    // The name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). It cannot start with a hyphen (-).
    std::shared_ptr<string> name_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of node pool.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the node pool was last updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
