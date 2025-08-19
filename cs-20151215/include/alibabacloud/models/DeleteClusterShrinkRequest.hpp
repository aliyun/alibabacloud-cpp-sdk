// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(delete_options, deleteOptionsShrink_);
      DARABONBA_PTR_TO_JSON(keep_slb, keepSlb_);
      DARABONBA_PTR_TO_JSON(retain_all_resources, retainAllResources_);
      DARABONBA_PTR_TO_JSON(retain_resources, retainResourcesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(delete_options, deleteOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(keep_slb, keepSlb_);
      DARABONBA_PTR_FROM_JSON(retain_all_resources, retainAllResources_);
      DARABONBA_PTR_FROM_JSON(retain_resources, retainResourcesShrink_);
    };
    DeleteClusterShrinkRequest() = default ;
    DeleteClusterShrinkRequest(const DeleteClusterShrinkRequest &) = default ;
    DeleteClusterShrinkRequest(DeleteClusterShrinkRequest &&) = default ;
    DeleteClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterShrinkRequest() = default ;
    DeleteClusterShrinkRequest& operator=(const DeleteClusterShrinkRequest &) = default ;
    DeleteClusterShrinkRequest& operator=(DeleteClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteOptionsShrink_ != nullptr
        && this->keepSlb_ != nullptr && this->retainAllResources_ != nullptr && this->retainResourcesShrink_ != nullptr; };
    // deleteOptionsShrink Field Functions 
    bool hasDeleteOptionsShrink() const { return this->deleteOptionsShrink_ != nullptr;};
    void deleteDeleteOptionsShrink() { this->deleteOptionsShrink_ = nullptr;};
    inline string deleteOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteOptionsShrink_, "") };
    inline DeleteClusterShrinkRequest& setDeleteOptionsShrink(string deleteOptionsShrink) { DARABONBA_PTR_SET_VALUE(deleteOptionsShrink_, deleteOptionsShrink) };


    // keepSlb Field Functions 
    bool hasKeepSlb() const { return this->keepSlb_ != nullptr;};
    void deleteKeepSlb() { this->keepSlb_ = nullptr;};
    inline bool keepSlb() const { DARABONBA_PTR_GET_DEFAULT(keepSlb_, false) };
    inline DeleteClusterShrinkRequest& setKeepSlb(bool keepSlb) { DARABONBA_PTR_SET_VALUE(keepSlb_, keepSlb) };


    // retainAllResources Field Functions 
    bool hasRetainAllResources() const { return this->retainAllResources_ != nullptr;};
    void deleteRetainAllResources() { this->retainAllResources_ = nullptr;};
    inline bool retainAllResources() const { DARABONBA_PTR_GET_DEFAULT(retainAllResources_, false) };
    inline DeleteClusterShrinkRequest& setRetainAllResources(bool retainAllResources) { DARABONBA_PTR_SET_VALUE(retainAllResources_, retainAllResources) };


    // retainResourcesShrink Field Functions 
    bool hasRetainResourcesShrink() const { return this->retainResourcesShrink_ != nullptr;};
    void deleteRetainResourcesShrink() { this->retainResourcesShrink_ = nullptr;};
    inline string retainResourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(retainResourcesShrink_, "") };
    inline DeleteClusterShrinkRequest& setRetainResourcesShrink(string retainResourcesShrink) { DARABONBA_PTR_SET_VALUE(retainResourcesShrink_, retainResourcesShrink) };


  protected:
    // The type of cluster resource that you want to delete or retain.
    std::shared_ptr<string> deleteOptionsShrink_ = nullptr;
    // Specifies whether to retain the Server Load Balancer (SLB) resources that are created by the cluster.
    // 
    // *   `true`: retains the SLB instances that are created by the cluster.
    // *   `false`: does not retain the SLB instances that are created by the cluster.
    // 
    // Default value: `false`. Set resource_type to `SLB` in the `delete_options` parameter to manage SLB instances.
    std::shared_ptr<bool> keepSlb_ = nullptr;
    // Specifies whether to retain all resources. If you set the parameter to `true`, the `retain_resources` parameter is ignored. The cloud resources that are created by the cluster are retained. You can call the `DescribeClusterResources` operation to query cloud resources created by the cluster. If you set the parameter to `false`, resources to be retained by default in the `delete_options` parameter are still retained. To delete these resources, set `delete_mode` to `delete` in `delete_options`.
    // 
    // *   `true`: retains all resources, including cloud resources created by the cluster.
    // *   `false`: does not retain all resources. Resources to be retained by default in the `delete_options` parameter are retained. For example, `ALB` instances are retained when this parameter is set to `false`.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> retainAllResources_ = nullptr;
    // The list of resources. To retain resources when you delete a cluster, you need to specify the IDs of the resources to be retained.
    std::shared_ptr<string> retainResourcesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
