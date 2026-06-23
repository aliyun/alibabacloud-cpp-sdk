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
        && this->force_ == nullptr; };
    // clusterIdsShrink Field Functions 
    bool hasClusterIdsShrink() const { return this->clusterIdsShrink_ != nullptr;};
    void deleteClusterIdsShrink() { this->clusterIdsShrink_ = nullptr;};
    inline string getClusterIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterIdsShrink_, "") };
    inline CleanUserPermissionsShrinkRequest& setClusterIdsShrink(string clusterIdsShrink) { DARABONBA_PTR_SET_VALUE(clusterIdsShrink_, clusterIdsShrink) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline CleanUserPermissionsShrinkRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // The list of cluster IDs. If this list is specified, only the KubeConfig credentials and RBAC permissions of the current user in the specified clusters are cleaned up.
    shared_ptr<string> clusterIdsShrink_ {};
    // Specifies whether to force delete the specified KubeConfig. Valid values:
    // - false (default): Before deleting the KubeConfig, the system checks whether cluster access records exist within the last seven days. If access records exist or cannot be retrieved, the deletion is not allowed.
    // - true: Force deletes the KubeConfig without checking cluster access records.
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
