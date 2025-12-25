// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERPROPERTYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERPROPERTYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckUserPropertyResponseBodyAccessDeniedDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class CheckUserPropertyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserPropertyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserPropertyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckUserPropertyResponseBody() = default ;
    CheckUserPropertyResponseBody(const CheckUserPropertyResponseBody &) = default ;
    CheckUserPropertyResponseBody(CheckUserPropertyResponseBody &&) = default ;
    CheckUserPropertyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserPropertyResponseBody() = default ;
    CheckUserPropertyResponseBody& operator=(const CheckUserPropertyResponseBody &) = default ;
    CheckUserPropertyResponseBody& operator=(CheckUserPropertyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->match_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const CheckUserPropertyResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, CheckUserPropertyResponseBodyAccessDeniedDetail) };
    inline CheckUserPropertyResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, CheckUserPropertyResponseBodyAccessDeniedDetail) };
    inline CheckUserPropertyResponseBody& setAccessDeniedDetail(const CheckUserPropertyResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline CheckUserPropertyResponseBody& setAccessDeniedDetail(CheckUserPropertyResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CheckUserPropertyResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline bool match() const { DARABONBA_PTR_GET_DEFAULT(match_, false) };
    inline CheckUserPropertyResponseBody& setMatch(bool match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckUserPropertyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckUserPropertyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckUserPropertyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<CheckUserPropertyResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<bool> match_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
