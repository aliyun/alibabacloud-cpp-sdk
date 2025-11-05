// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountInfoResponseBodyAccountInfoList.hpp>
#include <alibabacloud/models/GetAccountInfoResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetAccountInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfoList, accountInfoList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfoList, accountInfoList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAccountInfoResponseBody() = default ;
    GetAccountInfoResponseBody(const GetAccountInfoResponseBody &) = default ;
    GetAccountInfoResponseBody(GetAccountInfoResponseBody &&) = default ;
    GetAccountInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountInfoResponseBody() = default ;
    GetAccountInfoResponseBody& operator=(const GetAccountInfoResponseBody &) = default ;
    GetAccountInfoResponseBody& operator=(GetAccountInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountInfoList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accountInfoList Field Functions 
    bool hasAccountInfoList() const { return this->accountInfoList_ != nullptr;};
    void deleteAccountInfoList() { this->accountInfoList_ = nullptr;};
    inline const GetAccountInfoResponseBodyAccountInfoList & accountInfoList() const { DARABONBA_PTR_GET_CONST(accountInfoList_, GetAccountInfoResponseBodyAccountInfoList) };
    inline GetAccountInfoResponseBodyAccountInfoList accountInfoList() { DARABONBA_PTR_GET(accountInfoList_, GetAccountInfoResponseBodyAccountInfoList) };
    inline GetAccountInfoResponseBody& setAccountInfoList(const GetAccountInfoResponseBodyAccountInfoList & accountInfoList) { DARABONBA_PTR_SET_VALUE(accountInfoList_, accountInfoList) };
    inline GetAccountInfoResponseBody& setAccountInfoList(GetAccountInfoResponseBodyAccountInfoList && accountInfoList) { DARABONBA_PTR_SET_RVALUE(accountInfoList_, accountInfoList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAccountInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAccountInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetAccountInfoResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetAccountInfoResponseBodyPageInfo) };
    inline GetAccountInfoResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, GetAccountInfoResponseBodyPageInfo) };
    inline GetAccountInfoResponseBody& setPageInfo(const GetAccountInfoResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetAccountInfoResponseBody& setPageInfo(GetAccountInfoResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAccountInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of Account Information
    std::shared_ptr<GetAccountInfoResponseBodyAccountInfoList> accountInfoList_ = nullptr;
    // Result Code - Error Code. Value Range:
    // - 200 OK
    // - 1109 System Error
    // - 3029: Invalid UID
    // - 3062: UID and UserType are both empty.
    // - 3063: UserType value out of range.
    std::shared_ptr<string> code_ = nullptr;
    // message
    std::shared_ptr<string> message_ = nullptr;
    // Pagination Information
    std::shared_ptr<GetAccountInfoResponseBodyPageInfo> pageInfo_ = nullptr;
    // Request id, a unique identifier generated by Alibaba Cloud for the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
