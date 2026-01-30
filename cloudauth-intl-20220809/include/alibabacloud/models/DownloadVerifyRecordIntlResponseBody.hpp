// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DownloadVerifyRecordIntlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVerifyRecordIntlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVerifyRecordIntlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DownloadVerifyRecordIntlResponseBody() = default ;
    DownloadVerifyRecordIntlResponseBody(const DownloadVerifyRecordIntlResponseBody &) = default ;
    DownloadVerifyRecordIntlResponseBody(DownloadVerifyRecordIntlResponseBody &&) = default ;
    DownloadVerifyRecordIntlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVerifyRecordIntlResponseBody() = default ;
    DownloadVerifyRecordIntlResponseBody& operator=(const DownloadVerifyRecordIntlResponseBody &) = default ;
    DownloadVerifyRecordIntlResponseBody& operator=(DownloadVerifyRecordIntlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadTaskId, downloadTaskId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadTaskId, downloadTaskId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->downloadTaskId_ == nullptr
        && this->url_ == nullptr; };
      // downloadTaskId Field Functions 
      bool hasDownloadTaskId() const { return this->downloadTaskId_ != nullptr;};
      void deleteDownloadTaskId() { this->downloadTaskId_ = nullptr;};
      inline string getDownloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(downloadTaskId_, "") };
      inline Data& setDownloadTaskId(string downloadTaskId) { DARABONBA_PTR_SET_VALUE(downloadTaskId_, downloadTaskId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Task ID, returned in asynchronous mode, used later with QueryDownloadTaskIntl to download the exported file.
      shared_ptr<string> downloadTaskId_ {};
      // Exported file download link.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DownloadVerifyRecordIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DownloadVerifyRecordIntlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DownloadVerifyRecordIntlResponseBody::Data) };
    inline DownloadVerifyRecordIntlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DownloadVerifyRecordIntlResponseBody::Data) };
    inline DownloadVerifyRecordIntlResponseBody& setData(const DownloadVerifyRecordIntlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DownloadVerifyRecordIntlResponseBody& setData(DownloadVerifyRecordIntlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DownloadVerifyRecordIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadVerifyRecordIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return code.
    shared_ptr<string> code_ {};
    // Returned data.
    shared_ptr<DownloadVerifyRecordIntlResponseBody::Data> data_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
