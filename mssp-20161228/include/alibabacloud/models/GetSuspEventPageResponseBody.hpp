// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSuspEventPageResponseBodyData.hpp>
#include <alibabacloud/models/GetSuspEventPageResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSuspEventPageResponseBody() = default ;
    GetSuspEventPageResponseBody(const GetSuspEventPageResponseBody &) = default ;
    GetSuspEventPageResponseBody(GetSuspEventPageResponseBody &&) = default ;
    GetSuspEventPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventPageResponseBody() = default ;
    GetSuspEventPageResponseBody& operator=(const GetSuspEventPageResponseBody &) = default ;
    GetSuspEventPageResponseBody& operator=(GetSuspEventPageResponseBody &&) = default ;
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
    inline GetSuspEventPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSuspEventPageResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSuspEventPageResponseBodyData>) };
    inline vector<GetSuspEventPageResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetSuspEventPageResponseBodyData>) };
    inline GetSuspEventPageResponseBody& setData(const vector<GetSuspEventPageResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSuspEventPageResponseBody& setData(vector<GetSuspEventPageResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSuspEventPageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSuspEventPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetSuspEventPageResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetSuspEventPageResponseBodyPageInfo) };
    inline GetSuspEventPageResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, GetSuspEventPageResponseBodyPageInfo) };
    inline GetSuspEventPageResponseBody& setPageInfo(const GetSuspEventPageResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetSuspEventPageResponseBody& setPageInfo(GetSuspEventPageResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSuspEventPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSuspEventPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API response code.
    std::shared_ptr<string> code_ = nullptr;
    // Data returned by the interface.
    std::shared_ptr<vector<GetSuspEventPageResponseBodyData>> data_ = nullptr;
    // HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Prompt message of the returned result.
    std::shared_ptr<string> message_ = nullptr;
    // Pagination information.
    std::shared_ptr<GetSuspEventPageResponseBodyPageInfo> pageInfo_ = nullptr;
    // Request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the call was successful.
    // - **true**: The call was successful. - **false**: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
