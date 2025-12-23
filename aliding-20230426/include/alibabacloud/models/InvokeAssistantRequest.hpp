// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantRequestExtLoginUser.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantRequestMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(clientEnum, clientEnum_);
      DARABONBA_PTR_TO_JSON(extLoginUser, extLoginUser_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(clientEnum, clientEnum_);
      DARABONBA_PTR_FROM_JSON(extLoginUser, extLoginUser_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(originalAssistantId, originalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sourceIdOfOriginalAssistantId, sourceIdOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(sourceTypeOfOriginalAssistantId, sourceTypeOfOriginalAssistantId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
    };
    InvokeAssistantRequest() = default ;
    InvokeAssistantRequest(const InvokeAssistantRequest &) = default ;
    InvokeAssistantRequest(InvokeAssistantRequest &&) = default ;
    InvokeAssistantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequest() = default ;
    InvokeAssistantRequest& operator=(const InvokeAssistantRequest &) = default ;
    InvokeAssistantRequest& operator=(InvokeAssistantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistantId_ == nullptr
        && return this->clientEnum_ == nullptr && return this->extLoginUser_ == nullptr && return this->messages_ == nullptr && return this->originalAssistantId_ == nullptr && return this->sessionId_ == nullptr
        && return this->sourceIdOfOriginalAssistantId_ == nullptr && return this->sourceTypeOfOriginalAssistantId_ == nullptr && return this->stream_ == nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string assistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline InvokeAssistantRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // clientEnum Field Functions 
    bool hasClientEnum() const { return this->clientEnum_ != nullptr;};
    void deleteClientEnum() { this->clientEnum_ = nullptr;};
    inline string clientEnum() const { DARABONBA_PTR_GET_DEFAULT(clientEnum_, "") };
    inline InvokeAssistantRequest& setClientEnum(string clientEnum) { DARABONBA_PTR_SET_VALUE(clientEnum_, clientEnum) };


    // extLoginUser Field Functions 
    bool hasExtLoginUser() const { return this->extLoginUser_ != nullptr;};
    void deleteExtLoginUser() { this->extLoginUser_ = nullptr;};
    inline const InvokeAssistantRequestExtLoginUser & extLoginUser() const { DARABONBA_PTR_GET_CONST(extLoginUser_, InvokeAssistantRequestExtLoginUser) };
    inline InvokeAssistantRequestExtLoginUser extLoginUser() { DARABONBA_PTR_GET(extLoginUser_, InvokeAssistantRequestExtLoginUser) };
    inline InvokeAssistantRequest& setExtLoginUser(const InvokeAssistantRequestExtLoginUser & extLoginUser) { DARABONBA_PTR_SET_VALUE(extLoginUser_, extLoginUser) };
    inline InvokeAssistantRequest& setExtLoginUser(InvokeAssistantRequestExtLoginUser && extLoginUser) { DARABONBA_PTR_SET_RVALUE(extLoginUser_, extLoginUser) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<InvokeAssistantRequestMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<InvokeAssistantRequestMessages>) };
    inline vector<InvokeAssistantRequestMessages> messages() { DARABONBA_PTR_GET(messages_, vector<InvokeAssistantRequestMessages>) };
    inline InvokeAssistantRequest& setMessages(const vector<InvokeAssistantRequestMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline InvokeAssistantRequest& setMessages(vector<InvokeAssistantRequestMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // originalAssistantId Field Functions 
    bool hasOriginalAssistantId() const { return this->originalAssistantId_ != nullptr;};
    void deleteOriginalAssistantId() { this->originalAssistantId_ = nullptr;};
    inline string originalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(originalAssistantId_, "") };
    inline InvokeAssistantRequest& setOriginalAssistantId(string originalAssistantId) { DARABONBA_PTR_SET_VALUE(originalAssistantId_, originalAssistantId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InvokeAssistantRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sourceIdOfOriginalAssistantId Field Functions 
    bool hasSourceIdOfOriginalAssistantId() const { return this->sourceIdOfOriginalAssistantId_ != nullptr;};
    void deleteSourceIdOfOriginalAssistantId() { this->sourceIdOfOriginalAssistantId_ = nullptr;};
    inline string sourceIdOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfOriginalAssistantId_, "") };
    inline InvokeAssistantRequest& setSourceIdOfOriginalAssistantId(string sourceIdOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfOriginalAssistantId_, sourceIdOfOriginalAssistantId) };


    // sourceTypeOfOriginalAssistantId Field Functions 
    bool hasSourceTypeOfOriginalAssistantId() const { return this->sourceTypeOfOriginalAssistantId_ != nullptr;};
    void deleteSourceTypeOfOriginalAssistantId() { this->sourceTypeOfOriginalAssistantId_ = nullptr;};
    inline string sourceTypeOfOriginalAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceTypeOfOriginalAssistantId_, "") };
    inline InvokeAssistantRequest& setSourceTypeOfOriginalAssistantId(string sourceTypeOfOriginalAssistantId) { DARABONBA_PTR_SET_VALUE(sourceTypeOfOriginalAssistantId_, sourceTypeOfOriginalAssistantId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline InvokeAssistantRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<string> clientEnum_ = nullptr;
    std::shared_ptr<InvokeAssistantRequestExtLoginUser> extLoginUser_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<InvokeAssistantRequestMessages>> messages_ = nullptr;
    std::shared_ptr<string> originalAssistantId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> sourceIdOfOriginalAssistantId_ = nullptr;
    std::shared_ptr<string> sourceTypeOfOriginalAssistantId_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
