// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysIpLists.hpp>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGateways& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(IpLists, ipLists_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(IpLists, ipLists_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeNatGatewaysResponseBodyNatGateways() = default ;
    DescribeNatGatewaysResponseBodyNatGateways(const DescribeNatGatewaysResponseBodyNatGateways &) = default ;
    DescribeNatGatewaysResponseBodyNatGateways(DescribeNatGatewaysResponseBodyNatGateways &&) = default ;
    DescribeNatGatewaysResponseBodyNatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGateways() = default ;
    DescribeNatGatewaysResponseBodyNatGateways& operator=(const DescribeNatGatewaysResponseBodyNatGateways &) = default ;
    DescribeNatGatewaysResponseBodyNatGateways& operator=(DescribeNatGatewaysResponseBodyNatGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->ensRegionId_ != nullptr && this->ipLists_ != nullptr && this->name_ != nullptr && this->natGatewayId_ != nullptr && this->networkId_ != nullptr
        && this->spec_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->vSwitchId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ipLists Field Functions 
    bool hasIpLists() const { return this->ipLists_ != nullptr;};
    void deleteIpLists() { this->ipLists_ = nullptr;};
    inline const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> & ipLists() const { DARABONBA_PTR_GET_CONST(ipLists_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists>) };
    inline vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> ipLists() { DARABONBA_PTR_GET(ipLists_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists>) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setIpLists(const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> & ipLists) { DARABONBA_PTR_SET_VALUE(ipLists_, ipLists) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setIpLists(vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists> && ipLists) { DARABONBA_PTR_SET_RVALUE(ipLists_, ipLists) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags>) };
    inline vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags>) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setTags(const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setTags(vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNatGatewaysResponseBodyNatGateways& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The time when the NAT gateway was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The EIPs that are associated with the NAT gateway.
    std::shared_ptr<vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysIpLists>> ipLists_ = nullptr;
    // The name of the NAT gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The type of the NAT gateway.
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the NAT gateway. Valid values:
    // 
    // *   **Creating**: After you send a request to create a NAT gateway, the system creates the NAT gateway in the background. The NAT gateway remains in the Creating state until the operation is completed.
    // *   **Available**: The NAT gateway is in the Available state after the creation is complete.
    // *   **Deleting**: After you send a request to delete a NAT gateway, the system deletes the NAT gateway in the background. The NAT gateway remains in the Deleting state until the operation is completed.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysTags>> tags_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
