// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CreateNodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodeGroup, nodeGroup_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateNodeGroupRequest() = default ;
    CreateNodeGroupRequest(const CreateNodeGroupRequest &) = default ;
    CreateNodeGroupRequest(CreateNodeGroupRequest &&) = default ;
    CreateNodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupRequest() = default ;
    CreateNodeGroupRequest& operator=(const CreateNodeGroupRequest &) = default ;
    CreateNodeGroupRequest& operator=(CreateNodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->nodeGroup_ == nullptr && return this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNodeGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodeGroup Field Functions 
    bool hasNodeGroup() const { return this->nodeGroup_ != nullptr;};
    void deleteNodeGroup() { this->nodeGroup_ = nullptr;};
    inline const NodeGroupConfig & nodeGroup() const { DARABONBA_PTR_GET_CONST(nodeGroup_, NodeGroupConfig) };
    inline NodeGroupConfig nodeGroup() { DARABONBA_PTR_GET(nodeGroup_, NodeGroupConfig) };
    inline CreateNodeGroupRequest& setNodeGroup(const NodeGroupConfig & nodeGroup) { DARABONBA_PTR_SET_VALUE(nodeGroup_, nodeGroup) };
    inline CreateNodeGroupRequest& setNodeGroup(NodeGroupConfig && nodeGroup) { DARABONBA_PTR_SET_RVALUE(nodeGroup_, nodeGroup) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNodeGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The information about the node group.
    std::shared_ptr<NodeGroupConfig> nodeGroup_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
