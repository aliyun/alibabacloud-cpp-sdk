// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHANNELCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHANNELCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class GetDataChannelCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataChannelCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataChannelCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
    };
    GetDataChannelCredentialRequest() = default ;
    GetDataChannelCredentialRequest(const GetDataChannelCredentialRequest &) = default ;
    GetDataChannelCredentialRequest(GetDataChannelCredentialRequest &&) = default ;
    GetDataChannelCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataChannelCredentialRequest() = default ;
    GetDataChannelCredentialRequest& operator=(const GetDataChannelCredentialRequest &) = default ;
    GetDataChannelCredentialRequest& operator=(GetDataChannelCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->deviceId_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline GetDataChannelCredentialRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetDataChannelCredentialRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> businessUnitId_ {};
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
