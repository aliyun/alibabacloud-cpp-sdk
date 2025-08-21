// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNatGatewaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeNatGatewaysRequest() = default ;
    DescribeNatGatewaysRequest(const DescribeNatGatewaysRequest &) = default ;
    DescribeNatGatewaysRequest(DescribeNatGatewaysRequest &&) = default ;
    DescribeNatGatewaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysRequest() = default ;
    DescribeNatGatewaysRequest& operator=(const DescribeNatGatewaysRequest &) = default ;
    DescribeNatGatewaysRequest& operator=(DescribeNatGatewaysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr
        && this->ensRegionIds_ != nullptr && this->name_ != nullptr && this->natGatewayId_ != nullptr && this->natGatewayIds_ != nullptr && this->networkId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->vSwitchId_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNatGatewaysRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & ensRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> ensRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeNatGatewaysRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeNatGatewaysRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNatGatewaysRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewaysRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const vector<string> & natGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, vector<string>) };
    inline vector<string> natGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, vector<string>) };
    inline DescribeNatGatewaysRequest& setNatGatewayIds(const vector<string> & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeNatGatewaysRequest& setNatGatewayIds(vector<string> && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNatGatewaysRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNatGatewaysRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNatGatewaysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNatGatewaysRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the Edge Node Service (ENS) node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The IDs of edge nodes. You can specify 1 to 100 IDs.
    std::shared_ptr<vector<string>> ensRegionIds_ = nullptr;
    // The name of the NAT gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The IDs of the NAT gateways. You can specify 1 to 100 IDs.
    std::shared_ptr<vector<string>> natGatewayIds_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The page number. Pages start from page **1**.
    // 
    // Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. The maximum value is **100**.
    // 
    // Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
