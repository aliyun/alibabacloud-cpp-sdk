// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODYVROUTERSVROUTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODYVROUTERSVROUTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeVRoutersResponseBodyVRoutersVRouter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVRoutersResponseBodyVRoutersVRouter& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VRouterName, VRouterName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVRoutersResponseBodyVRoutersVRouter& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VRouterName, VRouterName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeVRoutersResponseBodyVRoutersVRouter() = default ;
    DescribeVRoutersResponseBodyVRoutersVRouter(const DescribeVRoutersResponseBodyVRoutersVRouter &) = default ;
    DescribeVRoutersResponseBodyVRoutersVRouter(DescribeVRoutersResponseBodyVRoutersVRouter &&) = default ;
    DescribeVRoutersResponseBodyVRoutersVRouter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVRoutersResponseBodyVRoutersVRouter() = default ;
    DescribeVRoutersResponseBodyVRoutersVRouter& operator=(const DescribeVRoutersResponseBodyVRoutersVRouter &) = default ;
    DescribeVRoutersResponseBodyVRoutersVRouter& operator=(DescribeVRoutersResponseBodyVRoutersVRouter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->regionId_ != nullptr && this->routeTableIds_ != nullptr && this->VRouterId_ != nullptr && this->VRouterName_ != nullptr
        && this->vpcId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeTableIds Field Functions 
    bool hasRouteTableIds() const { return this->routeTableIds_ != nullptr;};
    void deleteRouteTableIds() { this->routeTableIds_ = nullptr;};
    inline const Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds & routeTableIds() const { DARABONBA_PTR_GET_CONST(routeTableIds_, Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds) };
    inline Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds routeTableIds() { DARABONBA_PTR_GET(routeTableIds_, Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds) };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setRouteTableIds(const Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds & routeTableIds) { DARABONBA_PTR_SET_VALUE(routeTableIds_, routeTableIds) };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setRouteTableIds(Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds && routeTableIds) { DARABONBA_PTR_SET_RVALUE(routeTableIds_, routeTableIds) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // VRouterName Field Functions 
    bool hasVRouterName() const { return this->VRouterName_ != nullptr;};
    void deleteVRouterName() { this->VRouterName_ = nullptr;};
    inline string VRouterName() const { DARABONBA_PTR_GET_DEFAULT(VRouterName_, "") };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setVRouterName(string VRouterName) { DARABONBA_PTR_SET_VALUE(VRouterName_, VRouterName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVRoutersResponseBodyVRoutersVRouter& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<Models::DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds> routeTableIds_ = nullptr;
    std::shared_ptr<string> VRouterId_ = nullptr;
    std::shared_ptr<string> VRouterName_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
