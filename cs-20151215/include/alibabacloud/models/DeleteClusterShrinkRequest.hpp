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
    virtual bool empty() const override { return this->deleteOptionsShrink_ == nullptr
        && this->keepSlb_ == nullptr && this->retainAllResources_ == nullptr && this->retainResourcesShrink_ == nullptr; };
    // deleteOptionsShrink Field Functions 
    bool hasDeleteOptionsShrink() const { return this->deleteOptionsShrink_ != nullptr;};
    void deleteDeleteOptionsShrink() { this->deleteOptionsShrink_ = nullptr;};
    inline string getDeleteOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(deleteOptionsShrink_, "") };
    inline DeleteClusterShrinkRequest& setDeleteOptionsShrink(string deleteOptionsShrink) { DARABONBA_PTR_SET_VALUE(deleteOptionsShrink_, deleteOptionsShrink) };


    // keepSlb Field Functions 
    bool hasKeepSlb() const { return this->keepSlb_ != nullptr;};
    void deleteKeepSlb() { this->keepSlb_ = nullptr;};
    inline bool getKeepSlb() const { DARABONBA_PTR_GET_DEFAULT(keepSlb_, false) };
    inline DeleteClusterShrinkRequest& setKeepSlb(bool keepSlb) { DARABONBA_PTR_SET_VALUE(keepSlb_, keepSlb) };


    // retainAllResources Field Functions 
    bool hasRetainAllResources() const { return this->retainAllResources_ != nullptr;};
    void deleteRetainAllResources() { this->retainAllResources_ = nullptr;};
    inline bool getRetainAllResources() const { DARABONBA_PTR_GET_DEFAULT(retainAllResources_, false) };
    inline DeleteClusterShrinkRequest& setRetainAllResources(bool retainAllResources) { DARABONBA_PTR_SET_VALUE(retainAllResources_, retainAllResources) };


    // retainResourcesShrink Field Functions 
    bool hasRetainResourcesShrink() const { return this->retainResourcesShrink_ != nullptr;};
    void deleteRetainResourcesShrink() { this->retainResourcesShrink_ = nullptr;};
    inline string getRetainResourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(retainResourcesShrink_, "") };
    inline DeleteClusterShrinkRequest& setRetainResourcesShrink(string retainResourcesShrink) { DARABONBA_PTR_SET_VALUE(retainResourcesShrink_, retainResourcesShrink) };


  protected:
    // The deletion options for the resources associated with the cluster.
    shared_ptr<string> deleteOptionsShrink_ {};
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
    shared_ptr<string> retainResourcesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
