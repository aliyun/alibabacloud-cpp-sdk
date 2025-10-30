// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERKUBECONFIGSTATESRESPONSEBODYSTATES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERKUBECONFIGSTATESRESPONSEBODYSTATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListUserKubeConfigStatesResponseBodyStates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserKubeConfigStatesResponseBodyStates& obj) { 
      DARABONBA_PTR_TO_JSON(cert_expire_time, certExpireTime_);
      DARABONBA_PTR_TO_JSON(cert_state, certState_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_name, clusterName_);
      DARABONBA_PTR_TO_JSON(cluster_state, clusterState_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserKubeConfigStatesResponseBodyStates& obj) { 
      DARABONBA_PTR_FROM_JSON(cert_expire_time, certExpireTime_);
      DARABONBA_PTR_FROM_JSON(cert_state, certState_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_name, clusterName_);
      DARABONBA_PTR_FROM_JSON(cluster_state, clusterState_);
    };
    ListUserKubeConfigStatesResponseBodyStates() = default ;
    ListUserKubeConfigStatesResponseBodyStates(const ListUserKubeConfigStatesResponseBodyStates &) = default ;
    ListUserKubeConfigStatesResponseBodyStates(ListUserKubeConfigStatesResponseBodyStates &&) = default ;
    ListUserKubeConfigStatesResponseBodyStates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserKubeConfigStatesResponseBodyStates() = default ;
    ListUserKubeConfigStatesResponseBodyStates& operator=(const ListUserKubeConfigStatesResponseBodyStates &) = default ;
    ListUserKubeConfigStatesResponseBodyStates& operator=(ListUserKubeConfigStatesResponseBodyStates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certExpireTime_ == nullptr
        && return this->certState_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->clusterState_ == nullptr; };
    // certExpireTime Field Functions 
    bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
    void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
    inline string certExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
    inline ListUserKubeConfigStatesResponseBodyStates& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


    // certState Field Functions 
    bool hasCertState() const { return this->certState_ != nullptr;};
    void deleteCertState() { this->certState_ = nullptr;};
    inline string certState() const { DARABONBA_PTR_GET_DEFAULT(certState_, "") };
    inline ListUserKubeConfigStatesResponseBodyStates& setCertState(string certState) { DARABONBA_PTR_SET_VALUE(certState_, certState) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListUserKubeConfigStatesResponseBodyStates& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListUserKubeConfigStatesResponseBodyStates& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline string clusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
    inline ListUserKubeConfigStatesResponseBodyStates& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


  protected:
    // The expiration date of the certificate used in a kubeconfig file. Format: the UTC time in the RFC3339 format.
    std::shared_ptr<string> certExpireTime_ = nullptr;
    // The current status of the certificate used in a kubeconfig file. Valid values:
    // 
    // *   Expired: The certificate is expired.
    // *   Unexpired: The certificate is not expired.
    // *   Unissued: The certificate is not issued.
    // *   Unknown: The status of the certificate is unknown.
    // *   Removed: The certificate is removed. An issue record is found for the certificate.
    std::shared_ptr<string> certState_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    // 
    // The name must be 1 to 63 characters in length, and can contain digits, underscores (_), and hyphens (-). The name must start with a letter or number.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   `initial`: The cluster is being created.
    // *   `failed`: The cluster failed to be created.
    // *   `running`: The cluster is running.
    // *   `updating`: The cluster is being upgraded.
    // *   `updating_failed`: The cluster failed to be updated.
    // *   `scaling`: The cluster is being scaled.
    // *   `stopped`: The cluster is stopped.
    // *   `deleting`: The cluster is being deleted.
    // *   `deleted`: The cluster is deleted.
    // *   `delete_failed`: The cluster failed to be deleted.
    std::shared_ptr<string> clusterState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
