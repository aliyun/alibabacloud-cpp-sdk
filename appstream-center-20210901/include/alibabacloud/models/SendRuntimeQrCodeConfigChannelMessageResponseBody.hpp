// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRUNTIMEQRCODECONFIGCHANNELMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDRUNTIMEQRCODECONFIGCHANNELMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class SendRuntimeQrCodeConfigChannelMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRuntimeQrCodeConfigChannelMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SendRuntimeQrCodeConfigChannelMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SendRuntimeQrCodeConfigChannelMessageResponseBody() = default ;
    SendRuntimeQrCodeConfigChannelMessageResponseBody(const SendRuntimeQrCodeConfigChannelMessageResponseBody &) = default ;
    SendRuntimeQrCodeConfigChannelMessageResponseBody(SendRuntimeQrCodeConfigChannelMessageResponseBody &&) = default ;
    SendRuntimeQrCodeConfigChannelMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRuntimeQrCodeConfigChannelMessageResponseBody() = default ;
    SendRuntimeQrCodeConfigChannelMessageResponseBody& operator=(const SendRuntimeQrCodeConfigChannelMessageResponseBody &) = default ;
    SendRuntimeQrCodeConfigChannelMessageResponseBody& operator=(SendRuntimeQrCodeConfigChannelMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(QrCodeNotifyUrl, qrCodeNotifyUrl_);
        DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(QrCodeNotifyUrl, qrCodeNotifyUrl_);
        DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->qrCodeNotifyUrl_ == nullptr && this->runtimeId_ == nullptr && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // qrCodeNotifyUrl Field Functions 
      bool hasQrCodeNotifyUrl() const { return this->qrCodeNotifyUrl_ != nullptr;};
      void deleteQrCodeNotifyUrl() { this->qrCodeNotifyUrl_ = nullptr;};
      inline string getQrCodeNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(qrCodeNotifyUrl_, "") };
      inline Data& setQrCodeNotifyUrl(string qrCodeNotifyUrl) { DARABONBA_PTR_SET_VALUE(qrCodeNotifyUrl_, qrCodeNotifyUrl) };


      // runtimeId Field Functions 
      bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
      void deleteRuntimeId() { this->runtimeId_ = nullptr;};
      inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
      inline Data& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The error code when the sending fails, such as Runtime.NotFound (the runtime does not exist) or Runtime.UserNotSupported (the runtime has no authorized user or has multiple authorized users). This parameter is not returned when the sending is successful.
      shared_ptr<string> code_ {};
      // The error message when the sending fails. This parameter is not returned when the sending is successful.
      shared_ptr<string> message_ {};
      // The access URL of the QR code configuration channel page. It carries the taskId, channel code, and region parameters for the current process, and has been sent to the authorized user of the runtime by email and SMS. This parameter is returned only when the sending is successful. The taskId is valid for 1 hour.
      shared_ptr<string> qrCodeNotifyUrl_ {};
      // The ID of the runtime resource.
      shared_ptr<string> runtimeId_ {};
      // Indicates whether the QR code configuration channel message for the runtime was initiated successfully. If the value is false, you can check the Code and Message fields for the cause of the failure.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data>) };
    inline vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data>) };
    inline SendRuntimeQrCodeConfigChannelMessageResponseBody& setData(const vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SendRuntimeQrCodeConfigChannelMessageResponseBody& setData(vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendRuntimeQrCodeConfigChannelMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SendRuntimeQrCodeConfigChannelMessageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of sending results for each runtime. Each runtime corresponds to one result. The return order is not guaranteed to be the same as the order of RuntimeIds in the request. Match the results by RuntimeId.
    shared_ptr<vector<SendRuntimeQrCodeConfigChannelMessageResponseBody::Data>> data_ {};
    // The request ID, which is a unique identifier for the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned sending results, which is the same as the number of results in Data.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
