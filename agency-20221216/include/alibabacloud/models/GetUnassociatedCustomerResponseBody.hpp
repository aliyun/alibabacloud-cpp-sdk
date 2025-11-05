// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUnassociatedCustomerResponseBodyInviteInfoList.hpp>
#include <alibabacloud/models/GetUnassociatedCustomerResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetUnassociatedCustomerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnassociatedCustomerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InviteInfoList, inviteInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnassociatedCustomerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InviteInfoList, inviteInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUnassociatedCustomerResponseBody() = default ;
    GetUnassociatedCustomerResponseBody(const GetUnassociatedCustomerResponseBody &) = default ;
    GetUnassociatedCustomerResponseBody(GetUnassociatedCustomerResponseBody &&) = default ;
    GetUnassociatedCustomerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnassociatedCustomerResponseBody() = default ;
    GetUnassociatedCustomerResponseBody& operator=(const GetUnassociatedCustomerResponseBody &) = default ;
    GetUnassociatedCustomerResponseBody& operator=(GetUnassociatedCustomerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->inviteInfoList_ == nullptr && return this->message_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUnassociatedCustomerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // inviteInfoList Field Functions 
    bool hasInviteInfoList() const { return this->inviteInfoList_ != nullptr;};
    void deleteInviteInfoList() { this->inviteInfoList_ = nullptr;};
    inline const GetUnassociatedCustomerResponseBodyInviteInfoList & inviteInfoList() const { DARABONBA_PTR_GET_CONST(inviteInfoList_, GetUnassociatedCustomerResponseBodyInviteInfoList) };
    inline GetUnassociatedCustomerResponseBodyInviteInfoList inviteInfoList() { DARABONBA_PTR_GET(inviteInfoList_, GetUnassociatedCustomerResponseBodyInviteInfoList) };
    inline GetUnassociatedCustomerResponseBody& setInviteInfoList(const GetUnassociatedCustomerResponseBodyInviteInfoList & inviteInfoList) { DARABONBA_PTR_SET_VALUE(inviteInfoList_, inviteInfoList) };
    inline GetUnassociatedCustomerResponseBody& setInviteInfoList(GetUnassociatedCustomerResponseBodyInviteInfoList && inviteInfoList) { DARABONBA_PTR_SET_RVALUE(inviteInfoList_, inviteInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUnassociatedCustomerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetUnassociatedCustomerResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetUnassociatedCustomerResponseBodyPageInfo) };
    inline GetUnassociatedCustomerResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, GetUnassociatedCustomerResponseBodyPageInfo) };
    inline GetUnassociatedCustomerResponseBody& setPageInfo(const GetUnassociatedCustomerResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetUnassociatedCustomerResponseBody& setPageInfo(GetUnassociatedCustomerResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUnassociatedCustomerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUnassociatedCustomerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error Code, Candidate Value：
    // * 200: OK
    // * 1109: System error
    std::shared_ptr<string> code_ = nullptr;
    // List of Invitation Information
    std::shared_ptr<GetUnassociatedCustomerResponseBodyInviteInfoList> inviteInfoList_ = nullptr;
    // Message information
    std::shared_ptr<string> message_ = nullptr;
    // Pagination Information
    std::shared_ptr<GetUnassociatedCustomerResponseBodyPageInfo> pageInfo_ = nullptr;
    // Request ID, Alibaba Cloud will track errors with this.
    std::shared_ptr<string> requestId_ = nullptr;
    // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
