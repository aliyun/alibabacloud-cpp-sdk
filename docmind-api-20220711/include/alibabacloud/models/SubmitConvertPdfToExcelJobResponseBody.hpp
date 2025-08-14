// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOEXCELJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCONVERTPDFTOEXCELJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitConvertPdfToExcelJobResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitConvertPdfToExcelJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitConvertPdfToExcelJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitConvertPdfToExcelJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitConvertPdfToExcelJobResponseBody() = default ;
    SubmitConvertPdfToExcelJobResponseBody(const SubmitConvertPdfToExcelJobResponseBody &) = default ;
    SubmitConvertPdfToExcelJobResponseBody(SubmitConvertPdfToExcelJobResponseBody &&) = default ;
    SubmitConvertPdfToExcelJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitConvertPdfToExcelJobResponseBody() = default ;
    SubmitConvertPdfToExcelJobResponseBody& operator=(const SubmitConvertPdfToExcelJobResponseBody &) = default ;
    SubmitConvertPdfToExcelJobResponseBody& operator=(SubmitConvertPdfToExcelJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitConvertPdfToExcelJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitConvertPdfToExcelJobResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitConvertPdfToExcelJobResponseBodyData) };
    inline SubmitConvertPdfToExcelJobResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitConvertPdfToExcelJobResponseBodyData) };
    inline SubmitConvertPdfToExcelJobResponseBody& setData(const SubmitConvertPdfToExcelJobResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitConvertPdfToExcelJobResponseBody& setData(SubmitConvertPdfToExcelJobResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitConvertPdfToExcelJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitConvertPdfToExcelJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<SubmitConvertPdfToExcelJobResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
