// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARAUTOMEMORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLEARAUTOMEMORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ClearAutoMemoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearAutoMemoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clearedCount, clearedCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ClearAutoMemoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clearedCount, clearedCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ClearAutoMemoryResponseBody() = default ;
    ClearAutoMemoryResponseBody(const ClearAutoMemoryResponseBody &) = default ;
    ClearAutoMemoryResponseBody(ClearAutoMemoryResponseBody &&) = default ;
    ClearAutoMemoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearAutoMemoryResponseBody() = default ;
    ClearAutoMemoryResponseBody& operator=(const ClearAutoMemoryResponseBody &) = default ;
    ClearAutoMemoryResponseBody& operator=(ClearAutoMemoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clearedCount_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr; };
    // clearedCount Field Functions 
    bool hasClearedCount() const { return this->clearedCount_ != nullptr;};
    void deleteClearedCount() { this->clearedCount_ = nullptr;};
    inline int64_t getClearedCount() const { DARABONBA_PTR_GET_DEFAULT(clearedCount_, 0L) };
    inline ClearAutoMemoryResponseBody& setClearedCount(int64_t clearedCount) { DARABONBA_PTR_SET_VALUE(clearedCount_, clearedCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClearAutoMemoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClearAutoMemoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClearAutoMemoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ClearAutoMemoryResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 本次成功删除的自动记忆文件数量；无可清空记忆时为 0
    shared_ptr<int64_t> clearedCount_ {};
    // 业务状态码；成功为 200，失败时为对应错误码
    shared_ptr<string> code_ {};
    // 错误描述；成功时为空字符串，失败时返回具体原因
    shared_ptr<string> message_ {};
    // 请求追踪 ID，用于定位本次调用
    shared_ptr<string> requestId_ {};
    // 本次清空的自动记忆类型；取值为 user、feedback、reference、project 或 all
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
