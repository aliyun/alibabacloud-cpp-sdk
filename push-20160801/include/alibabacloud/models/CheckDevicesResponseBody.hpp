// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckDevicesResponseBodyDeviceCheckInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCheckInfos, deviceCheckInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCheckInfos, deviceCheckInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDevicesResponseBody() = default ;
    CheckDevicesResponseBody(const CheckDevicesResponseBody &) = default ;
    CheckDevicesResponseBody(CheckDevicesResponseBody &&) = default ;
    CheckDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDevicesResponseBody() = default ;
    CheckDevicesResponseBody& operator=(const CheckDevicesResponseBody &) = default ;
    CheckDevicesResponseBody& operator=(CheckDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceCheckInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // deviceCheckInfos Field Functions 
    bool hasDeviceCheckInfos() const { return this->deviceCheckInfos_ != nullptr;};
    void deleteDeviceCheckInfos() { this->deviceCheckInfos_ = nullptr;};
    inline const CheckDevicesResponseBodyDeviceCheckInfos & deviceCheckInfos() const { DARABONBA_PTR_GET_CONST(deviceCheckInfos_, CheckDevicesResponseBodyDeviceCheckInfos) };
    inline CheckDevicesResponseBodyDeviceCheckInfos deviceCheckInfos() { DARABONBA_PTR_GET(deviceCheckInfos_, CheckDevicesResponseBodyDeviceCheckInfos) };
    inline CheckDevicesResponseBody& setDeviceCheckInfos(const CheckDevicesResponseBodyDeviceCheckInfos & deviceCheckInfos) { DARABONBA_PTR_SET_VALUE(deviceCheckInfos_, deviceCheckInfos) };
    inline CheckDevicesResponseBody& setDeviceCheckInfos(CheckDevicesResponseBodyDeviceCheckInfos && deviceCheckInfos) { DARABONBA_PTR_SET_RVALUE(deviceCheckInfos_, deviceCheckInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CheckDevicesResponseBodyDeviceCheckInfos> deviceCheckInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
