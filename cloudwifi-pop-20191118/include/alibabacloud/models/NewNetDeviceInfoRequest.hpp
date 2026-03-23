// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEWNETDEVICEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NEWNETDEVICEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class NewNetDeviceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NewNetDeviceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, NewNetDeviceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    NewNetDeviceInfoRequest() = default ;
    NewNetDeviceInfoRequest(const NewNetDeviceInfoRequest &) = default ;
    NewNetDeviceInfoRequest(NewNetDeviceInfoRequest &&) = default ;
    NewNetDeviceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NewNetDeviceInfoRequest() = default ;
    NewNetDeviceInfoRequest& operator=(const NewNetDeviceInfoRequest &) = default ;
    NewNetDeviceInfoRequest& operator=(NewNetDeviceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(Idc, idc_);
        DARABONBA_PTR_TO_JSON(LogicNetPod, logicNetPod_);
        DARABONBA_PTR_TO_JSON(Manufacturer, manufacturer_);
        DARABONBA_PTR_TO_JSON(MgnIp, mgnIp_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(NetPod, netPod_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(ServiceTag, serviceTag_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(Idc, idc_);
        DARABONBA_PTR_FROM_JSON(LogicNetPod, logicNetPod_);
        DARABONBA_PTR_FROM_JSON(Manufacturer, manufacturer_);
        DARABONBA_PTR_FROM_JSON(MgnIp, mgnIp_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(NetPod, netPod_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(ServiceTag, serviceTag_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostName_ == nullptr
        && this->idc_ == nullptr && this->logicNetPod_ == nullptr && this->manufacturer_ == nullptr && this->mgnIp_ == nullptr && this->model_ == nullptr
        && this->netPod_ == nullptr && this->password_ == nullptr && this->role_ == nullptr && this->serviceTag_ == nullptr && this->username_ == nullptr; };
      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Devices& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // idc Field Functions 
      bool hasIdc() const { return this->idc_ != nullptr;};
      void deleteIdc() { this->idc_ = nullptr;};
      inline string getIdc() const { DARABONBA_PTR_GET_DEFAULT(idc_, "") };
      inline Devices& setIdc(string idc) { DARABONBA_PTR_SET_VALUE(idc_, idc) };


      // logicNetPod Field Functions 
      bool hasLogicNetPod() const { return this->logicNetPod_ != nullptr;};
      void deleteLogicNetPod() { this->logicNetPod_ = nullptr;};
      inline string getLogicNetPod() const { DARABONBA_PTR_GET_DEFAULT(logicNetPod_, "") };
      inline Devices& setLogicNetPod(string logicNetPod) { DARABONBA_PTR_SET_VALUE(logicNetPod_, logicNetPod) };


      // manufacturer Field Functions 
      bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
      void deleteManufacturer() { this->manufacturer_ = nullptr;};
      inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
      inline Devices& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


      // mgnIp Field Functions 
      bool hasMgnIp() const { return this->mgnIp_ != nullptr;};
      void deleteMgnIp() { this->mgnIp_ = nullptr;};
      inline string getMgnIp() const { DARABONBA_PTR_GET_DEFAULT(mgnIp_, "") };
      inline Devices& setMgnIp(string mgnIp) { DARABONBA_PTR_SET_VALUE(mgnIp_, mgnIp) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Devices& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // netPod Field Functions 
      bool hasNetPod() const { return this->netPod_ != nullptr;};
      void deleteNetPod() { this->netPod_ = nullptr;};
      inline string getNetPod() const { DARABONBA_PTR_GET_DEFAULT(netPod_, "") };
      inline Devices& setNetPod(string netPod) { DARABONBA_PTR_SET_VALUE(netPod_, netPod) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Devices& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Devices& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // serviceTag Field Functions 
      bool hasServiceTag() const { return this->serviceTag_ != nullptr;};
      void deleteServiceTag() { this->serviceTag_ = nullptr;};
      inline string getServiceTag() const { DARABONBA_PTR_GET_DEFAULT(serviceTag_, "") };
      inline Devices& setServiceTag(string serviceTag) { DARABONBA_PTR_SET_VALUE(serviceTag_, serviceTag) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Devices& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // This parameter is required.
      shared_ptr<string> hostName_ {};
      shared_ptr<string> idc_ {};
      shared_ptr<string> logicNetPod_ {};
      shared_ptr<string> manufacturer_ {};
      // This parameter is required.
      shared_ptr<string> mgnIp_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> netPod_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> role_ {};
      // This parameter is required.
      shared_ptr<string> serviceTag_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->devices_ == nullptr && this->requestId_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline NewNetDeviceInfoRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline NewNetDeviceInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const vector<NewNetDeviceInfoRequest::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<NewNetDeviceInfoRequest::Devices>) };
    inline vector<NewNetDeviceInfoRequest::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<NewNetDeviceInfoRequest::Devices>) };
    inline NewNetDeviceInfoRequest& setDevices(const vector<NewNetDeviceInfoRequest::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline NewNetDeviceInfoRequest& setDevices(vector<NewNetDeviceInfoRequest::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline NewNetDeviceInfoRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<vector<NewNetDeviceInfoRequest::Devices>> devices_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
