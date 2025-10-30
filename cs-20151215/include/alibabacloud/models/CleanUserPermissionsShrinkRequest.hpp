// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEANUSERPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEANUSERPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CleanUserPermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CleanUserPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIdsShrink_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, CleanUserPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    CleanUserPermissionsShrinkRequest() = default ;
    CleanUserPermissionsShrinkRequest(const CleanUserPermissionsShrinkRequest &) = default ;
    CleanUserPermissionsShrinkRequest(CleanUserPermissionsShrinkRequest &&) = default ;
    CleanUserPermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CleanUserPermissionsShrinkRequest() = default ;
    CleanUserPermissionsShrinkRequest& operator=(const CleanUserPermissionsShrinkRequest &) = default ;
    CleanUserPermissionsShrinkRequest& operator=(CleanUserPermissionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIdsShrink_ == nullptr
        && return this->force_ == nullptr; };
    // clusterIdsShrink Field Functions 
    bool hasClusterIdsShrink() const { return this->clusterIdsShrink_ != nullptr;};
    void deleteClusterIdsShrink() { this->clusterIdsShrink_ = nullptr;};
    inline string clusterIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterIdsShrink_, "") };
    inline CleanUserPermissionsShrinkRequest& setClusterIdsShrink(string clusterIdsShrink) { DARABONBA_PTR_SET_VALUE(clusterIdsShrink_, clusterIdsShrink) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline CleanUserPermissionsShrinkRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // The cluster IDs. If you specify a list of cluster IDs, only the kubeconfig files and RBAC permissions of the clusters that belong to the current user in the list are revoked.
    std::shared_ptr<string> clusterIdsShrink_ = nullptr;
    // Specifies whether to forcefully delete the specified kubeconfig files. Valid values:
    // 
    // *   false (default): checks the cluster access records within the previous seven days before deleting the kubeconfig files. The kubeconfig files are not deleted if cluster access records are found or fail to be retrieved.
    // *   true: forcefully deletes the kubeconfig files without checking the cluster access records.
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
