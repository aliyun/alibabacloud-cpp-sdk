// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceStatusDetailRequestDeviceInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    GetDeviceStatusDetailRequest() = default ;
    GetDeviceStatusDetailRequest(const GetDeviceStatusDetailRequest &) = default ;
    GetDeviceStatusDetailRequest(GetDeviceStatusDetailRequest &&) = default ;
    GetDeviceStatusDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusDetailRequest() = default ;
    GetDeviceStatusDetailRequest& operator=(const GetDeviceStatusDetailRequest &) = default ;
    GetDeviceStatusDetailRequest& operator=(GetDeviceStatusDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->keys_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetDeviceStatusDetailRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetDeviceStatusDetailRequestDeviceInfo) };
    inline GetDeviceStatusDetailRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetDeviceStatusDetailRequestDeviceInfo) };
    inline GetDeviceStatusDetailRequest& setDeviceInfo(const GetDeviceStatusDetailRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetDeviceStatusDetailRequest& setDeviceInfo(GetDeviceStatusDetailRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline GetDeviceStatusDetailRequest& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline GetDeviceStatusDetailRequest& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetDeviceStatusDetailRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> keys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
