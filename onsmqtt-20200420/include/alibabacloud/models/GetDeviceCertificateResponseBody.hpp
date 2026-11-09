// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICECERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICECERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class GetDeviceCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDeviceCertificateResponseBody() = default ;
    GetDeviceCertificateResponseBody(const GetDeviceCertificateResponseBody &) = default ;
    GetDeviceCertificateResponseBody(GetDeviceCertificateResponseBody &&) = default ;
    GetDeviceCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceCertificateResponseBody() = default ;
    GetDeviceCertificateResponseBody& operator=(const GetDeviceCertificateResponseBody &) = default ;
    GetDeviceCertificateResponseBody& operator=(GetDeviceCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CaSn, caSn_);
        DARABONBA_PTR_TO_JSON(DeviceContent, deviceContent_);
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(DeviceSn, deviceSn_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ValidBegin, validBegin_);
        DARABONBA_PTR_TO_JSON(ValidEnd, validEnd_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CaSn, caSn_);
        DARABONBA_PTR_FROM_JSON(DeviceContent, deviceContent_);
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(DeviceSn, deviceSn_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ValidBegin, validBegin_);
        DARABONBA_PTR_FROM_JSON(ValidEnd, validEnd_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->caSn_ == nullptr
        && this->deviceContent_ == nullptr && this->deviceName_ == nullptr && this->deviceSn_ == nullptr && this->status_ == nullptr && this->validBegin_ == nullptr
        && this->validEnd_ == nullptr; };
      // caSn Field Functions 
      bool hasCaSn() const { return this->caSn_ != nullptr;};
      void deleteCaSn() { this->caSn_ = nullptr;};
      inline string getCaSn() const { DARABONBA_PTR_GET_DEFAULT(caSn_, "") };
      inline Data& setCaSn(string caSn) { DARABONBA_PTR_SET_VALUE(caSn_, caSn) };


      // deviceContent Field Functions 
      bool hasDeviceContent() const { return this->deviceContent_ != nullptr;};
      void deleteDeviceContent() { this->deviceContent_ = nullptr;};
      inline string getDeviceContent() const { DARABONBA_PTR_GET_DEFAULT(deviceContent_, "") };
      inline Data& setDeviceContent(string deviceContent) { DARABONBA_PTR_SET_VALUE(deviceContent_, deviceContent) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline Data& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // deviceSn Field Functions 
      bool hasDeviceSn() const { return this->deviceSn_ != nullptr;};
      void deleteDeviceSn() { this->deviceSn_ = nullptr;};
      inline string getDeviceSn() const { DARABONBA_PTR_GET_DEFAULT(deviceSn_, "") };
      inline Data& setDeviceSn(string deviceSn) { DARABONBA_PTR_SET_VALUE(deviceSn_, deviceSn) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // validBegin Field Functions 
      bool hasValidBegin() const { return this->validBegin_ != nullptr;};
      void deleteValidBegin() { this->validBegin_ = nullptr;};
      inline string getValidBegin() const { DARABONBA_PTR_GET_DEFAULT(validBegin_, "") };
      inline Data& setValidBegin(string validBegin) { DARABONBA_PTR_SET_VALUE(validBegin_, validBegin) };


      // validEnd Field Functions 
      bool hasValidEnd() const { return this->validEnd_ != nullptr;};
      void deleteValidEnd() { this->validEnd_ = nullptr;};
      inline string getValidEnd() const { DARABONBA_PTR_GET_DEFAULT(validEnd_, "") };
      inline Data& setValidEnd(string validEnd) { DARABONBA_PTR_SET_VALUE(validEnd_, validEnd) };


    protected:
      // The SN serial number of the CA certificate to which the device certificate belongs, used to uniquely identify a CA certificate.
      shared_ptr<string> caSn_ {};
      // Content of the device certificate.
      // 
      //  represents a new line.
      shared_ptr<string> deviceContent_ {};
      // Name of the device certificate.
      shared_ptr<string> deviceName_ {};
      // The SN serial number of the device certificate, used to uniquely identify a device certificate.
      shared_ptr<string> deviceSn_ {};
      // The status of the device certificate. The values are as follows:
      // - **0**: Indicates that the certificate is in an inactive state. - **1**: Indicates that the certificate is in an active state.
      // > After the device certificate is registered, it is in an active state by default.
      shared_ptr<string> status_ {};
      // The start time when the device certificate becomes effective. The format is a Unix timestamp in milliseconds.
      shared_ptr<string> validBegin_ {};
      // The end time when the device certificate becomes effective. The format is a Unix timestamp in milliseconds.
      shared_ptr<string> validEnd_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDeviceCertificateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDeviceCertificateResponseBody::Data) };
    inline GetDeviceCertificateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDeviceCertificateResponseBody::Data) };
    inline GetDeviceCertificateResponseBody& setData(const GetDeviceCertificateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDeviceCertificateResponseBody& setData(GetDeviceCertificateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Certificate details.
    shared_ptr<GetDeviceCertificateResponseBody::Data> data_ {};
    // Public parameters, each request ID is unique and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
