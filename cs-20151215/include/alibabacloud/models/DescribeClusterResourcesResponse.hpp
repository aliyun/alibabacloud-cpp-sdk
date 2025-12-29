// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterResourcesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourcesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourcesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeClusterResourcesResponse() = default ;
    DescribeClusterResourcesResponse(const DescribeClusterResourcesResponse &) = default ;
    DescribeClusterResourcesResponse(DescribeClusterResourcesResponse &&) = default ;
    DescribeClusterResourcesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourcesResponse() = default ;
    DescribeClusterResourcesResponse& operator=(const DescribeClusterResourcesResponse &) = default ;
    DescribeClusterResourcesResponse& operator=(DescribeClusterResourcesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
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
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeleteBehavior : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeleteBehavior& obj) { 
          DARABONBA_PTR_TO_JSON(delete_by_default, deleteByDefault_);
          DARABONBA_PTR_TO_JSON(changeable, changeable_);
        };
        friend void from_json(const Darabonba::Json& j, DeleteBehavior& obj) { 
          DARABONBA_PTR_FROM_JSON(delete_by_default, deleteByDefault_);
          DARABONBA_PTR_FROM_JSON(changeable, changeable_);
        };
        DeleteBehavior() = default ;
        DeleteBehavior(const DeleteBehavior &) = default ;
        DeleteBehavior(DeleteBehavior &&) = default ;
        DeleteBehavior(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeleteBehavior() = default ;
        DeleteBehavior& operator=(const DeleteBehavior &) = default ;
        DeleteBehavior& operator=(DeleteBehavior &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deleteByDefault_ == nullptr
        && this->changeable_ == nullptr; };
        // deleteByDefault Field Functions 
        bool hasDeleteByDefault() const { return this->deleteByDefault_ != nullptr;};
        void deleteDeleteByDefault() { this->deleteByDefault_ = nullptr;};
        inline bool getDeleteByDefault() const { DARABONBA_PTR_GET_DEFAULT(deleteByDefault_, false) };
        inline DeleteBehavior& setDeleteByDefault(bool deleteByDefault) { DARABONBA_PTR_SET_VALUE(deleteByDefault_, deleteByDefault) };


        // changeable Field Functions 
        bool hasChangeable() const { return this->changeable_ != nullptr;};
        void deleteChangeable() { this->changeable_ = nullptr;};
        inline bool getChangeable() const { DARABONBA_PTR_GET_DEFAULT(changeable_, false) };
        inline DeleteBehavior& setChangeable(bool changeable) { DARABONBA_PTR_SET_VALUE(changeable_, changeable) };


      protected:
        // Specifies whether to delete the resource by default when the cluster is deleted.
        shared_ptr<bool> deleteByDefault_ {};
        // Specifies whether the default behavior returned in delete_by_default can be changed.
        shared_ptr<bool> changeable_ {};
      };

      class AssociatedObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedObject& obj) { 
          DARABONBA_PTR_TO_JSON(kind, kind_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedObject& obj) { 
          DARABONBA_PTR_FROM_JSON(kind, kind_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        AssociatedObject() = default ;
        AssociatedObject(const AssociatedObject &) = default ;
        AssociatedObject(AssociatedObject &&) = default ;
        AssociatedObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedObject() = default ;
        AssociatedObject& operator=(const AssociatedObject &) = default ;
        AssociatedObject& operator=(AssociatedObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->kind_ == nullptr
        && this->namespace_ == nullptr && this->name_ == nullptr; };
        // kind Field Functions 
        bool hasKind() const { return this->kind_ != nullptr;};
        void deleteKind() { this->kind_ = nullptr;};
        inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
        inline AssociatedObject& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline AssociatedObject& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AssociatedObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The Kubernetes object type.
        shared_ptr<string> kind_ {};
        // The namespace in which the Kubernetes object resides.
        shared_ptr<string> namespace_ {};
        // The Kubernetes object name.
        shared_ptr<string> name_ {};
      };

      class Dependencies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dependencies& obj) { 
          DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
          DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
          DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Dependencies& obj) { 
          DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
          DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
          DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
        };
        Dependencies() = default ;
        Dependencies(const Dependencies &) = default ;
        Dependencies(Dependencies &&) = default ;
        Dependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dependencies() = default ;
        Dependencies& operator=(const Dependencies &) = default ;
        Dependencies& operator=(Dependencies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->resourceType_ == nullptr && this->instanceId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Dependencies& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Dependencies& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Dependencies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The ID of the cluster to which the dependent resource is related.
        shared_ptr<string> clusterId_ {};
        // The dependent resource type.
        shared_ptr<string> resourceType_ {};
        // The dependent resource ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->created_ == nullptr && this->instanceId_ == nullptr && this->resourceInfo_ == nullptr && this->resourceType_ == nullptr && this->state_ == nullptr
        && this->autoCreate_ == nullptr && this->dependencies_ == nullptr && this->associatedObject_ == nullptr && this->deleteBehavior_ == nullptr && this->creatorType_ == nullptr
        && this->extraInfo_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Body& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Body& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Body& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceInfo Field Functions 
      bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
      void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
      inline string getResourceInfo() const { DARABONBA_PTR_GET_DEFAULT(resourceInfo_, "") };
      inline Body& setResourceInfo(string resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Body& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Body& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // autoCreate Field Functions 
      bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
      void deleteAutoCreate() { this->autoCreate_ = nullptr;};
      inline int64_t getAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, 0L) };
      inline Body& setAutoCreate(int64_t autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


      // dependencies Field Functions 
      bool hasDependencies() const { return this->dependencies_ != nullptr;};
      void deleteDependencies() { this->dependencies_ = nullptr;};
      inline const vector<Body::Dependencies> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Body::Dependencies>) };
      inline vector<Body::Dependencies> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<Body::Dependencies>) };
      inline Body& setDependencies(const vector<Body::Dependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
      inline Body& setDependencies(vector<Body::Dependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


      // associatedObject Field Functions 
      bool hasAssociatedObject() const { return this->associatedObject_ != nullptr;};
      void deleteAssociatedObject() { this->associatedObject_ = nullptr;};
      inline const Body::AssociatedObject & getAssociatedObject() const { DARABONBA_PTR_GET_CONST(associatedObject_, Body::AssociatedObject) };
      inline Body::AssociatedObject getAssociatedObject() { DARABONBA_PTR_GET(associatedObject_, Body::AssociatedObject) };
      inline Body& setAssociatedObject(const Body::AssociatedObject & associatedObject) { DARABONBA_PTR_SET_VALUE(associatedObject_, associatedObject) };
      inline Body& setAssociatedObject(Body::AssociatedObject && associatedObject) { DARABONBA_PTR_SET_RVALUE(associatedObject_, associatedObject) };


      // deleteBehavior Field Functions 
      bool hasDeleteBehavior() const { return this->deleteBehavior_ != nullptr;};
      void deleteDeleteBehavior() { this->deleteBehavior_ = nullptr;};
      inline const Body::DeleteBehavior & getDeleteBehavior() const { DARABONBA_PTR_GET_CONST(deleteBehavior_, Body::DeleteBehavior) };
      inline Body::DeleteBehavior getDeleteBehavior() { DARABONBA_PTR_GET(deleteBehavior_, Body::DeleteBehavior) };
      inline Body& setDeleteBehavior(const Body::DeleteBehavior & deleteBehavior) { DARABONBA_PTR_SET_VALUE(deleteBehavior_, deleteBehavior) };
      inline Body& setDeleteBehavior(Body::DeleteBehavior && deleteBehavior) { DARABONBA_PTR_SET_RVALUE(deleteBehavior_, deleteBehavior) };


      // creatorType Field Functions 
      bool hasCreatorType() const { return this->creatorType_ != nullptr;};
      void deleteCreatorType() { this->creatorType_ = nullptr;};
      inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
      inline Body& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
      Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
      inline Body& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
      inline Body& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The time when the resource was created.
      shared_ptr<string> created_ {};
      // The resource ID.
      shared_ptr<string> instanceId_ {};
      // The resource information. For more information about how to query the source information about the resource, see [ListStackResources](https://help.aliyun.com/document_detail/133836.html).
      shared_ptr<string> resourceInfo_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
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
      shared_ptr<string> state_ {};
      // Specifies whether the resource is created by Container Service for Kubernetes (ACK). Valid values:
      // 
      // *   1: the resource is created by ACK.
      // *   0: the resource is an existing resource.
      shared_ptr<int64_t> autoCreate_ {};
      // The dependent resources.
      shared_ptr<vector<Body::Dependencies>> dependencies_ {};
      // The Kubernetes object with which the resource is associated.
      shared_ptr<Body::AssociatedObject> associatedObject_ {};
      // The deletion behavior of the resource when the cluster is deleted.
      shared_ptr<Body::DeleteBehavior> deleteBehavior_ {};
      // The type of the resource creator. Valid values:
      // 
      // *   user: The resource is created by the user.
      // *   system: The resource is created by the ACK management system.
      // *   addon: The resource is created by a cluster component.
      shared_ptr<string> creatorType_ {};
      // The additional information about the resource.
      Darabonba::Json extraInfo_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeClusterResourcesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeClusterResourcesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeClusterResourcesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribeClusterResourcesResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribeClusterResourcesResponse::Body>) };
    inline vector<DescribeClusterResourcesResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribeClusterResourcesResponse::Body>) };
    inline DescribeClusterResourcesResponse& setBody(const vector<DescribeClusterResourcesResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeClusterResourcesResponse& setBody(vector<DescribeClusterResourcesResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribeClusterResourcesResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
