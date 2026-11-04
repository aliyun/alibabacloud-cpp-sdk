// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDPICTURESEARCHAPPWITHDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDPICTURESEARCHAPPWITHDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class UnbindPictureSearchAppWithDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindPictureSearchAppWithDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(DeviceIotIds, deviceIotIds_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindPictureSearchAppWithDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(DeviceIotIds, deviceIotIds_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
    };
    UnbindPictureSearchAppWithDevicesRequest() = default ;
    UnbindPictureSearchAppWithDevicesRequest(const UnbindPictureSearchAppWithDevicesRequest &) = default ;
    UnbindPictureSearchAppWithDevicesRequest(UnbindPictureSearchAppWithDevicesRequest &&) = default ;
    UnbindPictureSearchAppWithDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindPictureSearchAppWithDevicesRequest() = default ;
    UnbindPictureSearchAppWithDevicesRequest& operator=(const UnbindPictureSearchAppWithDevicesRequest &) = default ;
    UnbindPictureSearchAppWithDevicesRequest& operator=(UnbindPictureSearchAppWithDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->deviceIotIds_ == nullptr && this->iotInstanceId_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline UnbindPictureSearchAppWithDevicesRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // deviceIotIds Field Functions 
    bool hasDeviceIotIds() const { return this->deviceIotIds_ != nullptr;};
    void deleteDeviceIotIds() { this->deviceIotIds_ = nullptr;};
    inline const vector<string> & getDeviceIotIds() const { DARABONBA_PTR_GET_CONST(deviceIotIds_, vector<string>) };
    inline vector<string> getDeviceIotIds() { DARABONBA_PTR_GET(deviceIotIds_, vector<string>) };
    inline UnbindPictureSearchAppWithDevicesRequest& setDeviceIotIds(const vector<string> & deviceIotIds) { DARABONBA_PTR_SET_VALUE(deviceIotIds_, deviceIotIds) };
    inline UnbindPictureSearchAppWithDevicesRequest& setDeviceIotIds(vector<string> && deviceIotIds) { DARABONBA_PTR_SET_RVALUE(deviceIotIds_, deviceIotIds) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline UnbindPictureSearchAppWithDevicesRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](https://help.aliyun.com/document_detail/206608.html) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // The list of device IoT IDs. You can specify the IoT IDs of V-series edge all-in-one machines or cameras.
    // 
    // An IoT ID is the unique identifier issued by IoT Platform for a device. You can call the IoT Platform [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation to query the IoT ID.
    // 
    // You can specify up to 20 device IoT IDs in a single call.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> deviceIotIds_ {};
    // The instance ID.
    // 
    // - Enterprise Enterprise instance: You must specify this parameter. You can view the ID of your Enterprise Enterprise instance on the **Instance Overview** page in the IoT Platform console.
    // - Public instance: You do not need to specify this parameter.
    shared_ptr<string> iotInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
