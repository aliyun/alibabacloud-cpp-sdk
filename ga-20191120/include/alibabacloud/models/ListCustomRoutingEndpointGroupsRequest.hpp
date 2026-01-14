// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListCustomRoutingEndpointGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AccessLogSwitch, accessLogSwitch_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AccessLogSwitch, accessLogSwitch_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListCustomRoutingEndpointGroupsRequest() = default ;
    ListCustomRoutingEndpointGroupsRequest(const ListCustomRoutingEndpointGroupsRequest &) = default ;
    ListCustomRoutingEndpointGroupsRequest(ListCustomRoutingEndpointGroupsRequest &&) = default ;
    ListCustomRoutingEndpointGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingEndpointGroupsRequest() = default ;
    ListCustomRoutingEndpointGroupsRequest& operator=(const ListCustomRoutingEndpointGroupsRequest &) = default ;
    ListCustomRoutingEndpointGroupsRequest& operator=(ListCustomRoutingEndpointGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->accessLogSwitch_ == nullptr && this->endpointGroupId_ == nullptr && this->listenerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline ListCustomRoutingEndpointGroupsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // accessLogSwitch Field Functions 
    bool hasAccessLogSwitch() const { return this->accessLogSwitch_ != nullptr;};
    void deleteAccessLogSwitch() { this->accessLogSwitch_ = nullptr;};
    inline string getAccessLogSwitch() const { DARABONBA_PTR_GET_DEFAULT(accessLogSwitch_, "") };
    inline ListCustomRoutingEndpointGroupsRequest& setAccessLogSwitch(string accessLogSwitch) { DARABONBA_PTR_SET_VALUE(accessLogSwitch_, accessLogSwitch) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline ListCustomRoutingEndpointGroupsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListCustomRoutingEndpointGroupsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingEndpointGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingEndpointGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCustomRoutingEndpointGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // Specifies whether the access log feature is enabled.
    // 
    // You can set the parameter to **on**.
    // 
    // If you leave the parameter empty, all endpoint groups are returned.
    shared_ptr<string> accessLogSwitch_ {};
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The ID of the custom routing listener.
    shared_ptr<string> listenerId_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
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
