// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENDPOINTGROUPIPADDRESSCIDRBLOCKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENDPOINTGROUPIPADDRESSCIDRBLOCKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListEndpointGroupIpAddressCidrBlocksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEndpointGroupIpAddressCidrBlocksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEndpointGroupIpAddressCidrBlocksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListEndpointGroupIpAddressCidrBlocksRequest() = default ;
    ListEndpointGroupIpAddressCidrBlocksRequest(const ListEndpointGroupIpAddressCidrBlocksRequest &) = default ;
    ListEndpointGroupIpAddressCidrBlocksRequest(ListEndpointGroupIpAddressCidrBlocksRequest &&) = default ;
    ListEndpointGroupIpAddressCidrBlocksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEndpointGroupIpAddressCidrBlocksRequest() = default ;
    ListEndpointGroupIpAddressCidrBlocksRequest& operator=(const ListEndpointGroupIpAddressCidrBlocksRequest &) = default ;
    ListEndpointGroupIpAddressCidrBlocksRequest& operator=(ListEndpointGroupIpAddressCidrBlocksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->endpointGroupRegion_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksRequest& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEndpointGroupIpAddressCidrBlocksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The region ID of the endpoint group.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupRegion_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
