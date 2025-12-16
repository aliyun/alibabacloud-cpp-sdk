// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXNOTIFICATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXNOTIFICATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail.hpp>
#include <alibabacloud/models/ReadSchedulerxNotificationPolicyResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxNotificationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxNotificationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxNotificationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadSchedulerxNotificationPolicyResponseBody() = default ;
    ReadSchedulerxNotificationPolicyResponseBody(const ReadSchedulerxNotificationPolicyResponseBody &) = default ;
    ReadSchedulerxNotificationPolicyResponseBody(ReadSchedulerxNotificationPolicyResponseBody &&) = default ;
    ReadSchedulerxNotificationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxNotificationPolicyResponseBody() = default ;
    ReadSchedulerxNotificationPolicyResponseBody& operator=(const ReadSchedulerxNotificationPolicyResponseBody &) = default ;
    ReadSchedulerxNotificationPolicyResponseBody& operator=(ReadSchedulerxNotificationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail) };
    inline ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail) };
    inline ReadSchedulerxNotificationPolicyResponseBody& setAccessDeniedDetail(const ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline ReadSchedulerxNotificationPolicyResponseBody& setAccessDeniedDetail(ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ReadSchedulerxNotificationPolicyResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadSchedulerxNotificationPolicyResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ReadSchedulerxNotificationPolicyResponseBodyData) };
    inline ReadSchedulerxNotificationPolicyResponseBodyData data() { DARABONBA_PTR_GET(data_, ReadSchedulerxNotificationPolicyResponseBodyData) };
    inline ReadSchedulerxNotificationPolicyResponseBody& setData(const ReadSchedulerxNotificationPolicyResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadSchedulerxNotificationPolicyResponseBody& setData(ReadSchedulerxNotificationPolicyResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadSchedulerxNotificationPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The access denial details.
    std::shared_ptr<ReadSchedulerxNotificationPolicyResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    // The status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // *
    std::shared_ptr<ReadSchedulerxNotificationPolicyResponseBodyData> data_ = nullptr;
    // The error message.
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
