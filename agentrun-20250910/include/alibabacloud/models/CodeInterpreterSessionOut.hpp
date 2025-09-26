// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODEINTERPRETERSESSIONOUT_HPP_
#define ALIBABACLOUD_MODELS_CODEINTERPRETERSESSIONOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CodeInterpreterSessionOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeInterpreterSessionOut& obj) { 
      DARABONBA_PTR_TO_JSON(codeInterpreterId, codeInterpreterId_);
      DARABONBA_PTR_TO_JSON(codeInterpreterName, codeInterpreterName_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CodeInterpreterSessionOut& obj) { 
      DARABONBA_PTR_FROM_JSON(codeInterpreterId, codeInterpreterId_);
      DARABONBA_PTR_FROM_JSON(codeInterpreterName, codeInterpreterName_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    CodeInterpreterSessionOut() = default ;
    CodeInterpreterSessionOut(const CodeInterpreterSessionOut &) = default ;
    CodeInterpreterSessionOut(CodeInterpreterSessionOut &&) = default ;
    CodeInterpreterSessionOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeInterpreterSessionOut() = default ;
    CodeInterpreterSessionOut& operator=(const CodeInterpreterSessionOut &) = default ;
    CodeInterpreterSessionOut& operator=(CodeInterpreterSessionOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeInterpreterId_ != nullptr
        && this->codeInterpreterName_ != nullptr && this->createdAt_ != nullptr && this->lastUpdatedAt_ != nullptr && this->sessionId_ != nullptr && this->sessionIdleTimeoutSeconds_ != nullptr
        && this->status_ != nullptr; };
    // codeInterpreterId Field Functions 
    bool hasCodeInterpreterId() const { return this->codeInterpreterId_ != nullptr;};
    void deleteCodeInterpreterId() { this->codeInterpreterId_ = nullptr;};
    inline string codeInterpreterId() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterId_, "") };
    inline CodeInterpreterSessionOut& setCodeInterpreterId(string codeInterpreterId) { DARABONBA_PTR_SET_VALUE(codeInterpreterId_, codeInterpreterId) };


    // codeInterpreterName Field Functions 
    bool hasCodeInterpreterName() const { return this->codeInterpreterName_ != nullptr;};
    void deleteCodeInterpreterName() { this->codeInterpreterName_ = nullptr;};
    inline string codeInterpreterName() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterName_, "") };
    inline CodeInterpreterSessionOut& setCodeInterpreterName(string codeInterpreterName) { DARABONBA_PTR_SET_VALUE(codeInterpreterName_, codeInterpreterName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CodeInterpreterSessionOut& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string lastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline CodeInterpreterSessionOut& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CodeInterpreterSessionOut& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t sessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline CodeInterpreterSessionOut& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CodeInterpreterSessionOut& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 关联的代码解释器的唯一标识符
    // 
    // This parameter is required.
    std::shared_ptr<string> codeInterpreterId_ = nullptr;
    // 代码解释器会话的名称
    std::shared_ptr<string> codeInterpreterName_ = nullptr;
    // 代码解释器会话的创建时间，采用ISO 8601格式
    std::shared_ptr<string> createdAt_ = nullptr;
    // 代码解释器会话的最后更新时间，采用ISO 8601格式
    std::shared_ptr<string> lastUpdatedAt_ = nullptr;
    // 代码解释器会话的唯一标识符
    // 
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // 代码解释器会话的空闲超时时间，单位为秒。实例没有会话请求后处于空闲状态，空闲态为闲置计费模式，超过此超时时间后会话自动过期，不可继续使用
    std::shared_ptr<int32_t> sessionIdleTimeoutSeconds_ = nullptr;
    // 代码解释器会话的当前状态
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
