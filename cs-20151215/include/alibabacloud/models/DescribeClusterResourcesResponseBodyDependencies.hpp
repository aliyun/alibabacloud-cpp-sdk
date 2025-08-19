// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODYDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODYDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterResourcesResponseBodyDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourcesResponseBodyDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourcesResponseBodyDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
    };
    DescribeClusterResourcesResponseBodyDependencies() = default ;
    DescribeClusterResourcesResponseBodyDependencies(const DescribeClusterResourcesResponseBodyDependencies &) = default ;
    DescribeClusterResourcesResponseBodyDependencies(DescribeClusterResourcesResponseBodyDependencies &&) = default ;
    DescribeClusterResourcesResponseBodyDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourcesResponseBodyDependencies() = default ;
    DescribeClusterResourcesResponseBodyDependencies& operator=(const DescribeClusterResourcesResponseBodyDependencies &) = default ;
    DescribeClusterResourcesResponseBodyDependencies& operator=(DescribeClusterResourcesResponseBodyDependencies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->resourceType_ != nullptr && this->instanceId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterResourcesResponseBodyDependencies& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeClusterResourcesResponseBodyDependencies& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeClusterResourcesResponseBodyDependencies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the cluster to which the dependent resource is related.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The dependent resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The dependent resource ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
