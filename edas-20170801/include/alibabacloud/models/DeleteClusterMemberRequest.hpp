// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteClusterMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterMemberId, clusterMemberId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterMemberId, clusterMemberId_);
    };
    DeleteClusterMemberRequest() = default ;
    DeleteClusterMemberRequest(const DeleteClusterMemberRequest &) = default ;
    DeleteClusterMemberRequest(DeleteClusterMemberRequest &&) = default ;
    DeleteClusterMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterMemberRequest() = default ;
    DeleteClusterMemberRequest& operator=(const DeleteClusterMemberRequest &) = default ;
    DeleteClusterMemberRequest& operator=(DeleteClusterMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterMemberId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteClusterMemberRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterMemberId Field Functions 
    bool hasClusterMemberId() const { return this->clusterMemberId_ != nullptr;};
    void deleteClusterMemberId() { this->clusterMemberId_ = nullptr;};
    inline string clusterMemberId() const { DARABONBA_PTR_GET_DEFAULT(clusterMemberId_, "") };
    inline DeleteClusterMemberRequest& setClusterMemberId(string clusterMemberId) { DARABONBA_PTR_SET_VALUE(clusterMemberId_, clusterMemberId) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The member ID of the ECS instance that you want to remove from the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterMemberId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
