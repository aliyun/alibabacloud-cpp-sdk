// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARCLAWAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARCLAWAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarClawAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RemovedBindings, removedBindings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RemovedBindings, removedBindings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePolarClawAgentResponseBody() = default ;
    DeletePolarClawAgentResponseBody(const DeletePolarClawAgentResponseBody &) = default ;
    DeletePolarClawAgentResponseBody(DeletePolarClawAgentResponseBody &&) = default ;
    DeletePolarClawAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarClawAgentResponseBody() = default ;
    DeletePolarClawAgentResponseBody& operator=(const DeletePolarClawAgentResponseBody &) = default ;
    DeletePolarClawAgentResponseBody& operator=(DeletePolarClawAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->removedBindings_ == nullptr && this->requestId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DeletePolarClawAgentResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeletePolarClawAgentResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeletePolarClawAgentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeletePolarClawAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // removedBindings Field Functions 
    bool hasRemovedBindings() const { return this->removedBindings_ != nullptr;};
    void deleteRemovedBindings() { this->removedBindings_ = nullptr;};
    inline int32_t getRemovedBindings() const { DARABONBA_PTR_GET_DEFAULT(removedBindings_, 0) };
    inline DeletePolarClawAgentResponseBody& setRemovedBindings(int32_t removedBindings) { DARABONBA_PTR_SET_VALUE(removedBindings_, removedBindings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePolarClawAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> removedBindings_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
