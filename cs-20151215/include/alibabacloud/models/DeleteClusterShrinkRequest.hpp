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
    // The options for deleting the resources that are associated with the cluster.
    shared_ptr<string> deleteOptionsShrink_ {};
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
    shared_ptr<string> retainResourcesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
