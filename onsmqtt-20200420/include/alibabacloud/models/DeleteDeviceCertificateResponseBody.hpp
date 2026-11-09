// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEVICECERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEVICECERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteDeviceCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeviceCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceSn, deviceSn_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeviceCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceSn, deviceSn_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteDeviceCertificateResponseBody() = default ;
    DeleteDeviceCertificateResponseBody(const DeleteDeviceCertificateResponseBody &) = default ;
    DeleteDeviceCertificateResponseBody(DeleteDeviceCertificateResponseBody &&) = default ;
    DeleteDeviceCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeviceCertificateResponseBody() = default ;
    DeleteDeviceCertificateResponseBody& operator=(const DeleteDeviceCertificateResponseBody &) = default ;
    DeleteDeviceCertificateResponseBody& operator=(DeleteDeviceCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceSn_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceSn Field Functions 
    bool hasDeviceSn() const { return this->deviceSn_ != nullptr;};
    void deleteDeviceSn() { this->deviceSn_ = nullptr;};
    inline string getDeviceSn() const { DARABONBA_PTR_GET_DEFAULT(deviceSn_, "") };
    inline DeleteDeviceCertificateResponseBody& setDeviceSn(string deviceSn) { DARABONBA_PTR_SET_VALUE(deviceSn_, deviceSn) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteDeviceCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The SN of the deleted device certificate. The SN uniquely identifies a device certificate.
    shared_ptr<string> deviceSn_ {};
    // The common parameter. Each request has a unique ID that can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
