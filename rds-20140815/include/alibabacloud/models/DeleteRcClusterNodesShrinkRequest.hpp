// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERCCLUSTERNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERCCLUSTERNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteRCClusterNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRCClusterNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRCClusterNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DeleteRCClusterNodesShrinkRequest() = default ;
    DeleteRCClusterNodesShrinkRequest(const DeleteRCClusterNodesShrinkRequest &) = default ;
    DeleteRCClusterNodesShrinkRequest(DeleteRCClusterNodesShrinkRequest &&) = default ;
    DeleteRCClusterNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRCClusterNodesShrinkRequest() = default ;
    DeleteRCClusterNodesShrinkRequest& operator=(const DeleteRCClusterNodesShrinkRequest &) = default ;
    DeleteRCClusterNodesShrinkRequest& operator=(DeleteRCClusterNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && return this->nodesShrink_ == nullptr && return this->regionId_ == nullptr && return this->vpcId_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DeleteRCClusterNodesShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // nodesShrink Field Functions 
    bool hasNodesShrink() const { return this->nodesShrink_ != nullptr;};
    void deleteNodesShrink() { this->nodesShrink_ = nullptr;};
    inline string nodesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodesShrink_, "") };
    inline DeleteRCClusterNodesShrinkRequest& setNodesShrink(string nodesShrink) { DARABONBA_PTR_SET_VALUE(nodesShrink_, nodesShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteRCClusterNodesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteRCClusterNodesShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The instance IDs.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The node information.
    std::shared_ptr<string> nodesShrink_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    // 
    // >  This is a reserved parameter.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
