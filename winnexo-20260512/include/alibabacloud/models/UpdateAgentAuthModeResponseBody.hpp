// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTAUTHMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTAUTHMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateAgentAuthModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentAuthModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentAuthModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    UpdateAgentAuthModeResponseBody() = default ;
    UpdateAgentAuthModeResponseBody(const UpdateAgentAuthModeResponseBody &) = default ;
    UpdateAgentAuthModeResponseBody(UpdateAgentAuthModeResponseBody &&) = default ;
    UpdateAgentAuthModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentAuthModeResponseBody() = default ;
    UpdateAgentAuthModeResponseBody& operator=(const UpdateAgentAuthModeResponseBody &) = default ;
    UpdateAgentAuthModeResponseBody& operator=(UpdateAgentAuthModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->updated_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateAgentAuthModeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateAgentAuthModeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAgentAuthModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline UpdateAgentAuthModeResponseBody& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The updated item.
    shared_ptr<bool> updated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
