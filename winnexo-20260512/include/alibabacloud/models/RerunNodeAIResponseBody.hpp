// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNNODEAIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RERUNNODEAIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RerunNodeAIResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunNodeAIResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(rerunAccepted, rerunAccepted_);
      DARABONBA_PTR_TO_JSON(stateVersion, stateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RerunNodeAIResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(rerunAccepted, rerunAccepted_);
      DARABONBA_PTR_FROM_JSON(stateVersion, stateVersion_);
    };
    RerunNodeAIResponseBody() = default ;
    RerunNodeAIResponseBody(const RerunNodeAIResponseBody &) = default ;
    RerunNodeAIResponseBody(RerunNodeAIResponseBody &&) = default ;
    RerunNodeAIResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunNodeAIResponseBody() = default ;
    RerunNodeAIResponseBody& operator=(const RerunNodeAIResponseBody &) = default ;
    RerunNodeAIResponseBody& operator=(RerunNodeAIResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->message_ == nullptr && this->nodeId_ == nullptr && this->requestId_ == nullptr && this->rerunAccepted_ == nullptr
        && this->stateVersion_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RerunNodeAIResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RerunNodeAIResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RerunNodeAIResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline RerunNodeAIResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RerunNodeAIResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rerunAccepted Field Functions 
    bool hasRerunAccepted() const { return this->rerunAccepted_ != nullptr;};
    void deleteRerunAccepted() { this->rerunAccepted_ = nullptr;};
    inline bool getRerunAccepted() const { DARABONBA_PTR_GET_DEFAULT(rerunAccepted_, false) };
    inline RerunNodeAIResponseBody& setRerunAccepted(bool rerunAccepted) { DARABONBA_PTR_SET_VALUE(rerunAccepted_, rerunAccepted) };


    // stateVersion Field Functions 
    bool hasStateVersion() const { return this->stateVersion_ != nullptr;};
    void deleteStateVersion() { this->stateVersion_ = nullptr;};
    inline int64_t getStateVersion() const { DARABONBA_PTR_GET_DEFAULT(stateVersion_, 0L) };
    inline RerunNodeAIResponseBody& setStateVersion(int64_t stateVersion) { DARABONBA_PTR_SET_VALUE(stateVersion_, stateVersion) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The physical instance ID.
    shared_ptr<string> instanceId_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The key of the node scheduled for rerun.
    shared_ptr<string> nodeId_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the rerun request is accepted. A value of true indicates that the rerun is accepted, but does not mean that the AI has completed the task. Failures are returned through the Code and Message fields.
    shared_ptr<bool> rerunAccepted_ {};
    // The state version.
    shared_ptr<int64_t> stateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
