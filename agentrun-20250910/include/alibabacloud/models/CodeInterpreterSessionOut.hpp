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
    virtual bool empty() const override { return this->codeInterpreterId_ == nullptr
        && this->codeInterpreterName_ == nullptr && this->createdAt_ == nullptr && this->lastUpdatedAt_ == nullptr && this->sessionId_ == nullptr && this->sessionIdleTimeoutSeconds_ == nullptr
        && this->status_ == nullptr; };
    // codeInterpreterId Field Functions 
    bool hasCodeInterpreterId() const { return this->codeInterpreterId_ != nullptr;};
    void deleteCodeInterpreterId() { this->codeInterpreterId_ = nullptr;};
    inline string getCodeInterpreterId() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterId_, "") };
    inline CodeInterpreterSessionOut& setCodeInterpreterId(string codeInterpreterId) { DARABONBA_PTR_SET_VALUE(codeInterpreterId_, codeInterpreterId) };


    // codeInterpreterName Field Functions 
    bool hasCodeInterpreterName() const { return this->codeInterpreterName_ != nullptr;};
    void deleteCodeInterpreterName() { this->codeInterpreterName_ = nullptr;};
    inline string getCodeInterpreterName() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterName_, "") };
    inline CodeInterpreterSessionOut& setCodeInterpreterName(string codeInterpreterName) { DARABONBA_PTR_SET_VALUE(codeInterpreterName_, codeInterpreterName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CodeInterpreterSessionOut& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline CodeInterpreterSessionOut& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CodeInterpreterSessionOut& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t getSessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline CodeInterpreterSessionOut& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CodeInterpreterSessionOut& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The Unique Identifier of the associated code interpreter
    // 
    // This parameter is required.
    shared_ptr<string> codeInterpreterId_ {};
    // The name of the code interpreter session
    shared_ptr<string> codeInterpreterName_ {};
    // The creation time of the code interpreter session, in ISO 8601 format
    shared_ptr<string> createdAt_ {};
    // The last update time of the code interpreter session, in ISO 8601 format
    shared_ptr<string> lastUpdatedAt_ {};
    // The Unique Identifier of the code interpreter session
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The idle timeout duration of the code interpreter session, in seconds. After the instance receives no session requests, it enters an idle state, which is billed under the idle billing model. If the idle duration exceeds this timeout, the session automatically expires and can no longer be used.
    shared_ptr<int32_t> sessionIdleTimeoutSeconds_ {};
    // The current status of the code interpreter session
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
