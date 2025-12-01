// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGESERVICECUSTOMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGESERVICECUSTOMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PageServiceCustomerResponseBodyData.hpp>
#include <alibabacloud/models/PageServiceCustomerResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class PageServiceCustomerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageServiceCustomerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PageServiceCustomerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PageServiceCustomerResponseBody() = default ;
    PageServiceCustomerResponseBody(const PageServiceCustomerResponseBody &) = default ;
    PageServiceCustomerResponseBody(PageServiceCustomerResponseBody &&) = default ;
    PageServiceCustomerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageServiceCustomerResponseBody() = default ;
    PageServiceCustomerResponseBody& operator=(const PageServiceCustomerResponseBody &) = default ;
    PageServiceCustomerResponseBody& operator=(PageServiceCustomerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PageServiceCustomerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PageServiceCustomerResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<PageServiceCustomerResponseBodyData>) };
    inline vector<PageServiceCustomerResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<PageServiceCustomerResponseBodyData>) };
    inline PageServiceCustomerResponseBody& setData(const vector<PageServiceCustomerResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PageServiceCustomerResponseBody& setData(vector<PageServiceCustomerResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PageServiceCustomerResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PageServiceCustomerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const PageServiceCustomerResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, PageServiceCustomerResponseBodyPageInfo) };
    inline PageServiceCustomerResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, PageServiceCustomerResponseBodyPageInfo) };
    inline PageServiceCustomerResponseBody& setPageInfo(const PageServiceCustomerResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline PageServiceCustomerResponseBody& setPageInfo(PageServiceCustomerResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageServiceCustomerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PageServiceCustomerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Interface return code.
    std::shared_ptr<string> code_ = nullptr;
    // Data query results.
    std::shared_ptr<vector<PageServiceCustomerResponseBodyData>> data_ = nullptr;
    // HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Return message. When the request is successful, it returns a success message; when the request fails, it returns the reason for the failure.
    std::shared_ptr<string> message_ = nullptr;
    // Pagination information.
    std::shared_ptr<PageServiceCustomerResponseBodyPageInfo> pageInfo_ = nullptr;
    // Request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    // Request return status.
    // - true: Success.
    // - false: Failure.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
