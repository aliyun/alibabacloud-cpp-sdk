// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDPOLARCLAWAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDPOLARCLAWAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UnbindPolarClawAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindPolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RemovedCount, removedCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBindings, totalBindings_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindPolarClawAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RemovedCount, removedCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBindings, totalBindings_);
    };
    UnbindPolarClawAgentResponseBody() = default ;
    UnbindPolarClawAgentResponseBody(const UnbindPolarClawAgentResponseBody &) = default ;
    UnbindPolarClawAgentResponseBody(UnbindPolarClawAgentResponseBody &&) = default ;
    UnbindPolarClawAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindPolarClawAgentResponseBody() = default ;
    UnbindPolarClawAgentResponseBody& operator=(const UnbindPolarClawAgentResponseBody &) = default ;
    UnbindPolarClawAgentResponseBody& operator=(UnbindPolarClawAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->removedCount_ == nullptr && this->requestId_ == nullptr
        && this->totalBindings_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UnbindPolarClawAgentResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UnbindPolarClawAgentResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UnbindPolarClawAgentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UnbindPolarClawAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // removedCount Field Functions 
    bool hasRemovedCount() const { return this->removedCount_ != nullptr;};
    void deleteRemovedCount() { this->removedCount_ = nullptr;};
    inline int32_t getRemovedCount() const { DARABONBA_PTR_GET_DEFAULT(removedCount_, 0) };
    inline UnbindPolarClawAgentResponseBody& setRemovedCount(int32_t removedCount) { DARABONBA_PTR_SET_VALUE(removedCount_, removedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnbindPolarClawAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBindings Field Functions 
    bool hasTotalBindings() const { return this->totalBindings_ != nullptr;};
    void deleteTotalBindings() { this->totalBindings_ = nullptr;};
    inline int32_t getTotalBindings() const { DARABONBA_PTR_GET_DEFAULT(totalBindings_, 0) };
    inline UnbindPolarClawAgentResponseBody& setTotalBindings(int32_t totalBindings) { DARABONBA_PTR_SET_VALUE(totalBindings_, totalBindings) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> removedCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalBindings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
