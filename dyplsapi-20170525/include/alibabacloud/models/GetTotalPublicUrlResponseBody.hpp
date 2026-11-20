// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOTALPUBLICURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOTALPUBLICURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetTotalPublicUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTotalPublicUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTotalPublicUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTotalPublicUrlResponseBody() = default ;
    GetTotalPublicUrlResponseBody(const GetTotalPublicUrlResponseBody &) = default ;
    GetTotalPublicUrlResponseBody(GetTotalPublicUrlResponseBody &&) = default ;
    GetTotalPublicUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTotalPublicUrlResponseBody() = default ;
    GetTotalPublicUrlResponseBody& operator=(const GetTotalPublicUrlResponseBody &) = default ;
    GetTotalPublicUrlResponseBody& operator=(GetTotalPublicUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PhonePublicUrl, phonePublicUrl_);
        DARABONBA_PTR_TO_JSON(RingPublicUrl, ringPublicUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PhonePublicUrl, phonePublicUrl_);
        DARABONBA_PTR_FROM_JSON(RingPublicUrl, ringPublicUrl_);
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
      virtual bool empty() const override { return this->phonePublicUrl_ == nullptr
        && this->ringPublicUrl_ == nullptr; };
      // phonePublicUrl Field Functions 
      bool hasPhonePublicUrl() const { return this->phonePublicUrl_ != nullptr;};
      void deletePhonePublicUrl() { this->phonePublicUrl_ = nullptr;};
      inline string getPhonePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(phonePublicUrl_, "") };
      inline Data& setPhonePublicUrl(string phonePublicUrl) { DARABONBA_PTR_SET_VALUE(phonePublicUrl_, phonePublicUrl) };


      // ringPublicUrl Field Functions 
      bool hasRingPublicUrl() const { return this->ringPublicUrl_ != nullptr;};
      void deleteRingPublicUrl() { this->ringPublicUrl_ = nullptr;};
      inline string getRingPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(ringPublicUrl_, "") };
      inline Data& setRingPublicUrl(string ringPublicUrl) { DARABONBA_PTR_SET_VALUE(ringPublicUrl_, ringPublicUrl) };


    protected:
      // The download URL of the recorded call.
      // 
      // >  The download URL of the recorded call is valid for 30 days.
      shared_ptr<string> phonePublicUrl_ {};
      // The download URL of the recorded ringing tone.
      // 
      // >  The download URL of the recorded ringing tone is valid for 30 days.
      shared_ptr<string> ringPublicUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTotalPublicUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTotalPublicUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTotalPublicUrlResponseBody::Data) };
    inline GetTotalPublicUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTotalPublicUrlResponseBody::Data) };
    inline GetTotalPublicUrlResponseBody& setData(const GetTotalPublicUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTotalPublicUrlResponseBody& setData(GetTotalPublicUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTotalPublicUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTotalPublicUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other status codes indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The download URLs of the recording files.
    shared_ptr<GetTotalPublicUrlResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
