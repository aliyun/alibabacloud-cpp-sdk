// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETDEVICEINFOWITHSIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNETDEVICEINFOWITHSIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetNetDeviceInfoWithSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetDeviceInfoWithSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Idc, idc_);
      DARABONBA_PTR_TO_JSON(LogicNetPod, logicNetPod_);
      DARABONBA_PTR_TO_JSON(Manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(MgnIp, mgnIp_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NetPod, netPod_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ServiceTag, serviceTag_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetDeviceInfoWithSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Idc, idc_);
      DARABONBA_PTR_FROM_JSON(LogicNetPod, logicNetPod_);
      DARABONBA_PTR_FROM_JSON(Manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(MgnIp, mgnIp_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NetPod, netPod_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ServiceTag, serviceTag_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetNetDeviceInfoWithSizeRequest() = default ;
    GetNetDeviceInfoWithSizeRequest(const GetNetDeviceInfoWithSizeRequest &) = default ;
    GetNetDeviceInfoWithSizeRequest(GetNetDeviceInfoWithSizeRequest &&) = default ;
    GetNetDeviceInfoWithSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetDeviceInfoWithSizeRequest() = default ;
    GetNetDeviceInfoWithSizeRequest& operator=(const GetNetDeviceInfoWithSizeRequest &) = default ;
    GetNetDeviceInfoWithSizeRequest& operator=(GetNetDeviceInfoWithSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->cursor_ == nullptr && this->hostName_ == nullptr && this->id_ == nullptr && this->idc_ == nullptr
        && this->logicNetPod_ == nullptr && this->manufacturer_ == nullptr && this->mgnIp_ == nullptr && this->model_ == nullptr && this->netPod_ == nullptr
        && this->pageSize_ == nullptr && this->password_ == nullptr && this->requestId_ == nullptr && this->role_ == nullptr && this->serviceTag_ == nullptr
        && this->username_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline GetNetDeviceInfoWithSizeRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetNetDeviceInfoWithSizeRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idc Field Functions 
    bool hasIdc() const { return this->idc_ != nullptr;};
    void deleteIdc() { this->idc_ = nullptr;};
    inline string getIdc() const { DARABONBA_PTR_GET_DEFAULT(idc_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setIdc(string idc) { DARABONBA_PTR_SET_VALUE(idc_, idc) };


    // logicNetPod Field Functions 
    bool hasLogicNetPod() const { return this->logicNetPod_ != nullptr;};
    void deleteLogicNetPod() { this->logicNetPod_ = nullptr;};
    inline string getLogicNetPod() const { DARABONBA_PTR_GET_DEFAULT(logicNetPod_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setLogicNetPod(string logicNetPod) { DARABONBA_PTR_SET_VALUE(logicNetPod_, logicNetPod) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // mgnIp Field Functions 
    bool hasMgnIp() const { return this->mgnIp_ != nullptr;};
    void deleteMgnIp() { this->mgnIp_ = nullptr;};
    inline string getMgnIp() const { DARABONBA_PTR_GET_DEFAULT(mgnIp_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setMgnIp(string mgnIp) { DARABONBA_PTR_SET_VALUE(mgnIp_, mgnIp) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // netPod Field Functions 
    bool hasNetPod() const { return this->netPod_ != nullptr;};
    void deleteNetPod() { this->netPod_ = nullptr;};
    inline string getNetPod() const { DARABONBA_PTR_GET_DEFAULT(netPod_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setNetPod(string netPod) { DARABONBA_PTR_SET_VALUE(netPod_, netPod) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetNetDeviceInfoWithSizeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // serviceTag Field Functions 
    bool hasServiceTag() const { return this->serviceTag_ != nullptr;};
    void deleteServiceTag() { this->serviceTag_ = nullptr;};
    inline string getServiceTag() const { DARABONBA_PTR_GET_DEFAULT(serviceTag_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setServiceTag(string serviceTag) { DARABONBA_PTR_SET_VALUE(serviceTag_, serviceTag) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetNetDeviceInfoWithSizeRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> cursor_ {};
    shared_ptr<string> hostName_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> idc_ {};
    shared_ptr<string> logicNetPod_ {};
    shared_ptr<string> manufacturer_ {};
    shared_ptr<string> mgnIp_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> netPod_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> serviceTag_ {};
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
