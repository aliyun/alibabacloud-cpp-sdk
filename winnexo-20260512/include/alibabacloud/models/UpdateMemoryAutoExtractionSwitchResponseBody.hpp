// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYAUTOEXTRACTIONSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYAUTOEXTRACTIONSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateMemoryAutoExtractionSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryAutoExtractionSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clearedCount, clearedCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryAutoExtractionSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clearedCount, clearedCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateMemoryAutoExtractionSwitchResponseBody() = default ;
    UpdateMemoryAutoExtractionSwitchResponseBody(const UpdateMemoryAutoExtractionSwitchResponseBody &) = default ;
    UpdateMemoryAutoExtractionSwitchResponseBody(UpdateMemoryAutoExtractionSwitchResponseBody &&) = default ;
    UpdateMemoryAutoExtractionSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryAutoExtractionSwitchResponseBody() = default ;
    UpdateMemoryAutoExtractionSwitchResponseBody& operator=(const UpdateMemoryAutoExtractionSwitchResponseBody &) = default ;
    UpdateMemoryAutoExtractionSwitchResponseBody& operator=(UpdateMemoryAutoExtractionSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clearedCount_ == nullptr
        && this->code_ == nullptr && this->enabled_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // clearedCount Field Functions 
    bool hasClearedCount() const { return this->clearedCount_ != nullptr;};
    void deleteClearedCount() { this->clearedCount_ = nullptr;};
    inline int64_t getClearedCount() const { DARABONBA_PTR_GET_DEFAULT(clearedCount_, 0L) };
    inline UpdateMemoryAutoExtractionSwitchResponseBody& setClearedCount(int64_t clearedCount) { DARABONBA_PTR_SET_VALUE(clearedCount_, clearedCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateMemoryAutoExtractionSwitchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateMemoryAutoExtractionSwitchResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateMemoryAutoExtractionSwitchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMemoryAutoExtractionSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 本次同步清空的自动记忆文件数量；未清空或无可清空记忆时为 0
    shared_ptr<int64_t> clearedCount_ {};
    // 业务状态码；成功为 200，失败时为对应错误码
    shared_ptr<string> code_ {};
    // 更新后的自动记忆拾取开关状态；true 为开启，false 为关闭
    shared_ptr<bool> enabled_ {};
    // 错误描述；成功时为空字符串，失败时返回具体原因
    shared_ptr<string> message_ {};
    // 请求追踪 ID，用于定位本次调用
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
