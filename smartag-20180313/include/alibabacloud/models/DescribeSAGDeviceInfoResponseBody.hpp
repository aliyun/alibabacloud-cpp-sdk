// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSAGDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSAGDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControllerState, controllerState_);
      DARABONBA_PTR_TO_JSON(LastConnectedControllerTime, lastConnectedControllerTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResettableStatus, resettableStatus_);
      DARABONBA_PTR_TO_JSON(ServiceIP, serviceIP_);
      DARABONBA_PTR_TO_JSON(SmartAGType, smartAGType_);
      DARABONBA_PTR_TO_JSON(StartupTime, startupTime_);
      DARABONBA_PTR_TO_JSON(SynStatus, synStatus_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpnState, vpnState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSAGDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControllerState, controllerState_);
      DARABONBA_PTR_FROM_JSON(LastConnectedControllerTime, lastConnectedControllerTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResettableStatus, resettableStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceIP, serviceIP_);
      DARABONBA_PTR_FROM_JSON(SmartAGType, smartAGType_);
      DARABONBA_PTR_FROM_JSON(StartupTime, startupTime_);
      DARABONBA_PTR_FROM_JSON(SynStatus, synStatus_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpnState, vpnState_);
    };
    DescribeSAGDeviceInfoResponseBody() = default ;
    DescribeSAGDeviceInfoResponseBody(const DescribeSAGDeviceInfoResponseBody &) = default ;
    DescribeSAGDeviceInfoResponseBody(DescribeSAGDeviceInfoResponseBody &&) = default ;
    DescribeSAGDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSAGDeviceInfoResponseBody() = default ;
    DescribeSAGDeviceInfoResponseBody& operator=(const DescribeSAGDeviceInfoResponseBody &) = default ;
    DescribeSAGDeviceInfoResponseBody& operator=(DescribeSAGDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controllerState_ == nullptr
        && this->lastConnectedControllerTime_ == nullptr && this->requestId_ == nullptr && this->resettableStatus_ == nullptr && this->serviceIP_ == nullptr && this->smartAGType_ == nullptr
        && this->startupTime_ == nullptr && this->synStatus_ == nullptr && this->version_ == nullptr && this->vpnState_ == nullptr; };
    // controllerState Field Functions 
    bool hasControllerState() const { return this->controllerState_ != nullptr;};
    void deleteControllerState() { this->controllerState_ = nullptr;};
    inline string getControllerState() const { DARABONBA_PTR_GET_DEFAULT(controllerState_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setControllerState(string controllerState) { DARABONBA_PTR_SET_VALUE(controllerState_, controllerState) };


    // lastConnectedControllerTime Field Functions 
    bool hasLastConnectedControllerTime() const { return this->lastConnectedControllerTime_ != nullptr;};
    void deleteLastConnectedControllerTime() { this->lastConnectedControllerTime_ = nullptr;};
    inline string getLastConnectedControllerTime() const { DARABONBA_PTR_GET_DEFAULT(lastConnectedControllerTime_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setLastConnectedControllerTime(string lastConnectedControllerTime) { DARABONBA_PTR_SET_VALUE(lastConnectedControllerTime_, lastConnectedControllerTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resettableStatus Field Functions 
    bool hasResettableStatus() const { return this->resettableStatus_ != nullptr;};
    void deleteResettableStatus() { this->resettableStatus_ = nullptr;};
    inline string getResettableStatus() const { DARABONBA_PTR_GET_DEFAULT(resettableStatus_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setResettableStatus(string resettableStatus) { DARABONBA_PTR_SET_VALUE(resettableStatus_, resettableStatus) };


    // serviceIP Field Functions 
    bool hasServiceIP() const { return this->serviceIP_ != nullptr;};
    void deleteServiceIP() { this->serviceIP_ = nullptr;};
    inline string getServiceIP() const { DARABONBA_PTR_GET_DEFAULT(serviceIP_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setServiceIP(string serviceIP) { DARABONBA_PTR_SET_VALUE(serviceIP_, serviceIP) };


    // smartAGType Field Functions 
    bool hasSmartAGType() const { return this->smartAGType_ != nullptr;};
    void deleteSmartAGType() { this->smartAGType_ = nullptr;};
    inline string getSmartAGType() const { DARABONBA_PTR_GET_DEFAULT(smartAGType_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setSmartAGType(string smartAGType) { DARABONBA_PTR_SET_VALUE(smartAGType_, smartAGType) };


    // startupTime Field Functions 
    bool hasStartupTime() const { return this->startupTime_ != nullptr;};
    void deleteStartupTime() { this->startupTime_ = nullptr;};
    inline string getStartupTime() const { DARABONBA_PTR_GET_DEFAULT(startupTime_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setStartupTime(string startupTime) { DARABONBA_PTR_SET_VALUE(startupTime_, startupTime) };


    // synStatus Field Functions 
    bool hasSynStatus() const { return this->synStatus_ != nullptr;};
    void deleteSynStatus() { this->synStatus_ = nullptr;};
    inline string getSynStatus() const { DARABONBA_PTR_GET_DEFAULT(synStatus_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setSynStatus(string synStatus) { DARABONBA_PTR_SET_VALUE(synStatus_, synStatus) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpnState Field Functions 
    bool hasVpnState() const { return this->vpnState_ != nullptr;};
    void deleteVpnState() { this->vpnState_ = nullptr;};
    inline string getVpnState() const { DARABONBA_PTR_GET_DEFAULT(vpnState_, "") };
    inline DescribeSAGDeviceInfoResponseBody& setVpnState(string vpnState) { DARABONBA_PTR_SET_VALUE(vpnState_, vpnState) };


  protected:
    // The control status of the Smart Access Gateway device. Valid values:
    // 
    // - **Normal**: Normal.
    // - **Abnormal**: Abnormal.
    shared_ptr<string> controllerState_ {};
    // The most recent time when the Smart Access Gateway device connected to the controller.
    shared_ptr<string> lastConnectedControllerTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the reset button of the Smart Access Gateway device is enabled. Valid values:
    // 
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> resettableStatus_ {};
    // The service IP address of the Smart Access Gateway device.
    shared_ptr<string> serviceIP_ {};
    // The type of the Smart Access Gateway device. Valid values:
    // 
    // - **sag-100wm**.
    // - **sag-1000**.
    shared_ptr<string> smartAGType_ {};
    // The startup time of the Smart Access Gateway device.
    shared_ptr<string> startupTime_ {};
    // The synchronization status between the local Smart Access Gateway device and the cloud. Valid values:
    // 
    // - **Synchronized**: Synchronization is complete.
    // - **Unsynchronized**: Not synchronized.
    // - **Synchronizing**: Synchronization is in progress.
    shared_ptr<string> synStatus_ {};
    // The software version that runs on the Smart Access Gateway device.
    shared_ptr<string> version_ {};
    // The VPN connection status of the Smart Access Gateway device. Valid values:
    // 
    // - **Normal**: Normal.
    // - **Abnormal**: Abnormal.
    shared_ptr<string> vpnState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
