// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEANUSERPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEANUSERPERMISSIONSREQUEST_HPP_
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
  class CleanUserPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CleanUserPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, CleanUserPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    CleanUserPermissionsRequest() = default ;
    CleanUserPermissionsRequest(const CleanUserPermissionsRequest &) = default ;
    CleanUserPermissionsRequest(CleanUserPermissionsRequest &&) = default ;
    CleanUserPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CleanUserPermissionsRequest() = default ;
    CleanUserPermissionsRequest& operator=(const CleanUserPermissionsRequest &) = default ;
    CleanUserPermissionsRequest& operator=(CleanUserPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && this->force_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & getClusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> getClusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline CleanUserPermissionsRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline CleanUserPermissionsRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline CleanUserPermissionsRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // The list of cluster IDs. If this list is specified, only the KubeConfig credentials and RBAC permissions of the current user in the specified clusters are cleaned up.
    shared_ptr<vector<string>> clusterIds_ {};
    // Specifies whether to force delete the specified KubeConfig. Valid values:
    // - false (default): Before deleting the KubeConfig, the system checks whether cluster access records exist within the last seven days. If access records exist or cannot be retrieved, the deletion is not allowed.
    // - true: Force deletes the KubeConfig without checking cluster access records.
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
