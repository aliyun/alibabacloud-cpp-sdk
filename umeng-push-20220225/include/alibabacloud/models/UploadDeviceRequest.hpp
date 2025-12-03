// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class UploadDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceTokens, deviceTokens_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceTokens, deviceTokens_);
    };
    UploadDeviceRequest() = default ;
    UploadDeviceRequest(const UploadDeviceRequest &) = default ;
    UploadDeviceRequest(UploadDeviceRequest &&) = default ;
    UploadDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDeviceRequest() = default ;
    UploadDeviceRequest& operator=(const UploadDeviceRequest &) = default ;
    UploadDeviceRequest& operator=(UploadDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceTokens_ == nullptr; };
    // deviceTokens Field Functions 
    bool hasDeviceTokens() const { return this->deviceTokens_ != nullptr;};
    void deleteDeviceTokens() { this->deviceTokens_ = nullptr;};
    inline string deviceTokens() const { DARABONBA_PTR_GET_DEFAULT(deviceTokens_, "") };
    inline UploadDeviceRequest& setDeviceTokens(string deviceTokens) { DARABONBA_PTR_SET_VALUE(deviceTokens_, deviceTokens) };


  protected:
    std::shared_ptr<string> deviceTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
