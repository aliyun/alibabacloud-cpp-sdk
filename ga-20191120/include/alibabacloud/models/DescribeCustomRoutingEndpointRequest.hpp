// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMROUTINGENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeCustomRoutingEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomRoutingEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointGroup, endpointGroup_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomRoutingEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointGroup, endpointGroup_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCustomRoutingEndpointRequest() = default ;
    DescribeCustomRoutingEndpointRequest(const DescribeCustomRoutingEndpointRequest &) = default ;
    DescribeCustomRoutingEndpointRequest(DescribeCustomRoutingEndpointRequest &&) = default ;
    DescribeCustomRoutingEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomRoutingEndpointRequest() = default ;
    DescribeCustomRoutingEndpointRequest& operator=(const DescribeCustomRoutingEndpointRequest &) = default ;
    DescribeCustomRoutingEndpointRequest& operator=(DescribeCustomRoutingEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointGroup_ == nullptr
        && this->endpointId_ == nullptr && this->regionId_ == nullptr; };
    // endpointGroup Field Functions 
    bool hasEndpointGroup() const { return this->endpointGroup_ != nullptr;};
    void deleteEndpointGroup() { this->endpointGroup_ = nullptr;};
    inline string getEndpointGroup() const { DARABONBA_PTR_GET_DEFAULT(endpointGroup_, "") };
    inline DescribeCustomRoutingEndpointRequest& setEndpointGroup(string endpointGroup) { DARABONBA_PTR_SET_VALUE(endpointGroup_, endpointGroup) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeCustomRoutingEndpointRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCustomRoutingEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroup_ {};
    // The ID of the endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
