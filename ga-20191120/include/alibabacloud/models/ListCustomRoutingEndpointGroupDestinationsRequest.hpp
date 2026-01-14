// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMROUTINGENDPOINTGROUPDESTINATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListCustomRoutingEndpointGroupDestinationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ToPort, toPort_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomRoutingEndpointGroupDestinationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
    };
    ListCustomRoutingEndpointGroupDestinationsRequest() = default ;
    ListCustomRoutingEndpointGroupDestinationsRequest(const ListCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    ListCustomRoutingEndpointGroupDestinationsRequest(ListCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    ListCustomRoutingEndpointGroupDestinationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomRoutingEndpointGroupDestinationsRequest() = default ;
    ListCustomRoutingEndpointGroupDestinationsRequest& operator=(const ListCustomRoutingEndpointGroupDestinationsRequest &) = default ;
    ListCustomRoutingEndpointGroupDestinationsRequest& operator=(ListCustomRoutingEndpointGroupDestinationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->endpointGroupId_ == nullptr && this->fromPort_ == nullptr && this->listenerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->protocols_ == nullptr && this->regionId_ == nullptr && this->toPort_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // fromPort Field Functions 
    bool hasFromPort() const { return this->fromPort_ != nullptr;};
    void deleteFromPort() { this->fromPort_ = nullptr;};
    inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // toPort Field Functions 
    bool hasToPort() const { return this->toPort_ != nullptr;};
    void deleteToPort() { this->toPort_ = nullptr;};
    inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
    inline ListCustomRoutingEndpointGroupDestinationsRequest& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The start port of the backend service port range of the endpoint group.
    // 
    // Valid values: **1** to **65499**. The **FromPort** value must be smaller than or equal to the **ToPort** value.
    shared_ptr<int32_t> fromPort_ {};
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The backend service protocols of the endpoint group. Valid values:
    // 
    // - **TCP**: TCP.
    // - **UDP**: UDP.
    // - **TCP,UDP**: TCP and UDP.
    // 
    // If this parameter is empty, all types of protocols are queried.
    // 
    // You can specify up to 10 protocols.
    shared_ptr<vector<string>> protocols_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The end port of the backend service port range of the endpoint group.
    // 
    // Valid values: **1** to **65499**. The **FromPort** value must be smaller than or equal to the **ToPort** value.
    shared_ptr<int32_t> toPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
