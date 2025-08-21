// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMFAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMFAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserMFAInfoResponseBodyMFADevice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserMFAInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMFAInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsMFAEnable, isMFAEnable_);
      DARABONBA_PTR_TO_JSON(MFADevice, MFADevice_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMFAInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsMFAEnable, isMFAEnable_);
      DARABONBA_PTR_FROM_JSON(MFADevice, MFADevice_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserMFAInfoResponseBody() = default ;
    GetUserMFAInfoResponseBody(const GetUserMFAInfoResponseBody &) = default ;
    GetUserMFAInfoResponseBody(GetUserMFAInfoResponseBody &&) = default ;
    GetUserMFAInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMFAInfoResponseBody() = default ;
    GetUserMFAInfoResponseBody& operator=(const GetUserMFAInfoResponseBody &) = default ;
    GetUserMFAInfoResponseBody& operator=(GetUserMFAInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isMFAEnable_ != nullptr
        && this->MFADevice_ != nullptr && this->requestId_ != nullptr; };
    // isMFAEnable Field Functions 
    bool hasIsMFAEnable() const { return this->isMFAEnable_ != nullptr;};
    void deleteIsMFAEnable() { this->isMFAEnable_ = nullptr;};
    inline bool isMFAEnable() const { DARABONBA_PTR_GET_DEFAULT(isMFAEnable_, false) };
    inline GetUserMFAInfoResponseBody& setIsMFAEnable(bool isMFAEnable) { DARABONBA_PTR_SET_VALUE(isMFAEnable_, isMFAEnable) };


    // MFADevice Field Functions 
    bool hasMFADevice() const { return this->MFADevice_ != nullptr;};
    void deleteMFADevice() { this->MFADevice_ = nullptr;};
    inline const GetUserMFAInfoResponseBodyMFADevice & MFADevice() const { DARABONBA_PTR_GET_CONST(MFADevice_, GetUserMFAInfoResponseBodyMFADevice) };
    inline GetUserMFAInfoResponseBodyMFADevice MFADevice() { DARABONBA_PTR_GET(MFADevice_, GetUserMFAInfoResponseBodyMFADevice) };
    inline GetUserMFAInfoResponseBody& setMFADevice(const GetUserMFAInfoResponseBodyMFADevice & MFADevice) { DARABONBA_PTR_SET_VALUE(MFADevice_, MFADevice) };
    inline GetUserMFAInfoResponseBody& setMFADevice(GetUserMFAInfoResponseBodyMFADevice && MFADevice) { DARABONBA_PTR_SET_RVALUE(MFADevice_, MFADevice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserMFAInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the MFA device is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isMFAEnable_ = nullptr;
    // The information about the MFA device.
    std::shared_ptr<GetUserMFAInfoResponseBodyMFADevice> MFADevice_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
