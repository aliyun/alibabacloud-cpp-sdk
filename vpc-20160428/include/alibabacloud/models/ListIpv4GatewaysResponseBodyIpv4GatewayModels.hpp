// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSRESPONSEBODYIPV4GATEWAYMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSRESPONSEBODYIPV4GATEWAYMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpv4GatewaysResponseBodyIpv4GatewayModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpv4GatewaysResponseBodyIpv4GatewayModels& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayDescription, ipv4GatewayDescription_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayName, ipv4GatewayName_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayRouteTableId, ipv4GatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpv4GatewaysResponseBodyIpv4GatewayModels& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayDescription, ipv4GatewayDescription_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayName, ipv4GatewayName_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayRouteTableId, ipv4GatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListIpv4GatewaysResponseBodyIpv4GatewayModels() = default ;
    ListIpv4GatewaysResponseBodyIpv4GatewayModels(const ListIpv4GatewaysResponseBodyIpv4GatewayModels &) = default ;
    ListIpv4GatewaysResponseBodyIpv4GatewayModels(ListIpv4GatewaysResponseBodyIpv4GatewayModels &&) = default ;
    ListIpv4GatewaysResponseBodyIpv4GatewayModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpv4GatewaysResponseBodyIpv4GatewayModels() = default ;
    ListIpv4GatewaysResponseBodyIpv4GatewayModels& operator=(const ListIpv4GatewaysResponseBodyIpv4GatewayModels &) = default ;
    ListIpv4GatewaysResponseBodyIpv4GatewayModels& operator=(ListIpv4GatewaysResponseBodyIpv4GatewayModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->ipv4GatewayDescription_ == nullptr && return this->ipv4GatewayId_ == nullptr && return this->ipv4GatewayName_ == nullptr && return this->ipv4GatewayRouteTableId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->vpcId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // ipv4GatewayDescription Field Functions 
    bool hasIpv4GatewayDescription() const { return this->ipv4GatewayDescription_ != nullptr;};
    void deleteIpv4GatewayDescription() { this->ipv4GatewayDescription_ = nullptr;};
    inline string ipv4GatewayDescription() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayDescription_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setIpv4GatewayDescription(string ipv4GatewayDescription) { DARABONBA_PTR_SET_VALUE(ipv4GatewayDescription_, ipv4GatewayDescription) };


    // ipv4GatewayId Field Functions 
    bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
    void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
    inline string ipv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


    // ipv4GatewayName Field Functions 
    bool hasIpv4GatewayName() const { return this->ipv4GatewayName_ != nullptr;};
    void deleteIpv4GatewayName() { this->ipv4GatewayName_ = nullptr;};
    inline string ipv4GatewayName() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayName_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setIpv4GatewayName(string ipv4GatewayName) { DARABONBA_PTR_SET_VALUE(ipv4GatewayName_, ipv4GatewayName) };


    // ipv4GatewayRouteTableId Field Functions 
    bool hasIpv4GatewayRouteTableId() const { return this->ipv4GatewayRouteTableId_ != nullptr;};
    void deleteIpv4GatewayRouteTableId() { this->ipv4GatewayRouteTableId_ = nullptr;};
    inline string ipv4GatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayRouteTableId_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setIpv4GatewayRouteTableId(string ipv4GatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayRouteTableId_, ipv4GatewayRouteTableId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags>) };
    inline vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags>) };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setTags(const vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setTags(vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIpv4GatewaysResponseBodyIpv4GatewayModels& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Indicates whether the IPv4 gateway is activated. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time when the IPv4 gateway was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The description of the IPv4 gateway.
    std::shared_ptr<string> ipv4GatewayDescription_ = nullptr;
    // The ID of the IPv4 gateway.
    std::shared_ptr<string> ipv4GatewayId_ = nullptr;
    // The name of the IPv4 gateway.
    std::shared_ptr<string> ipv4GatewayName_ = nullptr;
    // The ID of the route table associated with the IPv4 gateway.
    std::shared_ptr<string> ipv4GatewayRouteTableId_ = nullptr;
    // The ID of the resource group to which the IPv4 gateway belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the IPv4 gateway. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
    // The list of tags that are added to the resource group.
    std::shared_ptr<vector<Models::ListIpv4GatewaysResponseBodyIpv4GatewayModelsTags>> tags_ = nullptr;
    // The ID of the VPC with which the IPv4 gateways are associated.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
