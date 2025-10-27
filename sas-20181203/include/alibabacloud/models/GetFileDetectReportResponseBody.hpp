// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileDetectReportResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFileDetectReportResponseBody() = default ;
    GetFileDetectReportResponseBody(const GetFileDetectReportResponseBody &) = default ;
    GetFileDetectReportResponseBody(GetFileDetectReportResponseBody &&) = default ;
    GetFileDetectReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectReportResponseBody() = default ;
    GetFileDetectReportResponseBody& operator=(const GetFileDetectReportResponseBody &) = default ;
    GetFileDetectReportResponseBody& operator=(GetFileDetectReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFileDetectReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileDetectReportResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetFileDetectReportResponseBodyData) };
    inline GetFileDetectReportResponseBodyData data() { DARABONBA_PTR_GET(data_, GetFileDetectReportResponseBodyData) };
    inline GetFileDetectReportResponseBody& setData(const GetFileDetectReportResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileDetectReportResponseBody& setData(GetFileDetectReportResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFileDetectReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileDetectReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFileDetectReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<GetFileDetectReportResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
