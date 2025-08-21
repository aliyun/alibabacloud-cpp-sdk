// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceSettingRequestDeviceInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    GetDeviceSettingRequest() = default ;
    GetDeviceSettingRequest(const GetDeviceSettingRequest &) = default ;
    GetDeviceSettingRequest(GetDeviceSettingRequest &&) = default ;
    GetDeviceSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceSettingRequest() = default ;
    GetDeviceSettingRequest& operator=(const GetDeviceSettingRequest &) = default ;
    GetDeviceSettingRequest& operator=(GetDeviceSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->keys_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetDeviceSettingRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetDeviceSettingRequestDeviceInfo) };
    inline GetDeviceSettingRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetDeviceSettingRequestDeviceInfo) };
    inline GetDeviceSettingRequest& setDeviceInfo(const GetDeviceSettingRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetDeviceSettingRequest& setDeviceInfo(GetDeviceSettingRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline GetDeviceSettingRequest& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline GetDeviceSettingRequest& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


  protected:
    std::shared_ptr<GetDeviceSettingRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> keys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
