// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNTIMECHANNELQRCODEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNTIMECHANNELQRCODEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetRuntimeChannelQrCodeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuntimeChannelQrCodeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuntimeChannelQrCodeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRuntimeChannelQrCodeDetailResponseBody() = default ;
    GetRuntimeChannelQrCodeDetailResponseBody(const GetRuntimeChannelQrCodeDetailResponseBody &) = default ;
    GetRuntimeChannelQrCodeDetailResponseBody(GetRuntimeChannelQrCodeDetailResponseBody &&) = default ;
    GetRuntimeChannelQrCodeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuntimeChannelQrCodeDetailResponseBody() = default ;
    GetRuntimeChannelQrCodeDetailResponseBody& operator=(const GetRuntimeChannelQrCodeDetailResponseBody &) = default ;
    GetRuntimeChannelQrCodeDetailResponseBody& operator=(GetRuntimeChannelQrCodeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(QrCode, qrCode_);
        DARABONBA_PTR_TO_JSON(QrCodeNotifyUrl, qrCodeNotifyUrl_);
        DARABONBA_PTR_TO_JSON(QrCodeStatus, qrCodeStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(QrCode, qrCode_);
        DARABONBA_PTR_FROM_JSON(QrCodeNotifyUrl, qrCodeNotifyUrl_);
        DARABONBA_PTR_FROM_JSON(QrCodeStatus, qrCodeStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->qrCode_ == nullptr
        && this->qrCodeNotifyUrl_ == nullptr && this->qrCodeStatus_ == nullptr && this->status_ == nullptr; };
      // qrCode Field Functions 
      bool hasQrCode() const { return this->qrCode_ != nullptr;};
      void deleteQrCode() { this->qrCode_ = nullptr;};
      inline string getQrCode() const { DARABONBA_PTR_GET_DEFAULT(qrCode_, "") };
      inline Data& setQrCode(string qrCode) { DARABONBA_PTR_SET_VALUE(qrCode_, qrCode) };


      // qrCodeNotifyUrl Field Functions 
      bool hasQrCodeNotifyUrl() const { return this->qrCodeNotifyUrl_ != nullptr;};
      void deleteQrCodeNotifyUrl() { this->qrCodeNotifyUrl_ = nullptr;};
      inline string getQrCodeNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(qrCodeNotifyUrl_, "") };
      inline Data& setQrCodeNotifyUrl(string qrCodeNotifyUrl) { DARABONBA_PTR_SET_VALUE(qrCodeNotifyUrl_, qrCodeNotifyUrl) };


      // qrCodeStatus Field Functions 
      bool hasQrCodeStatus() const { return this->qrCodeStatus_ != nullptr;};
      void deleteQrCodeStatus() { this->qrCodeStatus_ = nullptr;};
      inline string getQrCodeStatus() const { DARABONBA_PTR_GET_DEFAULT(qrCodeStatus_, "") };
      inline Data& setQrCodeStatus(string qrCodeStatus) { DARABONBA_PTR_SET_VALUE(qrCodeStatus_, qrCodeStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The URL or content of the QR code. If the QR code is not yet generated or the content is empty, this field is empty.
      shared_ptr<string> qrCode_ {};
      // The access URL of the QR code configuration channel page. This URL is generated and sent to the user when the QR code configuration is initiated, and carries the taskId, channel code, and region parameters of the current process. If the URL is not recorded, this field is empty.
      shared_ptr<string> qrCodeNotifyUrl_ {};
      // The scan status. Valid values: Generating (generating), Generated (generated), GenerateFailed (generation failed), Scanned (scanned), Configuring (configuring), Success (success), Failed (failed), and Expired (expired).
      shared_ptr<string> qrCodeStatus_ {};
      // The status of the QR code configuration process. The valid values are the same as those of QrCodeStatus. Valid values: Generating (generating), Generated (generated), GenerateFailed (generation failed), Scanned (scanned), Configuring (configuring), Success (success), Failed (failed), and Expired (expired).
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRuntimeChannelQrCodeDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRuntimeChannelQrCodeDetailResponseBody::Data) };
    inline GetRuntimeChannelQrCodeDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRuntimeChannelQrCodeDetailResponseBody::Data) };
    inline GetRuntimeChannelQrCodeDetailResponseBody& setData(const GetRuntimeChannelQrCodeDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuntimeChannelQrCodeDetailResponseBody& setData(GetRuntimeChannelQrCodeDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuntimeChannelQrCodeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The QR code configuration details of the channel. If no QR code configuration process exists for the channel under the specified runtime, this field is empty.
    shared_ptr<GetRuntimeChannelQrCodeDetailResponseBody::Data> data_ {};
    // The request ID, which uniquely identifies the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
