// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEDEVICESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESCALEDEVICESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RescaleDeviceServiceResponseBodyResourceDetailInfos.hpp>
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
    virtual bool empty() const override { return this->deviceIds_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr && return this->resourceDetailInfos_ == nullptr; };
    // deviceIds Field Functions 
    bool hasDeviceIds() const { return this->deviceIds_ != nullptr;};
    void deleteDeviceIds() { this->deviceIds_ = nullptr;};
    inline const vector<string> & deviceIds() const { DARABONBA_PTR_GET_CONST(deviceIds_, vector<string>) };
    inline vector<string> deviceIds() { DARABONBA_PTR_GET(deviceIds_, vector<string>) };
    inline RescaleDeviceServiceResponseBody& setDeviceIds(const vector<string> & deviceIds) { DARABONBA_PTR_SET_VALUE(deviceIds_, deviceIds) };
    inline RescaleDeviceServiceResponseBody& setDeviceIds(vector<string> && deviceIds) { DARABONBA_PTR_SET_RVALUE(deviceIds_, deviceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RescaleDeviceServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RescaleDeviceServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDetailInfos Field Functions 
    bool hasResourceDetailInfos() const { return this->resourceDetailInfos_ != nullptr;};
    void deleteResourceDetailInfos() { this->resourceDetailInfos_ = nullptr;};
    inline const vector<RescaleDeviceServiceResponseBodyResourceDetailInfos> & resourceDetailInfos() const { DARABONBA_PTR_GET_CONST(resourceDetailInfos_, vector<RescaleDeviceServiceResponseBodyResourceDetailInfos>) };
    inline vector<RescaleDeviceServiceResponseBodyResourceDetailInfos> resourceDetailInfos() { DARABONBA_PTR_GET(resourceDetailInfos_, vector<RescaleDeviceServiceResponseBodyResourceDetailInfos>) };
    inline RescaleDeviceServiceResponseBody& setResourceDetailInfos(const vector<RescaleDeviceServiceResponseBodyResourceDetailInfos> & resourceDetailInfos) { DARABONBA_PTR_SET_VALUE(resourceDetailInfos_, resourceDetailInfos) };
    inline RescaleDeviceServiceResponseBody& setResourceDetailInfos(vector<RescaleDeviceServiceResponseBodyResourceDetailInfos> && resourceDetailInfos) { DARABONBA_PTR_SET_RVALUE(resourceDetailInfos_, resourceDetailInfos) };


  protected:
    // The IDs of the devices.
    std::shared_ptr<vector<string>> deviceIds_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The key properties of the device.
    std::shared_ptr<vector<RescaleDeviceServiceResponseBodyResourceDetailInfos>> resourceDetailInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
