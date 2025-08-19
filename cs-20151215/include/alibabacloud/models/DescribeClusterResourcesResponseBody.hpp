// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterResourcesResponseBodyDependencies.hpp>
#include <alibabacloud/models/DescribeClusterResourcesResponseBodyAssociatedObject.hpp>
#include <alibabacloud/models/DescribeClusterResourcesResponseBodyDeleteBehavior.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(resource_info, resourceInfo_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(auto_create, autoCreate_);
      DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(associated_object, associatedObject_);
      DARABONBA_PTR_TO_JSON(delete_behavior, deleteBehavior_);
      DARABONBA_PTR_TO_JSON(creator_type, creatorType_);
      DARABONBA_ANY_TO_JSON(extra_info, extraInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(resource_info, resourceInfo_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(auto_create, autoCreate_);
      DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(associated_object, associatedObject_);
      DARABONBA_PTR_FROM_JSON(delete_behavior, deleteBehavior_);
      DARABONBA_PTR_FROM_JSON(creator_type, creatorType_);
      DARABONBA_ANY_FROM_JSON(extra_info, extraInfo_);
    };
    DescribeClusterResourcesResponseBody() = default ;
    DescribeClusterResourcesResponseBody(const DescribeClusterResourcesResponseBody &) = default ;
    DescribeClusterResourcesResponseBody(DescribeClusterResourcesResponseBody &&) = default ;
    DescribeClusterResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourcesResponseBody() = default ;
    DescribeClusterResourcesResponseBody& operator=(const DescribeClusterResourcesResponseBody &) = default ;
    DescribeClusterResourcesResponseBody& operator=(DescribeClusterResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->created_ != nullptr && this->instanceId_ != nullptr && this->resourceInfo_ != nullptr && this->resourceType_ != nullptr && this->state_ != nullptr
        && this->autoCreate_ != nullptr && this->dependencies_ != nullptr && this->associatedObject_ != nullptr && this->deleteBehavior_ != nullptr && this->creatorType_ != nullptr
        && this->extraInfo_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterResourcesResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterResourcesResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeClusterResourcesResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline string resourceInfo() const { DARABONBA_PTR_GET_DEFAULT(resourceInfo_, "") };
    inline DescribeClusterResourcesResponseBody& setResourceInfo(string resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeClusterResourcesResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterResourcesResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // autoCreate Field Functions 
    bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
    void deleteAutoCreate() { this->autoCreate_ = nullptr;};
    inline int64_t autoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, 0L) };
    inline DescribeClusterResourcesResponseBody& setAutoCreate(int64_t autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<Models::DescribeClusterResourcesResponseBodyDependencies> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Models::DescribeClusterResourcesResponseBodyDependencies>) };
    inline vector<Models::DescribeClusterResourcesResponseBodyDependencies> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<Models::DescribeClusterResourcesResponseBodyDependencies>) };
    inline DescribeClusterResourcesResponseBody& setDependencies(const vector<Models::DescribeClusterResourcesResponseBodyDependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline DescribeClusterResourcesResponseBody& setDependencies(vector<Models::DescribeClusterResourcesResponseBodyDependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // associatedObject Field Functions 
    bool hasAssociatedObject() const { return this->associatedObject_ != nullptr;};
    void deleteAssociatedObject() { this->associatedObject_ = nullptr;};
    inline const Models::DescribeClusterResourcesResponseBodyAssociatedObject & associatedObject() const { DARABONBA_PTR_GET_CONST(associatedObject_, Models::DescribeClusterResourcesResponseBodyAssociatedObject) };
    inline Models::DescribeClusterResourcesResponseBodyAssociatedObject associatedObject() { DARABONBA_PTR_GET(associatedObject_, Models::DescribeClusterResourcesResponseBodyAssociatedObject) };
    inline DescribeClusterResourcesResponseBody& setAssociatedObject(const Models::DescribeClusterResourcesResponseBodyAssociatedObject & associatedObject) { DARABONBA_PTR_SET_VALUE(associatedObject_, associatedObject) };
    inline DescribeClusterResourcesResponseBody& setAssociatedObject(Models::DescribeClusterResourcesResponseBodyAssociatedObject && associatedObject) { DARABONBA_PTR_SET_RVALUE(associatedObject_, associatedObject) };


    // deleteBehavior Field Functions 
    bool hasDeleteBehavior() const { return this->deleteBehavior_ != nullptr;};
    void deleteDeleteBehavior() { this->deleteBehavior_ = nullptr;};
    inline const Models::DescribeClusterResourcesResponseBodyDeleteBehavior & deleteBehavior() const { DARABONBA_PTR_GET_CONST(deleteBehavior_, Models::DescribeClusterResourcesResponseBodyDeleteBehavior) };
    inline Models::DescribeClusterResourcesResponseBodyDeleteBehavior deleteBehavior() { DARABONBA_PTR_GET(deleteBehavior_, Models::DescribeClusterResourcesResponseBodyDeleteBehavior) };
    inline DescribeClusterResourcesResponseBody& setDeleteBehavior(const Models::DescribeClusterResourcesResponseBodyDeleteBehavior & deleteBehavior) { DARABONBA_PTR_SET_VALUE(deleteBehavior_, deleteBehavior) };
    inline DescribeClusterResourcesResponseBody& setDeleteBehavior(Models::DescribeClusterResourcesResponseBodyDeleteBehavior && deleteBehavior) { DARABONBA_PTR_SET_RVALUE(deleteBehavior_, deleteBehavior) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string creatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline DescribeClusterResourcesResponseBody& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline DescribeClusterResourcesResponseBody& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline DescribeClusterResourcesResponseBody& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the resource was created.
    std::shared_ptr<string> created_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The resource information. For more information about how to query the source information about the resource, see [ListStackResources](https://help.aliyun.com/document_detail/133836.html).
    std::shared_ptr<string> resourceInfo_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resource status. Valid values:
    // 
    // *   `CREATE_COMPLETE`: the resource is created.
    // *   `CREATE_FAILED`: the resource failed to be created.
    // *   `CREATE_IN_PROGRESS`: the resource is being created.
    // *   `DELETE_FAILED`: the resource failed to be deleted.
    // *   `DELETE_IN_PROGRESS`: the resource is being deleted.
    // *   `ROLLBACK_COMPLETE`: the resource is rolled back.
    // *   `ROLLBACK_FAILED`: the resource failed to be rolled back.
    // *   `ROLLBACK_IN_PROGRESS`: the resource is being rolled back.
    std::shared_ptr<string> state_ = nullptr;
    // Specifies whether the resource is created by Container Service for Kubernetes (ACK). Valid values:
    // 
    // *   1: the resource is created by ACK.
    // *   0: the resource is an existing resource.
    std::shared_ptr<int64_t> autoCreate_ = nullptr;
    // The dependent resources.
    std::shared_ptr<vector<Models::DescribeClusterResourcesResponseBodyDependencies>> dependencies_ = nullptr;
    // The Kubernetes object with which the resource is associated.
    std::shared_ptr<Models::DescribeClusterResourcesResponseBodyAssociatedObject> associatedObject_ = nullptr;
    // The deletion behavior of the resource when the cluster is deleted.
    std::shared_ptr<Models::DescribeClusterResourcesResponseBodyDeleteBehavior> deleteBehavior_ = nullptr;
    // The type of the resource creator. Valid values:
    // 
    // *   user: The resource is created by the user.
    // *   system: The resource is created by the ACK management system.
    // *   addon: The resource is created by a cluster component.
    std::shared_ptr<string> creatorType_ = nullptr;
    // The additional information about the resource.
    Darabonba::Json extraInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
