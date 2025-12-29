// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(delete_options, deleteOptions_);
      DARABONBA_PTR_TO_JSON(keep_slb, keepSlb_);
      DARABONBA_PTR_TO_JSON(retain_all_resources, retainAllResources_);
      DARABONBA_PTR_TO_JSON(retain_resources, retainResources_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(delete_options, deleteOptions_);
      DARABONBA_PTR_FROM_JSON(keep_slb, keepSlb_);
      DARABONBA_PTR_FROM_JSON(retain_all_resources, retainAllResources_);
      DARABONBA_PTR_FROM_JSON(retain_resources, retainResources_);
    };
    DeleteClusterRequest() = default ;
    DeleteClusterRequest(const DeleteClusterRequest &) = default ;
    DeleteClusterRequest(DeleteClusterRequest &&) = default ;
    DeleteClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterRequest() = default ;
    DeleteClusterRequest& operator=(const DeleteClusterRequest &) = default ;
    DeleteClusterRequest& operator=(DeleteClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteOptions& obj) { 
        DARABONBA_PTR_TO_JSON(delete_mode, deleteMode_);
        DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(delete_mode, deleteMode_);
        DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      };
      DeleteOptions() = default ;
      DeleteOptions(const DeleteOptions &) = default ;
      DeleteOptions(DeleteOptions &&) = default ;
      DeleteOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteOptions() = default ;
      DeleteOptions& operator=(const DeleteOptions &) = default ;
      DeleteOptions& operator=(DeleteOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleteMode_ == nullptr
        && this->resourceType_ == nullptr; };
      // deleteMode Field Functions 
      bool hasDeleteMode() const { return this->deleteMode_ != nullptr;};
      void deleteDeleteMode() { this->deleteMode_ = nullptr;};
      inline string getDeleteMode() const { DARABONBA_PTR_GET_DEFAULT(deleteMode_, "") };
      inline DeleteOptions& setDeleteMode(string deleteMode) { DARABONBA_PTR_SET_VALUE(deleteMode_, deleteMode) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline DeleteOptions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The deletion policy for the specified type of resource. Valid values:
      // 
      // *   delete: deletes the specified type of resource.
      // *   retain: retains the specified type of resource.
      shared_ptr<string> deleteMode_ {};
      // The type of the resource. Valid values:
      // 
      // *   SLB: SLB resources created for Services. By default, the SLB resources are automatically deleted.
      // *   ALB: Application Load Balancer (ALB) resources created by the ALB Ingress controller. By default, the ALB resources are retained.
      // *   SLS_Data: Simple Log Service projects used by the cluster logging feature. By default, the Simple Log Service projects are retained.
      // *   SLS_ControlPlane: Simple Log Service projects used to store the logs of control planes in ACK managed clusters. By default, the Simple Log Service projects are retained.
      // *   PrivateZone: PrivateZone resources created by ACK Serverless clusters. By default, the PrivateZone resources are retained.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->deleteOptions_ == nullptr
        && this->keepSlb_ == nullptr && this->retainAllResources_ == nullptr && this->retainResources_ == nullptr; };
    // deleteOptions Field Functions 
    bool hasDeleteOptions() const { return this->deleteOptions_ != nullptr;};
    void deleteDeleteOptions() { this->deleteOptions_ = nullptr;};
    inline const vector<DeleteClusterRequest::DeleteOptions> & getDeleteOptions() const { DARABONBA_PTR_GET_CONST(deleteOptions_, vector<DeleteClusterRequest::DeleteOptions>) };
    inline vector<DeleteClusterRequest::DeleteOptions> getDeleteOptions() { DARABONBA_PTR_GET(deleteOptions_, vector<DeleteClusterRequest::DeleteOptions>) };
    inline DeleteClusterRequest& setDeleteOptions(const vector<DeleteClusterRequest::DeleteOptions> & deleteOptions) { DARABONBA_PTR_SET_VALUE(deleteOptions_, deleteOptions) };
    inline DeleteClusterRequest& setDeleteOptions(vector<DeleteClusterRequest::DeleteOptions> && deleteOptions) { DARABONBA_PTR_SET_RVALUE(deleteOptions_, deleteOptions) };


    // keepSlb Field Functions 
    bool hasKeepSlb() const { return this->keepSlb_ != nullptr;};
    void deleteKeepSlb() { this->keepSlb_ = nullptr;};
    inline bool getKeepSlb() const { DARABONBA_PTR_GET_DEFAULT(keepSlb_, false) };
    inline DeleteClusterRequest& setKeepSlb(bool keepSlb) { DARABONBA_PTR_SET_VALUE(keepSlb_, keepSlb) };


    // retainAllResources Field Functions 
    bool hasRetainAllResources() const { return this->retainAllResources_ != nullptr;};
    void deleteRetainAllResources() { this->retainAllResources_ = nullptr;};
    inline bool getRetainAllResources() const { DARABONBA_PTR_GET_DEFAULT(retainAllResources_, false) };
    inline DeleteClusterRequest& setRetainAllResources(bool retainAllResources) { DARABONBA_PTR_SET_VALUE(retainAllResources_, retainAllResources) };


    // retainResources Field Functions 
    bool hasRetainResources() const { return this->retainResources_ != nullptr;};
    void deleteRetainResources() { this->retainResources_ = nullptr;};
    inline const vector<string> & getRetainResources() const { DARABONBA_PTR_GET_CONST(retainResources_, vector<string>) };
    inline vector<string> getRetainResources() { DARABONBA_PTR_GET(retainResources_, vector<string>) };
    inline DeleteClusterRequest& setRetainResources(const vector<string> & retainResources) { DARABONBA_PTR_SET_VALUE(retainResources_, retainResources) };
    inline DeleteClusterRequest& setRetainResources(vector<string> && retainResources) { DARABONBA_PTR_SET_RVALUE(retainResources_, retainResources) };


  protected:
    // The type of cluster resource that you want to delete or retain.
    shared_ptr<vector<DeleteClusterRequest::DeleteOptions>> deleteOptions_ {};
    // Specifies whether to retain the Server Load Balancer (SLB) resources that are created by the cluster.
    // 
    // *   `true`: retains the SLB instances that are created by the cluster.
    // *   `false`: does not retain the SLB instances that are created by the cluster.
    // 
    // Default value: `false`. Set resource_type to `SLB` in the `delete_options` parameter to manage SLB instances.
    shared_ptr<bool> keepSlb_ {};
    // Specifies whether to retain all resources. If you set the parameter to `true`, the `retain_resources` parameter is ignored. The cloud resources that are created by the cluster are retained. You can call the `DescribeClusterResources` operation to query cloud resources created by the cluster. If you set the parameter to `false`, resources to be retained by default in the `delete_options` parameter are still retained. To delete these resources, set `delete_mode` to `delete` in `delete_options`.
    // 
    // *   `true`: retains all resources, including cloud resources created by the cluster.
    // *   `false`: does not retain all resources. Resources to be retained by default in the `delete_options` parameter are retained. For example, `ALB` instances are retained when this parameter is set to `false`.
    // 
    // Default value: `false`.
    shared_ptr<bool> retainAllResources_ {};
    // The list of resources. To retain resources when you delete a cluster, you need to specify the IDs of the resources to be retained.
    shared_ptr<vector<string>> retainResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
