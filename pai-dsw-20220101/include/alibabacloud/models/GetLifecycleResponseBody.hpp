// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIFECYCLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIFECYCLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLifecycleResponseBodyLifecycle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetLifecycleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLifecycleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetLifecycleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetLifecycleResponseBody() = default ;
    GetLifecycleResponseBody(const GetLifecycleResponseBody &) = default ;
    GetLifecycleResponseBody(GetLifecycleResponseBody &&) = default ;
    GetLifecycleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLifecycleResponseBody() = default ;
    GetLifecycleResponseBody& operator=(const GetLifecycleResponseBody &) = default ;
    GetLifecycleResponseBody& operator=(GetLifecycleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->lifecycle_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLifecycleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline const vector<vector<GetLifecycleResponseBodyLifecycle>> & lifecycle() const { DARABONBA_PTR_GET_CONST(lifecycle_, vector<vector<GetLifecycleResponseBodyLifecycle>>) };
    inline vector<vector<GetLifecycleResponseBodyLifecycle>> lifecycle() { DARABONBA_PTR_GET(lifecycle_, vector<vector<GetLifecycleResponseBodyLifecycle>>) };
    inline GetLifecycleResponseBody& setLifecycle(const vector<vector<GetLifecycleResponseBodyLifecycle>> & lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };
    inline GetLifecycleResponseBody& setLifecycle(vector<vector<GetLifecycleResponseBodyLifecycle>> && lifecycle) { DARABONBA_PTR_SET_RVALUE(lifecycle_, lifecycle) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLifecycleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLifecycleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLifecycleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetLifecycleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code. Valid values:
    // 
    // *   InternalError: All errors, except for parameter validation errors, are internal errors.
    // *   ValidationError: A parameter validation error.
    std::shared_ptr<string> code_ = nullptr;
    // The lifecycle details.
    std::shared_ptr<vector<vector<GetLifecycleResponseBodyLifecycle>>> lifecycle_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of queried sessions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
