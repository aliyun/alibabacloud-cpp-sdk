// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALINSTANCELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALINSTANCELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPhysicalInstanceLogResponseBodyTaskrunLogList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalInstanceLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalInstanceLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskrunLogList, taskrunLogList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalInstanceLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskrunLogList, taskrunLogList_);
    };
    GetPhysicalInstanceLogResponseBody() = default ;
    GetPhysicalInstanceLogResponseBody(const GetPhysicalInstanceLogResponseBody &) = default ;
    GetPhysicalInstanceLogResponseBody(GetPhysicalInstanceLogResponseBody &&) = default ;
    GetPhysicalInstanceLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalInstanceLogResponseBody() = default ;
    GetPhysicalInstanceLogResponseBody& operator=(const GetPhysicalInstanceLogResponseBody &) = default ;
    GetPhysicalInstanceLogResponseBody& operator=(GetPhysicalInstanceLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->taskrunLogList_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhysicalInstanceLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPhysicalInstanceLogResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhysicalInstanceLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhysicalInstanceLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPhysicalInstanceLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskrunLogList Field Functions 
    bool hasTaskrunLogList() const { return this->taskrunLogList_ != nullptr;};
    void deleteTaskrunLogList() { this->taskrunLogList_ = nullptr;};
    inline const vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList> & taskrunLogList() const { DARABONBA_PTR_GET_CONST(taskrunLogList_, vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList>) };
    inline vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList> taskrunLogList() { DARABONBA_PTR_GET(taskrunLogList_, vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList>) };
    inline GetPhysicalInstanceLogResponseBody& setTaskrunLogList(const vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList> & taskrunLogList) { DARABONBA_PTR_SET_VALUE(taskrunLogList_, taskrunLogList) };
    inline GetPhysicalInstanceLogResponseBody& setTaskrunLogList(vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList> && taskrunLogList) { DARABONBA_PTR_SET_RVALUE(taskrunLogList_, taskrunLogList) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList>> taskrunLogList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
