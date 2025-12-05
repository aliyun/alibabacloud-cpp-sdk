// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERVPCSRESPONSEBODYVPCS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERVPCSRESPONSEBODYVPCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetUserVpcsResponseBodyVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserVpcsResponseBodyVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouterTableIds, routerTableIds_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserVpcsResponseBodyVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouterTableIds, routerTableIds_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    GetUserVpcsResponseBodyVpcs() = default ;
    GetUserVpcsResponseBodyVpcs(const GetUserVpcsResponseBodyVpcs &) = default ;
    GetUserVpcsResponseBodyVpcs(GetUserVpcsResponseBodyVpcs &&) = default ;
    GetUserVpcsResponseBodyVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserVpcsResponseBodyVpcs() = default ;
    GetUserVpcsResponseBodyVpcs& operator=(const GetUserVpcsResponseBodyVpcs &) = default ;
    GetUserVpcsResponseBodyVpcs& operator=(GetUserVpcsResponseBodyVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->description_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->routerTableIds_ == nullptr && return this->vSwitchIds_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline GetUserVpcsResponseBodyVpcs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUserVpcsResponseBodyVpcs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetUserVpcsResponseBodyVpcs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetUserVpcsResponseBodyVpcs& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routerTableIds Field Functions 
    bool hasRouterTableIds() const { return this->routerTableIds_ != nullptr;};
    void deleteRouterTableIds() { this->routerTableIds_ = nullptr;};
    inline const vector<string> & routerTableIds() const { DARABONBA_PTR_GET_CONST(routerTableIds_, vector<string>) };
    inline vector<string> routerTableIds() { DARABONBA_PTR_GET(routerTableIds_, vector<string>) };
    inline GetUserVpcsResponseBodyVpcs& setRouterTableIds(const vector<string> & routerTableIds) { DARABONBA_PTR_SET_VALUE(routerTableIds_, routerTableIds) };
    inline GetUserVpcsResponseBodyVpcs& setRouterTableIds(vector<string> && routerTableIds) { DARABONBA_PTR_SET_RVALUE(routerTableIds_, routerTableIds) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline GetUserVpcsResponseBodyVpcs& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetUserVpcsResponseBodyVpcs& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetUserVpcsResponseBodyVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline GetUserVpcsResponseBodyVpcs& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The IPv4 CIDR block of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The description of the VPC.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the VPC belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IDs of the route tables.
    std::shared_ptr<vector<string>> routerTableIds_ = nullptr;
    // The vSwitches.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
