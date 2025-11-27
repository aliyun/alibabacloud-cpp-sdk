// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERCNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERCNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteRCNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRCNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRCNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteRCNodePoolRequest() = default ;
    DeleteRCNodePoolRequest(const DeleteRCNodePoolRequest &) = default ;
    DeleteRCNodePoolRequest(DeleteRCNodePoolRequest &&) = default ;
    DeleteRCNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRCNodePoolRequest() = default ;
    DeleteRCNodePoolRequest& operator=(const DeleteRCNodePoolRequest &) = default ;
    DeleteRCNodePoolRequest& operator=(DeleteRCNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->nodePoolId_ == nullptr && return this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteRCNodePoolRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline DeleteRCNodePoolRequest& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRCNodePoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the ACK cluster to which the RDS Custom instance belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The node pool ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodePoolId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
