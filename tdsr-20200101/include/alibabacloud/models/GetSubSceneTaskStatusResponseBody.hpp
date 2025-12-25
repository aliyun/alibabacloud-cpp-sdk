// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCENETASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCENETASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSubSceneTaskStatusResponseBodyAccessDeniedDetail.hpp>
#include <vector>
#include <alibabacloud/models/GetSubSceneTaskStatusResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetSubSceneTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubSceneTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubSceneTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSubSceneTaskStatusResponseBody() = default ;
    GetSubSceneTaskStatusResponseBody(const GetSubSceneTaskStatusResponseBody &) = default ;
    GetSubSceneTaskStatusResponseBody(GetSubSceneTaskStatusResponseBody &&) = default ;
    GetSubSceneTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubSceneTaskStatusResponseBody() = default ;
    GetSubSceneTaskStatusResponseBody& operator=(const GetSubSceneTaskStatusResponseBody &) = default ;
    GetSubSceneTaskStatusResponseBody& operator=(GetSubSceneTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->list_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const GetSubSceneTaskStatusResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, GetSubSceneTaskStatusResponseBodyAccessDeniedDetail) };
    inline GetSubSceneTaskStatusResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, GetSubSceneTaskStatusResponseBodyAccessDeniedDetail) };
    inline GetSubSceneTaskStatusResponseBody& setAccessDeniedDetail(const GetSubSceneTaskStatusResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline GetSubSceneTaskStatusResponseBody& setAccessDeniedDetail(GetSubSceneTaskStatusResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetSubSceneTaskStatusResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<GetSubSceneTaskStatusResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<GetSubSceneTaskStatusResponseBodyList>) };
    inline vector<GetSubSceneTaskStatusResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<GetSubSceneTaskStatusResponseBodyList>) };
    inline GetSubSceneTaskStatusResponseBody& setList(const vector<GetSubSceneTaskStatusResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetSubSceneTaskStatusResponseBody& setList(vector<GetSubSceneTaskStatusResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubSceneTaskStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubSceneTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubSceneTaskStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetSubSceneTaskStatusResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<vector<GetSubSceneTaskStatusResponseBodyList>> list_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
