// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobGroupsResponseBodyJobGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroups, jobGroups_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroups, jobGroups_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobGroupsResponseBody() = default ;
    ListJobGroupsResponseBody(const ListJobGroupsResponseBody &) = default ;
    ListJobGroupsResponseBody(ListJobGroupsResponseBody &&) = default ;
    ListJobGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsResponseBody() = default ;
    ListJobGroupsResponseBody& operator=(const ListJobGroupsResponseBody &) = default ;
    ListJobGroupsResponseBody& operator=(ListJobGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->jobGroups_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline ListJobGroupsResponseBody& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListJobGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroups Field Functions 
    bool hasJobGroups() const { return this->jobGroups_ != nullptr;};
    void deleteJobGroups() { this->jobGroups_ = nullptr;};
    inline const ListJobGroupsResponseBodyJobGroups & jobGroups() const { DARABONBA_PTR_GET_CONST(jobGroups_, ListJobGroupsResponseBodyJobGroups) };
    inline ListJobGroupsResponseBodyJobGroups jobGroups() { DARABONBA_PTR_GET(jobGroups_, ListJobGroupsResponseBodyJobGroups) };
    inline ListJobGroupsResponseBody& setJobGroups(const ListJobGroupsResponseBodyJobGroups & jobGroups) { DARABONBA_PTR_SET_VALUE(jobGroups_, jobGroups) };
    inline ListJobGroupsResponseBody& setJobGroups(ListJobGroupsResponseBodyJobGroups && jobGroups) { DARABONBA_PTR_SET_RVALUE(jobGroups_, jobGroups) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<ListJobGroupsResponseBodyJobGroups> jobGroups_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
