// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListCustomRoutingPortMappingsByDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingPortMappingsByDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationAddress, destinationAddress_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingPortMappingsByDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationAddress, destinationAddress_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListCustomRoutingPortMappingsByDestinationRequest() = default ;
    ListCustomRoutingPortMappingsByDestinationRequest(const ListCustomRoutingPortMappingsByDestinationRequest &) = default ;
    ListCustomRoutingPortMappingsByDestinationRequest(ListCustomRoutingPortMappingsByDestinationRequest &&) = default ;
    ListCustomRoutingPortMappingsByDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingPortMappingsByDestinationRequest() = default ;
    ListCustomRoutingPortMappingsByDestinationRequest& operator=(const ListCustomRoutingPortMappingsByDestinationRequest &) = default ;
    ListCustomRoutingPortMappingsByDestinationRequest& operator=(ListCustomRoutingPortMappingsByDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationAddress_ == nullptr
        && this->endpointId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // destinationAddress Field Functions 
    bool hasDestinationAddress() const { return this->destinationAddress_ != nullptr;};
    void deleteDestinationAddress() { this->destinationAddress_ = nullptr;};
    inline string getDestinationAddress() const { DARABONBA_PTR_GET_DEFAULT(destinationAddress_, "") };
    inline ListCustomRoutingPortMappingsByDestinationRequest& setDestinationAddress(string destinationAddress) { DARABONBA_PTR_SET_VALUE(destinationAddress_, destinationAddress) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListCustomRoutingPortMappingsByDestinationRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingPortMappingsByDestinationRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingPortMappingsByDestinationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCustomRoutingPortMappingsByDestinationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The service IP address of the backend instance.
    // 
    // This parameter is required.
    shared_ptr<string> destinationAddress_ {};
    // The ID of the endpoint to which the backend instance belongs.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
