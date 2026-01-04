// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEDEVICESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESCALEDEVICESERVICERESPONSEBODY_HPP_
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
  class RescaleDeviceServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RescaleDeviceServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDetailInfos, resourceDetailInfos_);
    };
    friend void from_json(const Darabonba::Json& j, RescaleDeviceServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIds, deviceIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDetailInfos, resourceDetailInfos_);
    };
    RescaleDeviceServiceResponseBody() = default ;
    RescaleDeviceServiceResponseBody(const RescaleDeviceServiceResponseBody &) = default ;
    RescaleDeviceServiceResponseBody(RescaleDeviceServiceResponseBody &&) = default ;
    RescaleDeviceServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RescaleDeviceServiceResponseBody() = default ;
    RescaleDeviceServiceResponseBody& operator=(const RescaleDeviceServiceResponseBody &) = default ;
    RescaleDeviceServiceResponseBody& operator=(RescaleDeviceServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceDetailInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceDetailInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ID, ID_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(ISP, ISP_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(RegionID, regionID_);
        DARABONBA_PTR_TO_JSON(Server, server_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceDetailInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ID, ID_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(ISP, ISP_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
        DARABONBA_PTR_FROM_JSON(Server, server_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ResourceDetailInfos() = default ;
      ResourceDetailInfos(const ResourceDetailInfos &) = default ;
      ResourceDetailInfos(ResourceDetailInfos &&) = default ;
      ResourceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceDetailInfos() = default ;
      ResourceDetailInfos& operator=(const ResourceDetailInfos &) = default ;
      ResourceDetailInfos& operator=(ResourceDetailInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ID_ == nullptr
        && this->IP_ == nullptr && this->ISP_ == nullptr && this->mac_ == nullptr && this->regionID_ == nullptr && this->server_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // ID Field Functions 
      bool hasID() const { return this->ID_ != nullptr;};
      void deleteID() { this->ID_ = nullptr;};
      inline string getID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
      inline ResourceDetailInfos& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline ResourceDetailInfos& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // ISP Field Functions 
      bool hasISP() const { return this->ISP_ != nullptr;};
      void deleteISP() { this->ISP_ = nullptr;};
      inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
      inline ResourceDetailInfos& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline ResourceDetailInfos& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // regionID Field Functions 
      bool hasRegionID() const { return this->regionID_ != nullptr;};
      void deleteRegionID() { this->regionID_ = nullptr;};
      inline string getRegionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
      inline ResourceDetailInfos& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


      // server Field Functions 
      bool hasServer() const { return this->server_ != nullptr;};
      void deleteServer() { this->server_ = nullptr;};
      inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
      inline ResourceDetailInfos& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceDetailInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResourceDetailInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the device.
      shared_ptr<string> ID_ {};
      // The IP address of the device.
      shared_ptr<string> IP_ {};
      // The Internet service provider (ISP) to which the device belongs.
      shared_ptr<string> ISP_ {};
      // The media access control (MAC) address of the device.
      shared_ptr<string> mac_ {};
      // The ID of the edge node to which the device belongs.
      shared_ptr<string> regionID_ {};
      // The name of the server on which the device is deployed.
      shared_ptr<string> server_ {};
      // The status of the device.
      shared_ptr<string> status_ {};
      // The type of the instance.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->deviceIds_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr && this->resourceDetailInfos_ == nullptr; };
    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const vector<string> & getDeviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, vector<string>) };
    inline vector<string> getDeviceIds() { DARABONBA_PTR_GET(deviceIds_, vector<string>) };
    inline RescaleDeviceServiceResponseBody& setDeviceIds(const vector<string> & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline RescaleDeviceServiceResponseBody& setDeviceIds(vector<string> && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RescaleDeviceServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RescaleDeviceServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDetailInfos Field Functions 
    bool hasResourceDetailInfos() const { return this->resourceDetailInfos_ != nullptr;};
    void deleteResourceDetailInfos() { this->resourceDetailInfos_ = nullptr;};
    inline const vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos> & getResourceDetailInfos() const { DARABONBA_PTR_GET_CONST(resourceDetailInfos_, vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos>) };
    inline vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos> getResourceDetailInfos() { DARABONBA_PTR_GET(resourceDetailInfos_, vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos>) };
    inline RescaleDeviceServiceResponseBody& setResourceDetailInfos(const vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos> & resourceDetailInfos) { DARABONBA_PTR_SET_VALUE(resourceDetailInfos_, resourceDetailInfos) };
    inline RescaleDeviceServiceResponseBody& setResourceDetailInfos(vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos> && resourceDetailInfos) { DARABONBA_PTR_SET_RVALUE(resourceDetailInfos_, resourceDetailInfos) };


  protected:
    // The IDs of the devices.
    shared_ptr<vector<string>> deviceIds_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The key properties of the device.
    shared_ptr<vector<RescaleDeviceServiceResponseBody::ResourceDetailInfos>> resourceDetailInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
