// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadVerifyRecordIntlResponseBodyData.hpp>
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
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DownloadVerifyRecordIntlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DownloadVerifyRecordIntlResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DownloadVerifyRecordIntlResponseBodyData) };
    inline DownloadVerifyRecordIntlResponseBodyData data() { DARABONBA_PTR_GET(data_, DownloadVerifyRecordIntlResponseBodyData) };
    inline DownloadVerifyRecordIntlResponseBody& setData(const DownloadVerifyRecordIntlResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DownloadVerifyRecordIntlResponseBody& setData(DownloadVerifyRecordIntlResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DownloadVerifyRecordIntlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadVerifyRecordIntlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return code.
    std::shared_ptr<string> code_ = nullptr;
    // Returned data.
    std::shared_ptr<DownloadVerifyRecordIntlResponseBodyData> data_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
