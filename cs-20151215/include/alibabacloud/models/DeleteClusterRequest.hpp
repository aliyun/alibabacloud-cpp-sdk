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
      // The deletion mode for this type of resource. Valid values:
      // - `delete`: deletes this type of resource.
      // - `retain`: retains this type of resource.
      shared_ptr<string> deleteMode_ {};
      // The type of the resource. Valid values:
      // - `SLB`: the SLB resources created by using Services. By default, these resources are deleted. You can choose to retain them.
      // - `ALB`: the ALB resources created by the ALB Ingress controller. By default, these resources are retained. You can choose to delete them.
      // - `SLS_Data`: the SLS projects used for the cluster log feature. By default, these resources are retained. You can choose to delete them.
      // - `SLS_ControlPlane`: the SLS projects used for the control plane logs of managed clusters. By default, these resources are retained. You can choose to delete them.
      // - `PrivateZone`: the PrivateZone resources created by ACK Serverless clusters. By default, these resources are retained. You can choose to delete them.
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
    // The deletion options for the resources associated with the cluster.
    shared_ptr<vector<DeleteClusterRequest::DeleteOptions>> deleteOptions_ {};
    // Specifies whether to retain the Server Load Balancer (SLB) instances created by using Services.
    // Valid values:
    // - `true`: retains the created SLB resources.
    // - `false`: does not retain the created SLB resources.
    // 
    // Default value: `false`.
    // **[Deprecated]** Use `SLB` in `delete_options` instead.
    shared_ptr<bool> keepSlb_ {};
    // Specifies whether to retain all resources. If you set this parameter to `true`, the `retain_resources` parameter is ignored, and all cloud resources created by the cluster that are queried by calling the `DescribeClusterResources` operation are retained. If you set this parameter to `false`, note that the resources that are retained by default in `delete_options` are still retained. To delete these resources, set `delete_mode` to `delete` in `delete_options`.
    // 
    // Valid values:
    // - `true`: retains all resources, including all cloud resources created by the cluster.
    // - `false`: does not retain all resources, except for the resources that are retained by default in `delete_options`. For example, ALB resources are still retained even if this parameter is set to `false`.
    // 
    // Default value: `false`.
    shared_ptr<bool> retainAllResources_ {};
    // The list of resources. To retain resources when you delete the cluster, specify the IDs of the corresponding resources.
    shared_ptr<vector<string>> retainResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
