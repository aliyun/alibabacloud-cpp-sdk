// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartJobResponseBodyCallIds.hpp>
#include <alibabacloud/models/StartJobResponseBodyTaskIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class StartJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallIds, callIds_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallIds, callIds_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    StartJobResponseBody() = default ;
    StartJobResponseBody(const StartJobResponseBody &) = default ;
    StartJobResponseBody(StartJobResponseBody &&) = default ;
    StartJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobResponseBody() = default ;
    StartJobResponseBody& operator=(const StartJobResponseBody &) = default ;
    StartJobResponseBody& operator=(StartJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callIds_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->taskIds_ == nullptr; };
    // callIds Field Functions 
    bool hasCallIds() const { return this->callIds_ != nullptr;};
    void deleteCallIds() { this->callIds_ = nullptr;};
    inline const vector<StartJobResponseBodyCallIds> & callIds() const { DARABONBA_PTR_GET_CONST(callIds_, vector<StartJobResponseBodyCallIds>) };
    inline vector<StartJobResponseBodyCallIds> callIds() { DARABONBA_PTR_GET(callIds_, vector<StartJobResponseBodyCallIds>) };
    inline StartJobResponseBody& setCallIds(const vector<StartJobResponseBodyCallIds> & callIds) { DARABONBA_PTR_SET_VALUE(callIds_, callIds) };
    inline StartJobResponseBody& setCallIds(vector<StartJobResponseBodyCallIds> && callIds) { DARABONBA_PTR_SET_RVALUE(callIds_, callIds) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StartJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline StartJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<StartJobResponseBodyTaskIds> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<StartJobResponseBodyTaskIds>) };
    inline vector<StartJobResponseBodyTaskIds> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<StartJobResponseBodyTaskIds>) };
    inline StartJobResponseBody& setTaskIds(const vector<StartJobResponseBodyTaskIds> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline StartJobResponseBody& setTaskIds(vector<StartJobResponseBodyTaskIds> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    std::shared_ptr<vector<StartJobResponseBodyCallIds>> callIds_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<StartJobResponseBodyTaskIds>> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
