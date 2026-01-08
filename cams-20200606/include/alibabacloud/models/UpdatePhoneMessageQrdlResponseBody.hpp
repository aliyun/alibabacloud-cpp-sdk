// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPHONEMESSAGEQRDLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPHONEMESSAGEQRDLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdatePhoneMessageQrdlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePhoneMessageQrdlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePhoneMessageQrdlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePhoneMessageQrdlResponseBody() = default ;
    UpdatePhoneMessageQrdlResponseBody(const UpdatePhoneMessageQrdlResponseBody &) = default ;
    UpdatePhoneMessageQrdlResponseBody(UpdatePhoneMessageQrdlResponseBody &&) = default ;
    UpdatePhoneMessageQrdlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePhoneMessageQrdlResponseBody() = default ;
    UpdatePhoneMessageQrdlResponseBody& operator=(const UpdatePhoneMessageQrdlResponseBody &) = default ;
    UpdatePhoneMessageQrdlResponseBody& operator=(UpdatePhoneMessageQrdlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeepLinkUrl, deepLinkUrl_);
        DARABONBA_PTR_TO_JSON(GenerateQrImage, generateQrImage_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(PrefilledMessage, prefilledMessage_);
        DARABONBA_PTR_TO_JSON(QrImageUrl, qrImageUrl_);
        DARABONBA_PTR_TO_JSON(QrdlCode, qrdlCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeepLinkUrl, deepLinkUrl_);
        DARABONBA_PTR_FROM_JSON(GenerateQrImage, generateQrImage_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(PrefilledMessage, prefilledMessage_);
        DARABONBA_PTR_FROM_JSON(QrImageUrl, qrImageUrl_);
        DARABONBA_PTR_FROM_JSON(QrdlCode, qrdlCode_);
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
      virtual bool empty() const override { return this->deepLinkUrl_ == nullptr
        && this->generateQrImage_ == nullptr && this->phoneNumber_ == nullptr && this->prefilledMessage_ == nullptr && this->qrImageUrl_ == nullptr && this->qrdlCode_ == nullptr; };
      // deepLinkUrl Field Functions 
      bool hasDeepLinkUrl() const { return this->deepLinkUrl_ != nullptr;};
      void deleteDeepLinkUrl() { this->deepLinkUrl_ = nullptr;};
      inline string getDeepLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(deepLinkUrl_, "") };
      inline Data& setDeepLinkUrl(string deepLinkUrl) { DARABONBA_PTR_SET_VALUE(deepLinkUrl_, deepLinkUrl) };


      // generateQrImage Field Functions 
      bool hasGenerateQrImage() const { return this->generateQrImage_ != nullptr;};
      void deleteGenerateQrImage() { this->generateQrImage_ = nullptr;};
      inline string getGenerateQrImage() const { DARABONBA_PTR_GET_DEFAULT(generateQrImage_, "") };
      inline Data& setGenerateQrImage(string generateQrImage) { DARABONBA_PTR_SET_VALUE(generateQrImage_, generateQrImage) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // prefilledMessage Field Functions 
      bool hasPrefilledMessage() const { return this->prefilledMessage_ != nullptr;};
      void deletePrefilledMessage() { this->prefilledMessage_ = nullptr;};
      inline string getPrefilledMessage() const { DARABONBA_PTR_GET_DEFAULT(prefilledMessage_, "") };
      inline Data& setPrefilledMessage(string prefilledMessage) { DARABONBA_PTR_SET_VALUE(prefilledMessage_, prefilledMessage) };


      // qrImageUrl Field Functions 
      bool hasQrImageUrl() const { return this->qrImageUrl_ != nullptr;};
      void deleteQrImageUrl() { this->qrImageUrl_ = nullptr;};
      inline string getQrImageUrl() const { DARABONBA_PTR_GET_DEFAULT(qrImageUrl_, "") };
      inline Data& setQrImageUrl(string qrImageUrl) { DARABONBA_PTR_SET_VALUE(qrImageUrl_, qrImageUrl) };


      // qrdlCode Field Functions 
      bool hasQrdlCode() const { return this->qrdlCode_ != nullptr;};
      void deleteQrdlCode() { this->qrdlCode_ = nullptr;};
      inline string getQrdlCode() const { DARABONBA_PTR_GET_DEFAULT(qrdlCode_, "") };
      inline Data& setQrdlCode(string qrdlCode) { DARABONBA_PTR_SET_VALUE(qrdlCode_, qrdlCode) };


    protected:
      // Deep link address.
      shared_ptr<string> deepLinkUrl_ {};
      // Generate image types.
      shared_ptr<string> generateQrImage_ {};
      // Number.
      shared_ptr<string> phoneNumber_ {};
      // Message content.
      shared_ptr<string> prefilledMessage_ {};
      // QR code address.
      shared_ptr<string> qrImageUrl_ {};
      // QR code encoding.
      shared_ptr<string> qrdlCode_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UpdatePhoneMessageQrdlResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdatePhoneMessageQrdlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdatePhoneMessageQrdlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdatePhoneMessageQrdlResponseBody::Data) };
    inline UpdatePhoneMessageQrdlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdatePhoneMessageQrdlResponseBody::Data) };
    inline UpdatePhoneMessageQrdlResponseBody& setData(const UpdatePhoneMessageQrdlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdatePhoneMessageQrdlResponseBody& setData(UpdatePhoneMessageQrdlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePhoneMessageQrdlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePhoneMessageQrdlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // The result returns OK as normal.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<UpdatePhoneMessageQrdlResponseBody::Data> data_ {};
    // Error description information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
