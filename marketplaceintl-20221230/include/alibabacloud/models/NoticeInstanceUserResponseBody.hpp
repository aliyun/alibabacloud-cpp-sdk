// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTICEINSTANCEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_NOTICEINSTANCEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NoticeInstanceUserResponseBodyAccessDeniedDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class NoticeInstanceUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NoticeInstanceUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, NoticeInstanceUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    NoticeInstanceUserResponseBody() = default ;
    NoticeInstanceUserResponseBody(const NoticeInstanceUserResponseBody &) = default ;
    NoticeInstanceUserResponseBody(NoticeInstanceUserResponseBody &&) = default ;
    NoticeInstanceUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NoticeInstanceUserResponseBody() = default ;
    NoticeInstanceUserResponseBody& operator=(const NoticeInstanceUserResponseBody &) = default ;
    NoticeInstanceUserResponseBody& operator=(NoticeInstanceUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const NoticeInstanceUserResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, NoticeInstanceUserResponseBodyAccessDeniedDetail) };
    inline NoticeInstanceUserResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, NoticeInstanceUserResponseBodyAccessDeniedDetail) };
    inline NoticeInstanceUserResponseBody& setAccessDeniedDetail(const NoticeInstanceUserResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline NoticeInstanceUserResponseBody& setAccessDeniedDetail(NoticeInstanceUserResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline NoticeInstanceUserResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline NoticeInstanceUserResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline NoticeInstanceUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline NoticeInstanceUserResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline NoticeInstanceUserResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<NoticeInstanceUserResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
