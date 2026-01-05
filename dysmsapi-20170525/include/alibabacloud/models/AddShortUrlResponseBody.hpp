// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSHORTURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSHORTURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class AddShortUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddShortUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddShortUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddShortUrlResponseBody() = default ;
    AddShortUrlResponseBody(const AddShortUrlResponseBody &) = default ;
    AddShortUrlResponseBody(AddShortUrlResponseBody &&) = default ;
    AddShortUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddShortUrlResponseBody() = default ;
    AddShortUrlResponseBody& operator=(const AddShortUrlResponseBody &) = default ;
    AddShortUrlResponseBody& operator=(AddShortUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
        DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
        DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
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
      virtual bool empty() const override { return this->expireDate_ == nullptr
        && this->shortUrl_ == nullptr && this->sourceUrl_ == nullptr; };
      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Data& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // shortUrl Field Functions 
      bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
      void deleteShortUrl() { this->shortUrl_ = nullptr;};
      inline string getShortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
      inline Data& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline Data& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    protected:
      // The time when the short URL expires.
      // 
      // > The value of **ExpireDate** is on the hour.
      shared_ptr<string> expireDate_ {};
      // The short URL.
      shared_ptr<string> shortUrl_ {};
      // The source URL.
      shared_ptr<string> sourceUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddShortUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddShortUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddShortUrlResponseBody::Data) };
    inline AddShortUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddShortUrlResponseBody::Data) };
    inline AddShortUrlResponseBody& setData(const AddShortUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddShortUrlResponseBody& setData(AddShortUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddShortUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddShortUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The details of the short URL.
    shared_ptr<AddShortUrlResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
