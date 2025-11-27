// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeRCNodePoolRequest() = default ;
    DescribeRCNodePoolRequest(const DescribeRCNodePoolRequest &) = default ;
    DescribeRCNodePoolRequest(DescribeRCNodePoolRequest &&) = default ;
    DescribeRCNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCNodePoolRequest() = default ;
    DescribeRCNodePoolRequest& operator=(const DescribeRCNodePoolRequest &) = default ;
    DescribeRCNodePoolRequest& operator=(DescribeRCNodePoolRequest &&) = default ;
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
    inline DescribeRCNodePoolRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline DescribeRCNodePoolRequest& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCNodePoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the ACK Edge cluster in which the RDS Custom instance resides.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodePoolId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
