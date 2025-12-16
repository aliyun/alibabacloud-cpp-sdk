// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGESCHEDULERXCALENDARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MANAGESCHEDULERXCALENDARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ManageSchedulerxCalendarResponseBodyAccessDeniedDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ManageSchedulerxCalendarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageSchedulerxCalendarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ManageSchedulerxCalendarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ManageSchedulerxCalendarResponseBody() = default ;
    ManageSchedulerxCalendarResponseBody(const ManageSchedulerxCalendarResponseBody &) = default ;
    ManageSchedulerxCalendarResponseBody(ManageSchedulerxCalendarResponseBody &&) = default ;
    ManageSchedulerxCalendarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageSchedulerxCalendarResponseBody() = default ;
    ManageSchedulerxCalendarResponseBody& operator=(const ManageSchedulerxCalendarResponseBody &) = default ;
    ManageSchedulerxCalendarResponseBody& operator=(ManageSchedulerxCalendarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ManageSchedulerxCalendarResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ManageSchedulerxCalendarResponseBodyAccessDeniedDetail) };
    inline ManageSchedulerxCalendarResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ManageSchedulerxCalendarResponseBodyAccessDeniedDetail) };
    inline ManageSchedulerxCalendarResponseBody& setAccessDeniedDetail(const ManageSchedulerxCalendarResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ManageSchedulerxCalendarResponseBody& setAccessDeniedDetail(ManageSchedulerxCalendarResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ManageSchedulerxCalendarResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ManageSchedulerxCalendarResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ManageSchedulerxCalendarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ManageSchedulerxCalendarResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The access denial details.
    std::shared_ptr<ManageSchedulerxCalendarResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    // The status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // Additional information. Returned only if an error occurs.
    std::shared_ptr<string> message_ = nullptr;
    // The unique request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
