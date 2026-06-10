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
      // The deletion policy for the specified resource type. Valid values:
      // 
      // - delete: Deletes the resources.
      // 
      // - retain: Retains the resources.
      shared_ptr<string> deleteMode_ {};
      // The type of resource. Valid values:
      // 
      // - SLB: the SLB resources created for Services. These resources are deleted by default, but you can choose to retain them.
      // 
      // - ALB: the ALB resources created by the ALB Ingress controller. These resources are retained by default, but you can choose to delete them.
      // 
      // - SLS_Data: the SLS project used for cluster logs. This resource is retained by default, but you can choose to delete it.
      // 
      // - SLS_ControlPlane: the SLS project used for control plane logs in a managed cluster. This resource is retained by default, but you can choose to delete it.
      // 
      // - PrivateZone: the PrivateZone resource created by an ACK Serverless cluster. This resource is retained by default, but you can choose to delete it.
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
    // The options for deleting the resources that are associated with the cluster.
    shared_ptr<vector<DeleteClusterRequest::DeleteOptions>> deleteOptions_ {};
    // Whether to retain SLB resources. Valid values:
    // 
    // - `true`: Retains the SLB resources that are created for the cluster.
    // 
    // - `false`: Does not retain the SLB resources that are created for the cluster.
    // 
    // Default value: `false`.
    // Use the `delete_options` parameter to manage `SLB` resources instead.
    shared_ptr<bool> keepSlb_ {};
    // Whether to retain all associated resources. If you set this parameter to `true`, the `retain_resources` parameter is ignored, and all cloud resources that are created with the cluster and can be queried by calling `DescribeClusterResources` are retained. If you set this parameter to `false`, note that resources that are configured to be retained by default in the `delete_options` parameter are still retained. To delete these resources, you must explicitly set the `delete_mode` parameter to `delete` for them in `delete_options`.
    // 
    // - `true`: Retains all associated cloud resources that are created with the cluster.
    // 
    // - `false`: Does not retain all associated cloud resources. Resources that are configured to be retained by default in the `delete_options` parameter, such as `ALB`, are still retained when this parameter is set to `false`.
    // 
    // Default value: `false`.
    shared_ptr<bool> retainAllResources_ {};
    // The IDs of resources to retain when the cluster is deleted.
    shared_ptr<vector<string>> retainResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
