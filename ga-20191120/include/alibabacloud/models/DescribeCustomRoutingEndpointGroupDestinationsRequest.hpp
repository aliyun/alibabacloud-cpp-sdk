// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeCustomRoutingEndpointGroupDestinationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCustomRoutingEndpointGroupDestinationsRequest() = default ;
    DescribeCustomRoutingEndpointGroupDestinationsRequest(const DescribeCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    DescribeCustomRoutingEndpointGroupDestinationsRequest(DescribeCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    DescribeCustomRoutingEndpointGroupDestinationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomRoutingEndpointGroupDestinationsRequest() = default ;
    DescribeCustomRoutingEndpointGroupDestinationsRequest& operator=(const DescribeCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    DescribeCustomRoutingEndpointGroupDestinationsRequest& operator=(DescribeCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationId_ == nullptr
        && this->endpointGroupId_ == nullptr && this->regionId_ == nullptr; };
    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsRequest& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCustomRoutingEndpointGroupDestinationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the endpoint group mapping configuration.
    // 
    // This parameter is required.
    shared_ptr<string> destinationId_ {};
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
