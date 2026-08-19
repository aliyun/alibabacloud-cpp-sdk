// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCENDPOINTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVPCENDPOINTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class GetVpcEndpointAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcEndpointAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcEndpointAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetVpcEndpointAttributeRequest() = default ;
    GetVpcEndpointAttributeRequest(const GetVpcEndpointAttributeRequest &) = default ;
    GetVpcEndpointAttributeRequest(GetVpcEndpointAttributeRequest &&) = default ;
    GetVpcEndpointAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcEndpointAttributeRequest() = default ;
    GetVpcEndpointAttributeRequest& operator=(const GetVpcEndpointAttributeRequest &) = default ;
    GetVpcEndpointAttributeRequest& operator=(GetVpcEndpointAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->regionId_ == nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetVpcEndpointAttributeRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcEndpointAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the endpoint whose attributes you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The region ID of the endpoint whose attributes you want to query.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/448570.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
